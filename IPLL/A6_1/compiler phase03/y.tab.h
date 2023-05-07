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
    AUTO = 258,                    /* AUTO  */
    BREAK = 259,                   /* BREAK  */
    CASE = 260,                    /* CASE  */
    CHARTYPE = 261,                /* CHARTYPE  */
    CONST = 262,                   /* CONST  */
    CONTINUE = 263,                /* CONTINUE  */
    DEFAULT = 264,                 /* DEFAULT  */
    DO = 265,                      /* DO  */
    DOUBLE = 266,                  /* DOUBLE  */
    ELSE = 267,                    /* ELSE  */
    ENUM = 268,                    /* ENUM  */
    EXTERN = 269,                  /* EXTERN  */
    FOR = 270,                     /* FOR  */
    GOTO = 271,                    /* GOTO  */
    IF = 272,                      /* IF  */
    INLINE = 273,                  /* INLINE  */
    INTTYPE = 274,                 /* INTTYPE  */
    LONG = 275,                    /* LONG  */
    REGISTER = 276,                /* REGISTER  */
    RESTRICT = 277,                /* RESTRICT  */
    RETURN = 278,                  /* RETURN  */
    SHORT = 279,                   /* SHORT  */
    SIGNED = 280,                  /* SIGNED  */
    SIZEOF = 281,                  /* SIZEOF  */
    STATIC = 282,                  /* STATIC  */
    STRUCT = 283,                  /* STRUCT  */
    SWITCH = 284,                  /* SWITCH  */
    TYPEDEF = 285,                 /* TYPEDEF  */
    UNION = 286,                   /* UNION  */
    UNSIGNED = 287,                /* UNSIGNED  */
    VOIDTYPE = 288,                /* VOIDTYPE  */
    VOLATILE = 289,                /* VOLATILE  */
    WHILE = 290,                   /* WHILE  */
    BOOL = 291,                    /* BOOL  */
    COMPLEX = 292,                 /* COMPLEX  */
    IMAGINARY = 293,               /* IMAGINARY  */
    IDENTIFIER = 294,              /* IDENTIFIER  */
    INTEGER_CONSTANT = 295,        /* INTEGER_CONSTANT  */
    CHARACTER_CONSTANT = 296,      /* CHARACTER_CONSTANT  */
    STRING_LITERAL = 297,          /* STRING_LITERAL  */
    LEFT_SQUARE_BRACKET = 298,     /* LEFT_SQUARE_BRACKET  */
    INCREMENT = 299,               /* INCREMENT  */
    SLASH = 300,                   /* SLASH  */
    QUESTION_MARK = 301,           /* QUESTION_MARK  */
    ASSIGNMENT = 302,              /* ASSIGNMENT  */
    COMMA = 303,                   /* COMMA  */
    RIGHT_SQUARE_BRACKET = 304,    /* RIGHT_SQUARE_BRACKET  */
    LEFT_PARENTHESES = 305,        /* LEFT_PARENTHESES  */
    LEFT_CURLY_BRACKET = 306,      /* LEFT_CURLY_BRACKET  */
    RIGHT_CURLY_BRACKET = 307,     /* RIGHT_CURLY_BRACKET  */
    DOT = 308,                     /* DOT  */
    ARROW = 309,                   /* ARROW  */
    ASTERISK = 310,                /* ASTERISK  */
    PLUS = 311,                    /* PLUS  */
    MINUS = 312,                   /* MINUS  */
    TILDE = 313,                   /* TILDE  */
    EXCLAMATION = 314,             /* EXCLAMATION  */
    MODULO = 315,                  /* MODULO  */
    LEFT_SHIFT = 316,              /* LEFT_SHIFT  */
    RIGHT_SHIFT = 317,             /* RIGHT_SHIFT  */
    LESS_THAN = 318,               /* LESS_THAN  */
    GREATER_THAN = 319,            /* GREATER_THAN  */
    LESS_EQUAL_THAN = 320,         /* LESS_EQUAL_THAN  */
    GREATER_EQUAL_THAN = 321,      /* GREATER_EQUAL_THAN  */
    COLON = 322,                   /* COLON  */
    SEMI_COLON = 323,              /* SEMI_COLON  */
    ELLIPSIS = 324,                /* ELLIPSIS  */
    ASTERISK_ASSIGNMENT = 325,     /* ASTERISK_ASSIGNMENT  */
    SLASH_ASSIGNMENT = 326,        /* SLASH_ASSIGNMENT  */
    MODULO_ASSIGNMENT = 327,       /* MODULO_ASSIGNMENT  */
    PLUS_ASSIGNMENT = 328,         /* PLUS_ASSIGNMENT  */
    MINUS_ASSIGNMENT = 329,        /* MINUS_ASSIGNMENT  */
    LEFT_SHIFT_ASSIGNMENT = 330,   /* LEFT_SHIFT_ASSIGNMENT  */
    HASH = 331,                    /* HASH  */
    DECREMENT = 332,               /* DECREMENT  */
    RIGHT_PARENTHESES = 333,       /* RIGHT_PARENTHESES  */
    BITWISE_AND = 334,             /* BITWISE_AND  */
    EQUALS = 335,                  /* EQUALS  */
    BITWISE_XOR = 336,             /* BITWISE_XOR  */
    BITWISE_OR = 337,              /* BITWISE_OR  */
    LOGICAL_AND = 338,             /* LOGICAL_AND  */
    LOGICAL_OR = 339,              /* LOGICAL_OR  */
    RIGHT_SHIFT_ASSIGNMENT = 340,  /* RIGHT_SHIFT_ASSIGNMENT  */
    NOT_EQUALS = 341,              /* NOT_EQUALS  */
    BITWISE_AND_ASSIGNMENT = 342,  /* BITWISE_AND_ASSIGNMENT  */
    BITWISE_OR_ASSIGNMENT = 343,   /* BITWISE_OR_ASSIGNMENT  */
    BITWISE_XOR_ASSIGNMENT = 344,  /* BITWISE_XOR_ASSIGNMENT  */
    INVALID_TOKEN = 345,           /* INVALID_TOKEN  */
    THEN = 346                     /* THEN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define AUTO 258
#define BREAK 259
#define CASE 260
#define CHARTYPE 261
#define CONST 262
#define CONTINUE 263
#define DEFAULT 264
#define DO 265
#define DOUBLE 266
#define ELSE 267
#define ENUM 268
#define EXTERN 269
#define FOR 270
#define GOTO 271
#define IF 272
#define INLINE 273
#define INTTYPE 274
#define LONG 275
#define REGISTER 276
#define RESTRICT 277
#define RETURN 278
#define SHORT 279
#define SIGNED 280
#define SIZEOF 281
#define STATIC 282
#define STRUCT 283
#define SWITCH 284
#define TYPEDEF 285
#define UNION 286
#define UNSIGNED 287
#define VOIDTYPE 288
#define VOLATILE 289
#define WHILE 290
#define BOOL 291
#define COMPLEX 292
#define IMAGINARY 293
#define IDENTIFIER 294
#define INTEGER_CONSTANT 295
#define CHARACTER_CONSTANT 296
#define STRING_LITERAL 297
#define LEFT_SQUARE_BRACKET 298
#define INCREMENT 299
#define SLASH 300
#define QUESTION_MARK 301
#define ASSIGNMENT 302
#define COMMA 303
#define RIGHT_SQUARE_BRACKET 304
#define LEFT_PARENTHESES 305
#define LEFT_CURLY_BRACKET 306
#define RIGHT_CURLY_BRACKET 307
#define DOT 308
#define ARROW 309
#define ASTERISK 310
#define PLUS 311
#define MINUS 312
#define TILDE 313
#define EXCLAMATION 314
#define MODULO 315
#define LEFT_SHIFT 316
#define RIGHT_SHIFT 317
#define LESS_THAN 318
#define GREATER_THAN 319
#define LESS_EQUAL_THAN 320
#define GREATER_EQUAL_THAN 321
#define COLON 322
#define SEMI_COLON 323
#define ELLIPSIS 324
#define ASTERISK_ASSIGNMENT 325
#define SLASH_ASSIGNMENT 326
#define MODULO_ASSIGNMENT 327
#define PLUS_ASSIGNMENT 328
#define MINUS_ASSIGNMENT 329
#define LEFT_SHIFT_ASSIGNMENT 330
#define HASH 331
#define DECREMENT 332
#define RIGHT_PARENTHESES 333
#define BITWISE_AND 334
#define EQUALS 335
#define BITWISE_XOR 336
#define BITWISE_OR 337
#define LOGICAL_AND 338
#define LOGICAL_OR 339
#define RIGHT_SHIFT_ASSIGNMENT 340
#define NOT_EQUALS 341
#define BITWISE_AND_ASSIGNMENT 342
#define BITWISE_OR_ASSIGNMENT 343
#define BITWISE_XOR_ASSIGNMENT 344
#define INVALID_TOKEN 345
#define THEN 346

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 19 "A5_17.y"

    int intVal;
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

#line 264 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
