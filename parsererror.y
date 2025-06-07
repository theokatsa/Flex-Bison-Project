
%union {
    int intval;
    char *str;
}

%left PLUS MINUS
%left MULTIPLY DIVIDE
%left OR
%left AND
%left EQUAL NOT_EQUAL
%left UNARY_MINUS
%nonassoc ASSIGN

%token <str> IDENTIFIER 
%token <str> RESERVED_KEYWORD
%token <str> INTEGER_LITERAL 
%token <str> CHARACTER_LITERAL 
%token <str> DOUBLE_LITERAL
%token <str> BOOLEAN_LITERAL
%token <str> STRING_LITERAL
%token <str> INT_TYPE 
%token <str> CHAR_TYPE 
%token <str> DOUBLE_TYPE 
%token <str> BOOLEAN_TYPE 
%token <str> STRING_TYPE 
%token <str> VOID_TYPE
%token PUBLIC PRIVATE CLASS OPEN_BRACE CLOSE_BRACE SEMICOLON 
%token OPEN_PAREN CLOSE_PAREN PRINT HASH INCLUDE COMMA RETURN IF ELSE DO WHILE FOR SWITCH CASE DEFAULT BREAK
%token LESS_THAN GREATER_THAN DOT EXCLAMATION AT DOLLAR PERCENT CARET AMPERSAND PLUS MINUS DIVIDE MULTIPLY PRINTF
%token TRUE FALSE NEW COLON SINGLE_QUOTE
%token OPEN_BRACKET CLOSE_BRACKET QUOTE 
%token <str> ASSIGN

%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int yylex();
void yyerror(const char *s);
extern FILE *yyin;
extern int error_flag;
extern int yylineno;
int assigned_value = 0;
char* assigned_string;
char assigned_char;
char* assigned_double;
char* assigned_boolean;

extern char *yytext;

char* current_token_text; // Token causing the error
char* methodName; // Global variable to store method name
char* var_type; // Variable to store type in variable_declaration
char* method_type; // Variable to store type in method_declaration
char* identifier_name; // To store identifier names
char* current_expression[1024]; 


typedef struct {
    char* name;
    char* value;
} VarAssignment;

VarAssignment var_list[100]; 
int var_list_size = 0; 

typedef struct SymbolTableEntry {
    char* name;
    char* type;
    char* methodName;
    int value;
    struct SymbolTableEntry* next;
    double value_double;
    char* value_string;
    int value_boolean;
    char value_char;
} SymbolTableEntry;

SymbolTableEntry* variableTable = NULL;
SymbolTableEntry* methodTable = NULL;

typedef struct Scope {
    SymbolTableEntry* symbols;
    struct Scope* next;
} Scope;

Scope* scopeStack = NULL;

void pushScope() {
    Scope* newScope = (Scope*)malloc(sizeof(Scope));
    newScope->symbols = NULL;
    newScope->next = scopeStack;
    scopeStack = newScope;
}

void popScope() {
    if (scopeStack) {
        Scope* topScope = scopeStack;
        scopeStack = scopeStack->next;
        free(topScope);
    }
}

void addVariable(const char* name, int value) {
    SymbolTableEntry* entry = (SymbolTableEntry*)malloc(sizeof(SymbolTableEntry));
    if (entry == NULL) {
        fprintf(stderr, "Error: Memory allocation failed for variable '%s'\n", name);
        exit(EXIT_FAILURE);
    }

    entry->name = strdup(name);
    if (entry->name == NULL) {
        fprintf(stderr, "Error: Memory allocation failed for variable name '%s'\n", name);
        free(entry);
        exit(EXIT_FAILURE);
    }

    entry->value = value;
    entry->next = variableTable;
    variableTable = entry;
}


void addMethod(const char* name, const char* returnType) {
    SymbolTableEntry* entry = (SymbolTableEntry*)malloc(sizeof(SymbolTableEntry));
    entry->name = strdup(name);
    entry->type = strdup(returnType);
    entry->next = methodTable;
    methodTable = entry;
}

int checkVariableUsage(const char* name) {
    SymbolTableEntry* entry = variableTable;
    while (entry != NULL) {
        if (strcmp(entry->name, name) == 0) {
            printf("Variable %s found (line %d)\n", name, yylineno);
            return entry->value;
        }
        entry = entry->next;
    }
    printf("Error: Variable %s not defined (line %d)\n", name, yylineno);
    error_flag = 1;
    return 0; // This return statement is never reached, but added to avoid compiler warning
}

