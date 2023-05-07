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

#line 240 "y.tab.c"

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
  YYSYMBOL_CHARTYPE = 3,                   /* CHARTYPE  */
  YYSYMBOL_ELSE = 4,                       /* ELSE  */
  YYSYMBOL_FOR = 5,                        /* FOR  */
  YYSYMBOL_IF = 6,                         /* IF  */
  YYSYMBOL_INLINE = 7,                     /* INLINE  */
  YYSYMBOL_INTTYPE = 8,                    /* INTTYPE  */
  YYSYMBOL_RETURN = 9,                     /* RETURN  */
  YYSYMBOL_VOIDTYPE = 10,                  /* VOIDTYPE  */
  YYSYMBOL_IDENTIFIER = 11,                /* IDENTIFIER  */
  YYSYMBOL_INTEGER_CONSTANT = 12,          /* INTEGER_CONSTANT  */
  YYSYMBOL_CHARACTER_CONSTANT = 13,        /* CHARACTER_CONSTANT  */
  YYSYMBOL_STRING_LITERAL = 14,            /* STRING_LITERAL  */
  YYSYMBOL_LEFT_SQUARE_BRACKET = 15,       /* LEFT_SQUARE_BRACKET  */
  YYSYMBOL_SLASH = 16,                     /* SLASH  */
  YYSYMBOL_QUESTION_MARK = 17,             /* QUESTION_MARK  */
  YYSYMBOL_ASSIGNMENT = 18,                /* ASSIGNMENT  */
  YYSYMBOL_COMMA = 19,                     /* COMMA  */
  YYSYMBOL_RIGHT_SQUARE_BRACKET = 20,      /* RIGHT_SQUARE_BRACKET  */
  YYSYMBOL_LEFT_PARENTHESES = 21,          /* LEFT_PARENTHESES  */
  YYSYMBOL_LEFT_CURLY_BRACKET = 22,        /* LEFT_CURLY_BRACKET  */
  YYSYMBOL_RIGHT_CURLY_BRACKET = 23,       /* RIGHT_CURLY_BRACKET  */
  YYSYMBOL_ARROW = 24,                     /* ARROW  */
  YYSYMBOL_ASTERISK = 25,                  /* ASTERISK  */
  YYSYMBOL_PLUS = 26,                      /* PLUS  */
  YYSYMBOL_MINUS = 27,                     /* MINUS  */
  YYSYMBOL_TILDE = 28,                     /* TILDE  */
  YYSYMBOL_EXCLAMATION = 29,               /* EXCLAMATION  */
  YYSYMBOL_MODULO = 30,                    /* MODULO  */
  YYSYMBOL_LESS_THAN = 31,                 /* LESS_THAN  */
  YYSYMBOL_GREATER_THAN = 32,              /* GREATER_THAN  */
  YYSYMBOL_LESS_EQUAL_THAN = 33,           /* LESS_EQUAL_THAN  */
  YYSYMBOL_GREATER_EQUAL_THAN = 34,        /* GREATER_EQUAL_THAN  */
  YYSYMBOL_COLON = 35,                     /* COLON  */
  YYSYMBOL_SEMI_COLON = 36,                /* SEMI_COLON  */
  YYSYMBOL_RIGHT_PARENTHESES = 37,         /* RIGHT_PARENTHESES  */
  YYSYMBOL_BITWISE_AND = 38,               /* BITWISE_AND  */
  YYSYMBOL_EQUALS = 39,                    /* EQUALS  */
  YYSYMBOL_BITWISE_XOR = 40,               /* BITWISE_XOR  */
  YYSYMBOL_BITWISE_OR = 41,                /* BITWISE_OR  */
  YYSYMBOL_LOGICAL_AND = 42,               /* LOGICAL_AND  */
  YYSYMBOL_LOGICAL_OR = 43,                /* LOGICAL_OR  */
  YYSYMBOL_NOT_EQUALS = 44,                /* NOT_EQUALS  */
  YYSYMBOL_INVALID_TOKEN = 45,             /* INVALID_TOKEN  */
  YYSYMBOL_THEN = 46,                      /* THEN  */
  YYSYMBOL_YYACCEPT = 47,                  /* $accept  */
  YYSYMBOL_primary_expression = 48,        /* primary_expression  */
  YYSYMBOL_postfix_expression = 49,        /* postfix_expression  */
  YYSYMBOL_argument_expression_list_opt = 50, /* argument_expression_list_opt  */
  YYSYMBOL_argument_expression_list = 51,  /* argument_expression_list  */
  YYSYMBOL_unary_expression = 52,          /* unary_expression  */
  YYSYMBOL_unary_operator = 53,            /* unary_operator  */
  YYSYMBOL_cast_expression = 54,           /* cast_expression  */
  YYSYMBOL_multiplicative_expression = 55, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 56,       /* additive_expression  */
  YYSYMBOL_shift_expression = 57,          /* shift_expression  */
  YYSYMBOL_relational_expression = 58,     /* relational_expression  */
  YYSYMBOL_equality_expression = 59,       /* equality_expression  */
  YYSYMBOL_AND_expression = 60,            /* AND_expression  */
  YYSYMBOL_exclusive_OR_expression = 61,   /* exclusive_OR_expression  */
  YYSYMBOL_inclusive_OR_expression = 62,   /* inclusive_OR_expression  */
  YYSYMBOL_M = 63,                         /* M  */
  YYSYMBOL_N = 64,                         /* N  */
  YYSYMBOL_logical_AND_expression = 65,    /* logical_AND_expression  */
  YYSYMBOL_logical_OR_expression = 66,     /* logical_OR_expression  */
  YYSYMBOL_conditional_expression = 67,    /* conditional_expression  */
  YYSYMBOL_assignment_expression = 68,     /* assignment_expression  */
  YYSYMBOL_assignment_operator = 69,       /* assignment_operator  */
  YYSYMBOL_expression = 70,                /* expression  */
  YYSYMBOL_constant_expression = 71,       /* constant_expression  */
  YYSYMBOL_declaration = 72,               /* declaration  */
  YYSYMBOL_init_declarator_list_opt = 73,  /* init_declarator_list_opt  */
  YYSYMBOL_declaration_specifiers = 74,    /* declaration_specifiers  */
  YYSYMBOL_declaration_specifiers_opt = 75, /* declaration_specifiers_opt  */
  YYSYMBOL_init_declarator_list = 76,      /* init_declarator_list  */
  YYSYMBOL_init_declarator = 77,           /* init_declarator  */
  YYSYMBOL_type_specifier = 78,            /* type_specifier  */
  YYSYMBOL_specifier_qualifier_list = 79,  /* specifier_qualifier_list  */
  YYSYMBOL_specifier_qualifier_list_opt = 80, /* specifier_qualifier_list_opt  */
  YYSYMBOL_function_specifier = 81,        /* function_specifier  */
  YYSYMBOL_declarator = 82,                /* declarator  */
  YYSYMBOL_change_scope = 83,              /* change_scope  */
  YYSYMBOL_direct_declarator = 84,         /* direct_declarator  */
  YYSYMBOL_type_qualifier_list_opt = 85,   /* type_qualifier_list_opt  */
  YYSYMBOL_pointer = 86,                   /* pointer  */
  YYSYMBOL_parameter_type_list = 87,       /* parameter_type_list  */
  YYSYMBOL_parameter_list = 88,            /* parameter_list  */
  YYSYMBOL_parameter_declaration = 89,     /* parameter_declaration  */
  YYSYMBOL_identifier_list = 90,           /* identifier_list  */
  YYSYMBOL_type_name = 91,                 /* type_name  */
  YYSYMBOL_initialiser = 92,               /* initialiser  */
  YYSYMBOL_initialiser_list = 93,          /* initialiser_list  */
  YYSYMBOL_designation_opt = 94,           /* designation_opt  */
  YYSYMBOL_designation = 95,               /* designation  */
  YYSYMBOL_designator_list = 96,           /* designator_list  */
  YYSYMBOL_designator = 97,                /* designator  */
  YYSYMBOL_statement = 98,                 /* statement  */
  YYSYMBOL_labeled_statement = 99,         /* labeled_statement  */
  YYSYMBOL_change_block = 100,             /* change_block  */
  YYSYMBOL_compound_statement = 101,       /* compound_statement  */
  YYSYMBOL_block_item_list_opt = 102,      /* block_item_list_opt  */
  YYSYMBOL_block_item_list = 103,          /* block_item_list  */
  YYSYMBOL_block_item = 104,               /* block_item  */
  YYSYMBOL_expression_statement = 105,     /* expression_statement  */
  YYSYMBOL_expression_opt = 106,           /* expression_opt  */
  YYSYMBOL_selection_statement = 107,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 108,      /* iteration_statement  */
  YYSYMBOL_jump_statement = 109,           /* jump_statement  */
  YYSYMBOL_translation_unit = 110,         /* translation_unit  */
  YYSYMBOL_external_declaration = 111,     /* external_declaration  */
  YYSYMBOL_function_definition = 112,      /* function_definition  */
  YYSYMBOL_declaration_list_opt = 113,     /* declaration_list_opt  */
  YYSYMBOL_declaration_list = 114          /* declaration_list  */
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
#define YYFINAL  24
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   376

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  68
/* YYNRULES -- Number of rules.  */
#define YYNRULES  146
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  245

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   301


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
      45,    46
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   163,   163,   170,   177,   184,   191,   199,   208,   228,
     236,   240,   244,   253,   259,   267,   274,   284,   289,   323,
     328,   333,   338,   343,   348,   356,   361,   383,   399,   422,
     445,   471,   476,   487,   501,   518,   523,   537,   551,   565,
     582,   587,   603,   633,   638,   651,   656,   669,   674,   697,
     704,   746,   751,   765,   770,   784,   789,   809,   814,   835,
     842,   847,   854,   863,   870,   875,   881,   885,   892,   897,
     903,   907,   914,   919,   931,   936,   941,   949,   956,   961,
    1002,  1009,  1018,  1025,  1043,  1049,  1054,  1071,  1089,  1107,
    1126,  1141,  1145,  1163,  1198,  1204,  1215,  1221,  1225,  1232,
    1236,  1243,  1247,  1254,  1261,  1266,  1270,  1277,  1281,  1288,
    1293,  1299,  1306,  1310,  1317,  1326,  1330,  1335,  1341,  1346,
    1351,  1359,  1373,  1384,  1393,  1399,  1406,  1411,  1421,  1426,
    1434,  1442,  1448,  1474,  1482,  1518,  1529,  1536,  1551,  1555,
    1562,  1566,  1574,  1584,  1589,  1595,  1599
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
  "\"end of file\"", "error", "\"invalid token\"", "CHARTYPE", "ELSE",
  "FOR", "IF", "INLINE", "INTTYPE", "RETURN", "VOIDTYPE", "IDENTIFIER",
  "INTEGER_CONSTANT", "CHARACTER_CONSTANT", "STRING_LITERAL",
  "LEFT_SQUARE_BRACKET", "SLASH", "QUESTION_MARK", "ASSIGNMENT", "COMMA",
  "RIGHT_SQUARE_BRACKET", "LEFT_PARENTHESES", "LEFT_CURLY_BRACKET",
  "RIGHT_CURLY_BRACKET", "ARROW", "ASTERISK", "PLUS", "MINUS", "TILDE",
  "EXCLAMATION", "MODULO", "LESS_THAN", "GREATER_THAN", "LESS_EQUAL_THAN",
  "GREATER_EQUAL_THAN", "COLON", "SEMI_COLON", "RIGHT_PARENTHESES",
  "BITWISE_AND", "EQUALS", "BITWISE_XOR", "BITWISE_OR", "LOGICAL_AND",
  "LOGICAL_OR", "NOT_EQUALS", "INVALID_TOKEN", "THEN", "$accept",
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
  "type_specifier", "specifier_qualifier_list",
  "specifier_qualifier_list_opt", "function_specifier", "declarator",
  "change_scope", "direct_declarator", "type_qualifier_list_opt",
  "pointer", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name", "initialiser",
  "initialiser_list", "designation_opt", "designation", "designator_list",
  "designator", "statement", "labeled_statement", "change_block",
  "compound_statement", "block_item_list_opt", "block_item_list",
  "block_item", "expression_statement", "expression_opt",
  "selection_statement", "iteration_statement", "jump_statement",
  "translation_unit", "external_declaration", "function_definition",
  "declaration_list_opt", "declaration_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-172)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-145)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     134,  -172,  -172,  -172,  -172,  -172,     6,   134,   134,   360,
    -172,  -172,  -172,     6,  -172,   -17,    21,  -172,   354,    61,
      17,  -172,  -172,  -172,  -172,  -172,    34,    64,  -172,     6,
     289,  -172,     6,  -172,   134,   308,    89,    61,  -172,  -172,
    -172,    88,  -172,  -172,  -172,  -172,   242,    99,  -172,  -172,
    -172,  -172,  -172,  -172,  -172,    69,   106,   140,  -172,    67,
     102,  -172,   116,   -14,   121,   123,    98,   128,    53,  -172,
    -172,  -172,   157,  -172,   175,  -172,   176,  -172,    29,   -11,
    -172,     4,   101,  -172,   160,   140,    84,   289,  -172,   120,
    -172,   140,   140,   187,  -172,   140,  -172,  -172,   140,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   140,  -172,  -172,   182,   179,  -172,  -172,  -172,     6,
     165,   184,  -172,   198,  -172,   140,  -172,  -172,  -172,   327,
    -172,   190,    72,  -172,  -172,  -172,  -172,   154,   174,   193,
    -172,  -172,  -172,  -172,  -172,  -172,    67,    67,  -172,  -172,
    -172,  -172,   116,   116,   -14,   121,   123,   140,   140,  -172,
     192,   207,   140,   194,  -172,   195,  -172,  -172,  -172,  -172,
     208,   209,  -172,  -172,   197,  -172,  -172,  -172,  -172,  -172,
     134,  -172,  -172,    99,  -172,  -172,  -172,   289,  -172,  -172,
     140,    98,   128,   140,   105,   140,   200,   270,  -172,  -172,
     213,  -172,  -172,   104,  -172,  -172,   195,   140,   201,    41,
    -172,  -172,   179,  -172,    76,  -172,   211,   212,  -172,  -172,
     220,  -172,  -172,   140,   140,   270,  -172,   140,   210,   221,
    -172,  -172,   270,  -172,   226,  -172,   140,  -172,  -172,   270,
     222,  -172,  -172,   270,  -172
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    75,    80,    76,    74,   141,    65,    69,    69,     0,
     138,   140,    84,     0,    93,     0,    64,    70,    72,    82,
       0,    68,    66,    67,     1,   139,     0,    94,    63,     0,
       0,   145,    65,    83,   143,     0,    83,    81,    85,    95,
      71,    72,     2,     3,     4,     5,     0,   110,    20,    21,
      22,    23,    24,    19,     7,    17,    25,     0,    27,    31,
      34,    35,    40,    43,    45,    47,    51,    53,    55,    57,
     104,    73,     0,   146,     3,    87,     0,   101,     0,     0,
      60,     0,    79,   103,     0,     0,     0,     0,   109,     0,
     112,     0,    14,     0,    59,     0,    25,    18,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    49,    49,     0,   125,    86,    88,    92,   100,
       0,    96,    97,     0,    91,     0,     6,    78,    77,     0,
      62,     0,   110,   105,   107,   111,   113,     0,     0,    13,
      15,    10,    58,    29,    28,    30,    32,    33,    36,    37,
      38,    39,    41,    42,    44,    46,    48,     0,     0,    49,
       0,     0,   132,     2,   122,   131,   128,   129,   115,   116,
       0,    49,   126,   117,     0,   118,   119,   120,    99,    90,
       0,   102,    61,   110,    26,   114,   106,     0,     8,     9,
       0,    52,    54,     0,   132,     0,     0,   132,    83,   142,
     132,   130,    98,     0,   108,    16,    50,   132,     0,     0,
     137,   121,   125,   127,   110,    11,     0,     0,    49,    49,
       0,    12,    49,   132,   132,   132,   123,     0,     0,     0,
      50,    56,   132,    49,   133,   136,   132,    49,    50,   132,
       0,   134,    49,   132,   135
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -172,  -172,  -172,  -172,  -172,   -56,  -172,   -35,    75,  -172,
      52,    73,   135,   139,   147,   103,   -97,  -171,   107,  -172,
     -81,   -15,  -172,   -33,  -172,     0,  -172,     3,   253,  -172,
     233,   -25,   191,  -172,  -172,     1,   -34,   244,  -172,   239,
    -172,  -172,    92,  -172,  -172,   -82,    91,  -126,  -172,  -172,
     188,  -164,  -172,  -172,  -172,    66,  -172,    85,  -172,  -138,
    -172,  -172,  -172,  -172,   277,  -172,  -172,  -172
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    54,    55,   138,   139,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,   157,   114,    67,    68,
      69,    80,    95,   165,   131,   166,    15,    32,    22,    16,
      17,     7,    83,   128,     8,    41,    72,    19,    27,    20,
     120,   121,   122,    79,    84,    71,    86,    87,    88,    89,
      90,   167,   168,   198,   169,   170,   171,   172,   173,   174,
     175,   176,   177,     9,    10,    11,    33,    34
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       5,    96,    78,     6,   130,   134,   187,    18,   123,     5,
      21,    21,     6,    81,    26,    70,   158,    12,    31,    28,
      76,    82,    97,   125,   196,   107,   124,    13,    12,    96,
     108,    14,     1,   211,    73,   216,     2,     3,    13,     4,
      29,   126,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,   208,    82,   137,   234,
     125,   230,   193,   143,   144,   145,   118,   240,   235,   217,
     -50,    38,    70,    96,   200,   241,    35,   140,   219,   244,
     142,   119,    36,    98,    91,   228,   229,    85,   187,    14,
      92,    85,    99,    93,   184,   186,   113,   100,   238,   221,
      77,    96,    96,   132,     1,   204,    30,   133,     1,     3,
     182,     4,     2,     3,    85,     4,    42,    43,    44,    45,
     178,   224,   225,   214,    94,   227,    46,   215,   101,   102,
      48,    49,    50,    51,    52,    85,   236,     1,   135,   111,
     239,     2,     3,    53,     4,   243,   231,   103,   104,   105,
     106,    42,    43,    44,    45,   148,   149,   150,   151,   109,
     206,    46,   209,   110,   212,    48,    49,    50,    51,    52,
     112,    96,    70,   125,   188,   205,   146,   147,    53,   115,
     152,   153,     1,   119,   160,   161,     2,     3,   162,     4,
     163,    43,    44,    45,   207,   116,   117,   129,   141,   159,
      46,   164,   179,   180,    48,    49,    50,    51,    52,   181,
     185,   189,   190,   194,   125,  -132,     1,    53,   160,   161,
       2,     3,   162,     4,   163,    43,    44,    45,   195,   197,
     237,   199,  -124,   201,    46,   164,   210,   218,    48,    49,
      50,    51,    52,   226,   154,     1,   222,   232,   223,   155,
       3,    53,     4,    42,    43,    44,    45,   233,   156,   242,
     191,    23,    40,    46,    37,   192,    39,    48,    49,    50,
      51,    52,   202,   127,   203,   160,   161,   136,   220,   162,
      53,   163,    43,    44,    45,   213,    25,     0,     0,     0,
       0,    46,   164,     0,     0,    48,    49,    50,    51,    52,
      42,    43,    44,    45,     0,     0,     0,     0,    53,     0,
      46,    47,     0,     0,    48,    49,    50,    51,    52,    42,
      74,    44,    45,     0,     0,     0,     0,    53,    75,    46,
       0,     0,     0,    48,    49,    50,    51,    52,    42,    43,
      44,    45,     0,     0,     0,     0,    53,     0,    46,   183,
       0,     0,    48,    49,    50,    51,    52,     1,     0,     0,
      24,     2,     3,     1,     4,    53,     0,     2,     3,     0,
       4,     0,    30,     0,     0,     0,  -144
};

