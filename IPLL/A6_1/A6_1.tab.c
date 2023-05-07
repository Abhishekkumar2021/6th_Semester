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
#line 1 "A6_1.y"

    #include <iostream>
    #include "A6_1_translator.h"
    using namespace std;

    extern int yylex();                     // From lexer
    void yyerror(string s);                 // Function to report errors
    extern char* yytext;                    // From lexer, gives the text being currently scanned
    extern int yylineno;                    // Used for keeping track of the line number

    extern int nextinstr;                   // Used for keeping track of the next instruction
    extern quadArray quadList;              // List of all quads
    extern symbolTable globalST;            // Global symbol table
    extern symbolTable* ST;                 // Pointer to the current symbol table
    extern vector<string> stringConsts;     // List of all string constants

    int strCount = 0;                       // Counter for string constants

#line 90 "A6_1.tab.c"

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

#include "A6_1.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_CHAR_ = 3,                      /* CHAR_  */
  YYSYMBOL_ELSE = 4,                       /* ELSE  */
  YYSYMBOL_FOR = 5,                        /* FOR  */
  YYSYMBOL_IF = 6,                         /* IF  */
  YYSYMBOL_INT_ = 7,                       /* INT_  */
  YYSYMBOL_RETURN_ = 8,                    /* RETURN_  */
  YYSYMBOL_VOID_ = 9,                      /* VOID_  */
  YYSYMBOL_SQUARE_BRACE_OPEN = 10,         /* SQUARE_BRACE_OPEN  */
  YYSYMBOL_SQUARE_BRACE_CLOSE = 11,        /* SQUARE_BRACE_CLOSE  */
  YYSYMBOL_PARENTHESIS_OPEN = 12,          /* PARENTHESIS_OPEN  */
  YYSYMBOL_PARENTHESIS_CLOSE = 13,         /* PARENTHESIS_CLOSE  */
  YYSYMBOL_CURLY_BRACE_OPEN = 14,          /* CURLY_BRACE_OPEN  */
  YYSYMBOL_CURLY_BRACE_CLOSE = 15,         /* CURLY_BRACE_CLOSE  */
  YYSYMBOL_ARROW = 16,                     /* ARROW  */
  YYSYMBOL_BITWISE_AND = 17,               /* BITWISE_AND  */
  YYSYMBOL_MULTIPLY = 18,                  /* MULTIPLY  */
  YYSYMBOL_ADD_ = 19,                      /* ADD_  */
  YYSYMBOL_SUBTRACT = 20,                  /* SUBTRACT  */
  YYSYMBOL_NOT = 21,                       /* NOT  */
  YYSYMBOL_DIVIDE = 22,                    /* DIVIDE  */
  YYSYMBOL_MODULO = 23,                    /* MODULO  */
  YYSYMBOL_LESS_THAN = 24,                 /* LESS_THAN  */
  YYSYMBOL_GREATER_THAN = 25,              /* GREATER_THAN  */
  YYSYMBOL_LESS_THAN_EQUAL = 26,           /* LESS_THAN_EQUAL  */
  YYSYMBOL_GREATER_THAN_EQUAL = 27,        /* GREATER_THAN_EQUAL  */
  YYSYMBOL_EQUAL = 28,                     /* EQUAL  */
  YYSYMBOL_NOT_EQUAL = 29,                 /* NOT_EQUAL  */
  YYSYMBOL_LOGICAL_AND = 30,               /* LOGICAL_AND  */
  YYSYMBOL_LOGICAL_OR = 31,                /* LOGICAL_OR  */
  YYSYMBOL_QUESTION_MARK = 32,             /* QUESTION_MARK  */
  YYSYMBOL_COLON = 33,                     /* COLON  */
  YYSYMBOL_SEMICOLON = 34,                 /* SEMICOLON  */
  YYSYMBOL_ASSIGN_ = 35,                   /* ASSIGN_  */
  YYSYMBOL_COMMA = 36,                     /* COMMA  */
  YYSYMBOL_IDENTIFIER = 37,                /* IDENTIFIER  */
  YYSYMBOL_INTEGER_CONSTANT = 38,          /* INTEGER_CONSTANT  */
  YYSYMBOL_CHAR_CONSTANT = 39,             /* CHAR_CONSTANT  */
  YYSYMBOL_STRING_LITERAL = 40,            /* STRING_LITERAL  */
  YYSYMBOL_YYACCEPT = 41,                  /* $accept  */
  YYSYMBOL_primary_expression = 42,        /* primary_expression  */
  YYSYMBOL_postfix_expression = 43,        /* postfix_expression  */
  YYSYMBOL_argument_expression_list = 44,  /* argument_expression_list  */
  YYSYMBOL_unary_expression = 45,          /* unary_expression  */
  YYSYMBOL_unary_operator = 46,            /* unary_operator  */
  YYSYMBOL_cast_expression = 47,           /* cast_expression  */
  YYSYMBOL_multiplicative_expression = 48, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 49,       /* additive_expression  */
  YYSYMBOL_relational_expression = 50,     /* relational_expression  */
  YYSYMBOL_equality_expression = 51,       /* equality_expression  */
  YYSYMBOL_logical_and_expression = 52,    /* logical_and_expression  */
  YYSYMBOL_logical_or_expression = 53,     /* logical_or_expression  */
  YYSYMBOL_conditional_expression = 54,    /* conditional_expression  */
  YYSYMBOL_M = 55,                         /* M  */
  YYSYMBOL_N = 56,                         /* N  */
  YYSYMBOL_assignment_expression = 57,     /* assignment_expression  */
  YYSYMBOL_assignment_operator = 58,       /* assignment_operator  */
  YYSYMBOL_expression = 59,                /* expression  */
  YYSYMBOL_declaration = 60,               /* declaration  */
  YYSYMBOL_init_declarator = 61,           /* init_declarator  */
  YYSYMBOL_type_specifier = 62,            /* type_specifier  */
  YYSYMBOL_declarator = 63,                /* declarator  */
  YYSYMBOL_direct_declarator = 64,         /* direct_declarator  */
  YYSYMBOL_parameter_list_opt = 65,        /* parameter_list_opt  */
  YYSYMBOL_pointer = 66,                   /* pointer  */
  YYSYMBOL_parameter_list = 67,            /* parameter_list  */
  YYSYMBOL_parameter_declaration = 68,     /* parameter_declaration  */
  YYSYMBOL_initializer = 69,               /* initializer  */
  YYSYMBOL_statement = 70,                 /* statement  */
  YYSYMBOL_compound_statement = 71,        /* compound_statement  */
  YYSYMBOL_block_item_list = 72,           /* block_item_list  */
  YYSYMBOL_block_item = 73,                /* block_item  */
  YYSYMBOL_expression_statement = 74,      /* expression_statement  */
  YYSYMBOL_selection_statement = 75,       /* selection_statement  */
  YYSYMBOL_iteration_statement = 76,       /* iteration_statement  */
  YYSYMBOL_jump_statement = 77,            /* jump_statement  */
  YYSYMBOL_translation_unit = 78,          /* translation_unit  */
  YYSYMBOL_external_declaration = 79,      /* external_declaration  */
  YYSYMBOL_function_definition = 80,       /* function_definition  */
  YYSYMBOL_function_prototype = 81,        /* function_prototype  */
  YYSYMBOL_declaration_list = 82           /* declaration_list  */
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
#define YYFINAL  16
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   308

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  95
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  166

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   295


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
      35,    36,    37,    38,    39,    40
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   116,   116,   123,   132,   141,   147,   154,   156,   173,
     179,   200,   205,   213,   224,   226,   264,   268,   272,   276,
     280,   287,   292,   310,   334,   358,   385,   387,   411,   440,
     442,   469,   496,   523,   553,   558,   585,   617,   619,   632,
     634,   644,   648,   671,   679,   689,   691,   708,   713,   720,
     782,   787,   796,   800,   804,   813,   818,   826,   831,   838,
     846,   875,   877,   885,   893,   898,   906,   921,   928,   935,
     936,   937,   938,   939,   944,   946,   953,   958,   970,   974,
     978,   980,   987,  1000,  1018,  1036,  1043,  1053,  1055,  1060,
    1062,  1067,  1069,  1077,  1099,  1101
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
  "\"end of file\"", "error", "\"invalid token\"", "CHAR_", "ELSE", "FOR",
  "IF", "INT_", "RETURN_", "VOID_", "SQUARE_BRACE_OPEN",
  "SQUARE_BRACE_CLOSE", "PARENTHESIS_OPEN", "PARENTHESIS_CLOSE",
  "CURLY_BRACE_OPEN", "CURLY_BRACE_CLOSE", "ARROW", "BITWISE_AND",
  "MULTIPLY", "ADD_", "SUBTRACT", "NOT", "DIVIDE", "MODULO", "LESS_THAN",
  "GREATER_THAN", "LESS_THAN_EQUAL", "GREATER_THAN_EQUAL", "EQUAL",
  "NOT_EQUAL", "LOGICAL_AND", "LOGICAL_OR", "QUESTION_MARK", "COLON",
  "SEMICOLON", "ASSIGN_", "COMMA", "IDENTIFIER", "INTEGER_CONSTANT",
  "CHAR_CONSTANT", "STRING_LITERAL", "$accept", "primary_expression",
  "postfix_expression", "argument_expression_list", "unary_expression",
  "unary_operator", "cast_expression", "multiplicative_expression",
  "additive_expression", "relational_expression", "equality_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "M", "N", "assignment_expression",
  "assignment_operator", "expression", "declaration", "init_declarator",
  "type_specifier", "declarator", "direct_declarator",
  "parameter_list_opt", "pointer", "parameter_list",
  "parameter_declaration", "initializer", "statement",
  "compound_statement", "block_item_list", "block_item",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "translation_unit", "external_declaration",
  "function_definition", "function_prototype", "declaration_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-141)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-94)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      78,  -141,  -141,  -141,  -141,   -13,    40,  -141,  -141,    -1,
    -141,  -141,   -11,    11,    80,   -21,  -141,  -141,   120,  -141,
    -141,   268,  -141,   -13,    30,   205,    78,    80,    14,    23,
     218,   268,  -141,  -141,  -141,  -141,  -141,  -141,  -141,  -141,
    -141,  -141,  -141,  -141,    26,    10,   268,  -141,    60,    31,
      75,    65,    36,    76,  -141,  -141,    46,  -141,  -141,  -141,
      73,  -141,  -141,  -141,  -141,  -141,  -141,  -141,    62,  -141,
    -141,  -141,   101,   -13,   103,    81,  -141,   229,   268,  -141,
      84,   106,   268,   258,    87,  -141,   268,  -141,  -141,   268,
     268,   268,   268,   268,   268,   268,   268,   268,   268,   268,
    -141,  -141,    98,  -141,  -141,   158,  -141,  -141,  -141,    78,
    -141,  -141,  -141,  -141,   122,  -141,    -9,  -141,  -141,  -141,
    -141,  -141,  -141,    60,    60,    31,    31,    31,    31,    75,
      75,   268,   268,  -141,  -141,  -141,   229,   118,  -141,  -141,
     268,    65,    36,   268,  -141,  -141,  -141,  -141,  -141,   194,
     109,   268,  -141,  -141,  -141,   132,   268,   130,  -141,  -141,
    -141,   194,   194,  -141,  -141,  -141
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    53,    54,    52,    90,     0,     0,    87,    89,     0,
      63,    57,     0,    50,    56,     0,     1,    88,     0,    92,
      49,     0,    94,     0,     0,     0,    62,    55,     0,     0,
       0,     0,    74,    16,    17,    18,    19,    20,    81,     2,
       3,     4,     5,     7,    14,    21,     0,    22,    26,    29,
      34,    37,    39,    41,    45,    48,     0,    78,    79,    69,
      43,    76,    70,    71,    72,    73,    68,    51,    50,    95,
      91,    58,     0,    67,     0,    61,    64,     0,     0,    85,
       0,     0,     0,     0,     0,    47,     0,    21,    15,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      43,    43,     0,    80,    75,     0,    59,    66,    60,     0,
      43,    44,    86,     6,     0,     9,     0,    12,    11,    46,
      23,    24,    25,    27,    28,    30,    31,    32,    33,    35,
      36,     0,     0,    43,    77,    65,     0,     0,     8,    10,
       0,    38,    40,     0,    44,    43,    13,    44,    43,     0,
       0,     0,    44,    43,    44,    82,     0,     0,    43,    42,
      43,     0,     0,    44,    84,    83
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -141,  -141,  -141,  -141,   -36,  -141,   -17,    17,     9,    16,
      13,    15,  -141,   -10,   -69,   -77,   -18,  -141,   -30,    -7,
    -141,     2,    -4,   133,  -141,  -141,  -141,    41,  -141,  -140,
       6,  -141,    44,   -65,  -141,  -141,  -141,  -141,   139,  -141,
    -141,  -141
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,    43,    44,   116,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,   105,   102,    55,    86,    56,     4,
      12,    23,    13,    14,    74,    15,    75,    76,    67,    58,
      59,    60,    61,    62,    63,    64,    65,     6,     7,     8,
       9,    24
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      80,    81,     5,    66,   139,    10,    22,    72,     5,   152,
      87,    57,   110,    18,     1,    19,    11,    69,     2,    68,
       3,   163,   164,    20,    11,   -93,    77,   140,    73,    88,
      70,   131,   132,     1,   137,    78,    82,     2,    83,     3,
      16,   136,    84,     1,    18,    85,    21,     2,   111,     3,
      92,    93,   114,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,   143,   117,   100,   148,   119,   107,
     150,   144,   120,   121,   122,   155,   149,   157,    89,   151,
     103,     1,    90,    91,   156,     2,   165,     3,   104,   161,
      25,   162,    26,    98,    99,    87,    87,    21,    57,    94,
      95,    96,    97,   125,   126,   127,   128,   101,   -44,   123,
     124,    73,   106,   147,   129,   130,   108,   109,   112,   113,
      87,   154,   146,     1,   118,    28,    29,     2,    30,     3,
     133,   145,    31,   138,    18,    32,   158,    33,    34,    35,
      36,    37,   153,   160,   141,    17,   159,   142,    27,   134,
     135,     0,     0,     0,    38,     0,     0,    39,    40,    41,
      42,     1,     0,    28,    29,     2,    30,     3,     0,     0,
      31,     0,    18,     0,     0,    33,    34,    35,    36,    37,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    38,     0,     0,    39,    40,    41,    42,    28,
      29,     0,    30,     0,     0,     0,    31,     0,    18,     0,
       0,    33,    34,    35,    36,    37,    71,    31,     0,     0,
       0,     0,    33,    34,    35,    36,    37,     0,    38,     0,
      31,    39,    40,    41,    42,    33,    34,    35,    36,    37,
       0,    31,    39,    40,    41,    42,    33,    34,    35,    36,
      37,     0,    79,     0,     0,    39,    40,    41,    42,     0,
       0,     0,     0,    38,     0,     0,    39,    40,    41,    42,
      31,   115,     0,     0,     0,    33,    34,    35,    36,    37,
      31,     0,     0,     0,     0,    33,    34,    35,    36,    37,
       0,     0,     0,     0,     0,    39,    40,    41,    42,     0,
       0,     0,     0,     0,     0,    39,    40,    41,    42
};

