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

#ifndef YY_YY_A6_1_TAB_H_INCLUDED
# define YY_YY_A6_1_TAB_H_INCLUDED
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
    CHAR_ = 258,                   /* CHAR_  */
    ELSE = 259,                    /* ELSE  */
    FOR = 260,                     /* FOR  */
    IF = 261,                      /* IF  */
    INT_ = 262,                    /* INT_  */
    RETURN_ = 263,                 /* RETURN_  */
    VOID_ = 264,                   /* VOID_  */
    SQUARE_BRACE_OPEN = 265,       /* SQUARE_BRACE_OPEN  */
    SQUARE_BRACE_CLOSE = 266,      /* SQUARE_BRACE_CLOSE  */
    PARENTHESIS_OPEN = 267,        /* PARENTHESIS_OPEN  */
    PARENTHESIS_CLOSE = 268,       /* PARENTHESIS_CLOSE  */
    CURLY_BRACE_OPEN = 269,        /* CURLY_BRACE_OPEN  */
    CURLY_BRACE_CLOSE = 270,       /* CURLY_BRACE_CLOSE  */
    ARROW = 271,                   /* ARROW  */
    BITWISE_AND = 272,             /* BITWISE_AND  */
    MULTIPLY = 273,                /* MULTIPLY  */
    ADD_ = 274,                    /* ADD_  */
    SUBTRACT = 275,                /* SUBTRACT  */
    NOT = 276,                     /* NOT  */
    DIVIDE = 277,                  /* DIVIDE  */
    MODULO = 278,                  /* MODULO  */
    LESS_THAN = 279,               /* LESS_THAN  */
    GREATER_THAN = 280,            /* GREATER_THAN  */
    LESS_THAN_EQUAL = 281,         /* LESS_THAN_EQUAL  */
    GREATER_THAN_EQUAL = 282,      /* GREATER_THAN_EQUAL  */
    EQUAL = 283,                   /* EQUAL  */
    NOT_EQUAL = 284,               /* NOT_EQUAL  */
    LOGICAL_AND = 285,             /* LOGICAL_AND  */
    LOGICAL_OR = 286,              /* LOGICAL_OR  */
    QUESTION_MARK = 287,           /* QUESTION_MARK  */
    COLON = 288,                   /* COLON  */
    SEMICOLON = 289,               /* SEMICOLON  */
    ASSIGN_ = 290,                 /* ASSIGN_  */
    COMMA = 291,                   /* COMMA  */
    IDENTIFIER = 292,              /* IDENTIFIER  */
    INTEGER_CONSTANT = 293,        /* INTEGER_CONSTANT  */
    CHAR_CONSTANT = 294,           /* CHAR_CONSTANT  */
    STRING_LITERAL = 295           /* STRING_LITERAL  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 20 "A6_1.y"

    int intval;                     // For an integer value
    char charval;                   // For a char value
    float floatval;                 // For a float value
    void* ptr;                      // For a pointer
    string* str;                    // For a string
    symbolType* symType;            // For the type of a symbol
    symbol* symp;                   // For a symbol
    DataType types;                 // For the type of an expression
    opcode opc;                     // For an opcode
    expression* expr;               // For an expression
    declaration* dec;               // For a declaration
    vector<declaration*> *decList;  // For a list of declarations
    param* prm;                     // For a parameter
    vector<param*> *prmList;        // For a list of parameters

#line 121 "A6_1.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_A6_1_TAB_H_INCLUDED  */
