/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1





# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_OR = 3,                         /* OR  */
  YYSYMBOL_AND = 4,                        /* AND  */
  YYSYMBOL_EQUAL = 5,                      /* EQUAL  */
  YYSYMBOL_NOT_EQUAL = 6,                  /* NOT_EQUAL  */
  YYSYMBOL_UNARY_MINUS = 7,                /* UNARY_MINUS  */
  YYSYMBOL_IDENTIFIER = 8,                 /* IDENTIFIER  */
  YYSYMBOL_RESERVED_KEYWORD = 9,           /* RESERVED_KEYWORD  */
  YYSYMBOL_INTEGER_LITERAL = 10,           /* INTEGER_LITERAL  */
  YYSYMBOL_CHARACTER_LITERAL = 11,         /* CHARACTER_LITERAL  */
  YYSYMBOL_DOUBLE_LITERAL = 12,            /* DOUBLE_LITERAL  */
  YYSYMBOL_BOOLEAN_LITERAL = 13,           /* BOOLEAN_LITERAL  */
  YYSYMBOL_STRING_LITERAL = 14,            /* STRING_LITERAL  */
  YYSYMBOL_INT_TYPE = 15,                  /* INT_TYPE  */
  YYSYMBOL_CHAR_TYPE = 16,                 /* CHAR_TYPE  */
  YYSYMBOL_DOUBLE_TYPE = 17,               /* DOUBLE_TYPE  */
  YYSYMBOL_BOOLEAN_TYPE = 18,              /* BOOLEAN_TYPE  */
  YYSYMBOL_STRING_TYPE = 19,               /* STRING_TYPE  */
  YYSYMBOL_VOID_TYPE = 20,                 /* VOID_TYPE  */
  YYSYMBOL_PUBLIC = 21,                    /* PUBLIC  */
  YYSYMBOL_PRIVATE = 22,                   /* PRIVATE  */
  YYSYMBOL_CLASS = 23,                     /* CLASS  */
  YYSYMBOL_OPEN_BRACE = 24,                /* OPEN_BRACE  */
  YYSYMBOL_CLOSE_BRACE = 25,               /* CLOSE_BRACE  */
  YYSYMBOL_SEMICOLON = 26,                 /* SEMICOLON  */
  YYSYMBOL_OPEN_PAREN = 27,                /* OPEN_PAREN  */
  YYSYMBOL_CLOSE_PAREN = 28,               /* CLOSE_PAREN  */
  YYSYMBOL_PRINT = 29,                     /* PRINT  */
  YYSYMBOL_HASH = 30,                      /* HASH  */
  YYSYMBOL_INCLUDE = 31,                   /* INCLUDE  */
  YYSYMBOL_COMMA = 32,                     /* COMMA  */
  YYSYMBOL_RETURN = 33,                    /* RETURN  */
  YYSYMBOL_IF = 34,                        /* IF  */
  YYSYMBOL_ELSE = 35,                      /* ELSE  */
  YYSYMBOL_DO = 36,                        /* DO  */
  YYSYMBOL_WHILE = 37,                     /* WHILE  */
  YYSYMBOL_FOR = 38,                       /* FOR  */
  YYSYMBOL_SWITCH = 39,                    /* SWITCH  */
  YYSYMBOL_CASE = 40,                      /* CASE  */
  YYSYMBOL_DEFAULT = 41,                   /* DEFAULT  */
  YYSYMBOL_BREAK = 42,                     /* BREAK  */
  YYSYMBOL_LESS_THAN = 43,                 /* LESS_THAN  */
  YYSYMBOL_GREATER_THAN = 44,              /* GREATER_THAN  */
  YYSYMBOL_DOT = 45,                       /* DOT  */
  YYSYMBOL_EXCLAMATION = 46,               /* EXCLAMATION  */
  YYSYMBOL_AT = 47,                        /* AT  */
  YYSYMBOL_DOLLAR = 48,                    /* DOLLAR  */
  YYSYMBOL_PERCENT = 49,                   /* PERCENT  */
  YYSYMBOL_CARET = 50,                     /* CARET  */
  YYSYMBOL_AMPERSAND = 51,                 /* AMPERSAND  */
  YYSYMBOL_PLUS = 52,                      /* PLUS  */
  YYSYMBOL_MINUS = 53,                     /* MINUS  */
  YYSYMBOL_DIVIDE = 54,                    /* DIVIDE  */
  YYSYMBOL_MULTIPLY = 55,                  /* MULTIPLY  */
  YYSYMBOL_PRINTF = 56,                    /* PRINTF  */
  YYSYMBOL_TRUE = 57,                      /* TRUE  */
  YYSYMBOL_FALSE = 58,                     /* FALSE  */
  YYSYMBOL_NEW = 59,                       /* NEW  */
  YYSYMBOL_COLON = 60,                     /* COLON  */
  YYSYMBOL_SINGLE_QUOTE = 61,              /* SINGLE_QUOTE  */
  YYSYMBOL_OPEN_BRACKET = 62,              /* OPEN_BRACKET  */
  YYSYMBOL_CLOSE_BRACKET = 63,             /* CLOSE_BRACKET  */
  YYSYMBOL_QUOTE = 64,                     /* QUOTE  */
  YYSYMBOL_ASSIGN = 65,                    /* ASSIGN  */
  YYSYMBOL_66_ = 66,                       /* '('  */
  YYSYMBOL_67_ = 67,                       /* ')'  */
  YYSYMBOL_YYACCEPT = 68,                  /* $accept  */
  YYSYMBOL_program = 69,                   /* program  */
  YYSYMBOL_include_directive = 70,         /* include_directive  */
  YYSYMBOL_class = 71,                     /* class  */
  YYSYMBOL_identifier_cap = 72,            /* identifier_cap  */
  YYSYMBOL_type = 73,                      /* type  */
  YYSYMBOL_class_body = 74,                /* class_body  */
  YYSYMBOL_class_member = 75,              /* class_member  */
  YYSYMBOL_method_call = 76,               /* method_call  */
  YYSYMBOL_77_1 = 77,                      /* $@1  */
  YYSYMBOL_argument_list = 78,             /* argument_list  */
  YYSYMBOL_arguments = 79,                 /* arguments  */
  YYSYMBOL_argument = 80,                  /* argument  */
  YYSYMBOL_statements = 81,                /* statements  */
  YYSYMBOL_statement = 82,                 /* statement  */
  YYSYMBOL_switch_statement = 83,          /* switch_statement  */
  YYSYMBOL_case_clauses = 84,              /* case_clauses  */
  YYSYMBOL_case_clause = 85,               /* case_clause  */
  YYSYMBOL_default_clause_opt = 86,        /* default_clause_opt  */
  YYSYMBOL_if_statement = 87,              /* if_statement  */
  YYSYMBOL_optional_else_if = 88,          /* optional_else_if  */
  YYSYMBOL_optional_else = 89,             /* optional_else  */
  YYSYMBOL_do_while_statement = 90,        /* do_while_statement  */
  YYSYMBOL_print_statement = 91,           /* print_statement  */
  YYSYMBOL_92_2 = 92,                      /* $@2  */
  YYSYMBOL_break_statement = 93,           /* break_statement  */
  YYSYMBOL_for_statement = 94,             /* for_statement  */
  YYSYMBOL_for_init = 95,                  /* for_init  */
  YYSYMBOL_for_condition = 96,             /* for_condition  */
  YYSYMBOL_for_update = 97,                /* for_update  */
  YYSYMBOL_assignment_statement = 98,      /* assignment_statement  */
  YYSYMBOL_99_3 = 99,                      /* $@3  */
  YYSYMBOL_100_4 = 100,                    /* $@4  */
  YYSYMBOL_object_creation = 101,          /* object_creation  */
  YYSYMBOL_variable_declaration = 102,     /* variable_declaration  */
  YYSYMBOL_103_5 = 103,                    /* $@5  */
  YYSYMBOL_opt_assignment = 104,           /* opt_assignment  */
  YYSYMBOL_105_6 = 105,                    /* $@6  */
  YYSYMBOL_106_7 = 106,                    /* $@7  */
  YYSYMBOL_107_8 = 107,                    /* $@8  */
  YYSYMBOL_108_9 = 108,                    /* $@9  */
  YYSYMBOL_109_10 = 109,                   /* $@10  */
  YYSYMBOL_opt_identifier = 110,           /* opt_identifier  */
  YYSYMBOL_method_declaration = 111,       /* method_declaration  */
  YYSYMBOL_112_11 = 112,                   /* $@11  */
  YYSYMBOL_opt_modifier = 113,             /* opt_modifier  */
  YYSYMBOL_expression = 114,               /* expression  */
  YYSYMBOL_term = 115,                     /* term  */
  YYSYMBOL_ifexpression = 116,             /* ifexpression  */
  YYSYMBOL_logical_expression = 117,       /* logical_expression  */
  YYSYMBOL_logical_term = 118,             /* logical_term  */
  YYSYMBOL_logical_factor = 119,           /* logical_factor  */
  YYSYMBOL_class_member_access = 120       /* class_member_access  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Second part of user prologue.  */
