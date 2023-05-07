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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
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
    CHARTYPE = 258,                /* CHARTYPE  */
    ELSE = 259,                    /* ELSE  */
    FOR = 260,                     /* FOR  */
    IF = 261,                      /* IF  */
    INLINE = 262,                  /* INLINE  */
    INTTYPE = 263,                 /* INTTYPE  */
    RETURN = 264,                  /* RETURN  */
    VOIDTYPE = 265,                /* VOIDTYPE  */
    IDENTIFIER = 266,              /* IDENTIFIER  */
    INTEGER_CONSTANT = 267,        /* INTEGER_CONSTANT  */
    CHARACTER_CONSTANT = 268,      /* CHARACTER_CONSTANT  */
    STRING_LITERAL = 269,          /* STRING_LITERAL  */
    LEFT_SQUARE_BRACKET = 270,     /* LEFT_SQUARE_BRACKET  */
    SLASH = 271,                   /* SLASH  */
    QUESTION_MARK = 272,           /* QUESTION_MARK  */
    ASSIGNMENT = 273,              /* ASSIGNMENT  */
    COMMA = 274,                   /* COMMA  */
    RIGHT_SQUARE_BRACKET = 275,    /* RIGHT_SQUARE_BRACKET  */
    LEFT_PARENTHESES = 276,        /* LEFT_PARENTHESES  */
    LEFT_CURLY_BRACKET = 277,      /* LEFT_CURLY_BRACKET  */
    RIGHT_CURLY_BRACKET = 278,     /* RIGHT_CURLY_BRACKET  */
    ARROW = 279,                   /* ARROW  */
    ASTERISK = 280,                /* ASTERISK  */
    PLUS = 281,                    /* PLUS  */
    MINUS = 282,                   /* MINUS  */
    TILDE = 283,                   /* TILDE  */
    EXCLAMATION = 284,             /* EXCLAMATION  */
    MODULO = 285,                  /* MODULO  */
    LESS_THAN = 286,               /* LESS_THAN  */
    GREATER_THAN = 287,            /* GREATER_THAN  */
    LESS_EQUAL_THAN = 288,         /* LESS_EQUAL_THAN  */
    GREATER_EQUAL_THAN = 289,      /* GREATER_EQUAL_THAN  */
    COLON = 290,                   /* COLON  */
    SEMI_COLON = 291,              /* SEMI_COLON  */
    RIGHT_PARENTHESES = 292,       /* RIGHT_PARENTHESES  */
    BITWISE_AND = 293,             /* BITWISE_AND  */
    EQUALS = 294,                  /* EQUALS  */
    BITWISE_XOR = 295,             /* BITWISE_XOR  */
    BITWISE_OR = 296,              /* BITWISE_OR  */
    LOGICAL_AND = 297,             /* LOGICAL_AND  */
    LOGICAL_OR = 298,              /* LOGICAL_OR  */
    NOT_EQUALS = 299,              /* NOT_EQUALS  */
    INVALID_TOKEN = 300,           /* INVALID_TOKEN  */
    THEN = 301                     /* THEN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define CHARTYPE 258
#define ELSE 259
#define FOR 260
#define IF 261
#define INLINE 262
#define INTTYPE 263
#define RETURN 264
#define VOIDTYPE 265
#define IDENTIFIER 266
#define INTEGER_CONSTANT 267
#define CHARACTER_CONSTANT 268
#define STRING_LITERAL 269
#define LEFT_SQUARE_BRACKET 270
#define SLASH 271
#define QUESTION_MARK 272
#define ASSIGNMENT 273
#define COMMA 274
#define RIGHT_SQUARE_BRACKET 275
#define LEFT_PARENTHESES 276
#define LEFT_CURLY_BRACKET 277
#define RIGHT_CURLY_BRACKET 278
#define ARROW 279
#define ASTERISK 280
#define PLUS 281
#define MINUS 282
#define TILDE 283
#define EXCLAMATION 284
#define MODULO 285
#define LESS_THAN 286
#define GREATER_THAN 287
#define LESS_EQUAL_THAN 288
#define GREATER_EQUAL_THAN 289
#define COLON 290
#define SEMI_COLON 291
#define RIGHT_PARENTHESES 292
#define BITWISE_AND 293
#define EQUALS 294
#define BITWISE_XOR 295
#define BITWISE_OR 296
#define LOGICAL_AND 297
#define LOGICAL_OR 298
#define NOT_EQUALS 299
#define INVALID_TOKEN 300
#define THEN 301

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 19 "A5_17.y"

    int intVal;
    char *floatVal;
    char *charVal;
    char *stringVal;
    char *identifierVal;
    char *unaryOperator;
    int instructionNumber;
    int parameterCount;
    Expression *expression;
    Statement *statement;
    Array *array;
    SymbolType *symbolType;
    Symbol *symbol;

#line 175 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
