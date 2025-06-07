/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSERERROR_TAB_H_INCLUDED
# define YY_YY_PARSERERROR_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    OR = 258,                      /* OR  */
    AND = 259,                     /* AND  */
    EQUAL = 260,                   /* EQUAL  */
    NOT_EQUAL = 261,               /* NOT_EQUAL  */
    UNARY_MINUS = 262,             /* UNARY_MINUS  */
    IDENTIFIER = 263,              /* IDENTIFIER  */
    RESERVED_KEYWORD = 264,        /* RESERVED_KEYWORD  */
    INTEGER_LITERAL = 265,         /* INTEGER_LITERAL  */
    CHARACTER_LITERAL = 266,       /* CHARACTER_LITERAL  */
    DOUBLE_LITERAL = 267,          /* DOUBLE_LITERAL  */
    BOOLEAN_LITERAL = 268,         /* BOOLEAN_LITERAL  */
    STRING_LITERAL = 269,          /* STRING_LITERAL  */
    INT_TYPE = 270,                /* INT_TYPE  */
    CHAR_TYPE = 271,               /* CHAR_TYPE  */
    DOUBLE_TYPE = 272,             /* DOUBLE_TYPE  */
    BOOLEAN_TYPE = 273,            /* BOOLEAN_TYPE  */
    STRING_TYPE = 274,             /* STRING_TYPE  */
    VOID_TYPE = 275,               /* VOID_TYPE  */
    PUBLIC = 276,                  /* PUBLIC  */
    PRIVATE = 277,                 /* PRIVATE  */
    CLASS = 278,                   /* CLASS  */
    OPEN_BRACE = 279,              /* OPEN_BRACE  */
    CLOSE_BRACE = 280,             /* CLOSE_BRACE  */
    SEMICOLON = 281,               /* SEMICOLON  */
    OPEN_PAREN = 282,              /* OPEN_PAREN  */
    CLOSE_PAREN = 283,             /* CLOSE_PAREN  */
    PRINT = 284,                   /* PRINT  */
    HASH = 285,                    /* HASH  */
    INCLUDE = 286,                 /* INCLUDE  */
    COMMA = 287,                   /* COMMA  */
    RETURN = 288,                  /* RETURN  */
    IF = 289,                      /* IF  */
    ELSE = 290,                    /* ELSE  */
    DO = 291,                      /* DO  */
    WHILE = 292,                   /* WHILE  */
    FOR = 293,                     /* FOR  */
    SWITCH = 294,                  /* SWITCH  */
    CASE = 295,                    /* CASE  */
    DEFAULT = 296,                 /* DEFAULT  */
    BREAK = 297,                   /* BREAK  */
    LESS_THAN = 298,               /* LESS_THAN  */
    GREATER_THAN = 299,            /* GREATER_THAN  */
    DOT = 300,                     /* DOT  */
    EXCLAMATION = 301,             /* EXCLAMATION  */
    AT = 302,                      /* AT  */
    DOLLAR = 303,                  /* DOLLAR  */
    PERCENT = 304,                 /* PERCENT  */
    CARET = 305,                   /* CARET  */
    AMPERSAND = 306,               /* AMPERSAND  */
    PLUS = 307,                    /* PLUS  */
    MINUS = 308,                   /* MINUS  */
    DIVIDE = 309,                  /* DIVIDE  */
    MULTIPLY = 310,                /* MULTIPLY  */
    PRINTF = 311,                  /* PRINTF  */
    TRUE = 312,                    /* TRUE  */
    FALSE = 313,                   /* FALSE  */
    NEW = 314,                     /* NEW  */
    COLON = 315,                   /* COLON  */
    SINGLE_QUOTE = 316,            /* SINGLE_QUOTE  */
    OPEN_BRACKET = 317,            /* OPEN_BRACKET  */
    CLOSE_BRACKET = 318,           /* CLOSE_BRACKET  */
    QUOTE = 319,                   /* QUOTE  */
    ASSIGN = 320                   /* ASSIGN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 2 "parsererror.y"

    int intval;
    char *str;

#line 134 "parsererror.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSERERROR_TAB_H_INCLUDED  */