#line 35 "parser.y"

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
    exit(EXIT_FAILURE);
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
    exit(EXIT_FAILURE);
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

#line 313 "parser.y"

int error_flag = 0;

#line 503 "parser.tab.c"


#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   338

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  68
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  53
/* YYNRULES -- Number of rules.  */
#define YYNRULES  119
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  244

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   320


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      66,    67,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   319,   319,   320,   321,   322,   323,   324,   325,   329,
     333,   337,   348,   349,   350,   351,   352,   353,   356,   357,
     358,   362,   363,   364,   368,   368,   373,   374,   378,   379,
     380,   384,   385,   388,   389,   393,   394,   395,   396,   397,
     398,   399,   400,   401,   402,   403,   404,   405,   406,   410,
     414,   415,   419,   422,   423,   427,   430,   431,   434,   435,
     439,   443,   444,   445,   445,   449,   453,   457,   458,   462,
     466,   469,   471,   469,   476,   483,   487,   487,   496,   497,
     497,   508,   508,   513,   513,   518,   518,   526,   526,   531,
     532,   535,   536,   540,   540,   546,   547,   548,   552,   553,
     554,   555,   556,   560,   561,   562,   563,   564,   570,   571,
     575,   576,   580,   581,   585,   586,   587,   588,   589,   593
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "OR", "AND", "EQUAL",
  "NOT_EQUAL", "UNARY_MINUS", "IDENTIFIER", "RESERVED_KEYWORD",
  "INTEGER_LITERAL", "CHARACTER_LITERAL", "DOUBLE_LITERAL",
  "BOOLEAN_LITERAL", "STRING_LITERAL", "INT_TYPE", "CHAR_TYPE",
  "DOUBLE_TYPE", "BOOLEAN_TYPE", "STRING_TYPE", "VOID_TYPE", "PUBLIC",
  "PRIVATE", "CLASS", "OPEN_BRACE", "CLOSE_BRACE", "SEMICOLON",
  "OPEN_PAREN", "CLOSE_PAREN", "PRINT", "HASH", "INCLUDE", "COMMA",
  "RETURN", "IF", "ELSE", "DO", "WHILE", "FOR", "SWITCH", "CASE",
  "DEFAULT", "BREAK", "LESS_THAN", "GREATER_THAN", "DOT", "EXCLAMATION",
  "AT", "DOLLAR", "PERCENT", "CARET", "AMPERSAND", "PLUS", "MINUS",
  "DIVIDE", "MULTIPLY", "PRINTF", "TRUE", "FALSE", "NEW", "COLON",
  "SINGLE_QUOTE", "OPEN_BRACKET", "CLOSE_BRACKET", "QUOTE", "ASSIGN",
  "'('", "')'", "$accept", "program", "include_directive", "class",
  "identifier_cap", "type", "class_body", "class_member", "method_call",
  "$@1", "argument_list", "arguments", "argument", "statements",
  "statement", "switch_statement", "case_clauses", "case_clause",
  "default_clause_opt", "if_statement", "optional_else_if",
  "optional_else", "do_while_statement", "print_statement", "$@2",
  "break_statement", "for_statement", "for_init", "for_condition",
  "for_update", "assignment_statement", "$@3", "$@4", "object_creation",
  "variable_declaration", "$@5", "opt_assignment", "$@6", "$@7", "$@8",
  "$@9", "$@10", "opt_identifier", "method_declaration", "$@11",
  "opt_modifier", "expression", "term", "ifexpression",
  "logical_expression", "logical_term", "logical_factor",
  "class_member_access", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-147)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-110)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -147,    94,  -147,   -36,  -147,  -147,   -19,  -147,  -147,  -147,
    -147,  -147,  -147,   309,    31,   -13,   -17,   -10,  -147,  -147,
    -147,  -147,  -147,  -147,    18,    63,   -21,    31,    75,    14,
      83,  -147,    92,    77,    96,  -147,    13,    86,   110,    31,
      69,  -147,  -147,    38,    38,   112,   126,   131,   118,   109,
     113,  -147,   103,  -147,    -2,   128,  -147,  -147,  -147,  -147,
      83,    83,  -147,  -147,  -147,   136,    92,   102,   163,   167,
     166,     9,   150,    92,  -147,   174,  -147,   113,    31,   153,
    -147,  -147,  -147,  -147,  -147,  -147,  -147,    -2,  -147,  -147,
    -147,  -147,  -147,   113,  -147,   171,  -147,    25,  -147,  -147,
      -2,    -2,    -2,    -2,    -2,   181,  -147,  -147,  -147,  -147,
    -147,  -147,  -147,   162,     3,  -147,   182,    23,   183,   188,
     187,   189,   191,   192,  -147,  -147,  -147,  -147,  -147,  -147,
    -147,  -147,  -147,   195,  -147,   318,   158,   155,  -147,    29,
       7,  -147,   106,    31,  -147,  -147,  -147,   170,  -147,    67,
    -147,   -18,     8,    36,   203,   230,   231,  -147,   186,   172,
     210,  -147,  -147,   318,    73,   232,   214,   222,    31,     5,
      31,    31,    31,    31,   226,     8,     8,   215,     8,   246,
     235,   228,   241,  -147,    78,  -147,   113,   113,   113,   113,
    -147,   231,  -147,   229,   245,   230,  -147,   221,   247,  -147,
     248,   205,     8,   261,    31,   145,  -147,   252,  -147,  -147,
      89,   208,   258,    80,   220,  -147,   263,  -147,   255,   266,
      31,   269,  -147,  -147,  -147,    19,  -147,  -147,   113,  -147,
     139,   224,  -147,   267,   243,   262,     8,  -147,  -147,    95,
     273,  -147,   281,  -147
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,    95,     1,    24,    96,    97,     0,     3,     4,     8,
       7,     6,     5,     0,     0,     0,     0,     0,    12,    13,
      14,    17,    15,    16,     0,     0,   103,     0,     0,     0,
      98,   101,    26,     0,     0,    11,     0,    76,     0,     0,
       0,   106,    74,     0,     0,     0,     0,     0,     0,    27,
      28,    72,     0,    18,    78,     0,   119,   102,   107,   103,
      99,   100,   105,   104,    30,     0,     0,     0,     0,    95,
      91,     0,     0,    26,    25,     0,    29,    31,     0,     0,
      10,    23,    20,    19,    21,    22,    92,    78,    79,    87,
      81,    85,    83,    90,    77,     0,    32,     0,     9,    89,
      78,    78,    78,    78,    78,     0,    73,    80,    88,    82,
      86,    84,    33,    95,    24,    94,     0,     0,     0,     0,
       0,     0,     0,     0,    34,    47,    48,    45,    43,    44,
      46,    40,    41,    35,    42,     0,     0,     0,    36,     0,
       0,    33,    95,     0,    65,    38,    39,     0,    63,     0,
      37,   103,     0,     0,     0,   108,   111,   113,    95,    71,
       0,    68,    67,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    62,     0,   118,   114,   115,   116,   117,
      33,   110,   112,     0,     0,    69,    76,     0,     0,    64,
       0,    95,     0,     0,     0,    53,    50,     0,    61,    56,
       0,     0,     0,     0,     0,    51,     0,    75,    58,     0,
       0,     0,    33,    33,    49,     0,    55,    60,    70,    33,
      95,    95,    33,     0,    95,    95,     0,    66,    59,     0,
       0,    33,    95,    57
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -147,  -147,  -147,   236,  -147,   -28,  -147,  -147,   298,  -147,
     234,  -147,  -147,  -136,  -147,  -147,  -147,   104,  -147,  -147,
    -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,
       2,  -147,  -147,  -147,     0,  -147,    49,  -147,  -147,  -147,
    -147,  -147,  -147,     6,  -147,     1,   -14,   159,  -147,  -146,
     133,   135,  -147
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     7,     8,    36,    25,    69,    83,   123,    15,
      48,    49,    76,   113,   124,   125,   205,   206,   216,   126,
     218,   226,   127,   128,   166,   129,   130,   160,   194,   212,
     131,    16,    67,   132,   133,    54,    72,   100,   102,   104,
     103,   101,    87,   134,    55,   135,   153,    30,   154,   155,
     156,   157,    31
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      29,    11,    13,    10,    47,   158,   169,    12,   175,   -71,
    -109,   136,    17,    40,    32,   151,    26,    26,    50,    88,
      89,    90,    91,    92,    38,    57,    35,    38,    33,    14,
      70,    26,   195,    34,    27,    27,    27,    53,    75,    26,
      42,   170,   171,   232,    39,    47,    59,    39,   -71,   138,
      27,   106,    77,   233,   201,   150,   210,    93,    27,    50,
      28,    28,    28,    71,    97,    27,    43,    44,    14,    84,
      13,    37,   185,   152,   152,    85,    28,    43,    44,   172,
     173,    43,    44,    41,    28,    51,   230,   231,    43,    44,
     239,    28,   175,   234,     2,   167,   235,    58,   175,   168,
      26,   180,     3,   139,    52,   242,   200,    18,    19,    20,
      21,    22,    23,   -93,   159,     4,     5,   219,    56,    27,
      62,    43,    44,   240,     6,    43,    44,     4,     5,   164,
      43,    44,    43,    44,    63,   179,    99,    45,    46,    64,
     222,    66,   162,   163,   161,    28,    65,   114,    68,   107,
     108,   109,   110,   111,   184,    73,   186,   187,   188,   189,
       4,     5,    74,   148,   -52,    43,    44,    78,   116,   149,
     114,    79,   117,   118,    86,   119,    94,   120,   121,   -52,
     -52,   122,    96,     4,     5,   204,   214,   115,     4,     5,
     213,   116,    80,    81,   114,   117,   118,    98,   119,   105,
     120,   121,    60,    61,   122,   112,   228,     4,     5,   137,
     140,   177,   141,   114,   142,   116,   143,   144,   145,   117,
     118,   146,   119,   147,   120,   121,     4,     5,   122,   165,
     209,   174,   114,   175,   116,   176,   178,    14,   117,   118,
     181,   119,   182,   120,   121,     4,     5,   122,   183,   -54,
     190,   114,   193,   116,   196,   198,   202,   117,   118,   197,
     119,   204,   120,   121,     4,     5,   122,   199,   237,   211,
     114,   203,   116,   220,   208,   207,   117,   118,   217,   119,
     223,   120,   121,     4,     5,   122,   221,   238,   224,   114,
     225,   116,   227,   229,   236,   117,   118,   241,   119,     9,
     120,   121,     4,     5,   122,    82,   243,    95,   191,   215,
     116,   192,     0,     0,   117,   118,     0,   119,     0,   120,
     121,     0,     0,   122,    18,    19,    20,    21,    22,    23,
       0,     0,    24,    18,    19,    20,    21,    22,    23
};

