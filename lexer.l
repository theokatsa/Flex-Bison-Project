%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "parser.tab.h"

extern char* current_token_text; 
extern int yylineno;
extern int error_flag;
extern FILE* yyin;
int is_reserved(char* identifier) {
    return strcmp(identifier, "int") == 0 || 
           strcmp(identifier, "char") == 0 || 
           strcmp(identifier, "double") == 0 || 
           strcmp(identifier, "boolean") == 0 || 
           strcmp(identifier, "String") == 0 || 
           strcmp(identifier, "class") == 0 || 
           strcmp(identifier, "new") == 0 || 
           strcmp(identifier, "return") == 0 || 
           strcmp(identifier, "void") == 0 || 
           strcmp(identifier, "if") == 0 || 
           strcmp(identifier, "else") == 0 || 
           strcmp(identifier, "while") == 0 || 
           strcmp(identifier, "do") == 0 || 
           strcmp(identifier, "for") == 0 || 
           strcmp(identifier, "switch") == 0 || 
           strcmp(identifier, "case") == 0 || 
           strcmp(identifier, "default") == 0 || 
           strcmp(identifier, "break") == 0 || 
           strcmp(identifier, "true") == 0 || 
           strcmp(identifier, "false") == 0 || 
           strcmp(identifier, "public") == 0 || 
           strcmp(identifier, "private") == 0;
}


%}
%option yylineno

%%

\n                          { yylineno++; }
"include"                   { current_token_text = strdup(yytext);  return INCLUDE; }
"#"                         { current_token_text = strdup(yytext);  return HASH; }
"int"                       { current_token_text = strdup(yytext);  return INT_TYPE; }
"char"                      { current_token_text = strdup(yytext);  return CHAR_TYPE; }
"double"                    { current_token_text = strdup(yytext);  return DOUBLE_TYPE; }
"boolean"                   { current_token_text = strdup(yytext);  return BOOLEAN_TYPE; }
"String"                    { current_token_text = strdup(yytext);  return STRING_TYPE; }
"void"                      { current_token_text = strdup(yytext);  return VOID_TYPE; }
"public"                    { current_token_text = strdup(yytext);  return PUBLIC; }
"private"                   { current_token_text = strdup(yytext);  return PRIVATE; }
"class"                     { current_token_text = strdup(yytext);  return CLASS; }
"return"                    { current_token_text = strdup(yytext);  return RETURN; }
"if"                        { current_token_text = strdup(yytext);  return IF; }
"else"                      { current_token_text = strdup(yytext);  return ELSE; }
"while"                     { current_token_text = strdup(yytext);  return WHILE; }
"do"                        { current_token_text = strdup(yytext);  return DO; }
"for"                       { current_token_text = strdup(yytext);  return FOR; }
"switch"                    { current_token_text = strdup(yytext);  return SWITCH; }
"case"                      { current_token_text = strdup(yytext);  return CASE; }
"default"                   { current_token_text = strdup(yytext);  return DEFAULT; }
"break"                     { current_token_text = strdup(yytext);  return BREAK; }
"true"                      { current_token_text = strdup(yytext);  return BOOLEAN_LITERAL; }
"false"                     { current_token_text = strdup(yytext);  return BOOLEAN_LITERAL; }
"new"                       { current_token_text = strdup(yytext);  return NEW; }
"{"                         { current_token_text = strdup(yytext);  return OPEN_BRACE; }
"}"                         { current_token_text = strdup(yytext);  return CLOSE_BRACE; }
"["                         { current_token_text = strdup(yytext);  return OPEN_BRACKET; }
"]"                         { current_token_text = strdup(yytext);  return CLOSE_BRACKET; }
";"                         { current_token_text = strdup(yytext);  return SEMICOLON; }
"="                         { current_token_text = strdup(yytext);  return ASSIGN; }
"("                         { current_token_text = strdup(yytext);  return OPEN_PAREN; }
")"                         { current_token_text = strdup(yytext);  return CLOSE_PAREN; }
"'"                         { current_token_text = strdup(yytext);  return SINGLE_QUOTE; }
","                         { current_token_text = strdup(yytext);  return COMMA; }
\"                          { current_token_text = strdup(yytext);  return QUOTE; }
"out.print"                 { current_token_text = strdup(yytext);  return PRINT; }
"<"                         { current_token_text = strdup(yytext);  return LESS_THAN; } 
">"                         { current_token_text = strdup(yytext);  return GREATER_THAN; }                        
"!"                         { current_token_text = strdup(yytext);  return EXCLAMATION; }
"@"                         { current_token_text = strdup(yytext);  return AT; }
"$"                         { current_token_text = strdup(yytext);  return DOLLAR; }
"%"                         { current_token_text = strdup(yytext);  return PERCENT; }
"^"                         { current_token_text = strdup(yytext);  return CARET; }
"&"                         { current_token_text = strdup(yytext);  return AMPERSAND; }
"."                         { current_token_text = strdup(yytext);  return DOT; }
":"                         { current_token_text = strdup(yytext); return COLON; }
"+"                         { current_token_text = strdup(yytext); return PLUS; }
"-"                         { current_token_text = strdup(yytext); return MINUS; }
"*"                         { current_token_text = strdup(yytext); return MULTIPLY; }
"/"                         { current_token_text = strdup(yytext); return DIVIDE; }
"&&"                        { current_token_text = strdup(yytext); return AND; }
"||"                        { current_token_text = strdup(yytext); return OR; }
"=="                        { current_token_text = strdup(yytext); return EQUAL; }
"!="                        { current_token_text = strdup(yytext); return NOT_EQUAL; }

"printf"                    { current_token_text = strdup(yytext);  return PRINTF; }
[a-zA-Z_][a-zA-Z0-9_]*      { 
                                current_token_text = strdup(yytext);
                                if (is_reserved(yytext)) {
                                    printf("Error: '%s' is a reserved keyword and cannot be used as an identifier.\n", yytext);
                                    error_flag = 1;
                                    return RESERVED_KEYWORD;
                                } else {
                                    yylval.str = strdup(yytext);
                                    return IDENTIFIER;
                                }
                            }
[0-9]+                      { current_token_text = strdup(yytext); yylval.str = strdup(yytext);  return INTEGER_LITERAL; }
[0-9]+"."[0-9]+d            { current_token_text = strdup(yytext); yylval.str = strdup(yytext); return DOUBLE_LITERAL; }
[ \t\n\r]+                  ; // Ignore whitespace and newline characters
\/\/[^\n]*                  ; // Single-line comment
\/\*([^*]|\*[^\/])*\*\/     ; // Multi-line comment
\"[^\"\n]*\"                { current_token_text = strdup(yytext); yylval.str = strdup(yytext); return STRING_LITERAL; }
. { printf("Invalid token: %s at line %d\n", yytext, yylineno); exit(1); }
'.'                         { current_token_text = strdup(yytext); yylval.str = strdup(yytext); return CHARACTER_LITERAL; }

%%

int yywrap() {
    return 1;
}