static const yytype_int16 yycheck[] =
{
       0,    57,    36,     0,    85,    87,   132,     6,    19,     9,
       7,     8,     9,    46,    13,    30,   113,    11,    18,    36,
      35,    46,    57,    19,   162,    39,    37,    21,    11,    85,
      44,    25,     3,   197,    34,   206,     7,     8,    21,    10,
      19,    37,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   194,    82,    91,   230,
      19,   225,   159,    98,    99,   100,    37,   238,   232,   207,
      17,    37,    87,   129,   171,   239,    15,    92,    37,   243,
      95,    78,    21,    16,    15,   223,   224,    15,   214,    25,
      21,    15,    25,    24,   129,    23,    43,    30,   236,    23,
      11,   157,   158,    19,     3,   187,    18,    23,     3,     8,
     125,    10,     7,     8,    15,    10,    11,    12,    13,    14,
     119,   218,   219,    19,    18,   222,    21,    23,    26,    27,
      25,    26,    27,    28,    29,    15,   233,     3,    18,    41,
     237,     7,     8,    38,    10,   242,   227,    31,    32,    33,
      34,    11,    12,    13,    14,   103,   104,   105,   106,    38,
     193,    21,   195,    40,   198,    25,    26,    27,    28,    29,
      42,   227,   187,    19,    20,   190,   101,   102,    38,    22,
     107,   108,     3,   180,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,   194,    20,    20,    37,    11,    17,
      21,    22,    37,    19,    25,    26,    27,    28,    29,    11,
      20,    37,    19,    21,    19,    36,     3,    38,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    21,    35,
       4,    23,    23,    36,    21,    22,    36,    36,    25,    26,
      27,    28,    29,    23,   109,     3,    35,    37,    36,   110,
       8,    38,    10,    11,    12,    13,    14,    36,   111,    37,
     157,     8,    29,    21,    20,   158,    27,    25,    26,    27,
      28,    29,   180,    82,   183,     5,     6,    89,   212,     9,
      38,    11,    12,    13,    14,   200,     9,    -1,    -1,    -1,
      -1,    21,    22,    -1,    -1,    25,    26,    27,    28,    29,
      11,    12,    13,    14,    -1,    -1,    -1,    -1,    38,    -1,
      21,    22,    -1,    -1,    25,    26,    27,    28,    29,    11,
      12,    13,    14,    -1,    -1,    -1,    -1,    38,    20,    21,
      -1,    -1,    -1,    25,    26,    27,    28,    29,    11,    12,
      13,    14,    -1,    -1,    -1,    -1,    38,    -1,    21,    22,
      -1,    -1,    25,    26,    27,    28,    29,     3,    -1,    -1,
       0,     7,     8,     3,    10,    38,    -1,     7,     8,    -1,
      10,    -1,    18,    -1,    -1,    -1,    22
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     7,     8,    10,    72,    74,    78,    81,   110,
     111,   112,    11,    21,    25,    73,    76,    77,    82,    84,
      86,    74,    75,    75,     0,   111,    82,    85,    36,    19,
      18,    72,    74,   113,   114,    15,    21,    84,    37,    86,
      77,    82,    11,    12,    13,    14,    21,    22,    25,    26,
      27,    28,    29,    38,    48,    49,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    65,    66,    67,
      68,    92,    83,    72,    12,    20,    68,    11,    83,    90,
      68,    70,    78,    79,    91,    15,    93,    94,    95,    96,
      97,    15,    21,    24,    18,    69,    52,    54,    16,    25,
      30,    26,    27,    31,    32,    33,    34,    39,    44,    38,
      40,    41,    42,    43,    64,    22,    20,    20,    37,    74,
      87,    88,    89,    19,    37,    19,    37,    79,    80,    37,
      67,    71,    19,    23,    92,    18,    97,    70,    50,    51,
      68,    11,    68,    54,    54,    54,    55,    55,    57,    57,
      57,    57,    58,    58,    59,    60,    61,    63,    63,    17,
       5,     6,     9,    11,    22,    70,    72,    98,    99,   101,
     102,   103,   104,   105,   106,   107,   108,   109,    82,    37,
      19,    11,    68,    22,    54,    20,    23,    94,    20,    37,
      19,    62,    65,    63,    21,    21,   106,    35,   100,    23,
      63,    36,    89,    93,    92,    68,    70,    72,   106,    70,
      36,    98,    83,   104,    19,    23,    64,   106,    36,    37,
     102,    23,    35,    36,    63,    63,    23,    63,   106,   106,
      98,    67,    37,    36,    64,    98,    63,     4,   106,    63,
      64,    98,    37,    63,    98
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    47,    48,    48,    48,    48,    48,    49,    49,    49,
      49,    49,    49,    50,    50,    51,    51,    52,    52,    53,
      53,    53,    53,    53,    53,    54,    54,    55,    55,    55,
      55,    56,    56,    56,    57,    58,    58,    58,    58,    58,
      59,    59,    59,    60,    60,    61,    61,    62,    62,    63,
      64,    65,    65,    66,    66,    67,    67,    68,    68,    69,
      70,    70,    71,    72,    73,    73,    74,    74,    75,    75,
      76,    76,    77,    77,    78,    78,    78,    79,    80,    80,
      81,    82,    82,    83,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    85,    86,    86,    87,    88,    88,    89,
      89,    90,    90,    91,    92,    92,    92,    93,    93,    94,
      94,    95,    96,    96,    97,    98,    98,    98,    98,    98,
      98,    99,   100,   101,   102,   102,   103,   103,   104,   104,
     105,   106,   106,   107,   107,   108,   108,   109,   110,   110,
     111,   111,   112,   113,   113,   114,   114
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     3,     1,     4,     4,
       3,     6,     7,     1,     0,     1,     3,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     4,     1,     3,     3,
       3,     1,     3,     3,     1,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     1,     3,     1,     3,     0,
       0,     1,     4,     1,     4,     1,     9,     1,     3,     1,
       1,     3,     1,     3,     1,     0,     2,     2,     1,     0,
       1,     3,     1,     3,     1,     1,     1,     2,     1,     0,
       1,     2,     1,     0,     1,     3,     4,     3,     4,     3,
       5,     4,     4,     0,     2,     3,     1,     1,     3,     2,
       1,     1,     3,     1,     1,     3,     4,     2,     4,     1,
       0,     2,     1,     2,     3,     1,     1,     1,     1,     1,
       1,     3,     0,     5,     1,     0,     1,     3,     1,     1,
       2,     1,     0,     7,    10,    13,     8,     3,     1,     2,
       1,     1,     7,     1,     0,     1,     2
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
#line 164 "A5_17.y"
                        { 
                            yyinfo("primary_expression => IDENTIFIER");
                            (yyval.expression) = new Expression(); // create new non boolean expression and symbol is the identifier
                            (yyval.expression)->symbol = (yyvsp[0].symbol);
                            (yyval.expression)->type = Expression::NONBOOLEAN; 
                        }
#line 1560 "y.tab.c"
    break;

  case 3: /* primary_expression: INTEGER_CONSTANT  */
#line 171 "A5_17.y"
                        { 
                            yyinfo("primary_expression => INTEGER_CONSTANT"); 
                            (yyval.expression) = new Expression();
                            (yyval.expression)->symbol = gentemp(SymbolType::INT, toString((yyvsp[0].intVal)));
                            emit("=", (yyval.expression)->symbol->name, (yyvsp[0].intVal));
                        }
#line 1571 "y.tab.c"
    break;

  case 4: /* primary_expression: CHARACTER_CONSTANT  */
#line 178 "A5_17.y"
                        { 
                            yyinfo("primary_expression => CHARACTER_CONSTANT"); 
                            (yyval.expression) = new Expression();
                            (yyval.expression)->symbol = gentemp(SymbolType::CHAR, (yyvsp[0].charVal));
                            emit("=", (yyval.expression)->symbol->name, (yyvsp[0].charVal));
                        }
#line 1582 "y.tab.c"
    break;

  case 5: /* primary_expression: STRING_LITERAL  */
#line 185 "A5_17.y"
                        { 
                            yyinfo("primary_expression => STRING_LITERAL"); 
                            (yyval.expression) = new Expression();
		                    (yyval.expression)->symbol = gentemp(SymbolType::POINTER, (yyvsp[0].stringVal));
		                    (yyval.expression)->symbol->type->arrayType = new SymbolType(SymbolType::CHAR);
                        }
#line 1593 "y.tab.c"
    break;

  case 6: /* primary_expression: LEFT_PARENTHESES expression RIGHT_PARENTHESES  */
#line 192 "A5_17.y"
                        { 
                            yyinfo("primary_expression => ( expression )"); 
                            (yyval.expression) = (yyvsp[-1].expression);
                        }
#line 1602 "y.tab.c"
    break;

  case 7: /* postfix_expression: primary_expression  */
#line 200 "A5_17.y"
                        { 
                            // create new array with the same symbol as the primary expression
                            yyinfo("postfix_expression => primary_expression"); 
                            (yyval.array) = new Array();
                            (yyval.array)->symbol = (yyvsp[0].expression)->symbol;
                            (yyval.array)->temp = (yyval.array)->symbol;
                            (yyval.array)->subArrayType = (yyvsp[0].expression)->symbol->type;
                        }
#line 1615 "y.tab.c"
    break;

  case 8: /* postfix_expression: postfix_expression LEFT_SQUARE_BRACKET expression RIGHT_SQUARE_BRACKET  */
#line 209 "A5_17.y"
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
#line 1639 "y.tab.c"
    break;

  case 9: /* postfix_expression: postfix_expression LEFT_PARENTHESES argument_expression_list_opt RIGHT_PARENTHESES  */
#line 229 "A5_17.y"
                        { 
                            // function call, number of parameters stored in argument_expression_list_opt
                            yyinfo("postfix_expression => postfix_expression ( argument_expression_list_opt )"); 
                            (yyval.array) = new Array();
                            (yyval.array)->symbol = gentemp((yyvsp[-3].array)->symbol->type->type);
                            emit("call", (yyval.array)->symbol->name, (yyvsp[-3].array)->symbol->name, toString((yyvsp[-1].parameterCount)));
                        }
#line 1651 "y.tab.c"
    break;

  case 10: /* postfix_expression: postfix_expression ARROW IDENTIFIER  */
#line 237 "A5_17.y"
                        { 
                            yyinfo("postfix_expression => postfix_expression -> IDENTIFIER"); 
                        }
#line 1659 "y.tab.c"
    break;

  case 11: /* postfix_expression: LEFT_PARENTHESES type_name RIGHT_PARENTHESES LEFT_CURLY_BRACKET initialiser_list RIGHT_CURLY_BRACKET  */
#line 241 "A5_17.y"
                        { 
                            yyinfo("postfix_expression => ( type_name ) { initialiser_list }"); 
                        }
#line 1667 "y.tab.c"
    break;

  case 12: /* postfix_expression: LEFT_PARENTHESES type_name RIGHT_PARENTHESES LEFT_CURLY_BRACKET initialiser_list COMMA RIGHT_CURLY_BRACKET  */
#line 245 "A5_17.y"
                        { 
                            yyinfo("postfix_expression => ( type_name ) { initialiser_list , }"); 
                        }
#line 1675 "y.tab.c"
    break;

  case 13: /* argument_expression_list_opt: argument_expression_list  */
#line 254 "A5_17.y"
                                    { 
                                        yyinfo("argument_expression_list_opt => argument_expression_list"); 
                                        (yyval.parameterCount) = (yyvsp[0].parameterCount);
                                    }
#line 1684 "y.tab.c"
    break;

  case 14: /* argument_expression_list_opt: %empty  */
#line 259 "A5_17.y"
                                    { 
                                        // empty so 0 params
                                        yyinfo("argument_expression_list_opt => epsilon");
                                        (yyval.parameterCount) = 0;
                                    }
#line 1694 "y.tab.c"
    break;

  case 15: /* argument_expression_list: assignment_expression  */
#line 268 "A5_17.y"
                                { 
                                    // first param, initialise param count to 1
                                    yyinfo("argument_expression_list => assignment_expression"); 
                                    emit("param", (yyvsp[0].expression)->symbol->name);
                                    (yyval.parameterCount) = 1;
                                }
#line 1705 "y.tab.c"
    break;

  case 16: /* argument_expression_list: argument_expression_list COMMA assignment_expression  */
#line 275 "A5_17.y"
                                { 
                                    // one new param, add 1 to param count
                                    yyinfo("argument_expression_list => argument_expression_list , assignment_expression");
                                    emit("param", (yyvsp[0].expression)->symbol->name);
                                    (yyval.parameterCount) = (yyvsp[-2].parameterCount) + 1; 
                                }
#line 1716 "y.tab.c"
    break;

  case 17: /* unary_expression: postfix_expression  */
#line 285 "A5_17.y"
                        { 
                            yyinfo("unary_expression => postfix_expression"); 
                            (yyval.array) = (yyvsp[0].array);
                        }
#line 1725 "y.tab.c"
    break;

  case 18: /* unary_expression: unary_operator cast_expression  */
#line 290 "A5_17.y"
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
#line 1756 "y.tab.c"
    break;

  case 19: /* unary_operator: BITWISE_AND  */
#line 324 "A5_17.y"
                    { 
                        yyinfo("unary_operator => &"); 
                        (yyval.unaryOperator) = strdup("&"); 
                    }
#line 1765 "y.tab.c"
    break;

  case 20: /* unary_operator: ASTERISK  */
#line 329 "A5_17.y"
                    { 
                        yyinfo("unary_operator => *"); 
                        (yyval.unaryOperator) = strdup("*"); 
                    }
#line 1774 "y.tab.c"
    break;

  case 21: /* unary_operator: PLUS  */
#line 334 "A5_17.y"
                    { 
                        yyinfo("unary_operator => +"); 
                        (yyval.unaryOperator) = strdup("+"); 
                    }
#line 1783 "y.tab.c"
    break;

  case 22: /* unary_operator: MINUS  */
#line 339 "A5_17.y"
                    { 
                        yyinfo("unary_operator => -"); 
                        (yyval.unaryOperator) = strdup("=-"); 
                    }
#line 1792 "y.tab.c"
    break;

  case 23: /* unary_operator: TILDE  */
#line 344 "A5_17.y"
                    { 
                        yyinfo("unary_operator => ~"); 
                        (yyval.unaryOperator) = strdup("~"); 
                    }
#line 1801 "y.tab.c"
    break;

  case 24: /* unary_operator: EXCLAMATION  */
#line 349 "A5_17.y"
                    { 
                        yyinfo("unary_operator => !"); 
                        (yyval.unaryOperator) = strdup("!"); 
                    }
#line 1810 "y.tab.c"
    break;

  case 25: /* cast_expression: unary_expression  */
#line 357 "A5_17.y"
                    { 
                        yyinfo("cast_expression => unary_expression"); 
                        (yyval.array) = (yyvsp[0].array);
                    }
#line 1819 "y.tab.c"
    break;

  case 26: /* cast_expression: LEFT_PARENTHESES type_name RIGHT_PARENTHESES cast_expression  */
#line 362 "A5_17.y"
                    { 
                        yyinfo("cast_expression => ( type_name ) cast_expression"); 
                        (yyval.array) = new Array();
                        (yyval.array)->symbol = (yyvsp[0].array)->symbol->convert(currentType);
                    }
#line 1829 "y.tab.c"
    break;

  case 27: /* multiplicative_expression: cast_expression  */
#line 384 "A5_17.y"
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
#line 1849 "y.tab.c"
    break;

  case 28: /* multiplicative_expression: multiplicative_expression ASTERISK cast_expression  */
#line 400 "A5_17.y"
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
#line 1876 "y.tab.c"
    break;

  case 29: /* multiplicative_expression: multiplicative_expression SLASH cast_expression  */
#line 423 "A5_17.y"
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
#line 1903 "y.tab.c"
    break;

  case 30: /* multiplicative_expression: multiplicative_expression MODULO cast_expression  */
#line 446 "A5_17.y"
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
#line 1930 "y.tab.c"
    break;

  case 31: /* additive_expression: multiplicative_expression  */
#line 472 "A5_17.y"
                        { 
                            yyinfo("additive_expression => multiplicative_expression"); 
                            (yyval.expression) = (yyvsp[0].expression);
                        }
#line 1939 "y.tab.c"
    break;

  case 32: /* additive_expression: additive_expression PLUS multiplicative_expression  */
#line 477 "A5_17.y"
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
#line 1954 "y.tab.c"
    break;

  case 33: /* additive_expression: additive_expression MINUS multiplicative_expression  */
#line 488 "A5_17.y"
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
#line 1969 "y.tab.c"
    break;

  case 34: /* shift_expression: additive_expression  */
#line 502 "A5_17.y"
                        { 
                            yyinfo("shift_expression => additive_expression");
                            (yyval.expression) = (yyvsp[0].expression);
                        }
#line 1978 "y.tab.c"
    break;

  case 35: /* relational_expression: shift_expression  */
#line 519 "A5_17.y"
                            { 
                                yyinfo("relational_expression => shift_expression"); 
                                (yyval.expression) = (yyvsp[0].expression);
                            }
#line 1987 "y.tab.c"
    break;

  case 36: /* relational_expression: relational_expression LESS_THAN shift_expression  */
#line 524 "A5_17.y"
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
#line 2005 "y.tab.c"
    break;

  case 37: /* relational_expression: relational_expression GREATER_THAN shift_expression  */
#line 538 "A5_17.y"
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
#line 2023 "y.tab.c"
    break;

  case 38: /* relational_expression: relational_expression LESS_EQUAL_THAN shift_expression  */
#line 552 "A5_17.y"
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
#line 2041 "y.tab.c"
    break;

  case 39: /* relational_expression: relational_expression GREATER_EQUAL_THAN shift_expression  */
#line 566 "A5_17.y"
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
#line 2059 "y.tab.c"
    break;

  case 40: /* equality_expression: relational_expression  */
#line 583 "A5_17.y"
                        { 
                            yyinfo("equality_expression => relational_expression"); 
                            (yyval.expression) = (yyvsp[0].expression);
                        }
#line 2068 "y.tab.c"
    break;

  case 41: /* equality_expression: equality_expression EQUALS relational_expression  */
#line 588 "A5_17.y"
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
#line 2088 "y.tab.c"
    break;

  case 42: /* equality_expression: equality_expression NOT_EQUALS relational_expression  */
#line 604 "A5_17.y"
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
#line 2108 "y.tab.c"
    break;

  case 43: /* AND_expression: equality_expression  */
#line 634 "A5_17.y"
                    { 
                        yyinfo("AND_expression => equality_expression"); 
                        (yyval.expression) = (yyvsp[0].expression);
                    }
#line 2117 "y.tab.c"
    break;

  case 44: /* AND_expression: AND_expression BITWISE_AND equality_expression  */
#line 639 "A5_17.y"
                    { 
                        yyinfo("AND_expression => AND_expression & equality_expression"); 
                        (yyvsp[-2].expression)->toInt();
                        (yyvsp[0].expression)->toInt();
                        (yyval.expression) = new Expression();
                        (yyval.expression)->type = Expression::NONBOOLEAN;
                        (yyval.expression)->symbol = gentemp(SymbolType::INT);
                        emit("&", (yyval.expression)->symbol->name, (yyvsp[-2].expression)->symbol->name, (yyvsp[0].expression)->symbol->name);
                    }
#line 2131 "y.tab.c"
    break;

  case 45: /* exclusive_OR_expression: AND_expression  */
#line 652 "A5_17.y"
                            { 
                                yyinfo("exclusive_OR_expression => AND_expression"); 
                                (yyval.expression) = (yyvsp[0].expression);
                            }
#line 2140 "y.tab.c"
    break;

  case 46: /* exclusive_OR_expression: exclusive_OR_expression BITWISE_XOR AND_expression  */
#line 657 "A5_17.y"
                            { 
                                yyinfo("exclusive_OR_expression => exclusive_OR_expression ^ AND_expression"); 
                                (yyvsp[-2].expression)->toInt();
                                (yyvsp[0].expression)->toInt();
                                (yyval.expression) = new Expression();
                                (yyval.expression)->type = Expression::NONBOOLEAN;
                                (yyval.expression)->symbol = gentemp(SymbolType::INT);
                                emit("^", (yyval.expression)->symbol->name, (yyvsp[-2].expression)->symbol->name, (yyvsp[0].expression)->symbol->name);
                            }
#line 2154 "y.tab.c"
    break;

  case 47: /* inclusive_OR_expression: exclusive_OR_expression  */
#line 670 "A5_17.y"
                            { 
                                yyinfo("inclusive_OR_expression => exclusive_OR_expression"); 
                                (yyval.expression) = (yyvsp[0].expression);
                            }
#line 2163 "y.tab.c"
    break;

  case 48: /* inclusive_OR_expression: inclusive_OR_expression BITWISE_OR exclusive_OR_expression  */
#line 675 "A5_17.y"
                            { 
                                yyinfo("inclusive_OR_expression => inclusive_OR_expression | exclusive_OR_expression"); 
                                (yyvsp[-2].expression)->toInt();
                                (yyvsp[0].expression)->toInt();
                                (yyval.expression) = new Expression();
                                (yyval.expression)->type = Expression::NONBOOLEAN;
                                (yyval.expression)->symbol = gentemp(SymbolType::INT);
                                emit("|", (yyval.expression)->symbol->name, (yyvsp[-2].expression)->symbol->name, (yyvsp[0].expression)->symbol->name);
                            }
#line 2177 "y.tab.c"
    break;

  case 49: /* M: %empty  */
#line 697 "A5_17.y"
        {
            yyinfo("M => epsilon");
            (yyval.instructionNumber) = nextInstruction();
        }
#line 2186 "y.tab.c"
    break;

  case 50: /* N: %empty  */
#line 704 "A5_17.y"
        {
            yyinfo("N => epsilon");
            (yyval.statement) = new Statement();
            (yyval.statement)->nextList = makeList(nextInstruction());
            emit("goto", "");
        }
#line 2197 "y.tab.c"
    break;

  case 51: /* logical_AND_expression: inclusive_OR_expression  */
#line 747 "A5_17.y"
                            { 
                                yyinfo("logical_AND_expression => inclusive_OR_expression"); 
                                (yyval.expression) = (yyvsp[0].expression);
                            }
#line 2206 "y.tab.c"
    break;

  case 52: /* logical_AND_expression: logical_AND_expression LOGICAL_AND M inclusive_OR_expression  */
#line 752 "A5_17.y"
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
#line 2221 "y.tab.c"
    break;

  case 53: /* logical_OR_expression: logical_AND_expression  */
#line 766 "A5_17.y"
                            { 
                                yyinfo("logical_OR_expression => logical_AND_expression"); 
                                (yyval.expression) = (yyvsp[0].expression);
                            }
#line 2230 "y.tab.c"
    break;

  case 54: /* logical_OR_expression: logical_OR_expression LOGICAL_OR M logical_AND_expression  */
#line 771 "A5_17.y"
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
#line 2245 "y.tab.c"
    break;

  case 55: /* conditional_expression: logical_OR_expression  */
#line 785 "A5_17.y"
                            { 
                                yyinfo("conditional_expression => logical_OR_expression"); 
                                (yyval.expression) = (yyvsp[0].expression);
                            }
#line 2254 "y.tab.c"
    break;

  case 56: /* conditional_expression: logical_OR_expression N QUESTION_MARK M expression N COLON M conditional_expression  */
#line 790 "A5_17.y"
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
#line 2275 "y.tab.c"
    break;

  case 57: /* assignment_expression: conditional_expression  */
#line 810 "A5_17.y"
                            { 
                                yyinfo("assignment_expression => conditional_expression"); 
                                (yyval.expression) = (yyvsp[0].expression);
                            }
#line 2284 "y.tab.c"
    break;

  case 58: /* assignment_expression: unary_expression assignment_operator assignment_expression  */
#line 815 "A5_17.y"
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
#line 2306 "y.tab.c"
    break;

  case 59: /* assignment_operator: ASSIGNMENT  */
#line 836 "A5_17.y"
                        { 
                            yyinfo("assignment_operator => ="); 
                        }
#line 2314 "y.tab.c"
    break;

  case 60: /* expression: assignment_expression  */
#line 843 "A5_17.y"
                { 
                    yyinfo("expression => assignment_expression"); 
                    (yyval.expression) = (yyvsp[0].expression);
                }
#line 2323 "y.tab.c"
    break;

  case 61: /* expression: expression COMMA assignment_expression  */
#line 848 "A5_17.y"
                {
                     yyinfo("expression => expression , assignment_expression"); 
                }
#line 2331 "y.tab.c"
    break;

  case 62: /* constant_expression: conditional_expression  */
#line 855 "A5_17.y"
                        {
                             yyinfo("constant_expression => conditional_expression"); 
                        }
#line 2339 "y.tab.c"
    break;

  case 63: /* declaration: declaration_specifiers init_declarator_list_opt SEMI_COLON  */
#line 864 "A5_17.y"
                {
                     yyinfo("declaration => declaration_specifiers init_declarator_list_opt ;"); 
                }
#line 2347 "y.tab.c"
    break;

  case 64: /* init_declarator_list_opt: init_declarator_list  */
#line 871 "A5_17.y"
                                {
                                     yyinfo("init_declarator_list_opt => init_declarator_list"); 
                                }
#line 2355 "y.tab.c"
    break;

  case 65: /* init_declarator_list_opt: %empty  */
#line 875 "A5_17.y"
                                {
                                     yyinfo("init_declarator_list_opt => epsilon"); 
                                }
#line 2363 "y.tab.c"
    break;

  case 66: /* declaration_specifiers: type_specifier declaration_specifiers_opt  */
#line 882 "A5_17.y"
                            {
                                 yyinfo("declaration_specifiers => type_specifier declaration_specifiers_opt"); 
                            }
#line 2371 "y.tab.c"
    break;

  case 67: /* declaration_specifiers: function_specifier declaration_specifiers_opt  */
#line 886 "A5_17.y"
                            {
                                 yyinfo("declaration_specifiers => function_specifier declaration_specifiers_opt"); 
                            }
#line 2379 "y.tab.c"
    break;

  case 68: /* declaration_specifiers_opt: declaration_specifiers  */
#line 893 "A5_17.y"
                                {
                                     yyinfo("declaration_specifiers_opt => declaration_specifiers"); 
                                }
#line 2387 "y.tab.c"
    break;

  case 69: /* declaration_specifiers_opt: %empty  */
#line 897 "A5_17.y"
                                {
                                     yyinfo("declaration_specifiers_opt => epsilon "); 
                                }
#line 2395 "y.tab.c"
    break;

  case 70: /* init_declarator_list: init_declarator  */
#line 904 "A5_17.y"
                            {
                                 yyinfo("init_declarator_list => init_declarator"); 
                            }
#line 2403 "y.tab.c"
    break;

  case 71: /* init_declarator_list: init_declarator_list COMMA init_declarator  */
#line 908 "A5_17.y"
                            {
                                 yyinfo("init_declarator_list => init_declarator_list , init_declarator"); 
                            }
#line 2411 "y.tab.c"
    break;

  case 72: /* init_declarator: declarator  */
#line 915 "A5_17.y"
                    { 
                        yyinfo("init_declarator => declarator"); 
                        (yyval.symbol) = (yyvsp[0].symbol);
                    }
#line 2420 "y.tab.c"
    break;

  case 73: /* init_declarator: declarator ASSIGNMENT initialiser  */
#line 920 "A5_17.y"
                    { 
                        yyinfo("init_declarator => declarator = initialiser");
                        // if there is some initial value assign it 
                        if((yyvsp[0].symbol)->initialValue != "") 
                            (yyvsp[-2].symbol)->initialValue = (yyvsp[0].symbol)->initialValue;
                        // = assignment
		                emit("=", (yyvsp[-2].symbol)->name, (yyvsp[0].symbol)->name);
                    }
#line 2433 "y.tab.c"
    break;

  case 74: /* type_specifier: VOIDTYPE  */
#line 932 "A5_17.y"
                    { 
                        yyinfo("type_specifier => void");
                        currentType = SymbolType::VOID;
                    }
#line 2442 "y.tab.c"
    break;

  case 75: /* type_specifier: CHARTYPE  */
#line 937 "A5_17.y"
                    { 
                        yyinfo("type_specifier => char"); 
                        currentType = SymbolType::CHAR;
                    }
#line 2451 "y.tab.c"
    break;

  case 76: /* type_specifier: INTTYPE  */
#line 942 "A5_17.y"
                    { 
                        yyinfo("type_specifier => int"); 
                        currentType = SymbolType::INT;
                    }
#line 2460 "y.tab.c"
    break;

  case 77: /* specifier_qualifier_list: type_specifier specifier_qualifier_list_opt  */
#line 950 "A5_17.y"
                                { 
                                    yyinfo("specifier_qualifier_list => type_specifier specifier_qualifier_list_opt"); 
                                }
#line 2468 "y.tab.c"
    break;

  case 78: /* specifier_qualifier_list_opt: specifier_qualifier_list  */
#line 957 "A5_17.y"
                                    { 
                                        yyinfo("specifier_qualifier_list_opt => specifier_qualifier_list"); 
                                    }
#line 2476 "y.tab.c"
    break;

  case 79: /* specifier_qualifier_list_opt: %empty  */
#line 961 "A5_17.y"
                                    { 
                                        yyinfo("specifier_qualifier_list_opt => epsilon"); 
                                    }
#line 2484 "y.tab.c"
    break;

  case 80: /* function_specifier: INLINE  */
#line 1003 "A5_17.y"
                        { 
                            yyinfo("function_specifier => inline"); 
                        }
#line 2492 "y.tab.c"
    break;

  case 81: /* declarator: pointer direct_declarator  */
#line 1010 "A5_17.y"
                { 
                    yyinfo("declarator => pointer direct_declarator"); 
                    SymbolType *it = (yyvsp[-1].symbolType);
                    while(it->arrayType != NULL) 
                        it = it->arrayType;
                    it->arrayType = (yyvsp[0].symbol)->type;
                    (yyval.symbol) = (yyvsp[0].symbol)->update((yyvsp[-1].symbolType));
                }
#line 2505 "y.tab.c"
    break;

  case 82: /* declarator: direct_declarator  */
#line 1019 "A5_17.y"
                { 
                    yyinfo("declarator => direct_declarator"); 
                }
#line 2513 "y.tab.c"
    break;

  case 83: /* change_scope: %empty  */
#line 1025 "A5_17.y"
                    {
                        if(currentSymbol->nestedTable == NULL) {
                            changeTable(new SymbolTable(""));
                        }
                        else {
                            changeTable(currentSymbol->nestedTable);
                            emit("label", currentTable->name);
                        }
                    }
#line 2527 "y.tab.c"
    break;

  case 84: /* direct_declarator: IDENTIFIER  */
#line 1044 "A5_17.y"
                        { 
                            yyinfo("direct_declarator => IDENTIFIER"); 
                            (yyval.symbol) = (yyvsp[0].symbol)->update(new SymbolType(currentType)); // update type to the last type seen
                            currentSymbol = (yyval.symbol);
                        }
#line 2537 "y.tab.c"
    break;

  case 85: /* direct_declarator: LEFT_PARENTHESES declarator RIGHT_PARENTHESES  */
#line 1050 "A5_17.y"
                        { 
                            yyinfo("direct_declarator => ( declarator )"); 
                            (yyval.symbol) = (yyvsp[-1].symbol);
                        }
#line 2546 "y.tab.c"
    break;

  case 86: /* direct_declarator: direct_declarator LEFT_SQUARE_BRACKET INTEGER_CONSTANT RIGHT_SQUARE_BRACKET  */
#line 1055 "A5_17.y"
                        {
                            yyinfo("direct_declarator => direct_declarator [ INTEGER_CONSTANT ]"); 
                            SymbolType *it1 = (yyvsp[-3].symbol)->type, *it2 = NULL;
                            while(it1->type == SymbolType::ARRAY) { // go to the base level of a nested type
                                it2 = it1;
                                it1 = it1->arrayType;
                            }
                            if(it2 != NULL) { // nested array case
                                // another level of nesting with base as it1 and width $3
                                it2->arrayType =  new SymbolType(SymbolType::ARRAY, it1, (yyvsp[-1].intVal)->value);
                            }
                            else { // base array case
                                // another level of nesting with base as it1 and width $3
                                (yyvsp[-3].symbol)->type = new SymbolType(SymbolType::ARRAY, it1, (yyvsp[-1].intVal)->value);
                            }
                        }
#line 2567 "y.tab.c"
    break;

  case 87: /* direct_declarator: direct_declarator LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET  */
#line 1072 "A5_17.y"
                        { 
                            yyinfo("direct_declarator => direct_declarator [ ]"); 
                            SymbolType *it1 = (yyvsp[-2].symbol)->type, *it2 = NULL;
                            while(it1->type == SymbolType::ARRAY) { // go to the base level of a nested type
                                it2 = it1;
                                it1 = it1->arrayType;
                            }
                            if(it2 != NULL) { // nested array case
                                // another level of nesting with base as it1 and width 1
                                it2->arrayType =  new SymbolType(SymbolType::ARRAY, it1, 1);
                            }
                            else { // base array case
                                // another level of nesting with base as it1 and width 1
                                (yyvsp[-2].symbol)->type = new SymbolType(SymbolType::ARRAY, it1, 1);
                            }
                            (yyval.symbol) = (yyvsp[-2].symbol);
                        }
#line 2589 "y.tab.c"
    break;

  case 88: /* direct_declarator: direct_declarator LEFT_SQUARE_BRACKET assignment_expression RIGHT_SQUARE_BRACKET  */
#line 1090 "A5_17.y"
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
#line 2611 "y.tab.c"
    break;

  case 89: /* direct_declarator: direct_declarator LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET  */
#line 1108 "A5_17.y"
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
#line 2634 "y.tab.c"
    break;

  case 90: /* direct_declarator: direct_declarator LEFT_PARENTHESES change_scope parameter_type_list RIGHT_PARENTHESES  */
#line 1127 "A5_17.y"
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
#line 2653 "y.tab.c"
    break;

  case 91: /* direct_declarator: direct_declarator LEFT_PARENTHESES identifier_list RIGHT_PARENTHESES  */
#line 1142 "A5_17.y"
                        { 
                            yyinfo("direct_declarator => direct_declarator ( identifier_list )"); 
                        }
#line 2661 "y.tab.c"
    break;

  case 92: /* direct_declarator: direct_declarator LEFT_PARENTHESES change_scope RIGHT_PARENTHESES  */
#line 1146 "A5_17.y"
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
#line 2680 "y.tab.c"
    break;

  case 93: /* type_qualifier_list_opt: %empty  */
#line 1163 "A5_17.y"
                            { 
                                yyinfo("type_qualifier_list_opt => epsilon"); 
                            }
#line 2688 "y.tab.c"
    break;

  case 94: /* pointer: ASTERISK type_qualifier_list_opt  */
#line 1199 "A5_17.y"
            { 
                yyinfo("pointer => * type_qualifier_list_opt"); 
                // fresh pointer
                (yyval.symbolType) = new SymbolType(SymbolType::POINTER);
            }
#line 2698 "y.tab.c"
    break;

  case 95: /* pointer: ASTERISK type_qualifier_list_opt pointer  */
#line 1205 "A5_17.y"
            { 
                yyinfo("pointer => * type_qualifier_list_opt pointer"); 
                // nested pointer
                (yyval.symbolType) = new SymbolType(SymbolType::POINTER, (yyvsp[0].symbolType));
            }
#line 2708 "y.tab.c"
    break;

  case 96: /* parameter_type_list: parameter_list  */
#line 1216 "A5_17.y"
                        { 
                            yyinfo("parameter_type_list => parameter_list"); 
                        }
#line 2716 "y.tab.c"
    break;

  case 97: /* parameter_list: parameter_declaration  */
#line 1222 "A5_17.y"
                    { 
                        yyinfo("parameter_list => parameter_declaration"); 
                    }
#line 2724 "y.tab.c"
    break;

  case 98: /* parameter_list: parameter_list COMMA parameter_declaration  */
#line 1226 "A5_17.y"
                    { 
                        yyinfo("parameter_list => parameter_list , parameter_declaration"); 
                    }
#line 2732 "y.tab.c"
    break;

  case 99: /* parameter_declaration: declaration_specifiers declarator  */
#line 1233 "A5_17.y"
                            { 
                                yyinfo("parameter_declaration => declaration_specifiers declarator"); 
                            }
#line 2740 "y.tab.c"
    break;

  case 100: /* parameter_declaration: declaration_specifiers  */
#line 1237 "A5_17.y"
                            { 
                                yyinfo("parameter_declaration => declaration_specifiers"); 
                            }
#line 2748 "y.tab.c"
    break;

  case 101: /* identifier_list: IDENTIFIER  */
#line 1244 "A5_17.y"
                    { 
                        yyinfo("identifier_list => IDENTIFIER"); 
                    }
#line 2756 "y.tab.c"
    break;

  case 102: /* identifier_list: identifier_list COMMA IDENTIFIER  */
#line 1248 "A5_17.y"
                    { 
                        yyinfo("identifier_list => identifier_list , IDENTIFIER"); 
                    }
#line 2764 "y.tab.c"
    break;

  case 103: /* type_name: specifier_qualifier_list  */
#line 1255 "A5_17.y"
                { 
                    yyinfo("type_name => specifier_qualifier_list"); 
                }
#line 2772 "y.tab.c"
    break;

  case 104: /* initialiser: assignment_expression  */
#line 1262 "A5_17.y"
                { 
                    yyinfo("initialiser => assignment_expression"); 
                    (yyval.symbol) = (yyvsp[0].expression)->symbol;
                }
#line 2781 "y.tab.c"
    break;

  case 105: /* initialiser: LEFT_CURLY_BRACKET initialiser_list RIGHT_CURLY_BRACKET  */
#line 1267 "A5_17.y"
                { 
                    yyinfo("initialiser => { initialiser_list }"); 
                }
#line 2789 "y.tab.c"
    break;

  case 106: /* initialiser: LEFT_CURLY_BRACKET initialiser_list COMMA RIGHT_CURLY_BRACKET  */
#line 1271 "A5_17.y"
                { 
                    yyinfo("initialiser => { initialiser_list , }"); 
                }
#line 2797 "y.tab.c"
    break;

  case 107: /* initialiser_list: designation_opt initialiser  */
#line 1278 "A5_17.y"
                        { 
                            yyinfo("initialiser_list => designation_opt initialiser"); 
                        }
#line 2805 "y.tab.c"
    break;

  case 108: /* initialiser_list: initialiser_list COMMA designation_opt initialiser  */
#line 1282 "A5_17.y"
                        { 
                            yyinfo("initialiser_list => initialiser_list , designation_opt initialiser"); 
                        }
#line 2813 "y.tab.c"
    break;

  case 109: /* designation_opt: designation  */
#line 1289 "A5_17.y"
                    { 
                        yyinfo("designation_opt => designation"); 
                    }
#line 2821 "y.tab.c"
    break;

  case 110: /* designation_opt: %empty  */
#line 1293 "A5_17.y"
                    { 
                        yyinfo("designation_opt => epsilon"); 
                    }
#line 2829 "y.tab.c"
    break;

  case 111: /* designation: designator_list ASSIGNMENT  */
#line 1300 "A5_17.y"
                { 
                    yyinfo("designation => designator_list ="); 
                }
#line 2837 "y.tab.c"
    break;

  case 112: /* designator_list: designator  */
#line 1307 "A5_17.y"
                    { 
                        yyinfo("designator_list => designator"); 
                    }
#line 2845 "y.tab.c"
    break;

  case 113: /* designator_list: designator_list designator  */
#line 1311 "A5_17.y"
                    { 
                        yyinfo("designator_list => designator_list designator"); 
                    }
#line 2853 "y.tab.c"
    break;

  case 114: /* designator: LEFT_SQUARE_BRACKET constant_expression RIGHT_SQUARE_BRACKET  */
#line 1318 "A5_17.y"
                { 
                    yyinfo("designator => [ constant_expression ]"); 
                }
#line 2861 "y.tab.c"
    break;

  case 115: /* statement: labeled_statement  */
#line 1327 "A5_17.y"
                { 
                    yyinfo("statement => labeled_statement"); 
                }
#line 2869 "y.tab.c"
    break;

  case 116: /* statement: compound_statement  */
#line 1331 "A5_17.y"
                { 
                    yyinfo("statement => compound_statement");
                    (yyval.statement) = (yyvsp[0].statement); 
                }
#line 2878 "y.tab.c"
    break;

  case 117: /* statement: expression_statement  */
#line 1336 "A5_17.y"
                { 
                    yyinfo("statement => expression_statement"); 
                    (yyval.statement) = new Statement();
                    (yyval.statement)->nextList = (yyvsp[0].expression)->nextList;
                }
#line 2888 "y.tab.c"
    break;

  case 118: /* statement: selection_statement  */
#line 1342 "A5_17.y"
                { 
                    yyinfo("statement => selection_statement"); 
                    (yyval.statement) = (yyvsp[0].statement);
                }
#line 2897 "y.tab.c"
    break;

  case 119: /* statement: iteration_statement  */
#line 1347 "A5_17.y"
                { 
                    yyinfo("statement => iteration_statement"); 
                    (yyval.statement) = (yyvsp[0].statement);
                }
#line 2906 "y.tab.c"
    break;

  case 120: /* statement: jump_statement  */
#line 1352 "A5_17.y"
                { 
                    yyinfo("statement => jump_statement"); 
                    (yyval.statement) = (yyvsp[0].statement);
                }
#line 2915 "y.tab.c"
    break;

  case 121: /* labeled_statement: IDENTIFIER COLON statement  */
#line 1360 "A5_17.y"
                        { 
                            yyinfo("labeled_statement => IDENTIFIER : statement"); 
                        }
#line 2923 "y.tab.c"
    break;

  case 122: /* change_block: %empty  */
#line 1373 "A5_17.y"
                    {
                        string name = currentTable->name + "_" + toString(tableCount);
                        tableCount++;
                        Symbol *s = currentTable->lookup(name); // create new entry in symbol table
                        s->nestedTable = new SymbolTable(name, currentTable);
                        s->type = new SymbolType(SymbolType::BLOCK);
                        currentSymbol = s;
                    }
#line 2936 "y.tab.c"
    break;

  case 123: /* compound_statement: LEFT_CURLY_BRACKET change_block change_scope block_item_list_opt RIGHT_CURLY_BRACKET  */
#line 1385 "A5_17.y"
                        { 
                            yyinfo("compound_statement => { block_item_list_opt }"); 
                            (yyval.statement) = (yyvsp[-1].statement);
                            changeTable(currentTable->parent); // block over, move back to the parent table
                        }
#line 2946 "y.tab.c"
    break;

  case 124: /* block_item_list_opt: block_item_list  */
#line 1394 "A5_17.y"
                        { 
                            yyinfo("block_item_list_opt => block_item_list"); 
                            (yyval.statement) = (yyvsp[0].statement);
                        }
#line 2955 "y.tab.c"
    break;

  case 125: /* block_item_list_opt: %empty  */
#line 1399 "A5_17.y"
                        { 
                            yyinfo("block_item_list_opt => epsilon"); 
                            (yyval.statement) = new Statement();
                        }
#line 2964 "y.tab.c"
    break;

  case 126: /* block_item_list: block_item  */
#line 1407 "A5_17.y"
                    {
                        yyinfo("block_item_list => block_item"); 
                        (yyval.statement) = (yyvsp[0].statement);
                    }
#line 2973 "y.tab.c"
    break;

  case 127: /* block_item_list: block_item_list M block_item  */
#line 1412 "A5_17.y"
                    { 
                        yyinfo("block_item_list => block_item_list block_item"); 
                        (yyval.statement) = (yyvsp[0].statement);
                        // after completion of block_item_list(1) we move to block_item(3)
                        backpatch((yyvsp[-2].statement)->nextList,(yyvsp[-1].instructionNumber));
                    }
#line 2984 "y.tab.c"
    break;

  case 128: /* block_item: declaration  */
#line 1422 "A5_17.y"
                { 
                    yyinfo("block_item => declaration"); 
                    (yyval.statement) = new Statement();
                }
#line 2993 "y.tab.c"
    break;

  case 129: /* block_item: statement  */
#line 1427 "A5_17.y"
                { 
                    yyinfo("block_item => statement"); 
                    (yyval.statement) = (yyvsp[0].statement);
                }
#line 3002 "y.tab.c"
    break;

  case 130: /* expression_statement: expression_opt SEMI_COLON  */
#line 1435 "A5_17.y"
                            { 
                                yyinfo("expression_statement => expression_opt ;"); 
                                (yyval.expression) = (yyvsp[-1].expression);
                            }
#line 3011 "y.tab.c"
    break;

  case 131: /* expression_opt: expression  */
#line 1443 "A5_17.y"
                    { 
                        yyinfo("expression_opt => expression"); 
                        (yyval.expression) = (yyvsp[0].expression);
                    }
#line 3020 "y.tab.c"
    break;

  case 132: /* expression_opt: %empty  */
#line 1448 "A5_17.y"
                    { 
                        yyinfo("expression_opt => epsilon"); 
                        (yyval.expression) = new Expression();
                    }
#line 3029 "y.tab.c"
    break;

  case 133: /* selection_statement: IF LEFT_PARENTHESES expression RIGHT_PARENTHESES M statement N  */
#line 1475 "A5_17.y"
                        { 
                            yyinfo("selection_statement => if ( expression ) statement"); 
                            (yyval.statement) = new Statement();
                            (yyvsp[-4].expression)->toBool();
                            backpatch((yyvsp[-4].expression)->trueList, (yyvsp[-2].instructionNumber)); // if true go to M
                            (yyval.statement)->nextList = merge((yyvsp[-4].expression)->falseList, merge((yyvsp[-1].statement)->nextList, (yyvsp[0].statement)->nextList)); // exits
                        }
#line 3041 "y.tab.c"
    break;

  case 134: /* selection_statement: IF LEFT_PARENTHESES expression RIGHT_PARENTHESES M statement N ELSE M statement  */
#line 1483 "A5_17.y"
                        { 
                            yyinfo("selection_statement => if ( expression ) statement else statement"); 
                            (yyval.statement) = new Statement();
                            (yyvsp[-7].expression)->toBool();
                            backpatch((yyvsp[-7].expression)->trueList, (yyvsp[-5].instructionNumber)); // if true go to M
                            backpatch((yyvsp[-7].expression)->falseList, (yyvsp[-1].instructionNumber)); // if false go to else
                            (yyval.statement)->nextList = merge((yyvsp[0].statement)->nextList, merge((yyvsp[-4].statement)->nextList, (yyvsp[-3].statement)->nextList)); // exits
                        }
#line 3054 "y.tab.c"
    break;

  case 135: /* iteration_statement: FOR LEFT_PARENTHESES expression_opt SEMI_COLON M expression_opt SEMI_COLON M expression_opt N RIGHT_PARENTHESES M statement  */
#line 1519 "A5_17.y"
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
#line 3069 "y.tab.c"
    break;

  case 136: /* iteration_statement: FOR LEFT_PARENTHESES declaration expression_opt SEMI_COLON expression_opt RIGHT_PARENTHESES statement  */
#line 1530 "A5_17.y"
                        { 
                            yyinfo("iteration_statement => for ( declaration expression_opt ; expression_opt ) statement"); 
                        }
#line 3077 "y.tab.c"
    break;

  case 137: /* jump_statement: RETURN expression_opt SEMI_COLON  */
#line 1537 "A5_17.y"
                    { 
                        yyinfo("jump_statement => return expression_opt ;"); 
                        (yyval.statement) = new Statement();
                        if((yyvsp[-1].expression)->symbol != NULL) {
                            emit("return", (yyvsp[-1].expression)->symbol->name); // emit the current symbol name at return if it exists otherwise empty
                        } else {
                            emit("return", "");
                        }
                    }
#line 3091 "y.tab.c"
    break;

  case 138: /* translation_unit: external_declaration  */
#line 1552 "A5_17.y"
                        { 
                            yyinfo("translation_unit => external_declaration"); 
                        }
#line 3099 "y.tab.c"
    break;

  case 139: /* translation_unit: translation_unit external_declaration  */
#line 1556 "A5_17.y"
                        { 
                            yyinfo("translation_unit => translation_unit external_declaration"); 
                        }
#line 3107 "y.tab.c"
    break;

  case 140: /* external_declaration: function_definition  */
#line 1563 "A5_17.y"
                            { 
                                yyinfo("external_declaration => function_definition"); 
                            }
#line 3115 "y.tab.c"
    break;

  case 141: /* external_declaration: declaration  */
#line 1567 "A5_17.y"
                            { 
                                yyinfo("external_declaration => declaration"); 
                            }
#line 3123 "y.tab.c"
    break;

  case 142: /* function_definition: declaration_specifiers declarator declaration_list_opt change_scope LEFT_CURLY_BRACKET block_item_list_opt RIGHT_CURLY_BRACKET  */
#line 1575 "A5_17.y"
                        { 
                            yyinfo("function_definition => declaration_specifiers declarator declaration_list_opt compound_statement"); 
                            tableCount = 0;
                            (yyvsp[-5].symbol)->isFunction = true;
                            changeTable(globalTable);
                        }
#line 3134 "y.tab.c"
    break;

  case 143: /* declaration_list_opt: declaration_list  */
#line 1585 "A5_17.y"
                            { 
                                yyinfo("declaration_list_opt => declaration_list"); 
                            }
#line 3142 "y.tab.c"
    break;

  case 144: /* declaration_list_opt: %empty  */
#line 1589 "A5_17.y"
                            { 
                                yyinfo("declaration_list_opt => epsilon"); 
                            }
#line 3150 "y.tab.c"
    break;

  case 145: /* declaration_list: declaration  */
#line 1596 "A5_17.y"
                        { 
                            yyinfo("declaration_list => declaration"); 
                        }
#line 3158 "y.tab.c"
    break;

  case 146: /* declaration_list: declaration_list declaration  */
#line 1600 "A5_17.y"
                        { 
                            yyinfo("declaration_list => declaration_list declaration"); 
                        }
#line 3166 "y.tab.c"
    break;


#line 3170 "y.tab.c"

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

#line 1605 "A5_17.y"


void yyerror(string s) {
    printf("ERROR [Line %d] : %s\n", lineCount, s.c_str());
}

void yyinfo(string s) {
    #ifdef _DEBUG
        printf("INFO [Line %d] : %s\n", lineCount, s.c_str());
    #endif
}
