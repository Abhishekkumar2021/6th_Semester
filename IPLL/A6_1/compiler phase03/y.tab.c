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




/* First part of user prologue.  */
#line 1 "A5_17.y"

    #include "A5_17_translator.h"
    extern int yylex();
    extern int lineCount;
    void yyerror(string);
    void yyinfo(string);

#line 79 "y.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 329 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_AUTO = 3,                       /* AUTO  */
  YYSYMBOL_BREAK = 4,                      /* BREAK  */
  YYSYMBOL_CASE = 5,                       /* CASE  */
  YYSYMBOL_CHARTYPE = 6,                   /* CHARTYPE  */
  YYSYMBOL_CONST = 7,                      /* CONST  */
  YYSYMBOL_CONTINUE = 8,                   /* CONTINUE  */
  YYSYMBOL_DEFAULT = 9,                    /* DEFAULT  */
  YYSYMBOL_DO = 10,                        /* DO  */
  YYSYMBOL_DOUBLE = 11,                    /* DOUBLE  */
  YYSYMBOL_ELSE = 12,                      /* ELSE  */
  YYSYMBOL_ENUM = 13,                      /* ENUM  */
  YYSYMBOL_EXTERN = 14,                    /* EXTERN  */
  YYSYMBOL_FOR = 15,                       /* FOR  */
  YYSYMBOL_GOTO = 16,                      /* GOTO  */
  YYSYMBOL_IF = 17,                        /* IF  */
  YYSYMBOL_INLINE = 18,                    /* INLINE  */
  YYSYMBOL_INTTYPE = 19,                   /* INTTYPE  */
  YYSYMBOL_LONG = 20,                      /* LONG  */
  YYSYMBOL_REGISTER = 21,                  /* REGISTER  */
  YYSYMBOL_RESTRICT = 22,                  /* RESTRICT  */
  YYSYMBOL_RETURN = 23,                    /* RETURN  */
  YYSYMBOL_SHORT = 24,                     /* SHORT  */
  YYSYMBOL_SIGNED = 25,                    /* SIGNED  */
  YYSYMBOL_SIZEOF = 26,                    /* SIZEOF  */
  YYSYMBOL_STATIC = 27,                    /* STATIC  */
  YYSYMBOL_STRUCT = 28,                    /* STRUCT  */
  YYSYMBOL_SWITCH = 29,                    /* SWITCH  */
  YYSYMBOL_TYPEDEF = 30,                   /* TYPEDEF  */
  YYSYMBOL_UNION = 31,                     /* UNION  */
  YYSYMBOL_UNSIGNED = 32,                  /* UNSIGNED  */
  YYSYMBOL_VOIDTYPE = 33,                  /* VOIDTYPE  */
  YYSYMBOL_VOLATILE = 34,                  /* VOLATILE  */
  YYSYMBOL_WHILE = 35,                     /* WHILE  */
  YYSYMBOL_BOOL = 36,                      /* BOOL  */
  YYSYMBOL_COMPLEX = 37,                   /* COMPLEX  */
  YYSYMBOL_IMAGINARY = 38,                 /* IMAGINARY  */
  YYSYMBOL_IDENTIFIER = 39,                /* IDENTIFIER  */
  YYSYMBOL_INTEGER_CONSTANT = 40,          /* INTEGER_CONSTANT  */
  YYSYMBOL_CHARACTER_CONSTANT = 41,        /* CHARACTER_CONSTANT  */
  YYSYMBOL_STRING_LITERAL = 42,            /* STRING_LITERAL  */
  YYSYMBOL_LEFT_SQUARE_BRACKET = 43,       /* LEFT_SQUARE_BRACKET  */
  YYSYMBOL_INCREMENT = 44,                 /* INCREMENT  */
  YYSYMBOL_SLASH = 45,                     /* SLASH  */
  YYSYMBOL_QUESTION_MARK = 46,             /* QUESTION_MARK  */
  YYSYMBOL_ASSIGNMENT = 47,                /* ASSIGNMENT  */
  YYSYMBOL_COMMA = 48,                     /* COMMA  */
  YYSYMBOL_RIGHT_SQUARE_BRACKET = 49,      /* RIGHT_SQUARE_BRACKET  */
  YYSYMBOL_LEFT_PARENTHESES = 50,          /* LEFT_PARENTHESES  */
  YYSYMBOL_LEFT_CURLY_BRACKET = 51,        /* LEFT_CURLY_BRACKET  */
  YYSYMBOL_RIGHT_CURLY_BRACKET = 52,       /* RIGHT_CURLY_BRACKET  */
  YYSYMBOL_DOT = 53,                       /* DOT  */
  YYSYMBOL_ARROW = 54,                     /* ARROW  */
  YYSYMBOL_ASTERISK = 55,                  /* ASTERISK  */
  YYSYMBOL_PLUS = 56,                      /* PLUS  */
  YYSYMBOL_MINUS = 57,                     /* MINUS  */
  YYSYMBOL_TILDE = 58,                     /* TILDE  */
  YYSYMBOL_EXCLAMATION = 59,               /* EXCLAMATION  */
  YYSYMBOL_MODULO = 60,                    /* MODULO  */
  YYSYMBOL_LEFT_SHIFT = 61,                /* LEFT_SHIFT  */
  YYSYMBOL_RIGHT_SHIFT = 62,               /* RIGHT_SHIFT  */
  YYSYMBOL_LESS_THAN = 63,                 /* LESS_THAN  */
  YYSYMBOL_GREATER_THAN = 64,              /* GREATER_THAN  */
  YYSYMBOL_LESS_EQUAL_THAN = 65,           /* LESS_EQUAL_THAN  */
  YYSYMBOL_GREATER_EQUAL_THAN = 66,        /* GREATER_EQUAL_THAN  */
  YYSYMBOL_COLON = 67,                     /* COLON  */
  YYSYMBOL_SEMI_COLON = 68,                /* SEMI_COLON  */
  YYSYMBOL_ELLIPSIS = 69,                  /* ELLIPSIS  */
  YYSYMBOL_ASTERISK_ASSIGNMENT = 70,       /* ASTERISK_ASSIGNMENT  */
  YYSYMBOL_SLASH_ASSIGNMENT = 71,          /* SLASH_ASSIGNMENT  */
  YYSYMBOL_MODULO_ASSIGNMENT = 72,         /* MODULO_ASSIGNMENT  */
  YYSYMBOL_PLUS_ASSIGNMENT = 73,           /* PLUS_ASSIGNMENT  */
  YYSYMBOL_MINUS_ASSIGNMENT = 74,          /* MINUS_ASSIGNMENT  */
  YYSYMBOL_LEFT_SHIFT_ASSIGNMENT = 75,     /* LEFT_SHIFT_ASSIGNMENT  */
  YYSYMBOL_HASH = 76,                      /* HASH  */
  YYSYMBOL_DECREMENT = 77,                 /* DECREMENT  */
  YYSYMBOL_RIGHT_PARENTHESES = 78,         /* RIGHT_PARENTHESES  */
  YYSYMBOL_BITWISE_AND = 79,               /* BITWISE_AND  */
  YYSYMBOL_EQUALS = 80,                    /* EQUALS  */
  YYSYMBOL_BITWISE_XOR = 81,               /* BITWISE_XOR  */
  YYSYMBOL_BITWISE_OR = 82,                /* BITWISE_OR  */
  YYSYMBOL_LOGICAL_AND = 83,               /* LOGICAL_AND  */
  YYSYMBOL_LOGICAL_OR = 84,                /* LOGICAL_OR  */
  YYSYMBOL_RIGHT_SHIFT_ASSIGNMENT = 85,    /* RIGHT_SHIFT_ASSIGNMENT  */
  YYSYMBOL_NOT_EQUALS = 86,                /* NOT_EQUALS  */
  YYSYMBOL_BITWISE_AND_ASSIGNMENT = 87,    /* BITWISE_AND_ASSIGNMENT  */
  YYSYMBOL_BITWISE_OR_ASSIGNMENT = 88,     /* BITWISE_OR_ASSIGNMENT  */
  YYSYMBOL_BITWISE_XOR_ASSIGNMENT = 89,    /* BITWISE_XOR_ASSIGNMENT  */
  YYSYMBOL_INVALID_TOKEN = 90,             /* INVALID_TOKEN  */
  YYSYMBOL_THEN = 91,                      /* THEN  */
  YYSYMBOL_YYACCEPT = 92,                  /* $accept  */
  YYSYMBOL_primary_expression = 93,        /* primary_expression  */
  YYSYMBOL_postfix_expression = 94,        /* postfix_expression  */
  YYSYMBOL_argument_expression_list_opt = 95, /* argument_expression_list_opt  */
  YYSYMBOL_argument_expression_list = 96,  /* argument_expression_list  */
  YYSYMBOL_unary_expression = 97,          /* unary_expression  */
  YYSYMBOL_unary_operator = 98,            /* unary_operator  */
  YYSYMBOL_cast_expression = 99,           /* cast_expression  */
  YYSYMBOL_multiplicative_expression = 100, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 101,      /* additive_expression  */
  YYSYMBOL_shift_expression = 102,         /* shift_expression  */
  YYSYMBOL_relational_expression = 103,    /* relational_expression  */
  YYSYMBOL_equality_expression = 104,      /* equality_expression  */
  YYSYMBOL_AND_expression = 105,           /* AND_expression  */
  YYSYMBOL_exclusive_OR_expression = 106,  /* exclusive_OR_expression  */
  YYSYMBOL_inclusive_OR_expression = 107,  /* inclusive_OR_expression  */
  YYSYMBOL_M = 108,                        /* M  */
  YYSYMBOL_N = 109,                        /* N  */
  YYSYMBOL_logical_AND_expression = 110,   /* logical_AND_expression  */
  YYSYMBOL_logical_OR_expression = 111,    /* logical_OR_expression  */
  YYSYMBOL_conditional_expression = 112,   /* conditional_expression  */
  YYSYMBOL_assignment_expression = 113,    /* assignment_expression  */
  YYSYMBOL_assignment_operator = 114,      /* assignment_operator  */
  YYSYMBOL_expression = 115,               /* expression  */
  YYSYMBOL_constant_expression = 116,      /* constant_expression  */
  YYSYMBOL_declaration = 117,              /* declaration  */
  YYSYMBOL_init_declarator_list_opt = 118, /* init_declarator_list_opt  */
  YYSYMBOL_declaration_specifiers = 119,   /* declaration_specifiers  */
  YYSYMBOL_declaration_specifiers_opt = 120, /* declaration_specifiers_opt  */
  YYSYMBOL_init_declarator_list = 121,     /* init_declarator_list  */
  YYSYMBOL_init_declarator = 122,          /* init_declarator  */
  YYSYMBOL_storage_class_specifier = 123,  /* storage_class_specifier  */
  YYSYMBOL_type_specifier = 124,           /* type_specifier  */
  YYSYMBOL_specifier_qualifier_list = 125, /* specifier_qualifier_list  */
  YYSYMBOL_specifier_qualifier_list_opt = 126, /* specifier_qualifier_list_opt  */
  YYSYMBOL_enum_specifier = 127,           /* enum_specifier  */
  YYSYMBOL_identifier_opt = 128,           /* identifier_opt  */
  YYSYMBOL_enumerator_list = 129,          /* enumerator_list  */
  YYSYMBOL_enumerator = 130,               /* enumerator  */
  YYSYMBOL_type_qualifier = 131,           /* type_qualifier  */
  YYSYMBOL_function_specifier = 132,       /* function_specifier  */
  YYSYMBOL_declarator = 133,               /* declarator  */
  YYSYMBOL_change_scope = 134,             /* change_scope  */
  YYSYMBOL_direct_declarator = 135,        /* direct_declarator  */
  YYSYMBOL_type_qualifier_list_opt = 136,  /* type_qualifier_list_opt  */
  YYSYMBOL_pointer = 137,                  /* pointer  */
  YYSYMBOL_type_qualifier_list = 138,      /* type_qualifier_list  */
  YYSYMBOL_parameter_type_list = 139,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 140,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 141,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 142,          /* identifier_list  */
  YYSYMBOL_type_name = 143,                /* type_name  */
  YYSYMBOL_initialiser = 144,              /* initialiser  */
  YYSYMBOL_initialiser_list = 145,         /* initialiser_list  */
  YYSYMBOL_designation_opt = 146,          /* designation_opt  */
  YYSYMBOL_designation = 147,              /* designation  */
  YYSYMBOL_designator_list = 148,          /* designator_list  */
  YYSYMBOL_designator = 149,               /* designator  */
  YYSYMBOL_statement = 150,                /* statement  */
  YYSYMBOL_labeled_statement = 151,        /* labeled_statement  */
  YYSYMBOL_change_block = 152,             /* change_block  */
  YYSYMBOL_compound_statement = 153,       /* compound_statement  */
  YYSYMBOL_block_item_list_opt = 154,      /* block_item_list_opt  */
  YYSYMBOL_block_item_list = 155,          /* block_item_list  */
  YYSYMBOL_block_item = 156,               /* block_item  */
  YYSYMBOL_expression_statement = 157,     /* expression_statement  */
  YYSYMBOL_expression_opt = 158,           /* expression_opt  */
  YYSYMBOL_selection_statement = 159,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 160,      /* iteration_statement  */
  YYSYMBOL_jump_statement = 161,           /* jump_statement  */
  YYSYMBOL_translation_unit = 162,         /* translation_unit  */
  YYSYMBOL_external_declaration = 163,     /* external_declaration  */
  YYSYMBOL_function_definition = 164,      /* function_definition  */
  YYSYMBOL_declaration_list_opt = 165,     /* declaration_list_opt  */
  YYSYMBOL_declaration_list = 166          /* declaration_list  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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
typedef yytype_int16 yy_state_t;

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
#define YYFINAL  47
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1028

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  92
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  75
/* YYNRULES -- Number of rules.  */
#define YYNRULES  211
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  366

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   346


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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   207,   207,   214,   221,   228,   235,   243,   252,   272,
     280,   284,   288,   297,   306,   310,   319,   325,   333,   340,
     350,   355,   362,   369,   396,   400,   411,   416,   421,   426,
     431,   436,   444,   449,   471,   487,   510,   533,   559,   564,
     575,   589,   594,   605,   628,   633,   647,   661,   675,   692,
     697,   713,   743,   748,   761,   766,   779,   784,   807,   814,
     856,   861,   875,   880,   894,   899,   919,   924,   945,   949,
     953,   957,   961,   965,   969,   973,   977,   981,   985,   992,
     997,  1004,  1013,  1020,  1025,  1031,  1035,  1039,  1043,  1050,
    1055,  1061,  1065,  1072,  1077,  1089,  1093,  1097,  1101,  1108,
    1113,  1118,  1122,  1127,  1131,  1135,  1139,  1143,  1147,  1151,
    1155,  1162,  1166,  1173,  1178,  1184,  1188,  1192,  1199,  1204,
    1210,  1214,  1221,  1225,  1232,  1236,  1240,  1247,  1254,  1263,
    1270,  1288,  1294,  1299,  1303,  1307,  1325,  1344,  1348,  1352,
    1356,  1360,  1364,  1379,  1383,  1401,  1406,  1441,  1447,  1456,
    1460,  1467,  1471,  1478,  1482,  1489,  1493,  1500,  1504,  1511,
    1518,  1523,  1527,  1534,  1538,  1545,  1550,  1556,  1563,  1567,
    1574,  1578,  1587,  1591,  1596,  1602,  1607,  1612,  1620,  1624,
    1628,  1642,  1653,  1662,  1668,  1675,  1680,  1690,  1695,  1703,
    1711,  1717,  1743,  1751,  1760,  1791,  1801,  1810,  1821,  1828,
    1832,  1836,  1840,  1855,  1859,  1866,  1870,  1878,  1888,  1893,
    1899,  1903
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
  "\"end of file\"", "error", "\"invalid token\"", "AUTO", "BREAK",
  "CASE", "CHARTYPE", "CONST", "CONTINUE", "DEFAULT", "DO", "DOUBLE",
  "ELSE", "ENUM", "EXTERN", "FOR", "GOTO", "IF", "INLINE", "INTTYPE",
  "LONG", "REGISTER", "RESTRICT", "RETURN", "SHORT", "SIGNED", "SIZEOF",
  "STATIC", "STRUCT", "SWITCH", "TYPEDEF", "UNION", "UNSIGNED", "VOIDTYPE",
  "VOLATILE", "WHILE", "BOOL", "COMPLEX", "IMAGINARY", "IDENTIFIER",
  "INTEGER_CONSTANT", "CHARACTER_CONSTANT", "STRING_LITERAL",
  "LEFT_SQUARE_BRACKET", "INCREMENT", "SLASH", "QUESTION_MARK",
  "ASSIGNMENT", "COMMA", "RIGHT_SQUARE_BRACKET", "LEFT_PARENTHESES",
  "LEFT_CURLY_BRACKET", "RIGHT_CURLY_BRACKET", "DOT", "ARROW", "ASTERISK",
  "PLUS", "MINUS", "TILDE", "EXCLAMATION", "MODULO", "LEFT_SHIFT",
  "RIGHT_SHIFT", "LESS_THAN", "GREATER_THAN", "LESS_EQUAL_THAN",
  "GREATER_EQUAL_THAN", "COLON", "SEMI_COLON", "ELLIPSIS",
  "ASTERISK_ASSIGNMENT", "SLASH_ASSIGNMENT", "MODULO_ASSIGNMENT",
  "PLUS_ASSIGNMENT", "MINUS_ASSIGNMENT", "LEFT_SHIFT_ASSIGNMENT", "HASH",
  "DECREMENT", "RIGHT_PARENTHESES", "BITWISE_AND", "EQUALS", "BITWISE_XOR",
  "BITWISE_OR", "LOGICAL_AND", "LOGICAL_OR", "RIGHT_SHIFT_ASSIGNMENT",
  "NOT_EQUALS", "BITWISE_AND_ASSIGNMENT", "BITWISE_OR_ASSIGNMENT",
  "BITWISE_XOR_ASSIGNMENT", "INVALID_TOKEN", "THEN", "$accept",
  "primary_expression", "postfix_expression",
  "argument_expression_list_opt", "argument_expression_list",
  "unary_expression", "unary_operator", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "AND_expression",
  "exclusive_OR_expression", "inclusive_OR_expression", "M", "N",
  "logical_AND_expression", "logical_OR_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "init_declarator_list_opt", "declaration_specifiers",
  "declaration_specifiers_opt", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "specifier_qualifier_list",
  "specifier_qualifier_list_opt", "enum_specifier", "identifier_opt",
  "enumerator_list", "enumerator", "type_qualifier", "function_specifier",
  "declarator", "change_scope", "direct_declarator",
  "type_qualifier_list_opt", "pointer", "type_qualifier_list",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "identifier_list", "type_name", "initialiser", "initialiser_list",
  "designation_opt", "designation", "designator_list", "designator",
  "statement", "labeled_statement", "change_block", "compound_statement",
  "block_item_list_opt", "block_item_list", "block_item",
  "expression_statement", "expression_opt", "selection_statement",
  "iteration_statement", "jump_statement", "translation_unit",
  "external_declaration", "function_definition", "declaration_list_opt",
  "declaration_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-293)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-210)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     990,  -293,  -293,  -293,  -293,     4,  -293,  -293,  -293,  -293,
    -293,  -293,  -293,  -293,  -293,  -293,  -293,  -293,  -293,  -293,
    -293,  -293,    62,   990,   990,  -293,   990,   990,   954,  -293,
    -293,    52,    59,  -293,    62,   102,     5,    75,  -293,   915,
       6,    30,  -293,  -293,  -293,  -293,  -293,  -293,  -293,    80,
      70,  -293,   100,   102,  -293,    62,   741,  -293,    62,  -293,
     990,   610,   122,     6,   146,    63,  -293,  -293,  -293,  -293,
    -293,   151,   801,  -293,  -293,  -293,  -293,   827,   569,    29,
    -293,  -293,  -293,  -293,  -293,   827,  -293,  -293,   129,    71,
     853,  -293,   -22,    22,   108,   149,    67,    97,   119,   120,
     121,   -34,  -293,  -293,  -293,   157,  -293,   677,  -293,   161,
     167,   636,  -293,   536,   -30,   853,   -15,  -293,   569,  -293,
     569,  -293,  -293,   -27,   227,  -293,   227,   142,   853,   183,
      82,   741,  -293,    -1,  -293,  -293,   853,  -293,   853,   184,
     186,  -293,  -293,  -293,  -293,  -293,  -293,  -293,  -293,  -293,
    -293,  -293,  -293,   853,  -293,  -293,   853,   853,   853,   853,
     853,   853,   853,   853,   853,   853,   853,   853,   853,   853,
     853,   853,  -293,  -293,   181,   278,   179,   677,  -293,  -293,
     853,  -293,   187,   192,  -293,    62,   154,   194,  -293,   196,
    -293,  -293,  -293,  -293,  -293,   166,   170,   853,  -293,  -293,
    -293,  -293,   775,   201,  -293,    31,  -293,  -293,  -293,  -293,
     116,   175,   206,  -293,  -293,  -293,  -293,  -293,  -293,  -293,
     -22,   -22,    22,    22,   108,   108,   108,   108,   149,   149,
      67,    97,   119,   853,   853,  -293,   189,   853,   190,   188,
    -293,   212,   234,   224,   853,   226,  -293,   210,  -293,   231,
    -293,  -293,  -293,  -293,   228,   254,  -293,  -293,   240,  -293,
    -293,  -293,  -293,   260,   272,  -293,  -293,  -293,  -293,   739,
    -293,   273,   273,  -293,    29,  -293,  -293,  -293,   741,  -293,
    -293,   853,   120,   121,   853,  -293,   256,  -293,   474,   474,
     417,   257,   853,   258,   853,   277,   474,  -293,  -293,   355,
    -293,  -293,  -293,  -293,  -293,    85,  -293,  -293,   231,   474,
    -293,  -293,   853,   262,  -293,   -23,  -293,   -13,   853,  -293,
     278,  -293,    86,  -293,   264,  -293,   297,   270,  -293,  -293,
     474,   -12,   287,  -293,  -293,   290,   853,   853,   474,  -293,
    -293,  -293,   853,   853,   263,   274,  -293,   474,  -293,    -7,
     474,  -293,   331,  -293,   276,  -293,   853,  -293,  -293,  -293,
     474,   267,  -293,  -293,   474,  -293
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    97,   100,   124,   104,   119,    95,   127,   102,   103,
      98,   125,   101,   105,    96,   106,    99,   126,   107,   108,
     109,   206,    84,    90,    90,   110,    90,    90,     0,   203,
     205,   117,     0,   131,     0,   146,     0,    83,    91,    93,
     129,     0,    89,    85,    86,    87,    88,     1,   204,     0,
       0,   149,   147,   145,    82,     0,     0,   210,    84,   130,
     208,     0,   130,   128,   122,     0,   120,   132,   148,   150,
      92,    93,     0,     2,     3,     4,     5,     0,     0,   166,
      27,    28,    29,    30,    31,     0,    26,     7,    20,    32,
       0,    34,    38,    41,    44,    49,    52,    54,    56,    60,
      62,    64,    66,   160,    94,     0,   211,     0,   136,    27,
       0,     0,   157,     0,     0,     0,     0,   115,     0,    24,
       0,    21,    79,     0,   114,   159,   114,     0,     0,     0,
       0,     0,   165,     0,   168,    22,     0,    12,    17,     0,
       0,    13,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    78,    77,     0,    32,    23,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    58,    58,     0,   184,     0,     0,   141,   135,
       0,   134,    27,     0,   144,   156,     0,   151,   153,     0,
     143,    81,   123,   116,   121,     0,     0,     0,     6,   113,
     111,   112,     0,     0,   171,   166,   161,   163,   167,   169,
       0,     0,    16,    18,    10,    11,    67,    36,    35,    37,
      39,    40,    42,    43,    45,    46,    47,    48,    50,    51,
      53,    55,    57,     0,     0,    58,     0,     0,     0,     0,
      58,     0,     0,     0,   191,     0,    58,     2,   181,   190,
     187,   188,   172,   173,     0,    58,   185,   174,     0,   175,
     176,   177,   138,     0,     0,   140,   133,   155,   142,     0,
     158,    25,     0,    80,   166,    33,   170,   162,     0,     8,
       9,     0,    61,    63,     0,   201,     0,   200,   191,   191,
     191,     0,     0,     0,     0,     0,   191,   130,   207,   191,
     189,   137,   139,   152,   154,     0,   164,    19,    59,   191,
     180,    58,   191,     0,   199,     0,   202,     0,     0,   178,
     184,   186,   166,    14,     0,   179,     0,     0,    58,    58,
     191,     0,     0,    15,    58,     0,   191,   191,   191,   194,
      58,   182,     0,     0,     0,     0,    59,   191,    65,     0,
     191,    58,   192,   195,     0,   198,   191,    58,   196,    59,
     191,     0,   193,    58,   191,   197
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -293,  -293,  -293,  -293,  -293,   -71,  -293,   -81,    21,    23,
     103,    24,   178,   180,   177,   118,  -133,  -292,   115,  -293,
    -111,    -3,  -293,   -73,  -117,     0,  -293,     3,   125,  -293,
     298,  -293,   -56,   -92,   230,  -293,  -293,  -293,   236,    79,
    -293,   -14,   -60,   313,  -293,   315,   -46,  -293,  -293,   114,
    -293,    69,  -124,   111,  -195,  -293,  -293,   253,  -121,  -293,
    -293,  -293,    78,  -293,   101,  -293,  -231,  -293,  -293,  -293,
    -293,   373,  -293,  -293,  -293
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    87,    88,   211,   212,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   233,   174,   100,   101,
     102,   122,   153,   249,   192,   250,    36,    58,    43,    37,
      38,    23,    24,   125,   200,    25,    32,    65,    66,    26,
      27,    71,   105,    40,    52,    41,    53,   186,   187,   188,
     114,   127,   104,   130,   131,   132,   133,   134,   251,   252,
     297,   253,   254,   255,   256,   257,   258,   259,   260,   261,
      28,    29,    30,    59,    60
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      21,   119,   113,    22,   191,   123,   121,   207,    39,   155,
     278,   203,   -59,   293,   135,   111,   324,   191,   189,   154,
      50,   197,   124,   156,    64,   197,    42,    42,    21,    42,
      42,    22,   199,   157,   199,   197,   197,   193,   158,    57,
     234,   197,   128,    31,   154,   123,   208,   123,   190,    61,
     173,   198,   129,   103,   352,   329,    62,   154,   110,   313,
     106,   177,   124,   210,   124,   330,   340,   361,   124,    33,
     124,   354,   128,    54,   128,   217,   218,   219,   159,   160,
      34,   327,   129,   277,   129,   154,   154,   154,   154,   154,
     154,   154,   154,   154,   154,   154,   154,   154,   154,   154,
     154,    33,   284,  -118,   176,   344,   345,   289,   183,     3,
      49,   116,    34,   295,    51,   117,   185,    35,   142,    64,
     286,   275,   299,    55,    11,   359,   191,   278,   103,   128,
     205,   154,    69,   322,   206,   213,    17,   323,   333,   129,
      51,   143,   144,   145,   146,   147,   148,   167,    67,    44,
     216,    45,    46,   168,   306,    35,   149,   126,   150,   151,
     152,   112,   154,   154,   197,   279,   154,   310,   311,   161,
     162,   267,   136,   137,   263,   319,   169,   264,   326,   138,
     220,   221,   139,   140,   222,   223,    51,   195,   325,   196,
      69,   228,   229,   115,   273,   337,   338,   126,    56,   126,
     170,   342,   171,   126,   172,   126,   141,   347,   175,   339,
     178,   308,   163,   164,   165,   166,   179,   346,   356,   315,
     202,   317,   204,   214,   360,   215,   353,   235,   262,   355,
     364,   348,   268,     2,     3,   270,   265,   320,     4,   362,
       5,   266,   269,   365,   271,   331,     8,     9,   272,    11,
     276,    12,    13,   280,   281,   288,    69,   285,   287,    15,
      16,    17,   290,    18,    19,    20,   224,   225,   226,   227,
     349,   154,   185,   291,   292,   103,   294,   296,   307,   197,
     298,     1,   236,   237,     2,     3,   238,   239,   240,     4,
     312,     5,     6,   241,   242,   243,     7,     8,     9,    10,
      11,   244,    12,    13,    72,    14,  -183,   245,   300,   301,
      15,    16,    17,   246,    18,    19,    20,   247,    74,    75,
      76,   302,    77,   309,   274,   314,   316,   318,    78,   248,
     328,   334,   335,    80,    81,    82,    83,    84,   336,   341,
     343,   350,   351,   357,   358,   363,  -191,   230,   232,   283,
     231,   282,   194,    70,    63,    85,   201,    86,     1,   236,
     237,     2,     3,   238,   239,   240,     4,    68,     5,     6,
     241,   242,   243,     7,     8,     9,    10,    11,   244,    12,
      13,    72,    14,   304,   245,   305,   209,    15,    16,    17,
     246,    18,    19,    20,   247,    74,    75,    76,   332,    77,
     321,    48,     0,     0,     0,    78,   248,     0,     0,     0,
      80,    81,    82,    83,    84,     0,     0,     0,     0,     0,
       1,     0,     0,     2,     3,     0,     0,     0,     4,     0,
       5,     6,    85,     0,    86,     7,     8,     9,    10,    11,
       0,    12,    13,    72,    14,     0,     0,     0,     0,    15,
      16,    17,     0,    18,    19,    20,    73,    74,    75,    76,
       0,    77,     0,     0,     0,     0,     0,    78,     0,     0,
       0,     0,    80,    81,    82,    83,    84,     0,   236,   237,
       0,     0,   238,   239,   240,     0,     0,     0,     0,   241,
     242,   243,     0,     0,    85,     0,    86,   244,     0,     0,
      72,     0,     0,   245,     0,     0,     0,     0,     0,   246,
       0,     0,     0,   247,    74,    75,    76,     0,    77,     0,
       0,     0,     0,     0,    78,   248,     0,     0,     0,    80,
      81,    82,    83,    84,     0,     0,     0,     0,     0,     1,
       0,     0,     2,     3,     0,     0,     0,     4,     0,     5,
       6,    85,     0,    86,     7,     8,     9,    10,    11,     0,
      12,    13,     0,    14,     0,     0,     0,     0,    15,    16,
      17,     0,    18,    19,    20,     2,     3,     0,     0,     0,
       4,     0,     5,     0,     0,     0,     0,     0,     8,     9,
       0,    11,     0,    12,    13,    72,     0,     0,     0,     0,
       0,    15,    16,    17,     0,    18,    19,    20,    73,    74,
      75,    76,     0,    77,   184,     0,     0,     3,     0,    78,
       0,     0,     0,     0,    80,    81,    82,    83,    84,     0,
       0,     0,    11,     0,     0,     0,    72,   107,     0,     0,
       0,     0,     0,     3,    17,     0,    85,     0,    86,    73,
      74,    75,    76,     0,    77,     0,     0,     0,    11,   108,
      78,     0,    72,   180,     0,   109,    81,    82,    83,    84,
      17,     0,     0,     0,     0,    73,    74,    75,    76,     0,
      77,     0,     0,     0,     3,   181,    78,    85,     0,    86,
       0,   182,    81,    82,    83,    84,     0,     0,     0,    11,
       0,     0,     0,    72,     0,     0,     0,     0,     0,     0,
       0,    17,     0,    85,     0,    86,    73,    74,    75,    76,
       0,    77,     0,     0,     0,     0,     0,    78,     0,     0,
       0,     0,    80,    81,    82,    83,    84,     0,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     0,     0,     0,
       4,     0,     5,     6,    85,     0,    86,     7,     8,     9,
      10,    11,     0,    12,    13,     0,    14,    72,     0,     0,
       0,    15,    16,    17,     0,    18,    19,    20,     0,     0,
      73,    74,    75,    76,     0,    77,     0,     0,     0,     0,
       0,    78,    79,     0,     0,     0,    80,    81,    82,    83,
      84,    72,     0,     0,     0,     0,     0,     0,   303,     0,
       0,     0,     0,     0,    73,    74,    75,    76,    85,    77,
      86,     0,     0,     0,     0,    78,   274,    72,     0,     0,
      80,    81,    82,    83,    84,     0,     0,     0,     0,     0,
      73,    74,    75,    76,     0,    77,     0,     0,     0,     0,
       0,   118,    85,    72,    86,     0,    80,    81,    82,    83,
      84,     0,     0,     0,     0,     0,    73,    74,    75,    76,
       0,    77,     0,     0,     0,     0,     0,   120,    85,    72,
      86,     0,    80,    81,    82,    83,    84,     0,     0,     0,
       0,     0,    73,    74,    75,    76,     0,    77,     0,     0,
       0,     0,     0,    78,    85,     0,    86,     0,    80,    81,
      82,    83,    84,     0,     0,     0,     0,     0,     1,     0,
       0,     2,     3,     0,     0,     0,     4,     0,     5,     6,
      85,     0,    86,     7,     8,     9,    10,    11,     0,    12,
      13,     0,    14,     0,     0,     0,     0,    15,    16,    17,
       0,    18,    19,    20,    47,     0,     0,     1,     0,     0,
       2,     3,    56,     0,     0,     4,  -209,     5,     6,     0,
       0,     0,     7,     8,     9,    10,    11,     0,    12,    13,
       0,    14,     0,     0,     0,     0,    15,    16,    17,     0,
      18,    19,    20,     1,     0,     0,     2,     3,     0,     0,
       0,     4,     0,     5,     6,     0,     0,     0,     7,     8,
       9,    10,    11,     0,    12,    13,     0,    14,     0,     0,
       0,     0,    15,    16,    17,     0,    18,    19,    20
};