void checkMethodCall(const char* name) {
    SymbolTableEntry* entry = methodTable;
    while (entry != NULL) {
        if (strcmp(entry->name, name) == 0) {
            printf("Method %s found (line %d)\n", name, yylineno);
            return;
        }
        entry = entry->next;
    }
    printf("Error: Method %s not defined (line %d)\n", name, yylineno);
    error_flag = 1;
}


void setMethodName(char* name) {
    methodName = strdup(name);
}

void setVarType(char* type) {
    var_type = strdup(type);
}

void setMethodType(char* type) {
    method_type = strdup(type);
}

void setIdentifierName(char* name) {
    identifier_name = strdup(name);
}

void store_variable_value(const char* name, int value) {
    SymbolTableEntry* entry = variableTable;
    while (entry != NULL) {
        if (strcmp(entry->name, name) == 0) {
            // Print message indicating the assignment
            printf("Variable '%s' assigned value: %d\n", name, value);
            entry->value = value;
            return;
        }
        entry = entry->next;
    }

    // If the variable is not found, create a new entry
    SymbolTableEntry* newEntry = (SymbolTableEntry*)malloc(sizeof(SymbolTableEntry));
    newEntry->name = strdup(name);
    newEntry->value = value;
    newEntry->next = variableTable;
    variableTable = newEntry;

    // Print message for the new variable assignment
    printf("New variable '%s' assigned value: %d\n", identifier_name, value);
}

void store_variable_double_value(const char* name, double value) {
    SymbolTableEntry* entry = variableTable;
    while (entry != NULL) {
        if (strcmp(entry->name, name) == 0) {
            // Print message indicating the assignment
            printf("Variable '%s' assigned value: %lf\n", name, value);
            entry->value_double = value;
            return;
        }
        entry = entry->next;
    }

    // If the variable is not found, create a new entry
    SymbolTableEntry* newEntry = (SymbolTableEntry*)malloc(sizeof(SymbolTableEntry));
    newEntry->name = strdup(name);
    newEntry->value_double = value;
    newEntry->next = variableTable;
    variableTable = newEntry;

    // Print message for the new variable assignment
    printf("New variable '%s' assigned value: %lf\n", name, value);
}

void store_variable_string_value(const char* name, const char* value) {
    SymbolTableEntry* entry = variableTable;
    while (entry != NULL) {
        if (strcmp(entry->name, name) == 0) {
            // Print message indicating the assignment
            printf("Variable '%s' assigned value: %s\n", name, value);
            // Free the previously allocated value if it exists
            if (entry->value_string != NULL) {
                free(entry->value_string);
            }
            // Allocate memory and copy the new value
            entry->value_string = strdup(value);
            return;
        }
        entry = entry->next;
    }

    // If the variable is not found, create a new entry
    SymbolTableEntry* newEntry = (SymbolTableEntry*)malloc(sizeof(SymbolTableEntry));
    newEntry->name = strdup(name);
    newEntry->value = 0; // Assuming value is not used for strings
    newEntry->value_double = 0.0; // Assuming value_double is not used for strings
    newEntry->value_string = strdup(value);
    newEntry->next = variableTable;
    variableTable = newEntry;

    // Print message for the new variable assignment
    printf("New variable '%s' assigned value: %s\n", name, value);
}


void store_variable_boolean_value(const char* name, int value) {
    SymbolTableEntry* entry = variableTable;
    while (entry != NULL) {
        if (strcmp(entry->name, name) == 0) {
            // Print message indicating the assignment
            printf("Variable '%s' assigned value: %s\n", name, value ? "true" : "false");
            entry->value_boolean = value;
            return;
        }
        entry = entry->next;
    }

    // If the variable is not found, create a new entry
    SymbolTableEntry* newEntry = (SymbolTableEntry*)malloc(sizeof(SymbolTableEntry));
    newEntry->name = strdup(name);
    newEntry->value = 0; // Assuming value is not used for booleans
    newEntry->value_double = 0.0; // Assuming value_double is not used for booleans
    newEntry->value_string = NULL; // Assuming value_string is not used for booleans
    newEntry->value_boolean = value;
    newEntry->next = variableTable;
    variableTable = newEntry;

    // Print message for the new variable assignment
    printf("New variable '%s' assigned value: %s\n", name, value ? "true" : "false");
}