static const yytype_int16 yycheck[] =
{
      14,     1,     1,     1,    32,   141,   152,     1,     3,    45,
      28,     8,    31,    27,    27,     8,     8,     8,    32,    10,
      11,    12,    13,    14,    45,    39,     8,    45,    45,    65,
      32,     8,   178,    43,    27,    27,    27,    24,    66,     8,
      26,     5,     6,    24,    65,    73,     8,    65,    45,    26,
      27,    26,    66,    34,   190,    26,   202,    71,    27,    73,
      53,    53,    53,    65,    78,    27,    52,    53,    65,    69,
      69,     8,    67,    66,    66,    69,    53,    52,    53,    43,
      44,    52,    53,     8,    53,     8,   222,   223,    52,    53,
     236,    53,     3,   229,     0,    28,   232,    28,     3,    32,
       8,    28,     8,   117,     8,   241,    28,    15,    16,    17,
      18,    19,    20,    27,     8,    21,    22,    28,     8,    27,
       8,    52,    53,    28,    30,    52,    53,    21,    22,   143,
      52,    53,    52,    53,     8,   163,    87,    54,    55,     8,
      60,    32,   142,   142,   142,    53,    28,     8,    45,   100,
     101,   102,   103,   104,   168,    27,   170,   171,   172,   173,
      21,    22,    26,     8,    25,    52,    53,    65,    29,    14,
       8,     8,    33,    34,     8,    36,    26,    38,    39,    40,
      41,    42,     8,    21,    22,    40,    41,    25,    21,    22,
     204,    29,    25,    26,     8,    33,    34,    44,    36,    28,
      38,    39,    43,    44,    42,    24,   220,    21,    22,    27,
      27,    25,    24,     8,    27,    29,    27,    26,    26,    33,
      34,    26,    36,    65,    38,    39,    21,    22,    42,    59,
      25,    28,     8,     3,    29,     4,    26,    65,    33,    34,
       8,    36,    28,    38,    39,    21,    22,    42,    26,    25,
      24,     8,    37,    29,     8,    27,    27,    33,    34,    24,
      36,    40,    38,    39,    21,    22,    42,    26,    25,     8,
       8,    26,    29,    65,    26,    28,    33,    34,    26,    36,
      60,    38,    39,    21,    22,    42,    28,    25,    25,     8,
      35,    29,    26,    24,    27,    33,    34,    24,    36,     1,
      38,    39,    21,    22,    42,    69,    25,    73,   175,   205,
      29,   176,    -1,    -1,    33,    34,    -1,    36,    -1,    38,
      39,    -1,    -1,    42,    15,    16,    17,    18,    19,    20,
      -1,    -1,    23,    15,    16,    17,    18,    19,    20
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    69,     0,     8,    21,    22,    30,    70,    71,    76,
      98,   102,   111,   113,    65,    77,    99,    31,    15,    16,
      17,    18,    19,    20,    23,    73,     8,    27,    53,   114,
     115,   120,    27,    45,    43,     8,    72,     8,    45,    65,
     114,     8,    26,    52,    53,    54,    55,    73,    78,    79,
     114,     8,     8,    24,   103,   112,     8,   114,    28,     8,
     115,   115,     8,     8,     8,    28,    32,   100,    45,    74,
      32,    65,   104,    27,    26,    73,    80,   114,    65,     8,
      25,    26,    71,    75,   102,   111,     8,   110,    10,    11,
      12,    13,    14,   114,    26,    78,     8,   114,    44,   104,
     105,   109,   106,   108,   107,    28,    26,   104,   104,   104,
     104,   104,    24,    81,     8,    25,    29,    33,    34,    36,
      38,    39,    42,    76,    82,    83,    87,    90,    91,    93,
      94,    98,   101,   102,   111,   113,     8,    27,    26,   114,
      27,    24,    27,    27,    26,    26,    26,    65,     8,    14,
      26,     8,    66,   114,   116,   117,   118,   119,    81,     8,
      95,    98,   102,   113,   114,    59,    92,    28,    32,   117,
       5,     6,    43,    44,    28,     3,     4,    25,    26,    73,
      28,     8,    28,    26,   114,    67,   114,   114,   114,   114,
      24,   118,   119,    37,    96,   117,     8,    24,    27,    26,
      28,    81,    27,    26,    40,    84,    85,    28,    26,    25,
     117,     8,    97,   114,    41,    85,    86,    26,    88,    28,
      65,    28,    60,    60,    25,    35,    89,    26,   114,    24,
      81,    81,    24,    34,    81,    81,    27,    25,    25,   117,
      28,    24,    81,    25
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    68,    69,    69,    69,    69,    69,    69,    69,    70,
      71,    72,    73,    73,    73,    73,    73,    73,    74,    74,
      74,    75,    75,    75,    77,    76,    78,    78,    79,    79,
      79,    80,    80,    81,    81,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    83,
      84,    84,    85,    86,    86,    87,    88,    88,    89,    89,
      90,    91,    91,    92,    91,    93,    94,    95,    95,    96,
      97,    99,   100,    98,    98,   101,   103,   102,   104,   105,
     104,   106,   104,   107,   104,   108,   104,   109,   104,   104,
     104,   110,   110,   112,   111,   113,   113,   113,   114,   114,
     114,   114,   114,   115,   115,   115,   115,   115,   116,   116,
     117,   117,   118,   118,   119,   119,   119,   119,   119,   120
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     2,     2,     2,     2,     2,     7,
       6,     1,     1,     1,     1,     1,     1,     1,     0,     2,
       2,     1,     1,     1,     0,     6,     0,     1,     1,     3,
       2,     1,     2,     0,     2,     1,     2,     3,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     8,
       1,     2,     4,     0,     3,     9,     0,     9,     0,     4,
       9,     7,     5,     0,     6,     2,    11,     1,     1,     1,
       3,     0,     0,     8,     4,     8,     0,     6,     0,     0,
       4,     0,     4,     0,     4,     0,     4,     0,     4,     3,
       2,     0,     1,     0,    10,     0,     1,     1,     1,     3,
       3,     1,     3,     1,     3,     3,     2,     3,     1,     1,
       3,     1,     3,     1,     3,     3,     3,     3,     3,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 11: /* identifier_cap: IDENTIFIER  */
#line 337 "parser.y"
               {
        if (!isupper(yytext[0])) {
            printf("Error: Class name '%s' must start with a capital letter.\n", yytext);
            error_flag = 1;
        } else {
            setIdentifierName(yytext); // Set the identifier name
        }
    }
#line 1662 "parser.tab.c"
    break;

  case 12: /* type: INT_TYPE  */
#line 348 "parser.y"
             { setVarType("int"); }
#line 1668 "parser.tab.c"
    break;

  case 13: /* type: CHAR_TYPE  */
#line 349 "parser.y"
                { setVarType("char"); }
#line 1674 "parser.tab.c"
    break;

  case 14: /* type: DOUBLE_TYPE  */
#line 350 "parser.y"
                  { setVarType("double"); }
#line 1680 "parser.tab.c"
    break;

  case 15: /* type: STRING_TYPE  */
#line 351 "parser.y"
                  { setVarType("String"); }
#line 1686 "parser.tab.c"
    break;

  case 16: /* type: VOID_TYPE  */
#line 352 "parser.y"
                { setVarType("void"); }
#line 1692 "parser.tab.c"
    break;

  case 17: /* type: BOOLEAN_TYPE  */
#line 353 "parser.y"
                   { setVarType("boolean");}
#line 1698 "parser.tab.c"
    break;

  case 24: /* $@1: %empty  */
#line 368 "parser.y"
               { setMethodName((yyvsp[0].str)); }
#line 1704 "parser.tab.c"
    break;

  case 25: /* method_call: IDENTIFIER $@1 OPEN_PAREN argument_list CLOSE_PAREN SEMICOLON  */
#line 368 "parser.y"
                                                                                    {
        checkMethodCall(methodName);
    }
#line 1712 "parser.tab.c"
    break;

  case 38: /* statement: method_call SEMICOLON  */
#line 396 "parser.y"
                            { checkMethodCall(methodName); }
#line 1718 "parser.tab.c"
    break;

  case 63: /* $@2: %empty  */
#line 445 "parser.y"
                                  {setIdentifierName((yyvsp[0].str));}
#line 1724 "parser.tab.c"
    break;

  case 64: /* print_statement: PRINT OPEN_PAREN IDENTIFIER $@2 CLOSE_PAREN SEMICOLON  */
#line 445 "parser.y"
                                                                                  {checkVariableUsage(identifier_name);}
#line 1730 "parser.tab.c"
    break;

  case 71: /* $@3: %empty  */
#line 469 "parser.y"
                                 { 
        setIdentifierName((yyvsp[0].str)); 
    }
#line 1738 "parser.tab.c"
    break;

  case 72: /* $@4: %empty  */
#line 471 "parser.y"
                     { 
        setMethodName(yytext); 
    }
#line 1746 "parser.tab.c"
    break;

  case 73: /* assignment_statement: IDENTIFIER $@3 DOT IDENTIFIER $@4 ASSIGN expression SEMICOLON  */
#line 473 "parser.y"
                                  { 
        checkMethodCall(identifier_name); 
    }
#line 1754 "parser.tab.c"
    break;

  case 74: /* assignment_statement: IDENTIFIER ASSIGN expression SEMICOLON  */
#line 476 "parser.y"
                                             {
                setIdentifierName((yyvsp[-3].str));
                addVariable(identifier_name, assigned_value);
    }
#line 1763 "parser.tab.c"
    break;

  case 76: /* $@5: %empty  */
#line 487 "parser.y"
                                 { 
        setIdentifierName((yyvsp[0].str)); 
    }
#line 1771 "parser.tab.c"
    break;

  case 77: /* variable_declaration: opt_modifier type IDENTIFIER $@5 opt_assignment SEMICOLON  */
#line 489 "parser.y"
                               {
        // Add the variable to the symbol table
        addVariable(identifier_name, assigned_value);
        checkVariableUsage(identifier_name);
    }
#line 1781 "parser.tab.c"
    break;

  case 79: /* $@6: %empty  */
#line 497 "parser.y"
                            { 
        assigned_value = atoi((yyvsp[0].str)); 
        // Print the assigned value
        if (assigned_value != -1) {
            printf("Variable '%s' assigned value: %d\n", identifier_name, assigned_value);
            assigned_value = -1; // Reset assigned value for next variable
        } else {
            // If no assignment, print a message indicating it
            printf("Variable '%s' declared without initialization\n", identifier_name);
        }
        }
#line 1797 "parser.tab.c"
    break;

  case 81: /* $@7: %empty  */
#line 508 "parser.y"
                            {
        double assigned_double;
        sscanf((yyvsp[0].str), "%lf", &assigned_double); // Extract numeric part and convert to double
        store_variable_double_value((yyvsp[-1].str), assigned_double); // Store the double value
        }
#line 1807 "parser.tab.c"
    break;

  case 83: /* $@8: %empty  */
#line 513 "parser.y"
                            {
        assigned_string = strdup((yyvsp[0].str)); 
        store_variable_string_value((yyvsp[-1].str), assigned_string);
        }
#line 1816 "parser.tab.c"
    break;

  case 85: /* $@9: %empty  */
#line 518 "parser.y"
                              {
        if (strcmp((yyvsp[0].str), "true") == 0) {
            assigned_value = 0;
        } else {
            assigned_value = 1; 
        } 
        store_variable_boolean_value((yyvsp[-1].str), assigned_value);
    }
#line 1829 "parser.tab.c"
    break;

  case 87: /* $@10: %empty  */
#line 526 "parser.y"
                               {
        assigned_char = (yyvsp[0].str)[1]; 
        store_variable_char_value((yyvsp[-1].str), assigned_char);

    }
#line 1839 "parser.tab.c"
    break;

  case 92: /* opt_identifier: IDENTIFIER  */
#line 536 "parser.y"
                           {setIdentifierName((yyvsp[0].str));}
#line 1845 "parser.tab.c"
    break;

  case 93: /* $@11: %empty  */
#line 540 "parser.y"
                                 { setIdentifierName((yyvsp[0].str)); setMethodType(var_type); }
#line 1851 "parser.tab.c"
    break;

  case 94: /* method_declaration: opt_modifier type IDENTIFIER $@11 OPEN_PAREN argument_list CLOSE_PAREN OPEN_BRACE statements CLOSE_BRACE  */
#line 540 "parser.y"
                                                                                                                                                             {
        addMethod(identifier_name, method_type);
        checkMethodCall(identifier_name);
    }
#line 1860 "parser.tab.c"
    break;

  case 103: /* term: IDENTIFIER  */
#line 560 "parser.y"
               {checkVariableUsage((yyvsp[0].str));}
#line 1866 "parser.tab.c"
    break;


#line 1870 "parser.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 596 "parser.y"


void yyerror(const char *s) {
    printf("Syntax error at line %d: %s\n", yylineno, s);
    printf("Token encountered: %s\n", current_token_text);
    
    error_flag = 1;
    exit(EXIT_FAILURE); // Exit the program
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