static const yytype_int16 yycheck[] =
{
       0,    72,    62,     0,   115,    78,    77,   131,    22,    90,
     205,   128,    46,   244,    85,    61,   308,   128,    48,    90,
      34,    48,    78,    45,    39,    48,    23,    24,    28,    26,
      27,    28,   124,    55,   126,    48,    48,    52,    60,    39,
     173,    48,    43,    39,   115,   118,    47,   120,    78,    43,
      84,    78,    53,    56,   346,    78,    50,   128,    61,   290,
      60,   107,   118,   136,   120,    78,    78,   359,   124,    39,
     126,    78,    43,    68,    43,   156,   157,   158,    56,    57,
      50,   312,    53,    52,    53,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,    39,   235,    51,   107,   336,   337,   240,   111,     7,
      51,    48,    50,   246,    35,    52,   113,    55,    47,    39,
     237,   202,   255,    48,    22,   356,   237,   322,   131,    43,
      48,   202,    53,    48,    52,   138,    34,    52,    52,    53,
      61,    70,    71,    72,    73,    74,    75,    80,    78,    24,
     153,    26,    27,    86,   278,    55,    85,    78,    87,    88,
      89,    39,   233,   234,    48,    49,   237,   288,   289,    61,
      62,   185,    43,    44,   177,   296,    79,   180,   311,    50,
     159,   160,    53,    54,   161,   162,   107,   118,   309,   120,
     111,   167,   168,    47,   197,   328,   329,   118,    47,   120,
      81,   334,    82,   124,    83,   126,    77,   340,    51,   330,
      49,   284,    63,    64,    65,    66,    49,   338,   351,   292,
      78,   294,    39,    39,   357,    39,   347,    46,    49,   350,
     363,   342,    78,     6,     7,    39,    49,   297,    11,   360,
      13,    49,    48,   364,    78,   318,    19,    20,    78,    22,
      49,    24,    25,    78,    48,    67,   177,    68,    68,    32,
      33,    34,    50,    36,    37,    38,   163,   164,   165,   166,
     343,   342,   269,    39,    50,   278,    50,    67,   281,    48,
      52,     3,     4,     5,     6,     7,     8,     9,    10,    11,
     290,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    52,    29,    68,    49,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    49,    44,    67,    51,    68,    68,    50,    50,    51,
      68,    67,    35,    55,    56,    57,    58,    59,    68,    52,
      50,    78,    68,    12,    68,    78,    68,   169,   171,   234,
     170,   233,   116,    55,    41,    77,   126,    79,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    52,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,   269,    29,   274,   133,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,   320,    44,
     299,    28,    -1,    -1,    -1,    50,    51,    -1,    -1,    -1,
      55,    56,    57,    58,    59,    -1,    -1,    -1,    -1,    -1,
       3,    -1,    -1,     6,     7,    -1,    -1,    -1,    11,    -1,
      13,    14,    77,    -1,    79,    18,    19,    20,    21,    22,
      -1,    24,    25,    26,    27,    -1,    -1,    -1,    -1,    32,
      33,    34,    -1,    36,    37,    38,    39,    40,    41,    42,
      -1,    44,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,
      -1,    -1,    55,    56,    57,    58,    59,    -1,     4,     5,
      -1,    -1,     8,     9,    10,    -1,    -1,    -1,    -1,    15,
      16,    17,    -1,    -1,    77,    -1,    79,    23,    -1,    -1,
      26,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    35,
      -1,    -1,    -1,    39,    40,    41,    42,    -1,    44,    -1,
      -1,    -1,    -1,    -1,    50,    51,    -1,    -1,    -1,    55,
      56,    57,    58,    59,    -1,    -1,    -1,    -1,    -1,     3,
      -1,    -1,     6,     7,    -1,    -1,    -1,    11,    -1,    13,
      14,    77,    -1,    79,    18,    19,    20,    21,    22,    -1,
      24,    25,    -1,    27,    -1,    -1,    -1,    -1,    32,    33,
      34,    -1,    36,    37,    38,     6,     7,    -1,    -1,    -1,
      11,    -1,    13,    -1,    -1,    -1,    -1,    -1,    19,    20,
      -1,    22,    -1,    24,    25,    26,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    -1,    36,    37,    38,    39,    40,
      41,    42,    -1,    44,    78,    -1,    -1,     7,    -1,    50,
      -1,    -1,    -1,    -1,    55,    56,    57,    58,    59,    -1,
      -1,    -1,    22,    -1,    -1,    -1,    26,    27,    -1,    -1,
      -1,    -1,    -1,     7,    34,    -1,    77,    -1,    79,    39,
      40,    41,    42,    -1,    44,    -1,    -1,    -1,    22,    49,
      50,    -1,    26,    27,    -1,    55,    56,    57,    58,    59,
      34,    -1,    -1,    -1,    -1,    39,    40,    41,    42,    -1,
      44,    -1,    -1,    -1,     7,    49,    50,    77,    -1,    79,
      -1,    55,    56,    57,    58,    59,    -1,    -1,    -1,    22,
      -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    -1,    77,    -1,    79,    39,    40,    41,    42,
      -1,    44,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,
      -1,    -1,    55,    56,    57,    58,    59,    -1,    -1,    -1,
      -1,    -1,     3,    -1,    -1,     6,     7,    -1,    -1,    -1,
      11,    -1,    13,    14,    77,    -1,    79,    18,    19,    20,
      21,    22,    -1,    24,    25,    -1,    27,    26,    -1,    -1,
      -1,    32,    33,    34,    -1,    36,    37,    38,    -1,    -1,
      39,    40,    41,    42,    -1,    44,    -1,    -1,    -1,    -1,
      -1,    50,    51,    -1,    -1,    -1,    55,    56,    57,    58,
      59,    26,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,
      -1,    -1,    -1,    -1,    39,    40,    41,    42,    77,    44,
      79,    -1,    -1,    -1,    -1,    50,    51,    26,    -1,    -1,
      55,    56,    57,    58,    59,    -1,    -1,    -1,    -1,    -1,
      39,    40,    41,    42,    -1,    44,    -1,    -1,    -1,    -1,
      -1,    50,    77,    26,    79,    -1,    55,    56,    57,    58,
      59,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,    42,
      -1,    44,    -1,    -1,    -1,    -1,    -1,    50,    77,    26,
      79,    -1,    55,    56,    57,    58,    59,    -1,    -1,    -1,
      -1,    -1,    39,    40,    41,    42,    -1,    44,    -1,    -1,
      -1,    -1,    -1,    50,    77,    -1,    79,    -1,    55,    56,
      57,    58,    59,    -1,    -1,    -1,    -1,    -1,     3,    -1,
      -1,     6,     7,    -1,    -1,    -1,    11,    -1,    13,    14,
      77,    -1,    79,    18,    19,    20,    21,    22,    -1,    24,
      25,    -1,    27,    -1,    -1,    -1,    -1,    32,    33,    34,
      -1,    36,    37,    38,     0,    -1,    -1,     3,    -1,    -1,
       6,     7,    47,    -1,    -1,    11,    51,    13,    14,    -1,
      -1,    -1,    18,    19,    20,    21,    22,    -1,    24,    25,
      -1,    27,    -1,    -1,    -1,    -1,    32,    33,    34,    -1,
      36,    37,    38,     3,    -1,    -1,     6,     7,    -1,    -1,
      -1,    11,    -1,    13,    14,    -1,    -1,    -1,    18,    19,
      20,    21,    22,    -1,    24,    25,    -1,    27,    -1,    -1,
      -1,    -1,    32,    33,    34,    -1,    36,    37,    38
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,     7,    11,    13,    14,    18,    19,    20,
      21,    22,    24,    25,    27,    32,    33,    34,    36,    37,
      38,   117,   119,   123,   124,   127,   131,   132,   162,   163,
     164,    39,   128,    39,    50,    55,   118,   121,   122,   133,
     135,   137,   119,   120,   120,   120,   120,     0,   163,    51,
     133,   131,   136,   138,    68,    48,    47,   117,   119,   165,
     166,    43,    50,   135,    39,   129,   130,    78,   137,   131,
     122,   133,    26,    39,    40,    41,    42,    44,    50,    51,
      55,    56,    57,    58,    59,    77,    79,    93,    94,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     110,   111,   112,   113,   144,   134,   117,    27,    49,    55,
     113,   138,    39,   134,   142,    47,    48,    52,    50,    97,
      50,    97,   113,   115,   124,   125,   131,   143,    43,    53,
     145,   146,   147,   148,   149,    97,    43,    44,    50,    53,
      54,    77,    47,    70,    71,    72,    73,    74,    75,    85,
      87,    88,    89,   114,    97,    99,    45,    55,    60,    56,
      57,    61,    62,    63,    64,    65,    66,    80,    86,    79,
      81,    82,    83,    84,   109,    51,   113,   138,    49,    49,
      27,    49,    55,   113,    78,   119,   139,   140,   141,    48,
      78,   112,   116,    52,   130,   143,   143,    48,    78,   125,
     126,   126,    78,   116,    39,    48,    52,   144,    47,   149,
     115,    95,    96,   113,    39,    39,   113,    99,    99,    99,
     100,   100,   101,   101,   102,   102,   102,   102,   103,   103,
     104,   105,   106,   108,   108,    46,     4,     5,     8,     9,
      10,    15,    16,    17,    23,    29,    35,    39,    51,   115,
     117,   150,   151,   153,   154,   155,   156,   157,   158,   159,
     160,   161,    49,   113,   113,    49,    49,   133,    78,    48,
      39,    78,    78,   113,    51,    99,    49,    52,   146,    49,
      78,    48,   107,   110,   108,    68,   116,    68,    67,   108,
      50,    39,    50,   158,    50,   108,    67,   152,    52,   108,
      68,    49,    49,    69,   141,   145,   144,   113,   115,    67,
     150,   150,   117,   158,    68,   115,    68,   115,    50,   150,
     134,   156,    48,    52,   109,   150,   108,   158,    68,    78,
      78,   115,   154,    52,    67,    35,    68,   108,   108,   150,
      78,    52,   108,    50,   158,   158,   150,   108,   112,   115,
      78,    68,   109,   150,    78,   150,   108,    12,    68,   158,
     108,   109,   150,    78,   108,   150
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    92,    93,    93,    93,    93,    93,    94,    94,    94,
      94,    94,    94,    94,    94,    94,    95,    95,    96,    96,
      97,    97,    97,    97,    97,    97,    98,    98,    98,    98,
      98,    98,    99,    99,   100,   100,   100,   100,   101,   101,
     101,   102,   102,   102,   103,   103,   103,   103,   103,   104,
     104,   104,   105,   105,   106,   106,   107,   107,   108,   109,
     110,   110,   111,   111,   112,   112,   113,   113,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   114,   115,
     115,   116,   117,   118,   118,   119,   119,   119,   119,   120,
     120,   121,   121,   122,   122,   123,   123,   123,   123,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   125,   125,   126,   126,   127,   127,   127,   128,   128,
     129,   129,   130,   130,   131,   131,   131,   132,   133,   133,
     134,   135,   135,   135,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   136,   136,   137,   137,   138,
     138,   139,   139,   140,   140,   141,   141,   142,   142,   143,
     144,   144,   144,   145,   145,   146,   146,   147,   148,   148,
     149,   149,   150,   150,   150,   150,   150,   150,   151,   151,
     151,   152,   153,   154,   154,   155,   155,   156,   156,   157,
     158,   158,   159,   159,   159,   160,   160,   160,   160,   161,
     161,   161,   161,   162,   162,   163,   163,   164,   165,   165,
     166,   166
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     3,     1,     4,     4,
       3,     3,     2,     2,     6,     7,     1,     0,     1,     3,
       1,     2,     2,     2,     2,     4,     1,     1,     1,     1,
       1,     1,     1,     4,     1,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     1,     3,     1,     3,     1,     3,     0,     0,
       1,     4,     1,     4,     1,     9,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     3,     1,     0,     2,     2,     2,     2,     1,
       0,     1,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     1,     0,     5,     6,     2,     1,     0,
       1,     3,     1,     3,     1,     1,     1,     1,     2,     1,
       0,     1,     3,     5,     4,     4,     3,     6,     5,     6,
       5,     4,     5,     4,     4,     1,     0,     2,     3,     1,
       2,     1,     3,     1,     3,     2,     1,     1,     3,     1,
       1,     3,     4,     2,     4,     1,     0,     2,     1,     2,
       3,     2,     1,     1,     1,     1,     1,     1,     3,     4,
       3,     0,     5,     1,     0,     1,     3,     1,     1,     2,
       1,     0,     7,    10,     5,     7,     9,    13,     8,     3,
       2,     2,     3,     1,     2,     1,     1,     7,     1,     0,
       1,     2
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
  case 2: /* primary_expression: IDENTIFIER  */
#line 208 "A5_17.y"
                        { 
                            yyinfo("primary_expression => IDENTIFIER");
                            (yyval.expression) = new Expression(); // create new non boolean expression and symbol is the identifier
                            (yyval.expression)->symbol = (yyvsp[0].symbol);
                            (yyval.expression)->type = Expression::NONBOOLEAN; 
                        }
#line 1905 "y.tab.c"
    break;

  case 3: /* primary_expression: INTEGER_CONSTANT  */
#line 215 "A5_17.y"
                        { 
                            yyinfo("primary_expression => INTEGER_CONSTANT"); 
                            (yyval.expression) = new Expression();
                            (yyval.expression)->symbol = gentemp(SymbolType::INT, toString((yyvsp[0].intVal)));
                            emit("=", (yyval.expression)->symbol->name, (yyvsp[0].intVal));
                        }
#line 1916 "y.tab.c"
    break;

  case 4: /* primary_expression: CHARACTER_CONSTANT  */
#line 222 "A5_17.y"
                        { 
                            yyinfo("primary_expression => CHARACTER_CONSTANT"); 
                            (yyval.expression) = new Expression();
                            (yyval.expression)->symbol = gentemp(SymbolType::CHAR, (yyvsp[0].charVal));
                            emit("=", (yyval.expression)->symbol->name, (yyvsp[0].charVal));
                        }
#line 1927 "y.tab.c"
    break;

  case 5: /* primary_expression: STRING_LITERAL  */
#line 229 "A5_17.y"
                        { 
                            yyinfo("primary_expression => STRING_LITERAL"); 
                            (yyval.expression) = new Expression();
		                    (yyval.expression)->symbol = gentemp(SymbolType::POINTER, (yyvsp[0].stringVal));
		                    (yyval.expression)->symbol->type->arrayType = new SymbolType(SymbolType::CHAR);
                        }
#line 1938 "y.tab.c"
    break;

  case 6: /* primary_expression: LEFT_PARENTHESES expression RIGHT_PARENTHESES  */
#line 236 "A5_17.y"
                        { 
                            yyinfo("primary_expression => ( expression )"); 
                            (yyval.expression) = (yyvsp[-1].expression);
                        }
#line 1947 "y.tab.c"
    break;

  case 7: /* postfix_expression: primary_expression  */
#line 244 "A5_17.y"
                        { 
                            // create new array with the same symbol as the primary expression
                            yyinfo("postfix_expression => primary_expression"); 
                            (yyval.array) = new Array();
                            (yyval.array)->symbol = (yyvsp[0].expression)->symbol;
                            (yyval.array)->temp = (yyval.array)->symbol;
                            (yyval.array)->subArrayType = (yyvsp[0].expression)->symbol->type;
                        }
#line 1960 "y.tab.c"
    break;

  case 8: /* postfix_expression: postfix_expression LEFT_SQUARE_BRACKET expression RIGHT_SQUARE_BRACKET  */
#line 253 "A5_17.y"
                        { 
                            // this is an array expression, create a new array
                            yyinfo("postfix_expression => postfix_expression [ expression ]"); 
                            (yyval.array) = new Array();
                            (yyval.array)->symbol = (yyvsp[-3].array)->symbol;    // same symbol as before
                            (yyval.array)->subArrayType = (yyvsp[-3].array)->subArrayType->arrayType; // as we are indexing we go one level deeper
                            (yyval.array)->temp = gentemp(SymbolType::INT); // temporary to compute location
                            (yyval.array)->type = Array::ARRAY;    // type will be array

                            if((yyvsp[-3].array)->type == Array::ARRAY) {
                                // postfix_expression is already array so multiply size of subarray with expression and add
                                Symbol *sym = gentemp(SymbolType::INT);
                                emit("*", sym->name, (yyvsp[-1].expression)->symbol->name, toString((yyval.array)->subArrayType->getSize()));
                                emit("+", (yyval.array)->temp->name, (yyvsp[-3].array)->temp->name, sym->name);
                            } else {
                                emit("*", (yyval.array)->temp->name, (yyvsp[-1].expression)->symbol->name, toString((yyval.array)->subArrayType->getSize()));
                            }

                        }
#line 1984 "y.tab.c"
    break;

  case 9: /* postfix_expression: postfix_expression LEFT_PARENTHESES argument_expression_list_opt RIGHT_PARENTHESES  */
#line 273 "A5_17.y"
                        { 
                            // function call, number of parameters stored in argument_expression_list_opt
                            yyinfo("postfix_expression => postfix_expression ( argument_expression_list_opt )"); 
                            (yyval.array) = new Array();
                            (yyval.array)->symbol = gentemp((yyvsp[-3].array)->symbol->type->type);
                            emit("call", (yyval.array)->symbol->name, (yyvsp[-3].array)->symbol->name, toString((yyvsp[-1].parameterCount)));
                        }
#line 1996 "y.tab.c"
    break;

  case 10: /* postfix_expression: postfix_expression DOT IDENTIFIER  */
#line 281 "A5_17.y"
                        { 
                            yyinfo("postfix_expression => postfix_expression . IDENTIFIER"); 
                        }
#line 2004 "y.tab.c"
    break;

  case 11: /* postfix_expression: postfix_expression ARROW IDENTIFIER  */
#line 285 "A5_17.y"
                        { 
                            yyinfo("postfix_expression => postfix_expression -> IDENTIFIER"); 
                        }
#line 2012 "y.tab.c"
    break;

  case 12: /* postfix_expression: postfix_expression INCREMENT  */
#line 289 "A5_17.y"
                        { 
                            // post increment, first generate temporary with old value, then add 1
                            yyinfo("postfix_expression => postfix_expression ++");
                            (yyval.array) = new Array();
                            (yyval.array)->symbol = gentemp((yyvsp[-1].array)->symbol->type->type);
                            emit("=", (yyval.array)->symbol->name, (yyvsp[-1].array)->symbol->name);
                            emit("+", (yyvsp[-1].array)->symbol->name, (yyvsp[-1].array)->symbol->name, toString(1)); 
                        }
#line 2025 "y.tab.c"
    break;

  case 13: /* postfix_expression: postfix_expression DECREMENT  */
#line 298 "A5_17.y"
                        { 
                            // post decrement, first generate temporary with old value, then subtract 1
                            yyinfo("postfix_expression => postfix_expression --"); 
                            (yyval.array) = new Array();
                            (yyval.array)->symbol = gentemp((yyvsp[-1].array)->symbol->type->type);
                            emit("=", (yyval.array)->symbol->name, (yyvsp[-1].array)->symbol->name);
                            emit("-", (yyvsp[-1].array)->symbol->name, (yyvsp[-1].array)->symbol->name, toString(1));
                        }
#line 2038 "y.tab.c"
    break;

  case 14: /* postfix_expression: LEFT_PARENTHESES type_name RIGHT_PARENTHESES LEFT_CURLY_BRACKET initialiser_list RIGHT_CURLY_BRACKET  */
#line 307 "A5_17.y"
                        { 
                            yyinfo("postfix_expression => ( type_name ) { initialiser_list }"); 
                        }
#line 2046 "y.tab.c"
    break;

  case 15: /* postfix_expression: LEFT_PARENTHESES type_name RIGHT_PARENTHESES LEFT_CURLY_BRACKET initialiser_list COMMA RIGHT_CURLY_BRACKET  */
#line 311 "A5_17.y"
                        { 
                            yyinfo("postfix_expression => ( type_name ) { initialiser_list , }"); 
                        }
#line 2054 "y.tab.c"
    break;

  case 16: /* argument_expression_list_opt: argument_expression_list  */
#line 320 "A5_17.y"
                                    { 
                                        yyinfo("argument_expression_list_opt => argument_expression_list"); 
                                        (yyval.parameterCount) = (yyvsp[0].parameterCount);
                                    }
#line 2063 "y.tab.c"
    break;

  case 17: /* argument_expression_list_opt: %empty  */
#line 325 "A5_17.y"
                                    { 
                                        // empty so 0 params
                                        yyinfo("argument_expression_list_opt => epsilon");
                                        (yyval.parameterCount) = 0;
                                    }
#line 2073 "y.tab.c"
    break;

  case 18: /* argument_expression_list: assignment_expression  */
#line 334 "A5_17.y"
                                { 
                                    // first param, initialise param count to 1
                                    yyinfo("argument_expression_list => assignment_expression"); 
                                    emit("param", (yyvsp[0].expression)->symbol->name);
                                    (yyval.parameterCount) = 1;
                                }
#line 2084 "y.tab.c"
    break;

  case 19: /* argument_expression_list: argument_expression_list COMMA assignment_expression  */
#line 341 "A5_17.y"
                                { 
                                    // one new param, add 1 to param count
                                    yyinfo("argument_expression_list => argument_expression_list , assignment_expression");
                                    emit("param", (yyvsp[0].expression)->symbol->name);
                                    (yyval.parameterCount) = (yyvsp[-2].parameterCount) + 1; 
                                }
#line 2095 "y.tab.c"
    break;

  case 20: /* unary_expression: postfix_expression  */
#line 351 "A5_17.y"
                        { 
                            yyinfo("unary_expression => postfix_expression"); 
                            (yyval.array) = (yyvsp[0].array);
                        }
#line 2104 "y.tab.c"
    break;

  case 21: /* unary_expression: INCREMENT unary_expression  */
#line 356 "A5_17.y"
                        { 
                            // pre increment, no new temporary simply add 1
                            yyinfo("unary_expression => ++ unary_expression"); 
                            (yyval.array) = (yyvsp[0].array);
                            emit("+", (yyvsp[0].array)->symbol->name, (yyvsp[0].array)->symbol->name, toString(1));
                        }
#line 2115 "y.tab.c"
    break;

  case 22: /* unary_expression: DECREMENT unary_expression  */
#line 363 "A5_17.y"
                        { 
                            // pre decrement, no new temporary simply subtract 1
                            yyinfo("unary_expression => -- unary_expression"); 
                            (yyval.array) = (yyvsp[0].array);
                            emit("-", (yyvsp[0].array)->symbol->name, (yyvsp[0].array)->symbol->name, toString(1));
                        }
#line 2126 "y.tab.c"
    break;

  case 23: /* unary_expression: unary_operator cast_expression  */
#line 370 "A5_17.y"
                        { 
                            yyinfo("unary_expression => unary_operator cast_expression");
                            if(strcmp((yyvsp[-1].unaryOperator), "&") == 0) {
                                // addressing, this generates a pointer, the subArray type will thus be the symbol type of the cast_expression
                                (yyval.array) = new Array();
                                (yyval.array)->symbol = gentemp(SymbolType::POINTER);
                                (yyval.array)->symbol->type->arrayType = (yyvsp[0].array)->symbol->type;
                                emit("=&", (yyval.array)->symbol->name, (yyvsp[0].array)->symbol->name);
                            } else if(strcmp((yyvsp[-1].unaryOperator), "*") == 0) {
                                // dereferncing, this generates a pointer, a new temporary generated with type as the subarray type of the cast_expression
                                // the subArray type will thus be one level deeper that of the cast_expression
                                (yyval.array) = new Array();
                                (yyval.array)->symbol = (yyvsp[0].array)->symbol;
                                (yyval.array)->temp = gentemp((yyvsp[0].array)->temp->type->arrayType->type);
                                (yyval.array)->temp->type->arrayType = (yyvsp[0].array)->temp->type->arrayType->arrayType;
                                (yyval.array)->type = Array::POINTER;
                                emit("=*", (yyval.array)->temp->name, (yyvsp[0].array)->temp->name);
                            } else if(strcmp((yyvsp[-1].unaryOperator), "+") == 0) {
                                (yyval.array) = (yyvsp[0].array);
                            } else { // for -, ~ and !
                                // simply apply the operator on cast_expression
                                (yyval.array) = new Array();
                                (yyval.array)->symbol = gentemp((yyvsp[0].array)->symbol->type->type);
                                emit((yyvsp[-1].unaryOperator), (yyval.array)->symbol->name, (yyvsp[0].array)->symbol->name);
                            }
                        }
#line 2157 "y.tab.c"
    break;

  case 24: /* unary_expression: SIZEOF unary_expression  */
#line 397 "A5_17.y"
                        { 
                            yyinfo("unary_expression => sizeof unary_expression"); 
                        }
#line 2165 "y.tab.c"
    break;

  case 25: /* unary_expression: SIZEOF LEFT_PARENTHESES type_name RIGHT_PARENTHESES  */
#line 401 "A5_17.y"
                        { 
                            yyinfo("unary_expression => sizeof ( type_name )"); 
                        }
#line 2173 "y.tab.c"
    break;

  case 26: /* unary_operator: BITWISE_AND  */
#line 412 "A5_17.y"
                    { 
                        yyinfo("unary_operator => &"); 
                        (yyval.unaryOperator) = strdup("&"); 
                    }
#line 2182 "y.tab.c"
    break;

  case 27: /* unary_operator: ASTERISK  */
#line 417 "A5_17.y"
                    { 
                        yyinfo("unary_operator => *"); 
                        (yyval.unaryOperator) = strdup("*"); 
                    }
#line 2191 "y.tab.c"
    break;

  case 28: /* unary_operator: PLUS  */
#line 422 "A5_17.y"
                    { 
                        yyinfo("unary_operator => +"); 
                        (yyval.unaryOperator) = strdup("+"); 
                    }
#line 2200 "y.tab.c"
    break;

  case 29: /* unary_operator: MINUS  */
#line 427 "A5_17.y"
                    { 
                        yyinfo("unary_operator => -"); 
                        (yyval.unaryOperator) = strdup("=-"); 
                    }
#line 2209 "y.tab.c"
    break;

  case 30: /* unary_operator: TILDE  */
#line 432 "A5_17.y"
                    { 
                        yyinfo("unary_operator => ~"); 
                        (yyval.unaryOperator) = strdup("~"); 
                    }
#line 2218 "y.tab.c"
    break;

  case 31: /* unary_operator: EXCLAMATION  */
#line 437 "A5_17.y"
                    { 
                        yyinfo("unary_operator => !"); 
                        (yyval.unaryOperator) = strdup("!"); 
                    }
#line 2227 "y.tab.c"
    break;

  case 32: /* cast_expression: unary_expression  */
#line 445 "A5_17.y"
                    { 
                        yyinfo("cast_expression => unary_expression"); 
                        (yyval.array) = (yyvsp[0].array);
                    }
#line 2236 "y.tab.c"
    break;

  case 33: /* cast_expression: LEFT_PARENTHESES type_name RIGHT_PARENTHESES cast_expression  */
#line 450 "A5_17.y"
                    { 
                        yyinfo("cast_expression => ( type_name ) cast_expression"); 
                        (yyval.array) = new Array();
                        (yyval.array)->symbol = (yyvsp[0].array)->symbol->convert(currentType);
                    }
#line 2246 "y.tab.c"
    break;

  case 34: /* multiplicative_expression: cast_expression  */
#line 472 "A5_17.y"
                                { 
                                    SymbolType *baseType = (yyvsp[0].array)->symbol->type;
                                    while(baseType->arrayType)
                                        baseType = baseType->arrayType;
                                    yyinfo("multiplicative_expression => cast_expression"); 
                                    (yyval.expression) = new Expression();
                                    if((yyvsp[0].array)->type == Array::ARRAY) {
                                        (yyval.expression)->symbol = gentemp(baseType->type);
                                        emit("=[]", (yyval.expression)->symbol->name, (yyvsp[0].array)->symbol->name, (yyvsp[0].array)->temp->name);
                                    } else if((yyvsp[0].array)->type == Array::POINTER) {
                                        (yyval.expression)->symbol = (yyvsp[0].array)->temp;
                                    } else {
                                        (yyval.expression)->symbol = (yyvsp[0].array)->symbol;
                                    }
                                }
#line 2266 "y.tab.c"
    break;

  case 35: /* multiplicative_expression: multiplicative_expression ASTERISK cast_expression  */
#line 488 "A5_17.y"
                                { 
                                    SymbolType *baseType = (yyvsp[0].array)->symbol->type;
                                    while(baseType->arrayType)
                                        baseType = baseType->arrayType;
                                    Symbol *temp;
                                    if((yyvsp[0].array)->type == Array::ARRAY) {
                                        temp = gentemp(baseType->type);
                                        emit("=[]", temp->name, (yyvsp[0].array)->symbol->name, (yyvsp[0].array)->temp->name);
                                    } else if((yyvsp[0].array)->type == Array::POINTER) {
                                        temp = (yyvsp[0].array)->temp;
                                    } else {
                                        temp = (yyvsp[0].array)->symbol;
                                    }
                                    yyinfo("multiplicative_expression => multiplicative_expression * cast_expression"); 
                                    if(typeCheck((yyvsp[-2].expression)->symbol, temp)) {
                                        (yyval.expression) = new Expression();
                                        (yyval.expression)->symbol = gentemp((yyvsp[-2].expression)->symbol->type->type);
                                        emit("*", (yyval.expression)->symbol->name, (yyvsp[-2].expression)->symbol->name, temp->name);
                                    } else {
                                        yyerror("Type error.");
                                    }
                                }
#line 2293 "y.tab.c"
    break;

  case 36: /* multiplicative_expression: multiplicative_expression SLASH cast_expression  */
#line 511 "A5_17.y"
                                { 
                                    SymbolType *baseType = (yyvsp[0].array)->symbol->type;
                                    while(baseType->arrayType)
                                        baseType = baseType->arrayType;
                                    Symbol *temp;
                                    if((yyvsp[0].array)->type == Array::ARRAY) {
                                        temp = gentemp(baseType->type);
                                        emit("=[]", temp->name, (yyvsp[0].array)->symbol->name, (yyvsp[0].array)->temp->name);
                                    } else if((yyvsp[0].array)->type == Array::POINTER) {
                                        temp = (yyvsp[0].array)->temp;
                                    } else {
                                        temp = (yyvsp[0].array)->symbol;
                                    }
                                    yyinfo("multiplicative_expression => multiplicative_expression / cast_expression");
                                    if(typeCheck((yyvsp[-2].expression)->symbol, temp)) {
                                        (yyval.expression) = new Expression();
                                        (yyval.expression)->symbol = gentemp((yyvsp[-2].expression)->symbol->type->type);
                                        emit("/", (yyval.expression)->symbol->name, (yyvsp[-2].expression)->symbol->name, temp->name);
                                    } else {
                                        yyerror("Type error.");
                                    }
                                }
#line 2320 "y.tab.c"
    break;

  case 37: /* multiplicative_expression: multiplicative_expression MODULO cast_expression  */
#line 534 "A5_17.y"
                                { 
                                    SymbolType *baseType = (yyvsp[0].array)->symbol->type;
                                    while(baseType->arrayType)
                                        baseType = baseType->arrayType;
                                    Symbol *temp;
                                    if((yyvsp[0].array)->type == Array::ARRAY) {
                                        temp = gentemp(baseType->type);
                                        emit("=[]", temp->name, (yyvsp[0].array)->symbol->name, (yyvsp[0].array)->temp->name);
                                    } else if((yyvsp[0].array)->type == Array::POINTER) {
                                        temp = (yyvsp[0].array)->temp;
                                    } else {
                                        temp = (yyvsp[0].array)->symbol;
                                    }
                                    yyinfo("multiplicative_expression => multiplicative_expression % cast_expression"); 
                                    if(typeCheck((yyvsp[-2].expression)->symbol, temp)) {
                                        (yyval.expression) = new Expression();
                                        (yyval.expression)->symbol = gentemp((yyvsp[-2].expression)->symbol->type->type);
                                        emit("%", (yyval.expression)->symbol->name, (yyvsp[-2].expression)->symbol->name, temp->name);
                                    } else {
                                        yyerror("Type error.");
                                    }
                                }
#line 2347 "y.tab.c"
    break;

  case 38: /* additive_expression: multiplicative_expression  */
#line 560 "A5_17.y"
                        { 
                            yyinfo("additive_expression => multiplicative_expression"); 
                            (yyval.expression) = (yyvsp[0].expression);
                        }
#line 2356 "y.tab.c"
    break;

  case 39: /* additive_expression: additive_expression PLUS multiplicative_expression  */
#line 565 "A5_17.y"
                        { 
                            yyinfo("additive_expression => additive_expression + multiplicative_expression"); 
                            if(typeCheck((yyvsp[-2].expression)->symbol, (yyvsp[0].expression)->symbol)) {
                                (yyval.expression) = new Expression();
                                (yyval.expression)->symbol = gentemp((yyvsp[-2].expression)->symbol->type->type);
                                emit("+", (yyval.expression)->symbol->name, (yyvsp[-2].expression)->symbol->name, (yyvsp[0].expression)->symbol->name);
                            } else {
                                yyerror("Type error.");
                            }
                        }
#line 2371 "y.tab.c"
    break;

  case 40: /* additive_expression: additive_expression MINUS multiplicative_expression  */
#line 576 "A5_17.y"
                        { 
                            yyinfo("additive_expression => additive_expression - multiplicative_expression"); 
                            if(typeCheck((yyvsp[-2].expression)->symbol, (yyvsp[0].expression)->symbol)) {
                                (yyval.expression) = new Expression();
                                (yyval.expression)->symbol = gentemp((yyvsp[-2].expression)->symbol->type->type);
                                emit("-", (yyval.expression)->symbol->name, (yyvsp[-2].expression)->symbol->name, (yyvsp[0].expression)->symbol->name);
                            } else {
                                yyerror("Type error.");
                            }
                        }
#line 2386 "y.tab.c"
    break;

  case 41: /* shift_expression: additive_expression  */
#line 590 "A5_17.y"
                        { 
                            yyinfo("shift_expression => additive_expression");
                            (yyval.expression) = (yyvsp[0].expression);
                        }
#line 2395 "y.tab.c"
    break;

  case 42: /* shift_expression: shift_expression LEFT_SHIFT additive_expression  */
#line 595 "A5_17.y"
                        { 
                            yyinfo("shift_expression => shift_expression << additive_expression"); 
                            if((yyvsp[0].expression)->symbol->type->type == SymbolType::INT) {
                                (yyval.expression) = new Expression();
                                (yyval.expression)->symbol = gentemp(SymbolType::INT);
                                emit("<<", (yyval.expression)->symbol->name, (yyvsp[-2].expression)->symbol->name, (yyvsp[0].expression)->symbol->name);
                            } else {
                                yyerror("Type error.");
                            }
                        }
#line 2410 "y.tab.c"
    break;

  case 43: /* shift_expression: shift_expression RIGHT_SHIFT additive_expression  */
#line 606 "A5_17.y"
                        { 
                            yyinfo("shift_expression => shift_expression >> additive_expression"); 
                            if((yyvsp[0].expression)->symbol->type->type == SymbolType::INT) {
                                (yyval.expression) = new Expression();
                                (yyval.expression)->symbol = gentemp(SymbolType::INT);
                                emit(">>", (yyval.expression)->symbol->name, (yyvsp[-2].expression)->symbol->name, (yyvsp[0].expression)->symbol->name);
                            } else {
                                yyerror("Type error.");
                            }
                        }
#line 2425 "y.tab.c"
    break;

  case 44: /* relational_expression: shift_expression  */
#line 629 "A5_17.y"
                            { 
                                yyinfo("relational_expression => shift_expression"); 
                                (yyval.expression) = (yyvsp[0].expression);
                            }
#line 2434 "y.tab.c"
    break;

  case 45: /* relational_expression: relational_expression LESS_THAN shift_expression  */
#line 634 "A5_17.y"
                            { 
                                yyinfo("relational_expression => relational_expression < shift_expression"); 
                                if(typeCheck((yyvsp[-2].expression)->symbol, (yyvsp[0].expression)->symbol)) {
                                    (yyval.expression) = new Expression();
                                    (yyval.expression)->type = Expression::BOOLEAN;
                                    (yyval.expression)->trueList = makeList(nextInstruction());
			                        (yyval.expression)->falseList = makeList(nextInstruction() + 1);
                                    emit("<", "", (yyvsp[-2].expression)->symbol->name, (yyvsp[0].expression)->symbol->name);
                                    emit("goto", "");
                                } else {
                                    yyerror("Type error.");
                                }
                            }
#line 2452 "y.tab.c"
    break;

  case 46: /* relational_expression: relational_expression GREATER_THAN shift_expression  */
#line 648 "A5_17.y"
                            { 
                                yyinfo("relational_expression => relational_expression > shift_expression"); 
                                if(typeCheck((yyvsp[-2].expression)->symbol, (yyvsp[0].expression)->symbol)) {
                                    (yyval.expression) = new Expression();
                                    (yyval.expression)->type = Expression::BOOLEAN;
                                    (yyval.expression)->trueList = makeList(nextInstruction());
			                        (yyval.expression)->falseList = makeList(nextInstruction() + 1);
                                    emit(">", "", (yyvsp[-2].expression)->symbol->name, (yyvsp[0].expression)->symbol->name);
                                    emit("goto", "");
                                } else {
                                    yyerror("Type error.");
                                }
                            }
#line 2470 "y.tab.c"
    break;

  case 47: /* relational_expression: relational_expression LESS_EQUAL_THAN shift_expression  */
#line 662 "A5_17.y"
                            { 
                                yyinfo("relational_expression => relational_expression <= shift_expression"); 
                                if(typeCheck((yyvsp[-2].expression)->symbol, (yyvsp[0].expression)->symbol)) {
                                    (yyval.expression) = new Expression();
                                    (yyval.expression)->type = Expression::BOOLEAN;
                                    (yyval.expression)->trueList = makeList(nextInstruction());
			                        (yyval.expression)->falseList = makeList(nextInstruction() + 1);
                                    emit("<=", "", (yyvsp[-2].expression)->symbol->name, (yyvsp[0].expression)->symbol->name);
                                    emit("goto", "");
                                } else {
                                    yyerror("Type error.");
                                }
                            }
#line 2488 "y.tab.c"
    break;

  case 48: /* relational_expression: relational_expression GREATER_EQUAL_THAN shift_expression  */
#line 676 "A5_17.y"
                            { 
                                yyinfo("relational_expression => relational_expression >= shift_expression"); 
                                if(typeCheck((yyvsp[-2].expression)->symbol, (yyvsp[0].expression)->symbol)) {
                                    (yyval.expression) = new Expression();
                                    (yyval.expression)->type = Expression::BOOLEAN;
                                    (yyval.expression)->trueList = makeList(nextInstruction());
			                        (yyval.expression)->falseList = makeList(nextInstruction() + 1);
                                    emit(">=", "", (yyvsp[-2].expression)->symbol->name, (yyvsp[0].expression)->symbol->name);
                                    emit("goto", "");
                                } else {
                                    yyerror("Type error.");
                                }
                            }
#line 2506 "y.tab.c"
    break;

  case 49: /* equality_expression: relational_expression  */
#line 693 "A5_17.y"
                        { 
                            yyinfo("equality_expression => relational_expression"); 
                            (yyval.expression) = (yyvsp[0].expression);
                        }
#line 2515 "y.tab.c"
    break;

  case 50: /* equality_expression: equality_expression EQUALS relational_expression  */
#line 698 "A5_17.y"
                        { 
                            yyinfo("equality_expression => equality_expression == relational_expression"); 
                            if(typeCheck((yyvsp[-2].expression)->symbol, (yyvsp[0].expression)->symbol)) {
                                (yyvsp[-2].expression)->toInt();
                                (yyvsp[0].expression)->toInt();
                                (yyval.expression) = new Expression();
                                (yyval.expression)->type = Expression::BOOLEAN;
                                (yyval.expression)->trueList = makeList(nextInstruction());
			                    (yyval.expression)->falseList = makeList(nextInstruction() + 1);
                                emit("==", "", (yyvsp[-2].expression)->symbol->name, (yyvsp[0].expression)->symbol->name);
                                emit("goto", "");
                            } else {
                                yyerror("Type error.");
                            }
                        }
#line 2535 "y.tab.c"
    break;

  case 51: /* equality_expression: equality_expression NOT_EQUALS relational_expression  */
#line 714 "A5_17.y"
                        { 
                            yyinfo("equality_expression => equality_expression != relational_expression"); 
                            if(typeCheck((yyvsp[-2].expression)->symbol, (yyvsp[0].expression)->symbol)) {
                                (yyvsp[-2].expression)->toInt();
                                (yyvsp[0].expression)->toInt();
                                (yyval.expression) = new Expression();
                                (yyval.expression)->type = Expression::BOOLEAN;
                                (yyval.expression)->trueList = makeList(nextInstruction());
			                    (yyval.expression)->falseList = makeList(nextInstruction() + 1);
                                emit("!=", "", (yyvsp[-2].expression)->symbol->name, (yyvsp[0].expression)->symbol->name);
                                emit("goto", "");
                            } else {
                                yyerror("Type error.");
                            }
                        }
#line 2555 "y.tab.c"
    break;

  case 52: /* AND_expression: equality_expression  */
#line 744 "A5_17.y"
                    { 
                        yyinfo("AND_expression => equality_expression"); 
                        (yyval.expression) = (yyvsp[0].expression);
                    }
#line 2564 "y.tab.c"
    break;

  case 53: /* AND_expression: AND_expression BITWISE_AND equality_expression  */
#line 749 "A5_17.y"
                    { 
                        yyinfo("AND_expression => AND_expression & equality_expression"); 
                        (yyvsp[-2].expression)->toInt();
                        (yyvsp[0].expression)->toInt();
                        (yyval.expression) = new Expression();
                        (yyval.expression)->type = Expression::NONBOOLEAN;
                        (yyval.expression)->symbol = gentemp(SymbolType::INT);
                        emit("&", (yyval.expression)->symbol->name, (yyvsp[-2].expression)->symbol->name, (yyvsp[0].expression)->symbol->name);
                    }
#line 2578 "y.tab.c"
    break;

  case 54: /* exclusive_OR_expression: AND_expression  */
#line 762 "A5_17.y"
                            { 
                                yyinfo("exclusive_OR_expression => AND_expression"); 
                                (yyval.expression) = (yyvsp[0].expression);
                            }
#line 2587 "y.tab.c"
    break;

  case 55: /* exclusive_OR_expression: exclusive_OR_expression BITWISE_XOR AND_expression  */
#line 767 "A5_17.y"
                            { 
                                yyinfo("exclusive_OR_expression => exclusive_OR_expression ^ AND_expression"); 
                                (yyvsp[-2].expression)->toInt();
                                (yyvsp[0].expression)->toInt();
                                (yyval.expression) = new Expression();
                                (yyval.expression)->type = Expression::NONBOOLEAN;
                                (yyval.expression)->symbol = gentemp(SymbolType::INT);
                                emit("^", (yyval.expression)->symbol->name, (yyvsp[-2].expression)->symbol->name, (yyvsp[0].expression)->symbol->name);
                            }
#line 2601 "y.tab.c"
    break;

  case 56: /* inclusive_OR_expression: exclusive_OR_expression  */
#line 780 "A5_17.y"
                            { 
                                yyinfo("inclusive_OR_expression => exclusive_OR_expression"); 
                                (yyval.expression) = (yyvsp[0].expression);
                            }
#line 2610 "y.tab.c"
    break;

  case 57: /* inclusive_OR_expression: inclusive_OR_expression BITWISE_OR exclusive_OR_expression  */
#line 785 "A5_17.y"
                            { 
                                yyinfo("inclusive_OR_expression => inclusive_OR_expression | exclusive_OR_expression"); 
                                (yyvsp[-2].expression)->toInt();
                                (yyvsp[0].expression)->toInt();
                                (yyval.expression) = new Expression();
                                (yyval.expression)->type = Expression::NONBOOLEAN;
                                (yyval.expression)->symbol = gentemp(SymbolType::INT);
                                emit("|", (yyval.expression)->symbol->name, (yyvsp[-2].expression)->symbol->name, (yyvsp[0].expression)->symbol->name);
                            }
#line 2624 "y.tab.c"
    break;

  case 58: /* M: %empty  */
#line 807 "A5_17.y"
        {
            yyinfo("M => epsilon");
            (yyval.instructionNumber) = nextInstruction();
        }
#line 2633 "y.tab.c"
    break;

  case 59: /* N: %empty  */
#line 814 "A5_17.y"
        {
            yyinfo("N => epsilon");
            (yyval.statement) = new Statement();
            (yyval.statement)->nextList = makeList(nextInstruction());
            emit("goto", "");
        }
#line 2644 "y.tab.c"
    break;

  case 60: /* logical_AND_expression: inclusive_OR_expression  */
#line 857 "A5_17.y"
                            { 
                                yyinfo("logical_AND_expression => inclusive_OR_expression"); 
                                (yyval.expression) = (yyvsp[0].expression);
                            }
#line 2653 "y.tab.c"
    break;

  case 61: /* logical_AND_expression: logical_AND_expression LOGICAL_AND M inclusive_OR_expression  */
#line 862 "A5_17.y"
                            { 
                                yyinfo("logical_AND_expression => logical_AND_expression && inclusive_OR_expression");
                                (yyvsp[-3].expression)->toBool();
                                (yyvsp[0].expression)->toBool();
                                (yyval.expression) = new Expression();
                                (yyval.expression)->type = Expression::BOOLEAN;
                                backpatch((yyvsp[-3].expression)->trueList, (yyvsp[-1].instructionNumber));
                                (yyval.expression)->trueList = (yyvsp[0].expression)->trueList;
                                (yyval.expression)->falseList = merge((yyvsp[-3].expression)->falseList, (yyvsp[0].expression)->falseList);
                            }
#line 2668 "y.tab.c"
    break;

  case 62: /* logical_OR_expression: logical_AND_expression  */
#line 876 "A5_17.y"
                            { 
                                yyinfo("logical_OR_expression => logical_AND_expression"); 
                                (yyval.expression) = (yyvsp[0].expression);
                            }
#line 2677 "y.tab.c"
    break;

  case 63: /* logical_OR_expression: logical_OR_expression LOGICAL_OR M logical_AND_expression  */
#line 881 "A5_17.y"
                            { 
                                yyinfo("logical_OR_expression => logical_OR_expression || logical_AND_expression"); 
                                (yyvsp[-3].expression)->toBool();
                                (yyvsp[0].expression)->toBool();
                                (yyval.expression) = new Expression();
                                (yyval.expression)->type = Expression::BOOLEAN;
                                backpatch((yyvsp[-3].expression)->falseList, (yyvsp[-1].instructionNumber));
                                (yyval.expression)->trueList = merge((yyvsp[-3].expression)->trueList, (yyvsp[0].expression)->trueList);
                                (yyval.expression)->falseList = (yyvsp[0].expression)->falseList;
                            }
#line 2692 "y.tab.c"
    break;

  case 64: /* conditional_expression: logical_OR_expression  */
#line 895 "A5_17.y"
                            { 
                                yyinfo("conditional_expression => logical_OR_expression"); 
                                (yyval.expression) = (yyvsp[0].expression);
                            }
#line 2701 "y.tab.c"
    break;

  case 65: /* conditional_expression: logical_OR_expression N QUESTION_MARK M expression N COLON M conditional_expression  */
#line 900 "A5_17.y"
                            { 
                                yyinfo("conditional_expression => logical_OR_expression ? expression : conditional_expression"); 
                                (yyval.expression)->symbol = gentemp((yyvsp[-4].expression)->symbol->type->type);
                                emit("=", (yyval.expression)->symbol->name, (yyvsp[0].expression)->symbol->name);
                                list<int> l = makeList(nextInstruction());
                                emit("goto", "");
                                backpatch((yyvsp[-3].statement)->nextList, nextInstruction());
                                emit("=", (yyval.expression)->symbol->name, (yyvsp[-4].expression)->symbol->name);
                                l = merge(l, makeList(nextInstruction()));
                                emit("goto", "");
                                backpatch((yyvsp[-7].statement)->nextList, nextInstruction());
                                (yyvsp[-8].expression)->toBool();
                                backpatch((yyvsp[-8].expression)->trueList, (yyvsp[-5].instructionNumber));
                                backpatch((yyvsp[-8].expression)->falseList, (yyvsp[-1].instructionNumber));
                                backpatch(l, nextInstruction());
                            }
#line 2722 "y.tab.c"
    break;

  case 66: /* assignment_expression: conditional_expression  */
#line 920 "A5_17.y"
                            { 
                                yyinfo("assignment_expression => conditional_expression"); 
                                (yyval.expression) = (yyvsp[0].expression);
                            }
#line 2731 "y.tab.c"
    break;

  case 67: /* assignment_expression: unary_expression assignment_operator assignment_expression  */
#line 925 "A5_17.y"
                            { 
                                yyinfo("assignment_expression => unary_expression assignment_operator assignment_expression"); 
                                if((yyvsp[-2].array)->type == Array::ARRAY) {
                                    // assignment to array
                                    (yyvsp[0].expression)->symbol = (yyvsp[0].expression)->symbol->convert((yyvsp[-2].array)->subArrayType->type);
                                    emit("[]=", (yyvsp[-2].array)->symbol->name, (yyvsp[-2].array)->temp->name, (yyvsp[0].expression)->symbol->name);
                                } else if((yyvsp[-2].array)->type == Array::POINTER) {
                                    // assignment to pointer
                                    (yyvsp[0].expression)->symbol = (yyvsp[0].expression)->symbol->convert((yyvsp[-2].array)->temp->type->type);
                                    emit("*=", (yyvsp[-2].array)->temp->name, (yyvsp[0].expression)->symbol->name);
                                } else {
                                    // assignment to other
                                    (yyvsp[0].expression)->symbol = (yyvsp[0].expression)->symbol->convert((yyvsp[-2].array)->symbol->type->type);
			                        emit("=", (yyvsp[-2].array)->symbol->name, (yyvsp[0].expression)->symbol->name);
                                }
                                (yyval.expression) = (yyvsp[0].expression);
                            }
#line 2753 "y.tab.c"
    break;

  case 68: /* assignment_operator: ASSIGNMENT  */
#line 946 "A5_17.y"
                        { 
                            yyinfo("assignment_operator => ="); 
                        }
#line 2761 "y.tab.c"
    break;

  case 69: /* assignment_operator: ASTERISK_ASSIGNMENT  */
#line 950 "A5_17.y"
                        { 
                            yyinfo("assignment_operator => *="); 
                        }
#line 2769 "y.tab.c"
    break;

  case 70: /* assignment_operator: SLASH_ASSIGNMENT  */
#line 954 "A5_17.y"
                        { 
                            yyinfo("assignment_operator => /="); 
                        }
#line 2777 "y.tab.c"
    break;

  case 71: /* assignment_operator: MODULO_ASSIGNMENT  */
#line 958 "A5_17.y"
                        { 
                            yyinfo("assignment_operator => %="); 
                        }
#line 2785 "y.tab.c"
    break;

  case 72: /* assignment_operator: PLUS_ASSIGNMENT  */
#line 962 "A5_17.y"
                        { 
                            yyinfo("assignment_operator => += "); 
                        }
#line 2793 "y.tab.c"
    break;

  case 73: /* assignment_operator: MINUS_ASSIGNMENT  */
#line 966 "A5_17.y"
                        { 
                            yyinfo("assignment_operator => -= "); 
                        }
#line 2801 "y.tab.c"
    break;

  case 74: /* assignment_operator: LEFT_SHIFT_ASSIGNMENT  */
#line 970 "A5_17.y"
                        { 
                            yyinfo("assignment_operator => <<="); 
                        }
#line 2809 "y.tab.c"
    break;

  case 75: /* assignment_operator: RIGHT_SHIFT_ASSIGNMENT  */
#line 974 "A5_17.y"
                        { 
                            yyinfo("assignment_operator => >>="); 
                        }
#line 2817 "y.tab.c"
    break;

  case 76: /* assignment_operator: BITWISE_AND_ASSIGNMENT  */
#line 978 "A5_17.y"
                        { 
                            yyinfo("assignment_operator => &="); 
                        }
#line 2825 "y.tab.c"
    break;

  case 77: /* assignment_operator: BITWISE_XOR_ASSIGNMENT  */
#line 982 "A5_17.y"
                        { 
                            yyinfo("assignment_operator => ^="); 
                        }
#line 2833 "y.tab.c"
    break;

  case 78: /* assignment_operator: BITWISE_OR_ASSIGNMENT  */
#line 986 "A5_17.y"
                        { 
                            yyinfo("assignment_operator => |="); 
                        }
#line 2841 "y.tab.c"
    break;

  case 79: /* expression: assignment_expression  */
#line 993 "A5_17.y"
                { 
                    yyinfo("expression => assignment_expression"); 
                    (yyval.expression) = (yyvsp[0].expression);
                }
#line 2850 "y.tab.c"
    break;

  case 80: /* expression: expression COMMA assignment_expression  */
#line 998 "A5_17.y"
                {
                     yyinfo("expression => expression , assignment_expression"); 
                }
#line 2858 "y.tab.c"
    break;

  case 81: /* constant_expression: conditional_expression  */
#line 1005 "A5_17.y"
                        {
                             yyinfo("constant_expression => conditional_expression"); 
                        }
#line 2866 "y.tab.c"
    break;

  case 82: /* declaration: declaration_specifiers init_declarator_list_opt SEMI_COLON  */
#line 1014 "A5_17.y"
                {
                     yyinfo("declaration => declaration_specifiers init_declarator_list_opt ;"); 
                }
#line 2874 "y.tab.c"
    break;

  case 83: /* init_declarator_list_opt: init_declarator_list  */
#line 1021 "A5_17.y"
                                {
                                     yyinfo("init_declarator_list_opt => init_declarator_list"); 
                                }
#line 2882 "y.tab.c"
    break;

  case 84: /* init_declarator_list_opt: %empty  */
#line 1025 "A5_17.y"
                                {
                                     yyinfo("init_declarator_list_opt => epsilon"); 
                                }
#line 2890 "y.tab.c"
    break;

  case 85: /* declaration_specifiers: storage_class_specifier declaration_specifiers_opt  */
#line 1032 "A5_17.y"
                            {
                                 yyinfo("declaration_specifiers => storage_class_specifier declaration_specifiers_opt"); 
                            }
#line 2898 "y.tab.c"
    break;

  case 86: /* declaration_specifiers: type_specifier declaration_specifiers_opt  */
#line 1036 "A5_17.y"
                            {
                                 yyinfo("declaration_specifiers => type_specifier declaration_specifiers_opt"); 
                            }
#line 2906 "y.tab.c"
    break;

  case 87: /* declaration_specifiers: type_qualifier declaration_specifiers_opt  */
#line 1040 "A5_17.y"
                            {
                                 yyinfo("declaration_specifiers => type_qualifier declaration_specifiers_opt"); 
                            }
#line 2914 "y.tab.c"
    break;

  case 88: /* declaration_specifiers: function_specifier declaration_specifiers_opt  */
#line 1044 "A5_17.y"
                            {
                                 yyinfo("declaration_specifiers => function_specifier declaration_specifiers_opt"); 
                            }
#line 2922 "y.tab.c"
    break;

  case 89: /* declaration_specifiers_opt: declaration_specifiers  */
#line 1051 "A5_17.y"
                                {
                                     yyinfo("declaration_specifiers_opt => declaration_specifiers"); 
                                }
#line 2930 "y.tab.c"
    break;

  case 90: /* declaration_specifiers_opt: %empty  */
#line 1055 "A5_17.y"
                                {
                                     yyinfo("declaration_specifiers_opt => epsilon "); 
                                }
#line 2938 "y.tab.c"
    break;

  case 91: /* init_declarator_list: init_declarator  */
#line 1062 "A5_17.y"
                            {
                                 yyinfo("init_declarator_list => init_declarator"); 
                            }
#line 2946 "y.tab.c"
    break;

  case 92: /* init_declarator_list: init_declarator_list COMMA init_declarator  */
#line 1066 "A5_17.y"
                            {
                                 yyinfo("init_declarator_list => init_declarator_list , init_declarator"); 
                            }
#line 2954 "y.tab.c"
    break;

  case 93: /* init_declarator: declarator  */
#line 1073 "A5_17.y"
                    { 
                        yyinfo("init_declarator => declarator"); 
                        (yyval.symbol) = (yyvsp[0].symbol);
                    }
#line 2963 "y.tab.c"
    break;

  case 94: /* init_declarator: declarator ASSIGNMENT initialiser  */
#line 1078 "A5_17.y"
                    { 
                        yyinfo("init_declarator => declarator = initialiser");
                        // if there is some initial value assign it 
                        if((yyvsp[0].symbol)->initialValue != "") 
                            (yyvsp[-2].symbol)->initialValue = (yyvsp[0].symbol)->initialValue;
                        // = assignment
		                emit("=", (yyvsp[-2].symbol)->name, (yyvsp[0].symbol)->name);
                    }
#line 2976 "y.tab.c"
    break;

  case 95: /* storage_class_specifier: EXTERN  */
#line 1090 "A5_17.y"
                            {
                                 yyinfo("storage_class_specifier => extern"); 
                            }
#line 2984 "y.tab.c"
    break;

  case 96: /* storage_class_specifier: STATIC  */
#line 1094 "A5_17.y"
                            {
                                 yyinfo("storage_class_specifier => static"); 
                            }
#line 2992 "y.tab.c"
    break;

  case 97: /* storage_class_specifier: AUTO  */
#line 1098 "A5_17.y"
                            {
                                 yyinfo("storage_class_specifier => auto"); 
                            }
#line 3000 "y.tab.c"
    break;

  case 98: /* storage_class_specifier: REGISTER  */
#line 1102 "A5_17.y"
                            {
                                 yyinfo("storage_class_specifier => register"); 
                            }
#line 3008 "y.tab.c"
    break;

  case 99: /* type_specifier: VOIDTYPE  */
#line 1109 "A5_17.y"
                    { 
                        yyinfo("type_specifier => void");
                        currentType = SymbolType::VOID;
                    }
#line 3017 "y.tab.c"
    break;

  case 100: /* type_specifier: CHARTYPE  */
#line 1114 "A5_17.y"
                    { 
                        yyinfo("type_specifier => char"); 
                        currentType = SymbolType::CHAR;
                    }
#line 3026 "y.tab.c"
    break;

  case 101: /* type_specifier: SHORT  */
#line 1119 "A5_17.y"
                    {
                         yyinfo("type_specifier => short"); 
                    }
#line 3034 "y.tab.c"
    break;

  case 102: /* type_specifier: INTTYPE  */
#line 1123 "A5_17.y"
                    { 
                        yyinfo("type_specifier => int"); 
                        currentType = SymbolType::INT;
                    }
#line 3043 "y.tab.c"
    break;

  case 103: /* type_specifier: LONG  */
#line 1128 "A5_17.y"
                    {
                         yyinfo("type_specifier => long"); 
                    }
#line 3051 "y.tab.c"
    break;

  case 104: /* type_specifier: DOUBLE  */
#line 1132 "A5_17.y"
                    {
                         yyinfo("type_specifier => double"); 
                    }
#line 3059 "y.tab.c"
    break;

  case 105: /* type_specifier: SIGNED  */
#line 1136 "A5_17.y"
                    {
                         yyinfo("type_specifier => signed"); 
                    }
#line 3067 "y.tab.c"
    break;

  case 106: /* type_specifier: UNSIGNED  */
#line 1140 "A5_17.y"
                    {
                         yyinfo("type_specifier => unsigned"); 
                    }
#line 3075 "y.tab.c"
    break;

  case 107: /* type_specifier: BOOL  */
#line 1144 "A5_17.y"
                    {
                         yyinfo("type_specifier => _Bool"); 
                    }
#line 3083 "y.tab.c"
    break;

  case 108: /* type_specifier: COMPLEX  */
#line 1148 "A5_17.y"
                    {
                         yyinfo("type_specifier => _Complex"); 
                    }
#line 3091 "y.tab.c"
    break;

  case 109: /* type_specifier: IMAGINARY  */
#line 1152 "A5_17.y"
                    {
                         yyinfo("type_specifier => _Imaginary"); 
                    }
#line 3099 "y.tab.c"
    break;

  case 110: /* type_specifier: enum_specifier  */
#line 1156 "A5_17.y"
                    {
                         yyinfo("type_specifier => enum_specifier"); 
                    }
#line 3107 "y.tab.c"
    break;

  case 111: /* specifier_qualifier_list: type_specifier specifier_qualifier_list_opt  */
#line 1163 "A5_17.y"
                                { 
                                    yyinfo("specifier_qualifier_list => type_specifier specifier_qualifier_list_opt"); 
                                }
#line 3115 "y.tab.c"
    break;

  case 112: /* specifier_qualifier_list: type_qualifier specifier_qualifier_list_opt  */
#line 1167 "A5_17.y"
                                { 
                                    yyinfo("specifier_qualifier_list => type_qualifier specifier_qualifier_list_opt"); 
                                }
#line 3123 "y.tab.c"
    break;

  case 113: /* specifier_qualifier_list_opt: specifier_qualifier_list  */
#line 1174 "A5_17.y"
                                    { 
                                        yyinfo("specifier_qualifier_list_opt => specifier_qualifier_list"); 
                                    }
#line 3131 "y.tab.c"
    break;

  case 114: /* specifier_qualifier_list_opt: %empty  */
#line 1178 "A5_17.y"
                                    { 
                                        yyinfo("specifier_qualifier_list_opt => epsilon"); 
                                    }
#line 3139 "y.tab.c"
    break;

  case 115: /* enum_specifier: ENUM identifier_opt LEFT_CURLY_BRACKET enumerator_list RIGHT_CURLY_BRACKET  */
#line 1185 "A5_17.y"
                    { 
                        yyinfo("enum_specifier => enum identifier_opt { enumerator_list }"); 
                    }
#line 3147 "y.tab.c"
    break;

  case 116: /* enum_specifier: ENUM identifier_opt LEFT_CURLY_BRACKET enumerator_list COMMA RIGHT_CURLY_BRACKET  */
#line 1189 "A5_17.y"
                    { 
                        yyinfo("enum_specifier => enum identifier_opt { enumerator_list , }"); 
                    }
#line 3155 "y.tab.c"
    break;

  case 117: /* enum_specifier: ENUM IDENTIFIER  */
#line 1193 "A5_17.y"
                    { 
                        yyinfo("enum_specifier => enum IDENTIFIER"); 
                    }
#line 3163 "y.tab.c"
    break;

  case 118: /* identifier_opt: IDENTIFIER  */
#line 1200 "A5_17.y"
                    { 
                        yyinfo("identifier_opt => IDENTIFIER"); 
                    }
#line 3171 "y.tab.c"
    break;

  case 119: /* identifier_opt: %empty  */
#line 1204 "A5_17.y"
                    { 
                        yyinfo("identifier_opt => epsilon"); 
                    }
#line 3179 "y.tab.c"
    break;

  case 120: /* enumerator_list: enumerator  */
#line 1211 "A5_17.y"
                    { 
                        yyinfo("enumerator_list => enumerator"); 
                    }
#line 3187 "y.tab.c"
    break;

  case 121: /* enumerator_list: enumerator_list COMMA enumerator  */
#line 1215 "A5_17.y"
                    { 
                        yyinfo("enumerator_list => enumerator_list , enumerator"); 
                    }
#line 3195 "y.tab.c"
    break;

  case 122: /* enumerator: IDENTIFIER  */
#line 1222 "A5_17.y"
                { 
                    yyinfo("enumerator => ENUMERATION_CONSTANT"); 
                }
#line 3203 "y.tab.c"
    break;

  case 123: /* enumerator: IDENTIFIER ASSIGNMENT constant_expression  */
#line 1226 "A5_17.y"
                { 
                    yyinfo("enumerator => ENUMERATION_CONSTANT = constant_expression"); 
                }
#line 3211 "y.tab.c"
    break;

  case 124: /* type_qualifier: CONST  */
#line 1233 "A5_17.y"
                    { 
                        yyinfo("type_qualifier => const"); 
                    }
#line 3219 "y.tab.c"
    break;

  case 125: /* type_qualifier: RESTRICT  */
#line 1237 "A5_17.y"
                    { 
                        yyinfo("type_qualifier => restrict"); 
                    }
#line 3227 "y.tab.c"
    break;

  case 126: /* type_qualifier: VOLATILE  */
#line 1241 "A5_17.y"
                    { 
                        yyinfo("type_qualifier => volatile"); 
                    }
#line 3235 "y.tab.c"
    break;

  case 127: /* function_specifier: INLINE  */
#line 1248 "A5_17.y"
                        { 
                            yyinfo("function_specifier => inline"); 
                        }
#line 3243 "y.tab.c"
    break;

  case 128: /* declarator: pointer direct_declarator  */
#line 1255 "A5_17.y"
                { 
                    yyinfo("declarator => pointer direct_declarator"); 
                    SymbolType *it = (yyvsp[-1].symbolType);
                    while(it->arrayType != NULL) 
                        it = it->arrayType;
                    it->arrayType = (yyvsp[0].symbol)->type;
                    (yyval.symbol) = (yyvsp[0].symbol)->update((yyvsp[-1].symbolType));
                }
#line 3256 "y.tab.c"
    break;

  case 129: /* declarator: direct_declarator  */
#line 1264 "A5_17.y"
                { 
                    yyinfo("declarator => direct_declarator"); 
                }
#line 3264 "y.tab.c"
    break;

  case 130: /* change_scope: %empty  */
#line 1270 "A5_17.y"
                    {
                        if(currentSymbol->nestedTable == NULL) {
                            changeTable(new SymbolTable(""));
                        }
                        else {
                            changeTable(currentSymbol->nestedTable);
                            emit("label", currentTable->name);
                        }
                    }
#line 3278 "y.tab.c"
    break;

  case 131: /* direct_declarator: IDENTIFIER  */
#line 1289 "A5_17.y"
                        { 
                            yyinfo("direct_declarator => IDENTIFIER"); 
                            (yyval.symbol) = (yyvsp[0].symbol)->update(new SymbolType(currentType)); // update type to the last type seen
                            currentSymbol = (yyval.symbol);
                        }
#line 3288 "y.tab.c"
    break;

  case 132: /* direct_declarator: LEFT_PARENTHESES declarator RIGHT_PARENTHESES  */
#line 1295 "A5_17.y"
                        { 
                            yyinfo("direct_declarator => ( declarator )"); 
                            (yyval.symbol) = (yyvsp[-1].symbol);
                        }
#line 3297 "y.tab.c"
    break;

  case 133: /* direct_declarator: direct_declarator LEFT_SQUARE_BRACKET type_qualifier_list assignment_expression RIGHT_SQUARE_BRACKET  */
#line 1300 "A5_17.y"
                        { 
                            yyinfo("direct_declarator => direct_declarator [ type_qualifier_list assignment_expression ]"); 
                        }
#line 3305 "y.tab.c"
    break;

  case 134: /* direct_declarator: direct_declarator LEFT_SQUARE_BRACKET type_qualifier_list RIGHT_SQUARE_BRACKET  */
#line 1304 "A5_17.y"
                        { 
                            yyinfo("direct_declarator => direct_declarator [ type_qualifier_list ]"); 
                        }
#line 3313 "y.tab.c"
    break;

  case 135: /* direct_declarator: direct_declarator LEFT_SQUARE_BRACKET assignment_expression RIGHT_SQUARE_BRACKET  */
#line 1308 "A5_17.y"
                        { 
                            yyinfo("direct_declarator => direct_declarator [ assignment_expression ]"); 
                            SymbolType *it1 = (yyvsp[-3].symbol)->type, *it2 = NULL;
                            while(it1->type == SymbolType::ARRAY) { // go to the base level of a nested type
                                it2 = it1;
                                it1 = it1->arrayType;
                            }
                            if(it2 != NULL) { // nested array case
                                // another level of nesting with base as it1 and width the value of assignment_expression
                                it2->arrayType =  new SymbolType(SymbolType::ARRAY, it1, atoi((yyvsp[-1].expression)->symbol->initialValue.c_str()));	
                                (yyval.symbol) = (yyvsp[-3].symbol)->update((yyvsp[-3].symbol)->type);
                            }
                            else { // fresh array
                                // create a new array with base as type of direct_declarator and width the value of assignment_expression
                                (yyval.symbol) = (yyvsp[-3].symbol)->update(new SymbolType(SymbolType::ARRAY, (yyvsp[-3].symbol)->type, atoi((yyvsp[-1].expression)->symbol->initialValue.c_str())));
                            }
                        }
#line 3335 "y.tab.c"
    break;

  case 136: /* direct_declarator: direct_declarator LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET  */
#line 1326 "A5_17.y"
                        { 
                            yyinfo("direct_declarator => direct_declarator [ ]"); 
                            // same as the previous rule, just we dont know the size so put it as 0
                            SymbolType *it1 = (yyvsp[-2].symbol)->type, *it2 = NULL;
                            while(it1->type == SymbolType::ARRAY) { // go to the base level of a nested type
                                it2 = it1;
                                it1 = it1->arrayType;
                            }
                            if(it2 != NULL) { // nested array case
                                // another level of nesting with base as it1 and width the value of assignment_expression
                                it2->arrayType =  new SymbolType(SymbolType::ARRAY, it1, 0);	
                                (yyval.symbol) = (yyvsp[-2].symbol)->update((yyvsp[-2].symbol)->type);
                            }
                            else { // fresh array
                                // create a new array with base as type of direct_declarator and width the value of assignment_expression
                                (yyval.symbol) = (yyvsp[-2].symbol)->update(new SymbolType(SymbolType::ARRAY, (yyvsp[-2].symbol)->type, 0));
                            }
                        }
#line 3358 "y.tab.c"
    break;

  case 137: /* direct_declarator: direct_declarator LEFT_SQUARE_BRACKET STATIC type_qualifier_list assignment_expression RIGHT_SQUARE_BRACKET  */
#line 1345 "A5_17.y"
                        { 
                            yyinfo("direct_declarator => direct_declarator [ static type_qualifier_list assignment_expression ]"); 
                        }
#line 3366 "y.tab.c"
    break;

  case 138: /* direct_declarator: direct_declarator LEFT_SQUARE_BRACKET STATIC assignment_expression RIGHT_SQUARE_BRACKET  */
#line 1349 "A5_17.y"
                        { 
                            yyinfo("direct_declarator => direct_declarator [ assignment_expression ]"); 
                        }
#line 3374 "y.tab.c"
    break;

  case 139: /* direct_declarator: direct_declarator LEFT_SQUARE_BRACKET type_qualifier_list STATIC assignment_expression RIGHT_SQUARE_BRACKET  */
#line 1353 "A5_17.y"
                        { 
                            yyinfo("direct_declarator => direct_declarator [ type_qualifier_list static assignment_expression ]"); 
                        }
#line 3382 "y.tab.c"
    break;

  case 140: /* direct_declarator: direct_declarator LEFT_SQUARE_BRACKET type_qualifier_list ASTERISK RIGHT_SQUARE_BRACKET  */
#line 1357 "A5_17.y"
                        { 
                            yyinfo("direct_declarator => direct_declarator [ type_qualifier_list * ]"); 
                        }
#line 3390 "y.tab.c"
    break;

  case 141: /* direct_declarator: direct_declarator LEFT_SQUARE_BRACKET ASTERISK RIGHT_SQUARE_BRACKET  */
#line 1361 "A5_17.y"
                        { 
                            yyinfo("direct_declarator => direct_declarator [ * ]"); 
                        }
#line 3398 "y.tab.c"
    break;

  case 142: /* direct_declarator: direct_declarator LEFT_PARENTHESES change_scope parameter_type_list RIGHT_PARENTHESES  */
#line 1365 "A5_17.y"
                        { 
                            yyinfo("direct_declarator => direct_declarator ( parameter_type_list )"); 
                            // function declaration
                            currentTable->name = (yyvsp[-4].symbol)->name;
                            if((yyvsp[-4].symbol)->type->type != SymbolType::VOID) {
                                // set type of return value
                                currentTable->lookup("return")->update((yyvsp[-4].symbol)->type);
                            }
                            // move back to the global table and set the nested table for the function
                            (yyvsp[-4].symbol)->nestedTable = currentTable;
                            currentTable->parent = globalTable;
                            changeTable(globalTable);
                            currentSymbol = (yyval.symbol);
                        }
#line 3417 "y.tab.c"
    break;

  case 143: /* direct_declarator: direct_declarator LEFT_PARENTHESES identifier_list RIGHT_PARENTHESES  */
#line 1380 "A5_17.y"
                        { 
                            yyinfo("direct_declarator => direct_declarator ( identifier_list )"); 
                        }
#line 3425 "y.tab.c"
    break;

  case 144: /* direct_declarator: direct_declarator LEFT_PARENTHESES change_scope RIGHT_PARENTHESES  */
#line 1384 "A5_17.y"
                        { 
                            yyinfo("direct_declarator => direct_declarator ( )"); 
                            // same as the previous rule
                            currentTable->name = (yyvsp[-3].symbol)->name;
                            if((yyvsp[-3].symbol)->type->type != SymbolType::VOID) {
                                // set type of return value
                                currentTable->lookup("return")->update((yyvsp[-3].symbol)->type);
                            }
                            // move back to the global table and set the nested table for the function
                            (yyvsp[-3].symbol)->nestedTable = currentTable;
                            currentTable->parent = globalTable;
                            changeTable(globalTable);
                            currentSymbol = (yyval.symbol);
                        }
#line 3444 "y.tab.c"
    break;

  case 145: /* type_qualifier_list_opt: type_qualifier_list  */
#line 1402 "A5_17.y"
                            { 
                                yyinfo("type_qualifier_list_opt => type_qualifier_list"); 
                            }
#line 3452 "y.tab.c"
    break;

  case 146: /* type_qualifier_list_opt: %empty  */
#line 1406 "A5_17.y"
                            { 
                                yyinfo("type_qualifier_list_opt => epsilon"); 
                            }
#line 3460 "y.tab.c"
    break;

  case 147: /* pointer: ASTERISK type_qualifier_list_opt  */
#line 1442 "A5_17.y"
            { 
                yyinfo("pointer => * type_qualifier_list_opt"); 
                // fresh pointer
                (yyval.symbolType) = new SymbolType(SymbolType::POINTER);
            }
#line 3470 "y.tab.c"
    break;

  case 148: /* pointer: ASTERISK type_qualifier_list_opt pointer  */
#line 1448 "A5_17.y"
            { 
                yyinfo("pointer => * type_qualifier_list_opt pointer"); 
                // nested pointer
                (yyval.symbolType) = new SymbolType(SymbolType::POINTER, (yyvsp[0].symbolType));
            }
#line 3480 "y.tab.c"
    break;

  case 149: /* type_qualifier_list: type_qualifier  */
#line 1457 "A5_17.y"
                        { 
                            yyinfo("type_qualifier_list => type_qualifier"); 
                        }
#line 3488 "y.tab.c"
    break;

  case 150: /* type_qualifier_list: type_qualifier_list type_qualifier  */
#line 1461 "A5_17.y"
                        { 
                            yyinfo("type_qualifier_list => type_qualifier_list type_qualifier"); 
                        }
#line 3496 "y.tab.c"
    break;

  case 151: /* parameter_type_list: parameter_list  */
#line 1468 "A5_17.y"
                        { 
                            yyinfo("parameter_type_list => parameter_list"); 
                        }
#line 3504 "y.tab.c"
    break;

  case 152: /* parameter_type_list: parameter_list COMMA ELLIPSIS  */
#line 1472 "A5_17.y"
                        { 
                            yyinfo("parameter_type_list => parameter_list , ..."); 
                        }
#line 3512 "y.tab.c"
    break;

  case 153: /* parameter_list: parameter_declaration  */
#line 1479 "A5_17.y"
                    { 
                        yyinfo("parameter_list => parameter_declaration"); 
                    }
#line 3520 "y.tab.c"
    break;

  case 154: /* parameter_list: parameter_list COMMA parameter_declaration  */
#line 1483 "A5_17.y"
                    { 
                        yyinfo("parameter_list => parameter_list , parameter_declaration"); 
                    }
#line 3528 "y.tab.c"
    break;

  case 155: /* parameter_declaration: declaration_specifiers declarator  */
#line 1490 "A5_17.y"
                            { 
                                yyinfo("parameter_declaration => declaration_specifiers declarator"); 
                            }
#line 3536 "y.tab.c"
    break;

  case 156: /* parameter_declaration: declaration_specifiers  */
#line 1494 "A5_17.y"
                            { 
                                yyinfo("parameter_declaration => declaration_specifiers"); 
                            }
#line 3544 "y.tab.c"
    break;

  case 157: /* identifier_list: IDENTIFIER  */
#line 1501 "A5_17.y"
                    { 
                        yyinfo("identifier_list => IDENTIFIER"); 
                    }
#line 3552 "y.tab.c"
    break;

  case 158: /* identifier_list: identifier_list COMMA IDENTIFIER  */
#line 1505 "A5_17.y"
                    { 
                        yyinfo("identifier_list => identifier_list , IDENTIFIER"); 
                    }
#line 3560 "y.tab.c"
    break;

  case 159: /* type_name: specifier_qualifier_list  */
#line 1512 "A5_17.y"
                { 
                    yyinfo("type_name => specifier_qualifier_list"); 
                }
#line 3568 "y.tab.c"
    break;

  case 160: /* initialiser: assignment_expression  */
#line 1519 "A5_17.y"
                { 
                    yyinfo("initialiser => assignment_expression"); 
                    (yyval.symbol) = (yyvsp[0].expression)->symbol;
                }
#line 3577 "y.tab.c"
    break;

  case 161: /* initialiser: LEFT_CURLY_BRACKET initialiser_list RIGHT_CURLY_BRACKET  */
#line 1524 "A5_17.y"
                { 
                    yyinfo("initialiser => { initialiser_list }"); 
                }
#line 3585 "y.tab.c"
    break;

  case 162: /* initialiser: LEFT_CURLY_BRACKET initialiser_list COMMA RIGHT_CURLY_BRACKET  */
#line 1528 "A5_17.y"
                { 
                    yyinfo("initialiser => { initialiser_list , }"); 
                }
#line 3593 "y.tab.c"
    break;

  case 163: /* initialiser_list: designation_opt initialiser  */
#line 1535 "A5_17.y"
                        { 
                            yyinfo("initialiser_list => designation_opt initialiser"); 
                        }
#line 3601 "y.tab.c"
    break;

  case 164: /* initialiser_list: initialiser_list COMMA designation_opt initialiser  */
#line 1539 "A5_17.y"
                        { 
                            yyinfo("initialiser_list => initialiser_list , designation_opt initialiser"); 
                        }
#line 3609 "y.tab.c"
    break;

  case 165: /* designation_opt: designation  */
#line 1546 "A5_17.y"
                    { 
                        yyinfo("designation_opt => designation"); 
                    }
#line 3617 "y.tab.c"
    break;

  case 166: /* designation_opt: %empty  */
#line 1550 "A5_17.y"
                    { 
                        yyinfo("designation_opt => epsilon"); 
                    }
#line 3625 "y.tab.c"
    break;

  case 167: /* designation: designator_list ASSIGNMENT  */
#line 1557 "A5_17.y"
                { 
                    yyinfo("designation => designator_list ="); 
                }
#line 3633 "y.tab.c"
    break;

  case 168: /* designator_list: designator  */
#line 1564 "A5_17.y"
                    { 
                        yyinfo("designator_list => designator"); 
                    }
#line 3641 "y.tab.c"
    break;

  case 169: /* designator_list: designator_list designator  */
#line 1568 "A5_17.y"
                    { 
                        yyinfo("designator_list => designator_list designator"); 
                    }
#line 3649 "y.tab.c"
    break;

  case 170: /* designator: LEFT_SQUARE_BRACKET constant_expression RIGHT_SQUARE_BRACKET  */
#line 1575 "A5_17.y"
                { 
                    yyinfo("designator => [ constant_expression ]"); 
                }
#line 3657 "y.tab.c"
    break;

  case 171: /* designator: DOT IDENTIFIER  */
#line 1579 "A5_17.y"
                { 
                    yyinfo("designator => . IDENTIFIER"); 
                }
#line 3665 "y.tab.c"
    break;

  case 172: /* statement: labeled_statement  */
#line 1588 "A5_17.y"
                { 
                    yyinfo("statement => labeled_statement"); 
                }
#line 3673 "y.tab.c"
    break;

  case 173: /* statement: compound_statement  */
#line 1592 "A5_17.y"
                { 
                    yyinfo("statement => compound_statement");
                    (yyval.statement) = (yyvsp[0].statement); 
                }
#line 3682 "y.tab.c"
    break;

  case 174: /* statement: expression_statement  */
#line 1597 "A5_17.y"
                { 
                    yyinfo("statement => expression_statement"); 
                    (yyval.statement) = new Statement();
                    (yyval.statement)->nextList = (yyvsp[0].expression)->nextList;
                }
#line 3692 "y.tab.c"
    break;

  case 175: /* statement: selection_statement  */
#line 1603 "A5_17.y"
                { 
                    yyinfo("statement => selection_statement"); 
                    (yyval.statement) = (yyvsp[0].statement);
                }
#line 3701 "y.tab.c"
    break;

  case 176: /* statement: iteration_statement  */
#line 1608 "A5_17.y"
                { 
                    yyinfo("statement => iteration_statement"); 
                    (yyval.statement) = (yyvsp[0].statement);
                }
#line 3710 "y.tab.c"
    break;

  case 177: /* statement: jump_statement  */
#line 1613 "A5_17.y"
                { 
                    yyinfo("statement => jump_statement"); 
                    (yyval.statement) = (yyvsp[0].statement);
                }
#line 3719 "y.tab.c"
    break;

  case 178: /* labeled_statement: IDENTIFIER COLON statement  */
#line 1621 "A5_17.y"
                        { 
                            yyinfo("labeled_statement => IDENTIFIER : statement"); 
                        }
#line 3727 "y.tab.c"
    break;

  case 179: /* labeled_statement: CASE constant_expression COLON statement  */
#line 1625 "A5_17.y"
                        { 
                            yyinfo("labeled_statement => case constant_expression : statement"); 
                        }
#line 3735 "y.tab.c"
    break;

  case 180: /* labeled_statement: DEFAULT COLON statement  */
#line 1629 "A5_17.y"
                        { 
                            yyinfo("labeled_statement => default : statement"); 
                        }
#line 3743 "y.tab.c"
    break;

  case 181: /* change_block: %empty  */
#line 1642 "A5_17.y"
                    {
                        string name = currentTable->name + "_" + toString(tableCount);
                        tableCount++;
                        Symbol *s = currentTable->lookup(name); // create new entry in symbol table
                        s->nestedTable = new SymbolTable(name, currentTable);
                        s->type = new SymbolType(SymbolType::BLOCK);
                        currentSymbol = s;
                    }
#line 3756 "y.tab.c"
    break;

  case 182: /* compound_statement: LEFT_CURLY_BRACKET change_block change_scope block_item_list_opt RIGHT_CURLY_BRACKET  */
#line 1654 "A5_17.y"
                        { 
                            yyinfo("compound_statement => { block_item_list_opt }"); 
                            (yyval.statement) = (yyvsp[-1].statement);
                            changeTable(currentTable->parent); // block over, move back to the parent table
                        }
#line 3766 "y.tab.c"
    break;

  case 183: /* block_item_list_opt: block_item_list  */
#line 1663 "A5_17.y"
                        { 
                            yyinfo("block_item_list_opt => block_item_list"); 
                            (yyval.statement) = (yyvsp[0].statement);
                        }
#line 3775 "y.tab.c"
    break;

  case 184: /* block_item_list_opt: %empty  */
#line 1668 "A5_17.y"
                        { 
                            yyinfo("block_item_list_opt => epsilon"); 
                            (yyval.statement) = new Statement();
                        }
#line 3784 "y.tab.c"
    break;

  case 185: /* block_item_list: block_item  */
#line 1676 "A5_17.y"
                    {
                        yyinfo("block_item_list => block_item"); 
                        (yyval.statement) = (yyvsp[0].statement);
                    }
#line 3793 "y.tab.c"
    break;

  case 186: /* block_item_list: block_item_list M block_item  */
#line 1681 "A5_17.y"
                    { 
                        yyinfo("block_item_list => block_item_list block_item"); 
                        (yyval.statement) = (yyvsp[0].statement);
                        // after completion of block_item_list(1) we move to block_item(3)
                        backpatch((yyvsp[-2].statement)->nextList,(yyvsp[-1].instructionNumber));
                    }
#line 3804 "y.tab.c"
    break;

  case 187: /* block_item: declaration  */
#line 1691 "A5_17.y"
                { 
                    yyinfo("block_item => declaration"); 
                    (yyval.statement) = new Statement();
                }
#line 3813 "y.tab.c"
    break;

  case 188: /* block_item: statement  */
#line 1696 "A5_17.y"
                { 
                    yyinfo("block_item => statement"); 
                    (yyval.statement) = (yyvsp[0].statement);
                }
#line 3822 "y.tab.c"
    break;

  case 189: /* expression_statement: expression_opt SEMI_COLON  */
#line 1704 "A5_17.y"
                            { 
                                yyinfo("expression_statement => expression_opt ;"); 
                                (yyval.expression) = (yyvsp[-1].expression);
                            }
#line 3831 "y.tab.c"
    break;

  case 190: /* expression_opt: expression  */
#line 1712 "A5_17.y"
                    { 
                        yyinfo("expression_opt => expression"); 
                        (yyval.expression) = (yyvsp[0].expression);
                    }
#line 3840 "y.tab.c"
    break;

  case 191: /* expression_opt: %empty  */
#line 1717 "A5_17.y"
                    { 
                        yyinfo("expression_opt => epsilon"); 
                        (yyval.expression) = new Expression();
                    }
#line 3849 "y.tab.c"
    break;

  case 192: /* selection_statement: IF LEFT_PARENTHESES expression RIGHT_PARENTHESES M statement N  */
#line 1744 "A5_17.y"
                        { 
                            yyinfo("selection_statement => if ( expression ) statement"); 
                            (yyval.statement) = new Statement();
                            (yyvsp[-4].expression)->toBool();
                            backpatch((yyvsp[-4].expression)->trueList, (yyvsp[-2].instructionNumber)); // if true go to M
                            (yyval.statement)->nextList = merge((yyvsp[-4].expression)->falseList, merge((yyvsp[-1].statement)->nextList, (yyvsp[0].statement)->nextList)); // exits
                        }
#line 3861 "y.tab.c"
    break;

  case 193: /* selection_statement: IF LEFT_PARENTHESES expression RIGHT_PARENTHESES M statement N ELSE M statement  */
#line 1752 "A5_17.y"
                        { 
                            yyinfo("selection_statement => if ( expression ) statement else statement"); 
                            (yyval.statement) = new Statement();
                            (yyvsp[-7].expression)->toBool();
                            backpatch((yyvsp[-7].expression)->trueList, (yyvsp[-5].instructionNumber)); // if true go to M
                            backpatch((yyvsp[-7].expression)->falseList, (yyvsp[-1].instructionNumber)); // if false go to else
                            (yyval.statement)->nextList = merge((yyvsp[0].statement)->nextList, merge((yyvsp[-4].statement)->nextList, (yyvsp[-3].statement)->nextList)); // exits
                        }
#line 3874 "y.tab.c"
    break;

  case 194: /* selection_statement: SWITCH LEFT_PARENTHESES expression RIGHT_PARENTHESES statement  */
#line 1761 "A5_17.y"
                        { 
                            yyinfo("selection_statement => switch ( expression ) statement"); 
                        }
#line 3882 "y.tab.c"
    break;

  case 195: /* iteration_statement: WHILE M LEFT_PARENTHESES expression RIGHT_PARENTHESES M statement  */
#line 1792 "A5_17.y"
                        { 
                            yyinfo("iteration_statement => while ( expression ) statement"); 
                            (yyval.statement) = new Statement();
                            (yyvsp[-3].expression)->toBool();
                            backpatch((yyvsp[0].statement)->nextList, (yyvsp[-5].instructionNumber)); // after statement go back to M1
                            backpatch((yyvsp[-3].expression)->trueList, (yyvsp[-1].instructionNumber)); // if true go to M2
                            (yyval.statement)->nextList = (yyvsp[-3].expression)->falseList; // exit if false
                            emit("goto", toString((yyvsp[-5].instructionNumber)));
                        }
#line 3896 "y.tab.c"
    break;

  case 196: /* iteration_statement: DO M statement M WHILE LEFT_PARENTHESES expression RIGHT_PARENTHESES SEMI_COLON  */
#line 1802 "A5_17.y"
                        { 
                            yyinfo("iteration_statement => do statement while ( expression ) ;"); 
                            (yyval.statement) = new Statement();
                            (yyvsp[-2].expression)->toBool();
                            backpatch((yyvsp[-2].expression)->trueList, (yyvsp[-7].instructionNumber)); // if true go back to M1
                            backpatch((yyvsp[-6].statement)->nextList, (yyvsp[-5].instructionNumber)); // after statement is executed go to M2
                            (yyval.statement)->nextList = (yyvsp[-2].expression)->falseList; // exit if false
                        }
#line 3909 "y.tab.c"
    break;

  case 197: /* iteration_statement: FOR LEFT_PARENTHESES expression_opt SEMI_COLON M expression_opt SEMI_COLON M expression_opt N RIGHT_PARENTHESES M statement  */
#line 1811 "A5_17.y"
                        { 
                            yyinfo("iteration_statement => for ( expression_opt ; expression_opt ; expression_opt ) statement"); 
                            (yyval.statement) = new Statement();
                            (yyvsp[-7].expression)->toBool();
                            backpatch((yyvsp[-7].expression)->trueList, (yyvsp[-1].instructionNumber)); // if true go to M3 (loop body)
                            backpatch((yyvsp[-3].statement)->nextList, (yyvsp[-8].instructionNumber)); // after N go to M1 (condition check)
                            backpatch((yyvsp[0].statement)->nextList, (yyvsp[-5].instructionNumber)); // after S1 (loop body) go to M2 (increment/decrement/any other operation)
                            emit("goto", toString((yyvsp[-5].instructionNumber)));
                            (yyval.statement)->nextList = (yyvsp[-7].expression)->falseList; // exit if false
                        }
#line 3924 "y.tab.c"
    break;

  case 198: /* iteration_statement: FOR LEFT_PARENTHESES declaration expression_opt SEMI_COLON expression_opt RIGHT_PARENTHESES statement  */
#line 1822 "A5_17.y"
                        { 
                            yyinfo("iteration_statement => for ( declaration expression_opt ; expression_opt ) statement"); 
                        }
#line 3932 "y.tab.c"
    break;

  case 199: /* jump_statement: GOTO IDENTIFIER SEMI_COLON  */
#line 1829 "A5_17.y"
                    { 
                        yyinfo("jump_statement => goto IDENTIFIER ;"); 
                    }
#line 3940 "y.tab.c"
    break;

  case 200: /* jump_statement: CONTINUE SEMI_COLON  */
#line 1833 "A5_17.y"
                    { 
                        yyinfo("jump_statement => continue ;"); 
                    }
#line 3948 "y.tab.c"
    break;

  case 201: /* jump_statement: BREAK SEMI_COLON  */
#line 1837 "A5_17.y"
                    { 
                        yyinfo("jump_statement => break ;"); 
                    }
#line 3956 "y.tab.c"
    break;

  case 202: /* jump_statement: RETURN expression_opt SEMI_COLON  */
#line 1841 "A5_17.y"
                    { 
                        yyinfo("jump_statement => return expression_opt ;"); 
                        (yyval.statement) = new Statement();
                        if((yyvsp[-1].expression)->symbol != NULL) {
                            emit("return", (yyvsp[-1].expression)->symbol->name); // emit the current symbol name at return if it exists otherwise empty
                        } else {
                            emit("return", "");
                        }
                    }
#line 3970 "y.tab.c"
    break;

  case 203: /* translation_unit: external_declaration  */
#line 1856 "A5_17.y"
                        { 
                            yyinfo("translation_unit => external_declaration"); 
                        }
#line 3978 "y.tab.c"
    break;

  case 204: /* translation_unit: translation_unit external_declaration  */
#line 1860 "A5_17.y"
                        { 
                            yyinfo("translation_unit => translation_unit external_declaration"); 
                        }
#line 3986 "y.tab.c"
    break;

  case 205: /* external_declaration: function_definition  */
#line 1867 "A5_17.y"
                            { 
                                yyinfo("external_declaration => function_definition"); 
                            }
#line 3994 "y.tab.c"
    break;

  case 206: /* external_declaration: declaration  */
#line 1871 "A5_17.y"
                            { 
                                yyinfo("external_declaration => declaration"); 
                            }
#line 4002 "y.tab.c"
    break;

  case 207: /* function_definition: declaration_specifiers declarator declaration_list_opt change_scope LEFT_CURLY_BRACKET block_item_list_opt RIGHT_CURLY_BRACKET  */
#line 1879 "A5_17.y"
                        { 
                            yyinfo("function_definition => declaration_specifiers declarator declaration_list_opt compound_statement"); 
                            tableCount = 0;
                            (yyvsp[-5].symbol)->isFunction = true;
                            changeTable(globalTable);
                        }
#line 4013 "y.tab.c"
    break;

  case 208: /* declaration_list_opt: declaration_list  */
#line 1889 "A5_17.y"
                            { 
                                yyinfo("declaration_list_opt => declaration_list"); 
                            }
#line 4021 "y.tab.c"
    break;

  case 209: /* declaration_list_opt: %empty  */
#line 1893 "A5_17.y"
                            { 
                                yyinfo("declaration_list_opt => epsilon"); 
                            }
#line 4029 "y.tab.c"
    break;

  case 210: /* declaration_list: declaration  */
#line 1900 "A5_17.y"
                        { 
                            yyinfo("declaration_list => declaration"); 
                        }
#line 4037 "y.tab.c"
    break;

  case 211: /* declaration_list: declaration_list declaration  */
#line 1904 "A5_17.y"
                        { 
                            yyinfo("declaration_list => declaration_list declaration"); 
                        }
#line 4045 "y.tab.c"
    break;


#line 4049 "y.tab.c"

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

#line 1909 "A5_17.y"


void yyerror(string s) {
    printf("ERROR [Line %d] : %s\n", lineCount, s.c_str());
}

void yyinfo(string s) {
    #ifdef _DEBUG
        printf("INFO [Line %d] : %s\n", lineCount, s.c_str());
    #endif
}