void store_variable_char_value(const char* name, char value) {
    SymbolTableEntry* entry = variableTable;
    while (entry != NULL) {
        if (strcmp(entry->name, name) == 0) {
            // Print message indicating the assignment
            printf("Variable '%s' assigned value: %c\n", name, value);
            entry->value_char = value;
            return;
        }
        entry = entry->next;
    }

    // If the variable is not found, create a new entry
    SymbolTableEntry* newEntry = (SymbolTableEntry*)malloc(sizeof(SymbolTableEntry));
    newEntry->name = strdup(name);
    newEntry->value = 0; // Assuming value is not used for chars
    newEntry->value_double = 0.0; // Assuming value_double is not used for chars
    newEntry->value_string = NULL; // Assuming value_string is not used for chars
    newEntry->value_char = value;
    newEntry->next = variableTable;
    variableTable = newEntry;

    // Print message for the new variable assignment
    printf("New variable '%s' assigned value: %c\n", name, value);
}

%}


%{
int error_flag = 0;
%}

%%

program:
       | program include_directive
       | program class
       | program method_declaration
       | program variable_declaration
       | program assignment_statement
       | error
       ;

include_directive:
    HASH INCLUDE LESS_THAN IDENTIFIER DOT IDENTIFIER GREATER_THAN 
    ;

class:
    opt_modifier CLASS identifier_cap OPEN_BRACE class_body CLOSE_BRACE 
    ;

identifier_cap:
    IDENTIFIER {
        if (!isupper(yytext[0])) {
            printf("Error: Class name '%s' must start with a capital letter.\n", yytext);
            error_flag = 1;
        } else {
            setIdentifierName(yytext); // Set the identifier name
        }
    }
    ;

type:
    INT_TYPE { setVarType("int"); }
    | CHAR_TYPE { setVarType("char"); }
    | DOUBLE_TYPE { setVarType("double"); }
    | STRING_TYPE { setVarType("String"); }
    | VOID_TYPE { setVarType("void"); }
    | BOOLEAN_TYPE { setVarType("boolean");}
    ;

class_body:
    | class_body class_member
    | class_body class
    ;

class_member:
    variable_declaration
    | method_declaration
    | SEMICOLON
    ;

method_call:
    IDENTIFIER { setMethodName($1); } OPEN_PAREN argument_list CLOSE_PAREN {
        checkMethodCall(methodName);
    }
    ;

argument_list:
    | arguments
    ;

arguments:
    expression
    | arguments COMMA argument
    | type IDENTIFIER
    ;

argument:
    expression
    | type IDENTIFIER
    ;

statements:
    | statements statement
    ;

statement:
    variable_declaration 
    | RETURN SEMICOLON
    | RETURN expression SEMICOLON
    | method_call SEMICOLON { checkMethodCall(methodName); }    
    | variable_declaration SEMICOLON
    | assignment_statement
    | object_creation
    | method_declaration
    | print_statement
    | break_statement
    | do_while_statement
    | for_statement
    | switch_statement
    | if_statement
    | error
    ;         

switch_statement:
    SWITCH OPEN_PAREN expression CLOSE_PAREN OPEN_BRACE case_clauses default_clause_opt CLOSE_BRACE
    ;

case_clauses:
    case_clause
    | case_clauses case_clause
    ;

case_clause:
    CASE expression COLON statements
    ;

default_clause_opt:
    | DEFAULT COLON statements
    ;

if_statement:
    IF OPEN_PAREN ifexpression CLOSE_PAREN OPEN_BRACE statements CLOSE_BRACE optional_else_if optional_else
    ;

optional_else_if:
    | optional_else_if ELSE IF OPEN_PAREN logical_expression CLOSE_PAREN OPEN_BRACE statements CLOSE_BRACE
    ;

optional_else:
    | ELSE OPEN_BRACE statements CLOSE_BRACE
    ;

do_while_statement:
    DO OPEN_BRACE statements CLOSE_BRACE WHILE OPEN_PAREN logical_expression CLOSE_PAREN SEMICOLON
    ;

print_statement:
    PRINT OPEN_PAREN STRING_LITERAL COMMA expression CLOSE_PAREN SEMICOLON 
    | PRINT OPEN_PAREN STRING_LITERAL CLOSE_PAREN SEMICOLON
    | PRINT OPEN_PAREN IDENTIFIER {setIdentifierName($3);}  CLOSE_PAREN SEMICOLON {checkVariableUsage(identifier_name);}
    ;

break_statement:
    BREAK SEMICOLON
    ;

for_statement:
    FOR OPEN_PAREN for_init SEMICOLON for_condition SEMICOLON for_update CLOSE_PAREN OPEN_BRACE statements CLOSE_BRACE
    ;

for_init:
    variable_declaration
    | assignment_statement
    ;