static const yytype_int16 yycheck[] =
{
      30,    31,     0,    21,    13,    18,    13,    25,     6,   149,
      46,    18,    77,    14,     3,     9,    37,    24,     7,    23,
       9,   161,   162,    34,    37,    14,    12,    36,    26,    46,
      24,   100,   101,     3,   111,    12,    10,     7,    12,     9,
       0,   110,    16,     3,    14,    35,    35,     7,    78,     9,
      19,    20,    82,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   133,    83,    30,   144,    86,    73,
     147,   136,    89,    90,    91,   152,   145,   154,    18,   148,
      34,     3,    22,    23,   153,     7,   163,     9,    15,   158,
      10,   160,    12,    28,    29,   131,   132,    35,   105,    24,
      25,    26,    27,    94,    95,    96,    97,    31,    32,    92,
      93,   109,    11,   143,    98,    99,    13,    36,    34,    13,
     156,   151,   140,     3,    37,     5,     6,     7,     8,     9,
      32,    13,    12,    11,    14,    15,     4,    17,    18,    19,
      20,    21,    33,    13,   131,     6,   156,   132,    15,   105,
     109,    -1,    -1,    -1,    34,    -1,    -1,    37,    38,    39,
      40,     3,    -1,     5,     6,     7,     8,     9,    -1,    -1,
      12,    -1,    14,    -1,    -1,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    -1,    -1,    37,    38,    39,    40,     5,
       6,    -1,     8,    -1,    -1,    -1,    12,    -1,    14,    -1,
      -1,    17,    18,    19,    20,    21,    11,    12,    -1,    -1,
      -1,    -1,    17,    18,    19,    20,    21,    -1,    34,    -1,
      12,    37,    38,    39,    40,    17,    18,    19,    20,    21,
      -1,    12,    37,    38,    39,    40,    17,    18,    19,    20,
      21,    -1,    34,    -1,    -1,    37,    38,    39,    40,    -1,
      -1,    -1,    -1,    34,    -1,    -1,    37,    38,    39,    40,
      12,    13,    -1,    -1,    -1,    17,    18,    19,    20,    21,
      12,    -1,    -1,    -1,    -1,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    37,    38,    39,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    37,    38,    39,    40
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     7,     9,    60,    62,    78,    79,    80,    81,
      18,    37,    61,    63,    64,    66,     0,    79,    14,    71,
      34,    35,    60,    62,    82,    10,    12,    64,     5,     6,
       8,    12,    15,    17,    18,    19,    20,    21,    34,    37,
      38,    39,    40,    42,    43,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    57,    59,    60,    70,    71,
      72,    73,    74,    75,    76,    77,    57,    69,    63,    60,
      71,    11,    57,    62,    65,    67,    68,    12,    12,    34,
      59,    59,    10,    12,    16,    35,    58,    45,    47,    18,
      22,    23,    19,    20,    24,    25,    26,    27,    28,    29,
      30,    31,    56,    34,    15,    55,    11,    63,    13,    36,
      74,    59,    34,    13,    59,    13,    44,    57,    37,    57,
      47,    47,    47,    48,    48,    49,    49,    49,    49,    50,
      50,    55,    55,    32,    73,    68,    55,    56,    11,    13,
      36,    51,    52,    55,    74,    13,    57,    59,    56,    55,
      56,    55,    70,    33,    59,    56,    55,    56,     4,    54,
      13,    55,    55,    70,    70,    56
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    41,    42,    42,    42,    42,    42,    43,    43,    43,
      43,    43,    44,    44,    45,    45,    46,    46,    46,    46,
      46,    47,    48,    48,    48,    48,    49,    49,    49,    50,
      50,    50,    50,    50,    51,    51,    51,    52,    52,    53,
      53,    54,    54,    55,    56,    57,    57,    58,    59,    60,
      61,    61,    62,    62,    62,    63,    63,    64,    64,    64,
      64,    65,    65,    66,    67,    67,    68,    68,    69,    70,
      70,    70,    70,    70,    71,    71,    72,    72,    73,    73,
      74,    74,    75,    75,    76,    77,    77,    78,    78,    79,
      79,    80,    80,    81,    82,    82
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     3,     1,     4,     3,
       4,     3,     1,     3,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     1,     4,     1,
       4,     1,     9,     0,     0,     1,     3,     1,     1,     3,
       1,     3,     1,     1,     1,     2,     1,     1,     3,     4,
       4,     1,     0,     1,     1,     3,     2,     1,     1,     1,
       1,     1,     1,     1,     2,     3,     1,     3,     1,     1,
       2,     1,     8,    12,    12,     2,     3,     1,     2,     1,
       1,     4,     2,     2,     1,     2
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
#line 117 "A6_1.y"
        {
            (yyval.expr) = new expression();  // Create new expression
            string s = *((yyvsp[0].str));
            ST->lookup(s);          // Store entry in the symbol table
            (yyval.expr)->loc = s;            // Store pointer to string identifier name
        }
#line 1317 "A6_1.tab.c"
    break;

  case 3: /* primary_expression: INTEGER_CONSTANT  */
#line 124 "A6_1.y"
        {
            (yyval.expr) = new expression();                  // Create new expression
            (yyval.expr)->loc = ST->gentemp(INT);             // Generate a new temporary variable
            emit((yyval.expr)->loc, (yyvsp[0].intval), ASSIGN);
            symbolValue* val = new symbolValue();
            val->setInitVal((yyvsp[0].intval));                    // Set the initial value
            ST->lookup((yyval.expr)->loc)->initVal = val;     // Store in symbol table
        }
#line 1330 "A6_1.tab.c"
    break;

  case 4: /* primary_expression: CHAR_CONSTANT  */
#line 133 "A6_1.y"
        {
            (yyval.expr) = new expression();                  // Create new expression
            (yyval.expr)->loc = ST->gentemp(CHAR);            // Generate a new temporary variable
            emit((yyval.expr)->loc, (yyvsp[0].charval), ASSIGN);
            symbolValue* val = new symbolValue();
            val->setInitVal((yyvsp[0].charval));                    // Set the initial value
            ST->lookup((yyval.expr)->loc)->initVal = val;     // Store in symbol table
        }
#line 1343 "A6_1.tab.c"
    break;

  case 5: /* primary_expression: STRING_LITERAL  */
#line 142 "A6_1.y"
        {
            (yyval.expr) = new expression();                  // Create new expression
            (yyval.expr)->loc = ".LC" + to_string(strCount++);
            stringConsts.push_back(*((yyvsp[0].str)));          // Add to the list of string constants
        }
#line 1353 "A6_1.tab.c"
    break;

  case 6: /* primary_expression: PARENTHESIS_OPEN expression PARENTHESIS_CLOSE  */
#line 148 "A6_1.y"
        {
            (yyval.expr) = (yyvsp[-1].expr);                                // Simple assignment
        }
#line 1361 "A6_1.tab.c"
    break;

  case 7: /* postfix_expression: primary_expression  */
#line 155 "A6_1.y"
        {}
#line 1367 "A6_1.tab.c"
    break;

  case 8: /* postfix_expression: postfix_expression SQUARE_BRACE_OPEN expression SQUARE_BRACE_CLOSE  */
#line 157 "A6_1.y"
        {
            symbolType to = ST->lookup((yyvsp[-3].expr)->loc)->type;      // Get the type of the expression
            string f = "";
            if(!((yyvsp[-3].expr)->fold)) {
                f = ST->gentemp(INT);                       // Generate a new temporary variable
                emit(f, 0, ASSIGN);
                (yyvsp[-3].expr)->folder = new string(f);
            }
            string temp = ST->gentemp(INT);

            // Emit the necessary quads
            emit(temp, (yyvsp[-1].expr)->loc, "", ASSIGN);
            emit(temp, temp, "4", MULT);
            emit(f, temp, "", ASSIGN);
            (yyval.expr) = (yyvsp[-3].expr);
        }
#line 1388 "A6_1.tab.c"
    break;

  case 9: /* postfix_expression: postfix_expression PARENTHESIS_OPEN PARENTHESIS_CLOSE  */
#line 174 "A6_1.y"
        {   
            // Corresponds to calling a function with the function name but without any arguments
            symbolTable* funcTable = globalST.lookup((yyvsp[-2].expr)->loc)->nestedTable;
            emit((yyvsp[-2].expr)->loc, "0", "", CALL);
        }
#line 1398 "A6_1.tab.c"
    break;

  case 10: /* postfix_expression: postfix_expression PARENTHESIS_OPEN argument_expression_list PARENTHESIS_CLOSE  */
#line 180 "A6_1.y"
        {   
            // Corresponds to calling a function with the function name and the appropriate number of arguments
            symbolTable* funcTable = globalST.lookup((yyvsp[-3].expr)->loc)->nestedTable;
            vector<param*> parameters = *((yyvsp[-1].prmList));                          // Get the list of parameters
            vector<symbol*> paramsList = funcTable->symbols;

            for(int i = 0; i < (int)parameters.size(); i++) {
                emit(parameters[i]->name, "", "", PARAM);               // Emit the parameters
            }

            DataType retType = funcTable->lookup("RETVAL")->type.type;  // Add an entry in the symbol table for the return value
            if(retType == VOID)                                         // If the function returns void
                emit((yyvsp[-3].expr)->loc, (int)parameters.size(), CALL);
            else {                                                      // If the function returns a value
                string retVal = ST->gentemp(retType);
                emit((yyvsp[-3].expr)->loc, to_string(parameters.size()), retVal, CALL);
                (yyval.expr) = new expression();
                (yyval.expr)->loc = retVal;
            }
        }
#line 1423 "A6_1.tab.c"
    break;

  case 11: /* postfix_expression: postfix_expression ARROW IDENTIFIER  */
#line 201 "A6_1.y"
        {}
#line 1429 "A6_1.tab.c"
    break;

  case 12: /* argument_expression_list: assignment_expression  */
#line 206 "A6_1.y"
        {
            param* first = new param();                 // Create a new parameter
            first->name = (yyvsp[0].expr)->loc;
            first->type = ST->lookup((yyvsp[0].expr)->loc)->type;
            (yyval.prmList) = new vector<param*>;
            (yyval.prmList)->push_back(first);                       // Add the parameter to the list
        }
#line 1441 "A6_1.tab.c"
    break;

  case 13: /* argument_expression_list: argument_expression_list COMMA assignment_expression  */
#line 214 "A6_1.y"
        {
            param* next = new param();                  // Create a new parameter
            next->name = (yyvsp[0].expr)->loc;
            next->type = ST->lookup(next->name)->type;
            (yyval.prmList) = (yyvsp[-2].prmList);
            (yyval.prmList)->push_back(next);                        // Add the parameter to the list
        }
#line 1453 "A6_1.tab.c"
    break;

  case 14: /* unary_expression: postfix_expression  */
#line 225 "A6_1.y"
        {}
#line 1459 "A6_1.tab.c"
    break;

  case 15: /* unary_expression: unary_operator cast_expression  */
#line 227 "A6_1.y"
        {
            // Case of unary operator
            switch((yyvsp[-1].charval)) {
                case '&':   // Address
                    (yyval.expr) = new expression();
                    (yyval.expr)->loc = ST->gentemp(POINTER);                 // Generate temporary of the same base type
                    emit((yyval.expr)->loc, (yyvsp[0].expr)->loc, "", REFERENCE);          // Emit the quad
                    break;
                case '*':   // De-referencing
                    (yyval.expr) = new expression();
                    (yyval.expr)->loc = ST->gentemp(INT);                     // Generate temporary of the same base type
                    (yyval.expr)->fold = 1;
                    (yyval.expr)->folder = new string((yyvsp[0].expr)->loc);
                    emit((yyval.expr)->loc, (yyvsp[0].expr)->loc, "", DEREFERENCE);        // Emit the quad
                    break;
                case '-':   // Unary minus
                    (yyval.expr) = new expression();
                    (yyval.expr)->loc = ST->gentemp();                        // Generate temporary of the same base type
                    emit((yyval.expr)->loc, (yyvsp[0].expr)->loc, "", U_MINUS);            // Emit the quad
                    break;
                case '!':   // Logical not 
                    (yyval.expr) = new expression();
                    (yyval.expr)->loc = ST->gentemp(INT);                     // Generate temporary of the same base type
                    int temp = nextinstr + 2;
                    emit(to_string(temp), (yyvsp[0].expr)->loc, "0", GOTO_EQ);   // Emit the quads
                    temp = nextinstr + 3;
                    emit(to_string(temp), "", "", GOTO);
                    emit((yyval.expr)->loc, "1", "", ASSIGN);
                    temp = nextinstr + 2;
                    emit(to_string(temp), "", "", GOTO);
                    emit((yyval.expr)->loc, "0", "", ASSIGN);
                    break;
            }
        }
#line 1498 "A6_1.tab.c"
    break;

  case 16: /* unary_operator: BITWISE_AND  */
#line 265 "A6_1.y"
        {
            (yyval.charval) = '&';
        }
#line 1506 "A6_1.tab.c"
    break;

  case 17: /* unary_operator: MULTIPLY  */
#line 269 "A6_1.y"
        {
            (yyval.charval) = '*';
        }
#line 1514 "A6_1.tab.c"
    break;

  case 18: /* unary_operator: ADD_  */
#line 273 "A6_1.y"
        {
            (yyval.charval) = '+';
        }
#line 1522 "A6_1.tab.c"
    break;

  case 19: /* unary_operator: SUBTRACT  */
#line 277 "A6_1.y"
        {
            (yyval.charval) = '-';
        }
#line 1530 "A6_1.tab.c"
    break;

  case 20: /* unary_operator: NOT  */
#line 281 "A6_1.y"
        {
            (yyval.charval) = '!';
        }
#line 1538 "A6_1.tab.c"
    break;

  case 21: /* cast_expression: unary_expression  */
#line 288 "A6_1.y"
        {}
#line 1544 "A6_1.tab.c"
    break;

  case 22: /* multiplicative_expression: cast_expression  */
#line 293 "A6_1.y"
        {
            (yyval.expr) = new expression();                                  // Generate new expression
            symbolType tp = ST->lookup((yyvsp[0].expr)->loc)->type;
            if(tp.type == ARRAY) {                                  // If the type is an array
                string t = ST->gentemp(tp.nextType);                // Generate a temporary
                if((yyvsp[0].expr)->folder != NULL) {
                    emit(t, (yyvsp[0].expr)->loc, *((yyvsp[0].expr)->folder), ARR_IDX_ARG);   // Emit the necessary quad
                    (yyvsp[0].expr)->loc = t;
                    (yyvsp[0].expr)->type = tp.nextType;
                    (yyval.expr) = (yyvsp[0].expr);
                }
                else
                    (yyval.expr) = (yyvsp[0].expr);        // Simple assignment
            }
            else
                (yyval.expr) = (yyvsp[0].expr);            // Simple assignment
        }
#line 1566 "A6_1.tab.c"
    break;

  case 23: /* multiplicative_expression: multiplicative_expression MULTIPLY cast_expression  */
#line 311 "A6_1.y"
        {   
            // Indicates multiplication
            (yyval.expr) = new expression();
            symbol* one = ST->lookup((yyvsp[-2].expr)->loc);                  // Get the first operand from the symbol table
            symbol* two = ST->lookup((yyvsp[0].expr)->loc);                  // Get the second operand from the symbol table
            if(two->type.type == ARRAY) {                       // If the second operand is an array, perform necessary operations
                string t = ST->gentemp(two->type.nextType);
                emit(t, (yyvsp[0].expr)->loc, *((yyvsp[0].expr)->folder), ARR_IDX_ARG);
                (yyvsp[0].expr)->loc = t;
                (yyvsp[0].expr)->type = two->type.nextType;
            }
            if(one->type.type == ARRAY) {                       // If the first operand is an array, perform necessary operations
                string t = ST->gentemp(one->type.nextType);
                emit(t, (yyvsp[-2].expr)->loc, *((yyvsp[-2].expr)->folder), ARR_IDX_ARG);
                (yyvsp[-2].expr)->loc = t;
                (yyvsp[-2].expr)->type = one->type.nextType;
            }

            // Assign the result of the multiplication to the higher data type
            DataType final = ((one->type.type > two->type.type) ? (one->type.type) : (two->type.type));
            (yyval.expr)->loc = ST->gentemp(final);                       // Store the final result in a temporary
            emit((yyval.expr)->loc, (yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc, MULT);
        }
#line 1594 "A6_1.tab.c"
    break;

  case 24: /* multiplicative_expression: multiplicative_expression DIVIDE cast_expression  */
#line 335 "A6_1.y"
        {
            // Indicates division
            (yyval.expr) = new expression();
            symbol* one = ST->lookup((yyvsp[-2].expr)->loc);                  // Get the first operand from the symbol table
            symbol* two = ST->lookup((yyvsp[0].expr)->loc);                  // Get the second operand from the symbol table
            if(two->type.type == ARRAY) {                       // If the second operand is an array, perform necessary operations
                string t = ST->gentemp(two->type.nextType);
                emit(t, (yyvsp[0].expr)->loc, *((yyvsp[0].expr)->folder), ARR_IDX_ARG);
                (yyvsp[0].expr)->loc = t;
                (yyvsp[0].expr)->type = two->type.nextType;
            }
            if(one->type.type == ARRAY) {                       // If the first operand is an array, perform necessary operations
                string t = ST->gentemp(one->type.nextType);
                emit(t, (yyvsp[-2].expr)->loc, *((yyvsp[-2].expr)->folder), ARR_IDX_ARG);
                (yyvsp[-2].expr)->loc = t;
                (yyvsp[-2].expr)->type = one->type.nextType;
            }

            // Assign the result of the division to the higher data type
            DataType final = ((one->type.type > two->type.type) ? (one->type.type) : (two->type.type));
            (yyval.expr)->loc = ST->gentemp(final);                       // Store the final result in a temporary
            emit((yyval.expr)->loc, (yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc, DIV);
        }
#line 1622 "A6_1.tab.c"
    break;

  case 25: /* multiplicative_expression: multiplicative_expression MODULO cast_expression  */
#line 359 "A6_1.y"
        {
            // Indicates modulo
            (yyval.expr) = new expression();
            symbol* one = ST->lookup((yyvsp[-2].expr)->loc);                  // Get the first operand from the symbol table
            symbol* two = ST->lookup((yyvsp[0].expr)->loc);                  // Get the second operand from the symbol table
            if(two->type.type == ARRAY) {                       // If the second operand is an array, perform necessary operations
                string t = ST->gentemp(two->type.nextType);
                emit(t, (yyvsp[0].expr)->loc, *((yyvsp[0].expr)->folder), ARR_IDX_ARG);
                (yyvsp[0].expr)->loc = t;
                (yyvsp[0].expr)->type = two->type.nextType;
            }
            if(one->type.type == ARRAY) {                       // If the first operand is an array, perform necessary operations
                string t = ST->gentemp(one->type.nextType);
                emit(t, (yyvsp[-2].expr)->loc, *((yyvsp[-2].expr)->folder), ARR_IDX_ARG);
                (yyvsp[-2].expr)->loc = t;
                (yyvsp[-2].expr)->type = one->type.nextType;
            }

            // Assign the result of the modulo to the higher data type
            DataType final = ((one->type.type > two->type.type) ? (one->type.type) : (two->type.type));
            (yyval.expr)->loc = ST->gentemp(final);                       // Store the final result in a temporary
            emit((yyval.expr)->loc, (yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc, MOD);
        }
#line 1650 "A6_1.tab.c"
    break;

  case 26: /* additive_expression: multiplicative_expression  */
#line 386 "A6_1.y"
        {}
#line 1656 "A6_1.tab.c"
    break;

  case 27: /* additive_expression: additive_expression ADD_ multiplicative_expression  */
#line 388 "A6_1.y"
        {   
            // Indicates addition
            (yyval.expr) = new expression();
            symbol* one = ST->lookup((yyvsp[-2].expr)->loc);                  // Get the first operand from the symbol table
            symbol* two = ST->lookup((yyvsp[0].expr)->loc);                  // Get the second operand from the symbol table
            if(two->type.type == ARRAY) {                       // If the second operand is an array, perform necessary operations
                string t = ST->gentemp(two->type.nextType);
                emit(t, (yyvsp[0].expr)->loc, *((yyvsp[0].expr)->folder), ARR_IDX_ARG);
                (yyvsp[0].expr)->loc = t;
                (yyvsp[0].expr)->type = two->type.nextType;
            }
            if(one->type.type == ARRAY) {                       // If the first operand is an array, perform necessary operations
                string t = ST->gentemp(one->type.nextType);
                emit(t, (yyvsp[-2].expr)->loc, *((yyvsp[-2].expr)->folder), ARR_IDX_ARG);
                (yyvsp[-2].expr)->loc = t;
                (yyvsp[-2].expr)->type = one->type.nextType;
            }

            // Assign the result of the addition to the higher data type
            DataType final = ((one->type.type > two->type.type) ? (one->type.type) : (two->type.type));
            (yyval.expr)->loc = ST->gentemp(final);                       // Store the final result in a temporary
            emit((yyval.expr)->loc, (yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc, ADD);
        }
#line 1684 "A6_1.tab.c"
    break;

  case 28: /* additive_expression: additive_expression SUBTRACT multiplicative_expression  */
#line 412 "A6_1.y"
        {
            // Indicates subtraction
            (yyval.expr) = new expression();
            symbol* one = ST->lookup((yyvsp[-2].expr)->loc);                  // Get the first operand from the symbol table
            symbol* two = ST->lookup((yyvsp[0].expr)->loc);                  // Get the second operand from the symbol table
            if(two->type.type == ARRAY) {                       // If the second operand is an array, perform necessary operations
                string t = ST->gentemp(two->type.nextType);
                emit(t, (yyvsp[0].expr)->loc, *((yyvsp[0].expr)->folder), ARR_IDX_ARG);
                (yyvsp[0].expr)->loc = t;
                (yyvsp[0].expr)->type = two->type.nextType;
            }
            if(one->type.type == ARRAY) {                       // If the first operand is an array, perform necessary operations
                string t = ST->gentemp(one->type.nextType);
                emit(t, (yyvsp[-2].expr)->loc, *((yyvsp[-2].expr)->folder), ARR_IDX_ARG);
                (yyvsp[-2].expr)->loc = t;
                (yyvsp[-2].expr)->type = one->type.nextType;
            }

            // Assign the result of the subtraction to the higher data type
            DataType final = ((one->type.type > two->type.type) ? (one->type.type) : (two->type.type));
            (yyval.expr)->loc = ST->gentemp(final);                       // Store the final result in a temporary
            emit((yyval.expr)->loc, (yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc, SUB);
        }
#line 1712 "A6_1.tab.c"
    break;

  case 29: /* relational_expression: additive_expression  */
#line 441 "A6_1.y"
        {}
#line 1718 "A6_1.tab.c"
    break;

  case 30: /* relational_expression: relational_expression LESS_THAN additive_expression  */
#line 443 "A6_1.y"
        {
            (yyval.expr) = new expression();
            symbol* one = ST->lookup((yyvsp[-2].expr)->loc);                  // Get the first operand from the symbol table
            symbol* two = ST->lookup((yyvsp[0].expr)->loc);                  // Get the second operand from the symbol table
            if(two->type.type == ARRAY) {                       // If the second operand is an array, perform necessary operations
                string t = ST->gentemp(two->type.nextType);
                emit(t, (yyvsp[0].expr)->loc, *((yyvsp[0].expr)->folder), ARR_IDX_ARG);
                (yyvsp[0].expr)->loc = t;
                (yyvsp[0].expr)->type = two->type.nextType;
            }
            if(one->type.type == ARRAY) {                       // If the first operand is an array, perform necessary operations
                string t = ST->gentemp(one->type.nextType);
                emit(t, (yyvsp[-2].expr)->loc, *((yyvsp[-2].expr)->folder), ARR_IDX_ARG);
                (yyvsp[-2].expr)->loc = t;
                (yyvsp[-2].expr)->type = one->type.nextType;
            }
            (yyval.expr) = new expression();
            (yyval.expr)->loc = ST->gentemp();
            (yyval.expr)->type = BOOL;                                    // Assign the result of the relational expression to a boolean
            emit((yyval.expr)->loc, "1", "", ASSIGN);
            (yyval.expr)->truelist = makelist(nextinstr);                 // Set the truelist to the next instruction
            emit("", (yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc, GOTO_LT);                // Emit "if x < y goto ..."
            emit((yyval.expr)->loc, "0", "", ASSIGN);
            (yyval.expr)->falselist = makelist(nextinstr);                // Set the falselist to the next instruction
            emit("", "", "", GOTO);                             // Emit "goto ..."
        }
#line 1749 "A6_1.tab.c"
    break;

  case 31: /* relational_expression: relational_expression GREATER_THAN additive_expression  */
#line 470 "A6_1.y"
        {
            (yyval.expr) = new expression();
            symbol* one = ST->lookup((yyvsp[-2].expr)->loc);                  // Get the first operand from the symbol table
            symbol* two = ST->lookup((yyvsp[0].expr)->loc);                  // Get the second operand from the symbol table
            if(two->type.type == ARRAY) {                       // If the second operand is an array, perform necessary operations
                string t = ST->gentemp(two->type.nextType);
                emit(t, (yyvsp[0].expr)->loc, *((yyvsp[0].expr)->folder), ARR_IDX_ARG);
                (yyvsp[0].expr)->loc = t;
                (yyvsp[0].expr)->type = two->type.nextType;
            }
            if(one->type.type == ARRAY) {                       // If the first operand is an array, perform necessary operations
                string t = ST->gentemp(one->type.nextType);
                emit(t, (yyvsp[-2].expr)->loc, *((yyvsp[-2].expr)->folder), ARR_IDX_ARG);
                (yyvsp[-2].expr)->loc = t;
                (yyvsp[-2].expr)->type = one->type.nextType;
            }
            (yyval.expr) = new expression();
            (yyval.expr)->loc = ST->gentemp();
            (yyval.expr)->type = BOOL;                                    // Assign the result of the relational expression to a boolean
            emit((yyval.expr)->loc, "1", "", ASSIGN);
            (yyval.expr)->truelist = makelist(nextinstr);                 // Set the truelist to the next instruction
            emit("", (yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc, GOTO_GT);                // Emit "if x > y goto ..."
            emit((yyval.expr)->loc, "0", "", ASSIGN);
            (yyval.expr)->falselist = makelist(nextinstr);                // Set the falselist to the next instruction
            emit("", "", "", GOTO);                             // Emit "goto ..."
        }
#line 1780 "A6_1.tab.c"
    break;

  case 32: /* relational_expression: relational_expression LESS_THAN_EQUAL additive_expression  */
#line 497 "A6_1.y"
        {
            (yyval.expr) = new expression();
            symbol* one = ST->lookup((yyvsp[-2].expr)->loc);                  // Get the first operand from the symbol table
            symbol* two = ST->lookup((yyvsp[0].expr)->loc);                  // Get the second operand from the symbol table
            if(two->type.type == ARRAY) {                       // If the second operand is an array, perform necessary operations
                string t = ST->gentemp(two->type.nextType);
                emit(t, (yyvsp[0].expr)->loc, *((yyvsp[0].expr)->folder), ARR_IDX_ARG);
                (yyvsp[0].expr)->loc = t;
                (yyvsp[0].expr)->type = two->type.nextType;
            }
            if(one->type.type == ARRAY) {                       // If the first operand is an array, perform necessary operations
                string t = ST->gentemp(one->type.nextType);
                emit(t, (yyvsp[-2].expr)->loc, *((yyvsp[-2].expr)->folder), ARR_IDX_ARG);
                (yyvsp[-2].expr)->loc = t;
                (yyvsp[-2].expr)->type = one->type.nextType;
            }
            (yyval.expr) = new expression();
            (yyval.expr)->loc = ST->gentemp();
            (yyval.expr)->type = BOOL;                                    // Assign the result of the relational expression to a boolean
            emit((yyval.expr)->loc, "1", "", ASSIGN);
            (yyval.expr)->truelist = makelist(nextinstr);                 // Set the truelist to the next instruction
            emit("", (yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc, GOTO_LTE);               // Emit "if x <= y goto ..."
            emit((yyval.expr)->loc, "0", "", ASSIGN);
            (yyval.expr)->falselist = makelist(nextinstr);                // Set the falselist to the next instruction
            emit("", "", "", GOTO);                             // Emit "goto ..."
        }
#line 1811 "A6_1.tab.c"
    break;

  case 33: /* relational_expression: relational_expression GREATER_THAN_EQUAL additive_expression  */
#line 524 "A6_1.y"
        {
            (yyval.expr) = new expression();
            symbol* one = ST->lookup((yyvsp[-2].expr)->loc);                  // Get the first operand from the symbol table
            symbol* two = ST->lookup((yyvsp[0].expr)->loc);                  // Get the second operand from the symbol table
            if(two->type.type == ARRAY) {                       // If the second operand is an array, perform necessary operations
                string t = ST->gentemp(two->type.nextType);
                emit(t, (yyvsp[0].expr)->loc, *((yyvsp[0].expr)->folder), ARR_IDX_ARG);
                (yyvsp[0].expr)->loc = t;
                (yyvsp[0].expr)->type = two->type.nextType;
            }
            if(one->type.type == ARRAY) {                       // If the first operand is an array, perform necessary operations
                string t = ST->gentemp(one->type.nextType);
                emit(t, (yyvsp[-2].expr)->loc, *((yyvsp[-2].expr)->folder), ARR_IDX_ARG);
                (yyvsp[-2].expr)->loc = t;
                (yyvsp[-2].expr)->type = one->type.nextType;
            }
            (yyval.expr) = new expression();
            (yyval.expr)->loc = ST->gentemp();
            (yyval.expr)->type = BOOL;                                    // Assign the result of the relational expression to a boolean
            emit((yyval.expr)->loc, "1", "", ASSIGN);
            (yyval.expr)->truelist = makelist(nextinstr);                 // Set the truelist to the next instruction
            emit("", (yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc, GOTO_GTE);               // Emit "if x >= y goto ..."
            emit((yyval.expr)->loc, "0", "", ASSIGN);
            (yyval.expr)->falselist = makelist(nextinstr);                // Set the falselist to the next instruction
            emit("", "", "", GOTO);                             // Emit "goto ..."
        }
#line 1842 "A6_1.tab.c"
    break;

  case 34: /* equality_expression: relational_expression  */
#line 554 "A6_1.y"
        {
            (yyval.expr) = new expression();
            (yyval.expr) = (yyvsp[0].expr);                // Simple assignment
        }
#line 1851 "A6_1.tab.c"
    break;

  case 35: /* equality_expression: equality_expression EQUAL relational_expression  */
#line 559 "A6_1.y"
        {
            (yyval.expr) = new expression();
            symbol* one = ST->lookup((yyvsp[-2].expr)->loc);                  // Get the first operand from the symbol table
            symbol* two = ST->lookup((yyvsp[0].expr)->loc);                  // Get the second operand from the symbol table
            if(two->type.type == ARRAY) {                       // If the second operand is an array, perform necessary operations
                string t = ST->gentemp(two->type.nextType);
                emit(t, (yyvsp[0].expr)->loc, *((yyvsp[0].expr)->folder), ARR_IDX_ARG);
                (yyvsp[0].expr)->loc = t;
                (yyvsp[0].expr)->type = two->type.nextType;
            }
            if(one->type.type == ARRAY) {                       // If the first operand is an array, perform necessary operations
                string t = ST->gentemp(one->type.nextType);
                emit(t, (yyvsp[-2].expr)->loc, *((yyvsp[-2].expr)->folder), ARR_IDX_ARG);
                (yyvsp[-2].expr)->loc = t;
                (yyvsp[-2].expr)->type = one->type.nextType;
            }
            (yyval.expr) = new expression();
            (yyval.expr)->loc = ST->gentemp();
            (yyval.expr)->type = BOOL;                                    // Assign the result of the relational expression to a boolean
            emit((yyval.expr)->loc, "1", "", ASSIGN);
            (yyval.expr)->truelist = makelist(nextinstr);                 // Set the truelist to the next instruction
            emit("", (yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc, GOTO_EQ);                // Emit "if x == y goto ..."
            emit((yyval.expr)->loc, "0", "", ASSIGN);
            (yyval.expr)->falselist = makelist(nextinstr);                // Set the falselist to the next instruction
            emit("", "", "", GOTO);                             // Emit "goto ..."
        }
#line 1882 "A6_1.tab.c"
    break;

  case 36: /* equality_expression: equality_expression NOT_EQUAL relational_expression  */
#line 586 "A6_1.y"
        {
            (yyval.expr) = new expression();
            symbol* one = ST->lookup((yyvsp[-2].expr)->loc);                  // Get the first operand from the symbol table
            symbol* two = ST->lookup((yyvsp[0].expr)->loc);                  // Get the second operand from the symbol table
            if(two->type.type == ARRAY) {                       // If the second operand is an array, perform necessary operations
                string t = ST->gentemp(two->type.nextType);
                emit(t, (yyvsp[0].expr)->loc, *((yyvsp[0].expr)->folder), ARR_IDX_ARG);
                (yyvsp[0].expr)->loc = t;
                (yyvsp[0].expr)->type = two->type.nextType;
            }
            if(one->type.type == ARRAY) {                       // If the first operand is an array, perform necessary operations
                string t = ST->gentemp(one->type.nextType);
                emit(t, (yyvsp[-2].expr)->loc, *((yyvsp[-2].expr)->folder), ARR_IDX_ARG);
                (yyvsp[-2].expr)->loc = t;
                (yyvsp[-2].expr)->type = one->type.nextType;
            }
            (yyval.expr) = new expression();
            (yyval.expr)->loc = ST->gentemp();
            (yyval.expr)->type = BOOL;                                    // Assign the result of the relational expression to a boolean
            emit((yyval.expr)->loc, "1", "", ASSIGN);
            (yyval.expr)->truelist = makelist(nextinstr);                 // Set the truelist to the next instruction
            emit("", (yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc, GOTO_NEQ);               // Emit "if x != y goto ..."
            emit((yyval.expr)->loc, "0", "", ASSIGN);
            (yyval.expr)->falselist = makelist(nextinstr);                // Set the falselist to the next instruction
            emit("", "", "", GOTO);                             // Emit "goto ..."
        }
#line 1913 "A6_1.tab.c"
    break;

  case 37: /* logical_and_expression: equality_expression  */
#line 618 "A6_1.y"
        {}
#line 1919 "A6_1.tab.c"
    break;

  case 38: /* logical_and_expression: logical_and_expression LOGICAL_AND M equality_expression  */
#line 620 "A6_1.y"
        {
            /*
                Here, we have augmented the grammar with the non-terminal M to facilitate backpatching
            */
            backpatch((yyvsp[-3].expr)->truelist, (yyvsp[-1].expr)->instr);                     // Backpatching
            (yyval.expr)->falselist = merge((yyvsp[-3].expr)->falselist, (yyvsp[0].expr)->falselist);    // Generate falselist by merging the falselists of $1 and $4
            (yyval.expr)->truelist = (yyvsp[0].expr)->truelist;                            // Generate truelist from truelist of $4
            (yyval.expr)->type = BOOL;                                        // Set the type of the expression to boolean
        }
#line 1933 "A6_1.tab.c"
    break;

  case 39: /* logical_or_expression: logical_and_expression  */
#line 633 "A6_1.y"
        {}
#line 1939 "A6_1.tab.c"
    break;

  case 40: /* logical_or_expression: logical_or_expression LOGICAL_OR M logical_and_expression  */
#line 635 "A6_1.y"
        {
            backpatch((yyvsp[-3].expr)->falselist, (yyvsp[-1].expr)->instr);                    // Backpatching
            (yyval.expr)->truelist = merge((yyvsp[-3].expr)->truelist, (yyvsp[0].expr)->truelist);       // Generate falselist by merging the falselists of $1 and $4
            (yyval.expr)->falselist = (yyvsp[0].expr)->falselist;                          // Generate truelist from truelist of $4
            (yyval.expr)->type = BOOL;                                        // Set the type of the expression to boolean
        }
#line 1950 "A6_1.tab.c"
    break;

  case 41: /* conditional_expression: logical_or_expression  */
#line 645 "A6_1.y"
        {
            (yyval.expr) = (yyvsp[0].expr);    // Simple assignment
        }
#line 1958 "A6_1.tab.c"
    break;

  case 42: /* conditional_expression: logical_or_expression N QUESTION_MARK M expression N COLON M conditional_expression  */
#line 649 "A6_1.y"
        {   
            /*
                Note the augmented grammar with the non-terminals M and N
            */
            symbol* one = ST->lookup((yyvsp[-4].expr)->loc);
            (yyval.expr)->loc = ST->gentemp(one->type.type);      // Create a temporary for the expression
            (yyval.expr)->type = one->type.type;
            emit((yyval.expr)->loc, (yyvsp[0].expr)->loc, "", ASSIGN);         // Assign the conditional expression
            list<int> temp = makelist(nextinstr);
            emit("", "", "", GOTO);                     // Prevent fall-through
            backpatch((yyvsp[-3].expr)->nextlist, nextinstr);         // Backpatch with nextinstr
            emit((yyval.expr)->loc, (yyvsp[-4].expr)->loc, "", ASSIGN);
            temp = merge(temp, makelist(nextinstr));
            emit("", "", "", GOTO);                     // Prevent fall-through
            backpatch((yyvsp[-7].expr)->nextlist, nextinstr);         // Backpatch with nextinstr
            convertIntToBool((yyvsp[-8].expr));                       // Convert the expression to boolean
            backpatch((yyvsp[-8].expr)->truelist, (yyvsp[-5].expr)->instr);         // When $1 is true, control goes to $4 (expression)
            backpatch((yyvsp[-8].expr)->falselist, (yyvsp[-1].expr)->instr);        // When $1 is false, control goes to $8 (conditional_expression)
            backpatch((yyvsp[-7].expr)->nextlist, nextinstr);         // Backpatch with nextinstr
        }
#line 1983 "A6_1.tab.c"
    break;

  case 43: /* M: %empty  */
#line 672 "A6_1.y"
        {   
            // Stores the next instruction value, and helps in backpatching
            (yyval.expr) = new expression();
            (yyval.expr)->instr = nextinstr;
        }
#line 1993 "A6_1.tab.c"
    break;

  case 44: /* N: %empty  */
#line 680 "A6_1.y"
        {
            // Helps in control flow
            (yyval.expr) = new expression();
            (yyval.expr)->nextlist = makelist(nextinstr);
            emit("", "", "", GOTO);
        }
#line 2004 "A6_1.tab.c"
    break;

  case 45: /* assignment_expression: conditional_expression  */
#line 690 "A6_1.y"
        {}
#line 2010 "A6_1.tab.c"
    break;

  case 46: /* assignment_expression: unary_expression assignment_operator assignment_expression  */
#line 692 "A6_1.y"
        {
            symbol* sym1 = ST->lookup((yyvsp[-2].expr)->loc);         // Get the first operand from the symbol table
            symbol* sym2 = ST->lookup((yyvsp[0].expr)->loc);         // Get the second operand from the symbol table
            if((yyvsp[-2].expr)->fold == 0) {
                if(sym1->type.type != ARRAY)
                    emit((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc, "", ASSIGN);
                else
                    emit((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc, *((yyvsp[-2].expr)->folder), ARR_IDX_RES);
            }
            else
                emit(*((yyvsp[-2].expr)->folder), (yyvsp[0].expr)->loc, "", L_DEREF);
            (yyval.expr) = (yyvsp[-2].expr);        // Assignment 
        }
#line 2028 "A6_1.tab.c"
    break;

  case 47: /* assignment_operator: ASSIGN_  */
#line 709 "A6_1.y"
        {}
#line 2034 "A6_1.tab.c"
    break;

  case 48: /* expression: assignment_expression  */
#line 714 "A6_1.y"
        {}
#line 2040 "A6_1.tab.c"
    break;

  case 49: /* declaration: type_specifier init_declarator SEMICOLON  */
#line 721 "A6_1.y"
        {
            DataType currType = (yyvsp[-2].types);
            int currSize = -1;
            // Assign correct size for the data type
            if(currType == INT)
                currSize = __INTEGER_SIZE;
            else if(currType == CHAR)
                currSize = __CHARACTER_SIZE;
            else if(currType == FLOAT)
                currSize = __FLOAT_SIZE;
            
            declaration* currDec = (yyvsp[-1].dec);
            if(currDec->type == FUNCTION) {
                ST = &globalST;
                emit(currDec->name, "", "", FUNC_END);
                symbol* one = ST->lookup(currDec->name);        // Create an entry for the function
                symbol* two = one->nestedTable->lookup("RETVAL", currType, currDec->pointers);
                one->size = 0;
                one->initVal = NULL;
            }else{
                symbol* three = ST->lookup(currDec->name, currType);        // Create an entry for the variable in the symbol table
                three->nestedTable = NULL;
                if(currDec->li == vector<int>() && currDec->pointers == 0) {
                    three->type.type = currType;
                    three->size = currSize;
                    if(currDec->initVal != NULL) {
                        string rval = currDec->initVal->loc;
                        emit(three->name, rval, "", ASSIGN);
                        three->initVal = ST->lookup(rval)->initVal;
                    }
                    else
                        three->initVal = NULL;
                }
                else if(currDec->li != vector<int>()) {         // Handle array types
                    three->type.type = ARRAY;
                    three->type.nextType = currType;
                    three->type.dims = currDec->li;
                    vector<int> temp = three->type.dims;
                    int sz = currSize;
                    for(int i = 0; i < (int)temp.size(); i++)
                        sz *= temp[i];
                    ST->offset += sz;
                    three->size = sz;
                    ST->offset -= 4;
                }
                else if(currDec->pointers != 0) {               // Handle pointer types
                    three->type.type = POINTER;
                    three->type.nextType = currType;
                    three->type.pointers = currDec->pointers;
                    ST->offset += (__POINTER_SIZE - currSize);
                    three->size = __POINTER_SIZE;
                }
            }
        }
#line 2099 "A6_1.tab.c"
    break;

  case 50: /* init_declarator: declarator  */
#line 783 "A6_1.y"
        {
            (yyval.dec) = (yyvsp[0].dec);
            (yyval.dec)->initVal = NULL;         // Initialize the initVal to NULL as no initialization is done
        }
#line 2108 "A6_1.tab.c"
    break;

  case 51: /* init_declarator: declarator ASSIGN_ initializer  */
#line 788 "A6_1.y"
        {   
            (yyval.dec) = (yyvsp[-2].dec);
            (yyval.dec)->initVal = (yyvsp[0].expr);           // Initialize the initVal to the value provided
        }
#line 2117 "A6_1.tab.c"
    break;

  case 52: /* type_specifier: VOID_  */
#line 797 "A6_1.y"
        {
            (yyval.types) = VOID;
        }
#line 2125 "A6_1.tab.c"
    break;

  case 53: /* type_specifier: CHAR_  */
#line 801 "A6_1.y"
        {
            (yyval.types) = CHAR;
        }
#line 2133 "A6_1.tab.c"
    break;

  case 54: /* type_specifier: INT_  */
#line 805 "A6_1.y"
        {
            (yyval.types) = INT; 
        }
#line 2141 "A6_1.tab.c"
    break;

  case 55: /* declarator: pointer direct_declarator  */
#line 814 "A6_1.y"
        {
            (yyval.dec) = (yyvsp[0].dec);
            (yyval.dec)->pointers = (yyvsp[-1].intval);
        }
#line 2150 "A6_1.tab.c"
    break;

  case 56: /* declarator: direct_declarator  */
#line 819 "A6_1.y"
        {
            (yyval.dec) = (yyvsp[0].dec);
            (yyval.dec)->pointers = 0;
        }
#line 2159 "A6_1.tab.c"
    break;

  case 57: /* direct_declarator: IDENTIFIER  */
#line 827 "A6_1.y"
        {
            (yyval.dec) = new declaration();
            (yyval.dec)->name = *((yyvsp[0].str));
        }
#line 2168 "A6_1.tab.c"
    break;

  case 58: /* direct_declarator: direct_declarator SQUARE_BRACE_OPEN SQUARE_BRACE_CLOSE  */
#line 832 "A6_1.y"
        {
            (yyvsp[-2].dec)->type = ARRAY;       // Array type
            (yyvsp[-2].dec)->nextType = INT;     // Array of ints
            (yyval.dec) = (yyvsp[-2].dec);
            (yyval.dec)->li.push_back(0);
        }
#line 2179 "A6_1.tab.c"
    break;

  case 59: /* direct_declarator: direct_declarator SQUARE_BRACE_OPEN assignment_expression SQUARE_BRACE_CLOSE  */
#line 839 "A6_1.y"
        {
            (yyvsp[-3].dec)->type = ARRAY;       // Array type
            (yyvsp[-3].dec)->nextType = INT;     // Array of ints
            (yyval.dec) = (yyvsp[-3].dec);
            int index = ST->lookup((yyvsp[-1].expr)->loc)->initVal->i;
            (yyval.dec)->li.push_back(index);
        }
#line 2191 "A6_1.tab.c"
    break;

  case 60: /* direct_declarator: direct_declarator PARENTHESIS_OPEN parameter_list_opt PARENTHESIS_CLOSE  */
#line 847 "A6_1.y"
        {
            (yyval.dec) = (yyvsp[-3].dec);
            (yyval.dec)->type = FUNCTION;    // Function type
            symbol* funcData = ST->lookup((yyval.dec)->name, (yyval.dec)->type);
            symbolTable* funcTable = new symbolTable();
            funcData->nestedTable = funcTable;
            vector<param*> paramList = *((yyvsp[-1].prmList));   // Get the parameter list
            for(int i = 0; i < (int)paramList.size(); i++) {
                param* curParam = paramList[i];
                if(curParam->type.type == ARRAY) {          // If the parameter is an array
                    funcTable->lookup(curParam->name, curParam->type.type);
                    funcTable->lookup(curParam->name)->type.nextType = INT;
                    funcTable->lookup(curParam->name)->type.dims.push_back(0);
                }
                else if(curParam->type.type == POINTER) {   // If the parameter is a pointer
                    funcTable->lookup(curParam->name, curParam->type.type);
                    funcTable->lookup(curParam->name)->type.nextType = INT;
                    funcTable->lookup(curParam->name)->type.dims.push_back(0);
                }
                else                                        // If the parameter is a anything other than an array or a pointer
                    funcTable->lookup(curParam->name, curParam->type.type);
            }
            ST = funcTable;         // Set the pointer to the symbol table to the function's symbol table
            emit((yyval.dec)->name, "", "", FUNC_BEG);
        }
#line 2221 "A6_1.tab.c"
    break;

  case 61: /* parameter_list_opt: parameter_list  */
#line 876 "A6_1.y"
        {}
#line 2227 "A6_1.tab.c"
    break;

  case 62: /* parameter_list_opt: %empty  */
#line 878 "A6_1.y"
        {
            (yyval.prmList) = new vector<param*>;
        }
#line 2235 "A6_1.tab.c"
    break;

  case 63: /* pointer: MULTIPLY  */
#line 886 "A6_1.y"
        {
            (yyval.intval) = 1;
        }
#line 2243 "A6_1.tab.c"
    break;

  case 64: /* parameter_list: parameter_declaration  */
#line 894 "A6_1.y"
        {
            (yyval.prmList) = new vector<param*>;         // Create a new vector of parameters
            (yyval.prmList)->push_back((yyvsp[0].prm));              // Add the parameter to the vector
        }
#line 2252 "A6_1.tab.c"
    break;

  case 65: /* parameter_list: parameter_list COMMA parameter_declaration  */
#line 899 "A6_1.y"
        {
            (yyvsp[-2].prmList)->push_back((yyvsp[0].prm));              // Add the parameter to the vector
            (yyval.prmList) = (yyvsp[-2].prmList);
        }
#line 2261 "A6_1.tab.c"
    break;

  case 66: /* parameter_declaration: type_specifier declarator  */
#line 907 "A6_1.y"
        {
            (yyval.prm) = new param();
            (yyval.prm)->name = (yyvsp[0].dec)->name;
            if((yyvsp[0].dec)->type == ARRAY) {
                (yyval.prm)->type.type = ARRAY;
                (yyval.prm)->type.nextType = (yyvsp[-1].types);
            }
            else if((yyvsp[0].dec)->pc != 0) {
                (yyval.prm)->type.type = POINTER;
                (yyval.prm)->type.nextType = (yyvsp[-1].types);
            }
            else
                (yyval.prm)->type.type = (yyvsp[-1].types);
        }
#line 2280 "A6_1.tab.c"
    break;

  case 67: /* parameter_declaration: type_specifier  */
#line 922 "A6_1.y"
        {}
#line 2286 "A6_1.tab.c"
    break;

  case 68: /* initializer: assignment_expression  */
#line 929 "A6_1.y"
        {
            (yyval.expr) = (yyvsp[0].expr);   // Simple assignment
        }
#line 2294 "A6_1.tab.c"
    break;

  case 74: /* compound_statement: CURLY_BRACE_OPEN CURLY_BRACE_CLOSE  */
#line 945 "A6_1.y"
        {}
#line 2300 "A6_1.tab.c"
    break;

  case 75: /* compound_statement: CURLY_BRACE_OPEN block_item_list CURLY_BRACE_CLOSE  */
#line 947 "A6_1.y"
        {
            (yyval.expr) = (yyvsp[-1].expr);
        }
#line 2308 "A6_1.tab.c"
    break;

  case 76: /* block_item_list: block_item  */
#line 954 "A6_1.y"
        {
            (yyval.expr) = (yyvsp[0].expr);    // Simple assignment
            backpatch((yyvsp[0].expr)->nextlist, nextinstr);
        }
#line 2317 "A6_1.tab.c"
    break;

  case 77: /* block_item_list: block_item_list M block_item  */
#line 959 "A6_1.y"
        {   
            /*
                This production rule has been augmented with the non-terminal M
            */
            (yyval.expr) = new expression();
            backpatch((yyvsp[-2].expr)->nextlist, (yyvsp[-1].expr)->instr);    // After $1, move to block_item via $2
            (yyval.expr)->nextlist = (yyvsp[0].expr)->nextlist;
        }
#line 2330 "A6_1.tab.c"
    break;

  case 78: /* block_item: declaration  */
#line 971 "A6_1.y"
        {
            (yyval.expr) = new expression();   // Create new expression
        }
#line 2338 "A6_1.tab.c"
    break;

  case 80: /* expression_statement: expression SEMICOLON  */
#line 979 "A6_1.y"
        {}
#line 2344 "A6_1.tab.c"
    break;

  case 81: /* expression_statement: SEMICOLON  */
#line 981 "A6_1.y"
        {
            (yyval.expr) = new expression();  // Create new expression
        }
#line 2352 "A6_1.tab.c"
    break;

  case 82: /* selection_statement: IF PARENTHESIS_OPEN expression N PARENTHESIS_CLOSE M statement N  */
#line 988 "A6_1.y"
        {
            /*
                This production rule has been augmented for control flow
            */
            backpatch((yyvsp[-4].expr)->nextlist, nextinstr);         // nextlist of N now has nextinstr
            convertIntToBool((yyvsp[-5].expr));                       // Convert expression to bool
            backpatch((yyvsp[-5].expr)->truelist, (yyvsp[-2].expr)->instr);         // Backpatching - if expression is true, go to M
            (yyval.expr) = new expression();                      // Create new expression
            // Merge falselist of expression, nextlist of statement and nextlist of the last N
            (yyvsp[-1].expr)->nextlist = merge((yyvsp[0].expr)->nextlist, (yyvsp[-1].expr)->nextlist);
            (yyval.expr)->nextlist = merge((yyvsp[-5].expr)->falselist, (yyvsp[-1].expr)->nextlist);
        }
#line 2369 "A6_1.tab.c"
    break;

  case 83: /* selection_statement: IF PARENTHESIS_OPEN expression N PARENTHESIS_CLOSE M statement N ELSE M statement N  */
#line 1001 "A6_1.y"
        {
            /*
                This production rule has been augmented for control flow
            */
            backpatch((yyvsp[-8].expr)->nextlist, nextinstr);         // nextlist of N now has nextinstr
            convertIntToBool((yyvsp[-9].expr));                       // Convert expression to bool
            backpatch((yyvsp[-9].expr)->truelist, (yyvsp[-6].expr)->instr);         // Backpatching - if expression is true, go to first M, else go to second M
            backpatch((yyvsp[-9].expr)->falselist, (yyvsp[-2].expr)->instr);
            (yyval.expr) = new expression();                      // Create new expression
            // Merge nextlist of statement, nextlist of N and nextlist of the last statement
            (yyval.expr)->nextlist = merge((yyvsp[-5].expr)->nextlist, (yyvsp[-4].expr)->nextlist);
            (yyval.expr)->nextlist = merge((yyval.expr)->nextlist, (yyvsp[-1].expr)->nextlist);
            (yyval.expr)->nextlist = merge((yyval.expr)->nextlist, (yyvsp[0].expr)->nextlist);
        }
#line 2388 "A6_1.tab.c"
    break;

  case 84: /* iteration_statement: FOR PARENTHESIS_OPEN expression_statement M expression_statement N M expression N PARENTHESIS_CLOSE M statement  */
#line 1019 "A6_1.y"
        {
            /*
                This production rule has been augmented with non-terminals like M and N to handle the control flow and backpatching
            */
            (yyval.expr) = new expression();                   // Create a new expression
            emit("", "", "", GOTO);
            (yyvsp[0].expr)->nextlist = merge((yyvsp[0].expr)->nextlist, makelist(nextinstr - 1));
            backpatch((yyvsp[0].expr)->nextlist, (yyvsp[-5].expr)->instr);    // Backpatching - go to the beginning of the loop
            backpatch((yyvsp[-3].expr)->nextlist, (yyvsp[-8].expr)->instr);     
            backpatch((yyvsp[-6].expr)->nextlist, nextinstr);     
            convertIntToBool((yyvsp[-7].expr));                   // Convert expression to bool
            backpatch((yyvsp[-7].expr)->truelist, (yyvsp[-1].expr)->instr);    // Backpatching - if expression is true, go to M
            (yyval.expr)->nextlist = (yyvsp[-7].expr)->falselist;           // Exit loop if expression is false
        }
#line 2407 "A6_1.tab.c"
    break;

  case 85: /* jump_statement: RETURN_ SEMICOLON  */
#line 1037 "A6_1.y"
        {
            if(ST->lookup("RETVAL")->type.type == VOID) {
                emit("", "", "", RETURN);           // Emit the quad when return type is void
            }
            (yyval.expr) = new expression();
        }
#line 2418 "A6_1.tab.c"
    break;

  case 86: /* jump_statement: RETURN_ expression SEMICOLON  */
#line 1044 "A6_1.y"
        {
            if(ST->lookup("RETVAL")->type.type == ST->lookup((yyvsp[-1].expr)->loc)->type.type) {
                emit((yyvsp[-1].expr)->loc, "", "", RETURN);      // Emit the quad when return type is not void
            }
            (yyval.expr) = new expression();
        }
#line 2429 "A6_1.tab.c"
    break;

  case 87: /* translation_unit: external_declaration  */
#line 1054 "A6_1.y"
        {}
#line 2435 "A6_1.tab.c"
    break;

  case 88: /* translation_unit: translation_unit external_declaration  */
#line 1056 "A6_1.y"
        {}
#line 2441 "A6_1.tab.c"
    break;

  case 89: /* external_declaration: function_definition  */
#line 1061 "A6_1.y"
        {}
#line 2447 "A6_1.tab.c"
    break;

  case 90: /* external_declaration: declaration  */
#line 1063 "A6_1.y"
        {}
#line 2453 "A6_1.tab.c"
    break;

  case 91: /* function_definition: type_specifier declarator declaration_list compound_statement  */
#line 1068 "A6_1.y"
        {}
#line 2459 "A6_1.tab.c"
    break;

  case 92: /* function_definition: function_prototype compound_statement  */
#line 1070 "A6_1.y"
        {
            ST = &globalST;                     // Reset the symbol table to global symbol table
            emit((yyvsp[-1].dec)->name, "", "", FUNC_END);
        }
#line 2468 "A6_1.tab.c"
    break;

  case 93: /* function_prototype: type_specifier declarator  */
#line 1078 "A6_1.y"
        {
            DataType currType = (yyvsp[-1].types);
            int currSize = -1;
            if(currType == CHAR)
                currSize = __CHARACTER_SIZE;
            if(currType == INT)
                currSize = __INTEGER_SIZE;
            if(currType == FLOAT)
                currSize = __FLOAT_SIZE;
            declaration* currDec = (yyvsp[0].dec);
            symbol* sym = globalST.lookup(currDec->name);
            if(currDec->type == FUNCTION) {
                symbol* retval = sym->nestedTable->lookup("RETVAL", currType, currDec->pointers);   // Create entry for return value
                sym->size = 0;
                sym->initVal = NULL;
            }
            (yyval.dec) = (yyvsp[0].dec);
        }
#line 2491 "A6_1.tab.c"
    break;

  case 94: /* declaration_list: declaration  */
#line 1100 "A6_1.y"
        {}
#line 2497 "A6_1.tab.c"
    break;

  case 95: /* declaration_list: declaration_list declaration  */
#line 1102 "A6_1.y"
        {}
#line 2503 "A6_1.tab.c"
    break;


#line 2507 "A6_1.tab.c"

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

#line 1105 "A6_1.y"


void yyerror(string s) {
    /*
        This function prints any error encountered while parsing
    */
    cout << "Error occurred: " << s << endl;
    cout << "Line no.: " << yylineno << endl;
    cout << "Unable to parse: " << yytext << endl; 
}