for_condition:
    logical_expression
    ;

for_update:
    IDENTIFIER ASSIGN expression
    ;          

assignment_statement: IDENTIFIER { 
        setIdentifierName($1); 
    } DOT IDENTIFIER { 
        setMethodName(yytext); 
    } ASSIGN expression SEMICOLON { 
        checkMethodCall(identifier_name); 
    }
    | IDENTIFIER ASSIGN expression SEMICOLON {
                setIdentifierName($1);
                addVariable(identifier_name, assigned_value);
    }
    ;

object_creation:
    IDENTIFIER IDENTIFIER ASSIGN NEW IDENTIFIER OPEN_PAREN CLOSE_PAREN SEMICOLON
    ;
variable_declaration:
    opt_modifier type IDENTIFIER { 
        setIdentifierName($3); 
    } opt_assignment SEMICOLON {
        // Add the variable to the symbol table
        addVariable(identifier_name, assigned_value);
        checkVariableUsage(identifier_name);
    } 
    ;

opt_assignment:
    | ASSIGN INTEGER_LITERAL{ 
        assigned_value = atoi($2); 
        // Print the assigned value
        if (assigned_value != -1) {
            printf("Variable '%s' assigned value: %d\n", identifier_name, assigned_value);
            assigned_value = -1; // Reset assigned value for next variable
        } else {
            // If no assignment, print a message indicating it
            printf("Variable '%s' declared without initialization\n", identifier_name);
        }
        } opt_assignment
    | ASSIGN DOUBLE_LITERAL {
        double assigned_double;
        sscanf($2, "%lf", &assigned_double); // Extract numeric part and convert to double
        store_variable_double_value($1, assigned_double); // Store the double value
        } opt_assignment
    | ASSIGN STRING_LITERAL {
        assigned_string = strdup($2); 
        store_variable_string_value($1, assigned_string);
        }  opt_assignment
    
    | ASSIGN BOOLEAN_LITERAL  {
        if (strcmp($2, "true") == 0) {
            assigned_value = 0;
        } else {
            assigned_value = 1; 
        } 
        store_variable_boolean_value($1, assigned_value);
    }  opt_assignment
    | ASSIGN CHARACTER_LITERAL {
        assigned_char = $2[1]; 
        store_variable_char_value($1, assigned_char);

    } opt_assignment
    | COMMA opt_identifier opt_assignment
    | ASSIGN expression 
    ;

opt_identifier:
              | IDENTIFIER {setIdentifierName($1);}
              ;

method_declaration:
    opt_modifier type IDENTIFIER { setIdentifierName(yytext); setMethodType(var_type); } OPEN_PAREN argument_list CLOSE_PAREN  OPEN_BRACE statements CLOSE_BRACE {
        addMethod(identifier_name, method_type);
    }
    ;

opt_modifier:
    | PUBLIC
    | PRIVATE
    ;
    
expression:
    term
    | expression PLUS term 
    | expression MINUS term 
    | class_member_access
    | IDENTIFIER ASSIGN expression 
    ;

term:
    IDENTIFIER {checkVariableUsage($1);}
    | term MULTIPLY IDENTIFIER 
    | term DIVIDE IDENTIFIER
    | MINUS IDENTIFIER %prec UNARY_MINUS 
    | OPEN_PAREN expression CLOSE_PAREN 
    ;



ifexpression:
    logical_expression
    | IDENTIFIER
    ;

logical_expression:
    logical_expression OR logical_term
    | logical_term
    ;

logical_term:
    logical_term AND logical_factor
    | logical_factor
    ;

logical_factor:
       expression EQUAL expression
    | expression NOT_EQUAL expression
    | expression LESS_THAN expression
    | expression GREATER_THAN expression
    | '(' logical_expression ')'
    ;

class_member_access:
    IDENTIFIER DOT IDENTIFIER
    ;
   
%%

void yyerror(const char *s) {
    printf("Syntax error at line %d: %s\n", yylineno, s);
    printf("Token encountered: %s\n", current_token_text);
    
    error_flag = 1;
}



int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s file_name\n", argv[0]);
        return 1;
    }

    FILE *fp = fopen(argv[1], "r");
    if (!fp) {
        printf("Error opening file %s\n", argv[1]);
        return 1;
    }

    yyin = fp;

    yyparse();

    fclose(fp);

    if (error_flag) {
        printf("Compilation failed with errors.\n");
        return 1;
    } else {
        printf("Compilation complete with no errors.\n");
        return 0;
    }
    return 0;
}

