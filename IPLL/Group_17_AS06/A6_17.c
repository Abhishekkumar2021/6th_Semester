/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "A6_17.y"

#include "A6_17_translator.h"
extern int yylex();
extern int lineCount;
void yyerror(string);
void yyinfo(string);

#line 78 "y.tab.c"

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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    AUTO = 258,
    BREAK = 259,
    CASE = 260,
    CHARTYPE = 261,
    CONST = 262,
    CONTINUE = 263,
    DEFAULT = 264,
    DO = 265,
    DOUBLE = 266,
    ELSE = 267,
    ENUM = 268,
    EXTERN = 269,
    FLOATTYPE = 270,
    FOR = 271,
    GOTO = 272,
    IF = 273,
    INLINE = 274,
    INTTYPE = 275,
    LONG = 276,
    REGISTER = 277,
    RESTRICT = 278,
    RETURN = 279,
    SHORT = 280,
    SIGNED = 281,
    SIZEOF = 282,
    STATIC = 283,
    STRUCT = 284,
    SWITCH = 285,
    TYPEDEF = 286,
    UNION = 287,
    UNSIGNED = 288,
    VOIDTYPE = 289,
    VOLATILE = 290,
    WHILE = 291,
    _BOOL = 292,
    _COMPLEX = 293,
    _IMAGINARY = 294,
    IDENTIFIER = 295,
    INTEGER_CONSTANT = 296,
    FLOATING_CONSTANT = 297,
    CHARACTER_CONSTANT = 298,
    STRING_LITERAL = 299,
    LEFT_SQUARE_BRACKET = 300,
    INCREMENT = 301,
    SLASH = 302,
    QUESTION_MARK = 303,
    ASSIGNMENT = 304,
    COMMA = 305,
    RIGHT_SQUARE_BRACKET = 306,
    LEFT_PARENTHESES = 307,
    LEFT_CURLY_BRACKET = 308,
    RIGHT_CURLY_BRACKET = 309,
    DOT = 310,
    ARROW = 311,
    ASTERISK = 312,
    PLUS = 313,
    MINUS = 314,
    TILDE = 315,
    EXCLAMATION = 316,
    MODULO = 317,
    LEFT_SHIFT = 318,
    RIGHT_SHIFT = 319,
    LESS_THAN = 320,
    GREATER_THAN = 321,
    LESS_EQUAL_THAN = 322,
    GREATER_EQUAL_THAN = 323,
    COLON = 324,
    SEMI_COLON = 325,
    ELLIPSIS = 326,
    ASTERISK_ASSIGNMENT = 327,
    SLASH_ASSIGNMENT = 328,
    MODULO_ASSIGNMENT = 329,
    PLUS_ASSIGNMENT = 330,
    MINUS_ASSIGNMENT = 331,
    LEFT_SHIFT_ASSIGNMENT = 332,
    HASH = 333,
    DECREMENT = 334,
    RIGHT_PARENTHESES = 335,
    BITWISE_AND = 336,
    EQUALS = 337,
    BITWISE_XOR = 338,
    BITWISE_OR = 339,
    LOGICAL_AND = 340,
    LOGICAL_OR = 341,
    RIGHT_SHIFT_ASSIGNMENT = 342,
    NOT_EQUALS = 343,
    BITWISE_AND_ASSIGNMENT = 344,
    BITWISE_OR_ASSIGNMENT = 345,
    BITWISE_XOR_ASSIGNMENT = 346,
    INVALID_TOKEN = 347,
    THEN = 348
  };
#endif
/* Tokens.  */
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
#define FLOATTYPE 270
#define FOR 271
#define GOTO 272
#define IF 273
#define INLINE 274
#define INTTYPE 275
#define LONG 276
#define REGISTER 277
#define RESTRICT 278
#define RETURN 279
#define SHORT 280
#define SIGNED 281
#define SIZEOF 282
#define STATIC 283
#define STRUCT 284
#define SWITCH 285
#define TYPEDEF 286
#define UNION 287
#define UNSIGNED 288
#define VOIDTYPE 289
#define VOLATILE 290
#define WHILE 291
#define _BOOL 292
#define _COMPLEX 293
#define _IMAGINARY 294
#define IDENTIFIER 295
#define INTEGER_CONSTANT 296
#define FLOATING_CONSTANT 297
#define CHARACTER_CONSTANT 298
#define STRING_LITERAL 299
#define LEFT_SQUARE_BRACKET 300
#define INCREMENT 301
#define SLASH 302
#define QUESTION_MARK 303
#define ASSIGNMENT 304
#define COMMA 305
#define RIGHT_SQUARE_BRACKET 306
#define LEFT_PARENTHESES 307
#define LEFT_CURLY_BRACKET 308
#define RIGHT_CURLY_BRACKET 309
#define DOT 310
#define ARROW 311
#define ASTERISK 312
#define PLUS 313
#define MINUS 314
#define TILDE 315
#define EXCLAMATION 316
#define MODULO 317
#define LEFT_SHIFT 318
#define RIGHT_SHIFT 319
#define LESS_THAN 320
#define GREATER_THAN 321
#define LESS_EQUAL_THAN 322
#define GREATER_EQUAL_THAN 323
#define COLON 324
#define SEMI_COLON 325
#define ELLIPSIS 326
#define ASTERISK_ASSIGNMENT 327
#define SLASH_ASSIGNMENT 328
#define MODULO_ASSIGNMENT 329
#define PLUS_ASSIGNMENT 330
#define MINUS_ASSIGNMENT 331
#define LEFT_SHIFT_ASSIGNMENT 332
#define HASH 333
#define DECREMENT 334
#define RIGHT_PARENTHESES 335
#define BITWISE_AND 336
#define EQUALS 337
#define BITWISE_XOR 338
#define BITWISE_OR 339
#define LOGICAL_AND 340
#define LOGICAL_OR 341
#define RIGHT_SHIFT_ASSIGNMENT 342
#define NOT_EQUALS 343
#define BITWISE_AND_ASSIGNMENT 344
#define BITWISE_OR_ASSIGNMENT 345
#define BITWISE_XOR_ASSIGNMENT 346
#define INVALID_TOKEN 347
#define THEN 348

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 19 "A6_5.y"

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

#line 329 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);





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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


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
#define YYFINAL  45
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1068

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  94
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  74
/* YYNRULES -- Number of rules.  */
#define YYNRULES  209
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  363

#define YYUNDEFTOK  2
#define YYMAXUTOK   348


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

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
      85,    86,    87,    88,    89,    90,    91,    92,    93
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   210,   210,   217,   224,   231,   238,   247,   255,   264,
     284,   293,   297,   301,   310,   319,   323,   332,   338,   346,
     353,   363,   368,   375,   382,   409,   413,   424,   429,   434,
     439,   444,   449,   457,   462,   484,   500,   523,   546,   572,
     577,   588,   602,   607,   618,   641,   646,   660,   674,   688,
     705,   710,   726,   756,   761,   774,   779,   792,   797,   820,
     827,   869,   874,   888,   893,   907,   912,   932,   937,   958,
     962,   966,   970,   974,   978,   982,   986,   990,   994,   998,
    1005,  1010,  1017,  1026,  1033,  1038,  1044,  1048,  1052,  1056,
    1063,  1068,  1074,  1078,  1085,  1090,  1102,  1106,  1110,  1114,
    1121,  1126,  1131,  1135,  1140,  1144,  1149,  1153,  1157,  1161,
    1168,  1172,  1179,  1184,  1190,  1194,  1198,  1205,  1210,  1216,
    1220,  1227,  1231,  1238,  1242,  1246,  1253,  1260,  1269,  1276,
    1294,  1300,  1305,  1309,  1313,  1331,  1350,  1354,  1358,  1362,
    1366,  1370,  1386,  1390,  1409,  1414,  1449,  1455,  1464,  1468,
    1475,  1479,  1486,  1490,  1497,  1503,  1510,  1514,  1521,  1528,
    1533,  1537,  1544,  1548,  1555,  1560,  1566,  1573,  1577,  1584,
    1588,  1597,  1601,  1606,  1612,  1617,  1622,  1630,  1634,  1638,
    1663,  1671,  1677,  1684,  1689,  1699,  1704,  1712,  1720,  1726,
    1752,  1760,  1769,  1800,  1810,  1819,  1830,  1837,  1841,  1845,
    1849,  1864,  1868,  1875,  1879,  1887,  1901,  1906,  1912,  1916
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AUTO", "BREAK", "CASE", "CHARTYPE",
  "CONST", "CONTINUE", "DEFAULT", "DO", "DOUBLE", "ELSE", "ENUM", "EXTERN",
  "FLOATTYPE", "FOR", "GOTO", "IF", "INLINE", "INTTYPE", "LONG",
  "REGISTER", "RESTRICT", "RETURN", "SHORT", "SIGNED", "SIZEOF", "STATIC",
  "STRUCT", "SWITCH", "TYPEDEF", "UNION", "UNSIGNED", "VOIDTYPE",
  "VOLATILE", "WHILE", "_BOOL", "_COMPLEX", "_IMAGINARY", "IDENTIFIER",
  "INTEGER_CONSTANT", "FLOATING_CONSTANT", "CHARACTER_CONSTANT",
  "STRING_LITERAL", "LEFT_SQUARE_BRACKET", "INCREMENT", "SLASH",
  "QUESTION_MARK", "ASSIGNMENT", "COMMA", "RIGHT_SQUARE_BRACKET",
  "LEFT_PARENTHESES", "LEFT_CURLY_BRACKET", "RIGHT_CURLY_BRACKET", "DOT",
  "ARROW", "ASTERISK", "PLUS", "MINUS", "TILDE", "EXCLAMATION", "MODULO",
  "LEFT_SHIFT", "RIGHT_SHIFT", "LESS_THAN", "GREATER_THAN",
  "LESS_EQUAL_THAN", "GREATER_EQUAL_THAN", "COLON", "SEMI_COLON",
  "ELLIPSIS", "ASTERISK_ASSIGNMENT", "SLASH_ASSIGNMENT",
  "MODULO_ASSIGNMENT", "PLUS_ASSIGNMENT", "MINUS_ASSIGNMENT",
  "LEFT_SHIFT_ASSIGNMENT", "HASH", "DECREMENT", "RIGHT_PARENTHESES",
  "BITWISE_AND", "EQUALS", "BITWISE_XOR", "BITWISE_OR", "LOGICAL_AND",
  "LOGICAL_OR", "RIGHT_SHIFT_ASSIGNMENT", "NOT_EQUALS",
  "BITWISE_AND_ASSIGNMENT", "BITWISE_OR_ASSIGNMENT",
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
  "statement", "labeled_statement", "compound_statement",
  "block_item_list_opt", "block_item_list", "block_item",
  "expression_statement", "expression_opt", "selection_statement",
  "iteration_statement", "jump_statement", "translation_unit",
  "external_declaration", "function_definition", "declaration_list_opt",
  "declaration_list", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348
};
# endif

#define YYPACT_NINF (-295)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-208)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1008,  -295,  -295,  -295,  -295,   -20,  -295,  -295,  -295,  -295,
    -295,  -295,  -295,  -295,  -295,  -295,  -295,  -295,  -295,  -295,
      -1,  1008,  1008,  -295,  1008,  1008,   975,  -295,  -295,   -38,
     -18,  -295,    -1,    18,    55,    30,  -295,   938,    34,    15,
    -295,  -295,  -295,  -295,  -295,  -295,  -295,     4,    67,  -295,
     109,    18,  -295,    -1,   749,  -295,    -1,  -295,  1008,   605,
     127,    34,   121,    10,  -295,  -295,  -295,  -295,  -295,   129,
     819,  -295,  -295,  -295,  -295,  -295,   847,   563,    58,  -295,
    -295,  -295,  -295,  -295,   847,  -295,  -295,    94,    85,   875,
    -295,    21,    52,    72,   117,    26,   113,   107,   122,   120,
     -36,  -295,  -295,  -295,   154,  -295,   689,  -295,   160,   162,
     647,  -295,   538,   -32,   875,   -21,  -295,   563,  -295,   563,
    -295,  -295,   -28,  1033,  -295,  1033,   135,   875,   176,    88,
     749,  -295,    27,  -295,  -295,   875,  -295,   875,   180,   182,
    -295,  -295,  -295,  -295,  -295,  -295,  -295,  -295,  -295,  -295,
    -295,  -295,   875,  -295,  -295,   875,   875,   875,   875,   875,
     875,   875,   875,   875,   875,   875,   875,   875,   875,   875,
     875,  -295,  -295,   177,   287,   181,   689,  -295,  -295,   875,
    -295,   183,   184,  -295,    -1,   148,   186,  -295,   191,  -295,
    -295,  -295,  -295,  -295,   157,   158,   875,  -295,  -295,  -295,
    -295,   791,   188,  -295,    62,  -295,  -295,  -295,  -295,    93,
     161,   192,  -295,  -295,  -295,  -295,  -295,  -295,  -295,    21,
      21,    52,    52,    72,    72,    72,    72,   117,   117,    26,
     113,   107,   875,   875,  -295,   174,   875,   175,   178,  -295,
     194,   209,   198,   875,   201,  -295,   185,   287,   206,  -295,
    -295,  -295,  -295,   203,   204,  -295,  -295,   189,  -295,  -295,
    -295,  -295,   211,   212,  -295,  -295,  -295,  -295,   752,  -295,
     207,   207,  -295,    58,  -295,  -295,  -295,   749,  -295,  -295,
     875,   122,   120,   875,  -295,   195,  -295,   475,   475,   429,
     197,   875,   199,   875,   216,   475,   218,  -295,   366,  -295,
    -295,  -295,  -295,  -295,    91,  -295,  -295,   206,   475,  -295,
    -295,   875,   200,  -295,   -26,  -295,   -14,   875,  -295,  -295,
    -295,    77,  -295,   208,  -295,   237,   205,  -295,  -295,   475,
     -10,  -295,  -295,   224,   875,   875,   475,  -295,  -295,   875,
     875,   202,   213,  -295,   475,  -295,    -3,   475,  -295,   266,
    -295,   214,  -295,   875,  -295,  -295,  -295,   475,   219,  -295,
    -295,   475,  -295
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    98,   101,   123,   106,   118,    96,   105,   126,   103,
     104,    99,   124,   102,   107,    97,   108,   100,   125,   204,
      85,    91,    91,   109,    91,    91,     0,   201,   203,   116,
       0,   130,     0,   145,     0,    84,    92,    94,   128,     0,
      90,    86,    87,    88,    89,     1,   202,     0,     0,   148,
     146,   144,    83,     0,     0,   208,    85,   129,   206,     0,
     129,   127,   121,     0,   119,   131,   147,   149,    93,    94,
       0,     2,     3,     4,     5,     6,     0,     0,   165,    28,
      29,    30,    31,    32,     0,    27,     8,    21,    33,     0,
      35,    39,    42,    45,    50,    53,    55,    57,    61,    63,
      65,    67,   159,    95,     0,   209,     0,   135,    28,     0,
       0,   156,     0,     0,     0,     0,   114,     0,    25,     0,
      22,    80,     0,   113,   158,   113,     0,     0,     0,     0,
       0,   164,     0,   167,    23,     0,    13,    18,     0,     0,
      14,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      79,    78,     0,    33,    24,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    59,    59,     0,   182,     0,     0,   140,   134,     0,
     133,    28,     0,   143,   155,     0,   150,   152,     0,   142,
      82,   122,   115,   120,     0,     0,     0,     7,   112,   110,
     111,     0,     0,   170,   165,   160,   162,   166,   168,     0,
       0,    17,    19,    11,    12,    68,    37,    36,    38,    40,
      41,    43,    44,    46,    47,    48,    49,    51,    52,    54,
      56,    58,     0,     0,    59,     0,     0,     0,     0,    59,
       0,     0,     0,   189,     0,    59,     2,   182,   188,   185,
     186,   171,   172,     0,    59,   183,   173,     0,   174,   175,
     176,   137,     0,     0,   139,   132,   154,   141,     0,   157,
      26,     0,    81,   165,    34,   169,   161,     0,     9,    10,
       0,    62,    64,     0,   199,     0,   198,   189,   189,   189,
       0,     0,     0,     0,     0,   189,     0,   205,   189,   187,
     136,   138,   151,   153,     0,   163,    20,    60,   189,   179,
      59,   189,     0,   197,     0,   200,     0,     0,   177,   180,
     184,   165,    15,     0,   178,     0,     0,    59,    59,   189,
       0,    16,    59,     0,   189,   189,   189,   192,    59,     0,
       0,     0,     0,    60,   189,    66,     0,   189,    59,   190,
     193,     0,   196,   189,    59,   194,    60,   189,     0,   191,
      59,   189,   195
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -295,  -295,  -295,  -295,  -295,   -68,  -295,   -82,    -6,    40,
      24,    37,   111,   112,   115,    54,  -130,  -294,    83,  -295,
    -113,   -25,  -295,   -74,  -116,     0,  -295,     6,   171,  -295,
     234,  -295,   -54,     3,   163,  -295,  -295,  -295,   210,   104,
    -295,   -15,   258,   280,  -295,   274,   -49,  -295,  -295,    64,
    -295,    60,  -121,    53,  -200,  -295,  -295,   217,   -96,  -295,
    -295,    87,  -295,    38,  -295,  -205,  -295,  -295,  -295,  -295,
     309,  -295,  -295,  -295
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    86,    87,   210,   211,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,   232,   173,    99,   100,
     101,   121,   152,   248,   191,   249,    34,    56,    41,    35,
      36,    21,    22,   124,   199,    23,    30,    63,    64,    24,
      25,    69,   104,    38,    50,    39,    51,   185,   186,   187,
     113,   126,   103,   129,   130,   131,   132,   133,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,    26,
      27,    28,    57,    58
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      19,   190,   118,   122,   277,    37,    20,   154,   120,   206,
     110,   202,   -60,   323,   190,  -117,   134,    48,   188,    62,
      29,   153,   196,   123,   196,     3,    19,    40,    40,   102,
      40,    40,    20,   192,   109,    47,   196,    55,   292,    31,
     196,    12,   233,   122,    62,   122,   153,   196,   189,   349,
     172,    32,   197,    18,   328,    31,    33,   176,   105,   153,
     115,   209,   358,   123,   116,   123,   329,    32,   155,   123,
     338,   123,   127,   216,   217,   218,   207,   351,   156,    59,
      53,   175,   128,   157,   312,   182,    60,   153,   153,   153,
     153,   153,   153,   153,   153,   153,   153,   153,   153,   153,
     153,   153,   153,   127,   283,   102,   326,   127,   166,   288,
     158,   159,   212,   128,   167,   294,   276,   128,   184,   274,
     285,   277,   127,   190,   298,    52,   198,   215,   198,   341,
     342,   331,   128,   153,   141,   160,   161,    49,   204,   135,
     136,   321,   205,   196,   278,   322,   137,    65,   356,   138,
     139,   262,   219,   220,   263,    67,   305,   142,   143,   144,
     145,   146,   147,    49,   153,   153,    33,   111,   153,   266,
     114,   272,   148,   140,   149,   150,   151,   194,    54,   195,
     325,   125,   162,   163,   164,   165,   223,   224,   225,   226,
     169,   309,   310,    42,   168,    43,    44,   335,   336,   318,
     221,   222,   339,   227,   228,   171,   170,   174,   344,   307,
      49,   177,   324,   178,    67,   201,   203,   314,   353,   316,
     213,   125,   214,   125,   357,   234,   345,   125,   267,   125,
     361,   269,   261,   337,   264,   265,   268,   270,   271,   275,
     343,   279,   280,   330,   284,   286,   289,   287,   350,   290,
     291,   352,   102,   293,   295,   306,   196,   297,  -181,   299,
     273,   359,   300,   301,   308,   362,   346,   313,   317,   315,
     327,   153,   319,   333,   184,   334,   340,   332,   354,   229,
      67,   230,   347,   348,   355,   231,   281,    68,   200,   311,
       1,   235,   236,     2,     3,   237,   238,   239,     4,   360,
       5,     6,     7,   240,   241,   242,     8,     9,    10,    11,
      12,   243,    13,    14,    70,    15,   282,   244,   112,    61,
      16,    17,    18,   245,    66,   193,   304,   246,    72,    73,
      74,    75,   303,    76,   296,    46,   320,     0,     0,    77,
     247,     0,     0,     0,    79,    80,    81,    82,    83,   208,
       0,     0,     0,     0,     0,     0,     0,  -189,     0,     0,
       0,     0,     0,     0,     0,     0,    84,     0,    85,     1,
     235,   236,     2,     3,   237,   238,   239,     4,     0,     5,
       6,     7,   240,   241,   242,     8,     9,    10,    11,    12,
     243,    13,    14,    70,    15,     0,   244,     0,     0,    16,
      17,    18,   245,     0,     0,     0,   246,    72,    73,    74,
      75,     0,    76,     0,     0,     0,     0,     0,    77,   247,
       0,     0,     0,    79,    80,    81,    82,    83,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     0,     0,     0,
       4,     0,     5,     6,     7,    84,     0,    85,     8,     9,
      10,    11,    12,     0,    13,    14,    70,    15,     0,     0,
       0,     0,    16,    17,    18,     0,     0,     0,     0,    71,
      72,    73,    74,    75,     0,    76,     0,     0,     0,   235,
     236,    77,     0,   237,   238,   239,    79,    80,    81,    82,
      83,   240,   241,   242,     0,     0,     0,     0,     0,   243,
       0,     0,    70,     0,     0,   244,     0,     0,    84,     0,
      85,   245,     0,     0,     0,   246,    72,    73,    74,    75,
       0,    76,     0,     0,     0,     0,     0,    77,   247,     0,
       0,     0,    79,    80,    81,    82,    83,     0,     0,     0,
       0,     1,     0,     0,     2,     3,     0,     0,     0,     4,
       0,     5,     6,     7,    84,     0,    85,     8,     9,    10,
      11,    12,     0,    13,    14,     0,    15,     0,     0,     2,
       3,    16,    17,    18,     4,     0,     5,     0,     7,     0,
       0,     0,     0,     9,    10,     0,    12,     0,    13,    14,
      70,     0,     0,     0,     0,     0,    16,    17,    18,     0,
       0,     0,     0,    71,    72,    73,    74,    75,     0,    76,
       0,     0,     3,     0,     0,    77,     0,     0,   183,     0,
      79,    80,    81,    82,    83,     0,     0,     0,    12,     0,
       0,     0,    70,   106,     0,     0,     0,     0,     0,     0,
      18,     0,    84,     0,    85,    71,    72,    73,    74,    75,
       0,    76,     0,     0,     3,     0,   107,    77,     0,     0,
       0,     0,   108,    80,    81,    82,    83,     0,     0,     0,
      12,     0,     0,     0,    70,   179,     0,     0,     0,     0,
       0,     0,    18,     0,    84,     0,    85,    71,    72,    73,
      74,    75,     0,    76,     0,     0,     3,     0,   180,    77,
       0,     0,     0,     0,   181,    80,    81,    82,    83,     0,
       0,     0,    12,     0,     0,     0,    70,     0,     0,     0,
       0,     0,     0,     0,    18,     0,    84,     0,    85,    71,
      72,    73,    74,    75,     0,    76,     0,     0,     0,     0,
       0,    77,     0,     0,     0,     0,    79,    80,    81,    82,
      83,     0,     0,     0,     0,     1,     0,     0,     2,     3,
       0,     0,     0,     4,     0,     5,     6,     7,    84,     0,
      85,     8,     9,    10,    11,    12,    70,    13,    14,     0,
      15,     0,     0,     0,     0,    16,    17,    18,     0,    71,
      72,    73,    74,    75,     0,    76,     0,     0,     0,     0,
       0,    77,    78,     0,     0,     0,    79,    80,    81,    82,
      83,     0,     0,     0,     0,     0,     0,     0,    70,     0,
       0,     0,     0,   302,     0,     0,     0,     0,    84,     0,
      85,    71,    72,    73,    74,    75,     0,    76,     0,     0,
       0,     0,     0,    77,   273,     0,    70,     0,    79,    80,
      81,    82,    83,     0,     0,     0,     0,     0,     0,    71,
      72,    73,    74,    75,     0,    76,     0,     0,     0,     0,
      84,   117,    85,     0,    70,     0,    79,    80,    81,    82,
      83,     0,     0,     0,     0,     0,     0,    71,    72,    73,
      74,    75,     0,    76,     0,     0,     0,     0,    84,   119,
      85,     0,    70,     0,    79,    80,    81,    82,    83,     0,
       0,     0,     0,     0,     0,    71,    72,    73,    74,    75,
       0,    76,     0,     0,     0,     0,    84,    77,    85,     0,
       0,     0,    79,    80,    81,    82,    83,     0,     0,     0,
       0,     1,     0,     0,     2,     3,     0,     0,     0,     4,
       0,     5,     6,     7,    84,     0,    85,     8,     9,    10,
      11,    12,     0,    13,    14,     0,    15,     0,     0,     0,
       0,    16,    17,    18,     0,    45,     0,     0,     1,     0,
       0,     2,     3,     0,     0,     0,     4,    54,     5,     6,
       7,  -207,     0,     0,     8,     9,    10,    11,    12,     0,
      13,    14,     0,    15,     0,     0,     0,     0,    16,    17,
      18,     1,     0,     0,     2,     3,     0,     0,     0,     4,
       0,     5,     6,     7,     0,     0,     0,     8,     9,    10,
      11,    12,     0,    13,    14,     0,    15,     0,     0,     2,
       3,    16,    17,    18,     4,     0,     5,     0,     7,     0,
       0,     0,     0,     9,    10,     0,    12,     0,    13,    14,
       0,     0,     0,     0,     0,     0,    16,    17,    18
};

static const yytype_int16 yycheck[] =
{
       0,   114,    70,    77,   204,    20,     0,    89,    76,   130,
      59,   127,    48,   307,   127,    53,    84,    32,    50,    40,
      40,    89,    50,    77,    50,     7,    26,    21,    22,    54,
      24,    25,    26,    54,    59,    53,    50,    37,   243,    40,
      50,    23,   172,   117,    40,   119,   114,    50,    80,   343,
      86,    52,    80,    35,    80,    40,    57,   106,    58,   127,
      50,   135,   356,   117,    54,   119,    80,    52,    47,   123,
      80,   125,    45,   155,   156,   157,    49,    80,    57,    45,
      50,   106,    55,    62,   289,   110,    52,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,    45,   234,   130,   311,    45,    82,   239,
      58,    59,   137,    55,    88,   245,    54,    55,   112,   201,
     236,   321,    45,   236,   254,    70,   123,   152,   125,   334,
     335,    54,    55,   201,    49,    63,    64,    33,    50,    45,
      46,    50,    54,    50,    51,    54,    52,    80,   353,    55,
      56,   176,   158,   159,   179,    51,   277,    72,    73,    74,
      75,    76,    77,    59,   232,   233,    57,    40,   236,   184,
      49,   196,    87,    79,    89,    90,    91,   117,    49,   119,
     310,    77,    65,    66,    67,    68,   162,   163,   164,   165,
      83,   287,   288,    22,    81,    24,    25,   327,   328,   295,
     160,   161,   332,   166,   167,    85,    84,    53,   338,   283,
     106,    51,   308,    51,   110,    80,    40,   291,   348,   293,
      40,   117,    40,   119,   354,    48,   339,   123,    80,   125,
     360,    40,    51,   329,    51,    51,    50,    80,    80,    51,
     336,    80,    50,   317,    70,    70,    52,    69,   344,    40,
      52,   347,   277,    52,    69,   280,    50,    54,    54,    70,
      53,   357,    51,    51,    69,   361,   340,    70,    52,    70,
      70,   339,    54,    36,   268,    70,    52,    69,    12,   168,
     176,   169,    80,    70,    70,   170,   232,    53,   125,   289,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    80,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,   233,    30,    60,    39,
      33,    34,    35,    36,    50,   115,   273,    40,    41,    42,
      43,    44,   268,    46,   247,    26,   298,    -1,    -1,    52,
      53,    -1,    -1,    -1,    57,    58,    59,    60,    61,   132,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    81,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    -1,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    -1,    30,    -1,    -1,    33,
      34,    35,    36,    -1,    -1,    -1,    40,    41,    42,    43,
      44,    -1,    46,    -1,    -1,    -1,    -1,    -1,    52,    53,
      -1,    -1,    -1,    57,    58,    59,    60,    61,    -1,    -1,
      -1,    -1,     3,    -1,    -1,     6,     7,    -1,    -1,    -1,
      11,    -1,    13,    14,    15,    79,    -1,    81,    19,    20,
      21,    22,    23,    -1,    25,    26,    27,    28,    -1,    -1,
      -1,    -1,    33,    34,    35,    -1,    -1,    -1,    -1,    40,
      41,    42,    43,    44,    -1,    46,    -1,    -1,    -1,     4,
       5,    52,    -1,     8,     9,    10,    57,    58,    59,    60,
      61,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,    24,
      -1,    -1,    27,    -1,    -1,    30,    -1,    -1,    79,    -1,
      81,    36,    -1,    -1,    -1,    40,    41,    42,    43,    44,
      -1,    46,    -1,    -1,    -1,    -1,    -1,    52,    53,    -1,
      -1,    -1,    57,    58,    59,    60,    61,    -1,    -1,    -1,
      -1,     3,    -1,    -1,     6,     7,    -1,    -1,    -1,    11,
      -1,    13,    14,    15,    79,    -1,    81,    19,    20,    21,
      22,    23,    -1,    25,    26,    -1,    28,    -1,    -1,     6,
       7,    33,    34,    35,    11,    -1,    13,    -1,    15,    -1,
      -1,    -1,    -1,    20,    21,    -1,    23,    -1,    25,    26,
      27,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,    -1,
      -1,    -1,    -1,    40,    41,    42,    43,    44,    -1,    46,
      -1,    -1,     7,    -1,    -1,    52,    -1,    -1,    80,    -1,
      57,    58,    59,    60,    61,    -1,    -1,    -1,    23,    -1,
      -1,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      35,    -1,    79,    -1,    81,    40,    41,    42,    43,    44,
      -1,    46,    -1,    -1,     7,    -1,    51,    52,    -1,    -1,
      -1,    -1,    57,    58,    59,    60,    61,    -1,    -1,    -1,
      23,    -1,    -1,    -1,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    35,    -1,    79,    -1,    81,    40,    41,    42,
      43,    44,    -1,    46,    -1,    -1,     7,    -1,    51,    52,
      -1,    -1,    -1,    -1,    57,    58,    59,    60,    61,    -1,
      -1,    -1,    23,    -1,    -1,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    -1,    79,    -1,    81,    40,
      41,    42,    43,    44,    -1,    46,    -1,    -1,    -1,    -1,
      -1,    52,    -1,    -1,    -1,    -1,    57,    58,    59,    60,
      61,    -1,    -1,    -1,    -1,     3,    -1,    -1,     6,     7,
      -1,    -1,    -1,    11,    -1,    13,    14,    15,    79,    -1,
      81,    19,    20,    21,    22,    23,    27,    25,    26,    -1,
      28,    -1,    -1,    -1,    -1,    33,    34,    35,    -1,    40,
      41,    42,    43,    44,    -1,    46,    -1,    -1,    -1,    -1,
      -1,    52,    53,    -1,    -1,    -1,    57,    58,    59,    60,
      61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,
      -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,    79,    -1,
      81,    40,    41,    42,    43,    44,    -1,    46,    -1,    -1,
      -1,    -1,    -1,    52,    53,    -1,    27,    -1,    57,    58,
      59,    60,    61,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      41,    42,    43,    44,    -1,    46,    -1,    -1,    -1,    -1,
      79,    52,    81,    -1,    27,    -1,    57,    58,    59,    60,
      61,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    42,
      43,    44,    -1,    46,    -1,    -1,    -1,    -1,    79,    52,
      81,    -1,    27,    -1,    57,    58,    59,    60,    61,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    41,    42,    43,    44,
      -1,    46,    -1,    -1,    -1,    -1,    79,    52,    81,    -1,
      -1,    -1,    57,    58,    59,    60,    61,    -1,    -1,    -1,
      -1,     3,    -1,    -1,     6,     7,    -1,    -1,    -1,    11,
      -1,    13,    14,    15,    79,    -1,    81,    19,    20,    21,
      22,    23,    -1,    25,    26,    -1,    28,    -1,    -1,    -1,
      -1,    33,    34,    35,    -1,     0,    -1,    -1,     3,    -1,
      -1,     6,     7,    -1,    -1,    -1,    11,    49,    13,    14,
      15,    53,    -1,    -1,    19,    20,    21,    22,    23,    -1,
      25,    26,    -1,    28,    -1,    -1,    -1,    -1,    33,    34,
      35,     3,    -1,    -1,     6,     7,    -1,    -1,    -1,    11,
      -1,    13,    14,    15,    -1,    -1,    -1,    19,    20,    21,
      22,    23,    -1,    25,    26,    -1,    28,    -1,    -1,     6,
       7,    33,    34,    35,    11,    -1,    13,    -1,    15,    -1,
      -1,    -1,    -1,    20,    21,    -1,    23,    -1,    25,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    35
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,     7,    11,    13,    14,    15,    19,    20,
      21,    22,    23,    25,    26,    28,    33,    34,    35,   119,
     121,   125,   126,   129,   133,   134,   163,   164,   165,    40,
     130,    40,    52,    57,   120,   123,   124,   135,   137,   139,
     121,   122,   122,   122,   122,     0,   164,    53,   135,   133,
     138,   140,    70,    50,    49,   119,   121,   166,   167,    45,
      52,   137,    40,   131,   132,    80,   139,   133,   124,   135,
      27,    40,    41,    42,    43,    44,    46,    52,    53,    57,
      58,    59,    60,    61,    79,    81,    95,    96,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   112,
     113,   114,   115,   146,   136,   119,    28,    51,    57,   115,
     140,    40,   136,   144,    49,    50,    54,    52,    99,    52,
      99,   115,   117,   126,   127,   133,   145,    45,    55,   147,
     148,   149,   150,   151,    99,    45,    46,    52,    55,    56,
      79,    49,    72,    73,    74,    75,    76,    77,    87,    89,
      90,    91,   116,    99,   101,    47,    57,    62,    58,    59,
      63,    64,    65,    66,    67,    68,    82,    88,    81,    83,
      84,    85,    86,   111,    53,   115,   140,    51,    51,    28,
      51,    57,   115,    80,   121,   141,   142,   143,    50,    80,
     114,   118,    54,   132,   145,   145,    50,    80,   127,   128,
     128,    80,   118,    40,    50,    54,   146,    49,   151,   117,
      97,    98,   115,    40,    40,   115,   101,   101,   101,   102,
     102,   103,   103,   104,   104,   104,   104,   105,   105,   106,
     107,   108,   110,   110,    48,     4,     5,     8,     9,    10,
      16,    17,    18,    24,    30,    36,    40,    53,   117,   119,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,    51,   115,   115,    51,    51,   135,    80,    50,    40,
      80,    80,   115,    53,   101,    51,    54,   148,    51,    80,
      50,   109,   112,   110,    70,   118,    70,    69,   110,    52,
      40,    52,   159,    52,   110,    69,   155,    54,   110,    70,
      51,    51,    71,   143,   147,   146,   115,   117,    69,   152,
     152,   119,   159,    70,   117,    70,   117,    52,   152,    54,
     157,    50,    54,   111,   152,   110,   159,    70,    80,    80,
     117,    54,    69,    36,    70,   110,   110,   152,    80,   110,
      52,   159,   159,   152,   110,   114,   117,    80,    70,   111,
     152,    80,   152,   110,    12,    70,   159,   110,   111,   152,
      80,   110,   152
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    94,    95,    95,    95,    95,    95,    95,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    97,    97,    98,
      98,    99,    99,    99,    99,    99,    99,   100,   100,   100,
     100,   100,   100,   101,   101,   102,   102,   102,   102,   103,
     103,   103,   104,   104,   104,   105,   105,   105,   105,   105,
     106,   106,   106,   107,   107,   108,   108,   109,   109,   110,
     111,   112,   112,   113,   113,   114,   114,   115,   115,   116,
     116,   116,   116,   116,   116,   116,   116,   116,   116,   116,
     117,   117,   118,   119,   120,   120,   121,   121,   121,   121,
     122,   122,   123,   123,   124,   124,   125,   125,   125,   125,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     127,   127,   128,   128,   129,   129,   129,   130,   130,   131,
     131,   132,   132,   133,   133,   133,   134,   135,   135,   136,
     137,   137,   137,   137,   137,   137,   137,   137,   137,   137,
     137,   137,   137,   137,   138,   138,   139,   139,   140,   140,
     141,   141,   142,   142,   143,   143,   144,   144,   145,   146,
     146,   146,   147,   147,   148,   148,   149,   150,   150,   151,
     151,   152,   152,   152,   152,   152,   152,   153,   153,   153,
     154,   155,   155,   156,   156,   157,   157,   158,   159,   159,
     160,   160,   160,   161,   161,   161,   161,   162,   162,   162,
     162,   163,   163,   164,   164,   165,   166,   166,   167,   167
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     3,     1,     4,
       4,     3,     3,     2,     2,     6,     7,     1,     0,     1,
       3,     1,     2,     2,     2,     2,     4,     1,     1,     1,
       1,     1,     1,     1,     4,     1,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     1,     3,     1,     3,     0,
       0,     1,     4,     1,     4,     1,     9,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     3,     1,     0,     2,     2,     2,     2,
       1,     0,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     1,     0,     5,     6,     2,     1,     0,     1,
       3,     1,     3,     1,     1,     1,     1,     2,     1,     0,
       1,     3,     5,     4,     4,     3,     6,     5,     6,     5,
       4,     5,     4,     4,     1,     0,     2,     3,     1,     2,
       1,     3,     1,     3,     2,     1,     1,     3,     1,     1,
       3,     4,     2,     4,     1,     0,     2,     1,     2,     3,
       2,     1,     1,     1,     1,     1,     1,     3,     4,     3,
       3,     1,     0,     1,     3,     1,     1,     2,     1,     0,
       7,    10,     5,     7,     9,    13,     8,     3,     2,     2,
       3,     1,     2,     1,     1,     7,     1,     0,     1,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
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

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
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
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
  case 2:
#line 211 "A6_5.y"
                        { 
                            yyinfo("primary_expression => IDENTIFIER");
                            (yyval.expression) = new Expression(); // create new non boolean expression and symbol is the identifier
                            (yyval.expression)->symbol = (yyvsp[0].symbol);
                            (yyval.expression)->type = Expression::NONBOOLEAN; 
                        }
#line 1951 "y.tab.c"
    break;

  case 3:
#line 218 "A6_5.y"
                        { 
                            yyinfo("primary_expression => INTEGER_CONSTANT"); 
                            (yyval.expression) = new Expression();
                            (yyval.expression)->symbol = gentemp(SymbolType::INT, toString((yyvsp[0].intVal)));
                            emit("=", (yyval.expression)->symbol->name, (yyvsp[0].intVal));
                        }
#line 1962 "y.tab.c"
    break;

  case 4:
#line 225 "A6_5.y"
                        { 
                            yyinfo("primary_expression => FLOATING_CONSTANT"); 
                            (yyval.expression) = new Expression();
                            (yyval.expression)->symbol = gentemp(SymbolType::FLOAT, (yyvsp[0].floatVal));
                            emit("=", (yyval.expression)->symbol->name, (yyvsp[0].floatVal));
                        }
#line 1973 "y.tab.c"
    break;

  case 5:
#line 232 "A6_5.y"
                        { 
                            yyinfo("primary_expression => CHARACTER_CONSTANT"); 
                            (yyval.expression) = new Expression();
                            (yyval.expression)->symbol = gentemp(SymbolType::CHAR, (yyvsp[0].charVal));
                            emit("=", (yyval.expression)->symbol->name, (yyvsp[0].charVal));
                        }
#line 1984 "y.tab.c"
    break;

  case 6:
#line 239 "A6_5.y"
                        { 
                            yyinfo("primary_expression => STRING_LITERAL"); 
                            (yyval.expression) = new Expression();
		                    (yyval.expression)->symbol = gentemp(SymbolType::POINTER, (yyvsp[0].stringVal));
		                    (yyval.expression)->symbol->type->arrayType = new SymbolType(SymbolType::CHAR);
                            emit("=str", (yyval.expression)->symbol->name, stringLiterals.size());
                            stringLiterals.push_back((yyvsp[0].stringVal));
                        }
#line 1997 "y.tab.c"
    break;

  case 7:
#line 248 "A6_5.y"
                        { 
                            yyinfo("primary_expression => ( expression )"); 
                            (yyval.expression) = (yyvsp[-1].expression);
                        }
#line 2006 "y.tab.c"
    break;

  case 8:
#line 256 "A6_5.y"
                        { 
                            // create new array with the same symbol as the primary expression
                            yyinfo("postfix_expression => primary_expression"); 
                            (yyval.array) = new Array();
                            (yyval.array)->symbol = (yyvsp[0].expression)->symbol;
                            (yyval.array)->temp = (yyval.array)->symbol;
                            (yyval.array)->subArrayType = (yyvsp[0].expression)->symbol->type;
                        }
#line 2019 "y.tab.c"
    break;

  case 9:
#line 265 "A6_5.y"
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
#line 2043 "y.tab.c"
    break;

  case 10:
#line 285 "A6_5.y"
                        { 
                            // function call, number of parameters stored in argument_expression_list_opt
                            yyinfo("postfix_expression => postfix_expression ( argument_expression_list_opt )"); 
                            (yyval.array) = new Array();
                            (yyval.array)->symbol = gentemp((yyvsp[-3].array)->symbol->type->type);
                            (yyval.array)->symbol->type->arrayType = (yyvsp[-3].array)->symbol->type->arrayType;
                            emit("call", (yyval.array)->symbol->name, (yyvsp[-3].array)->symbol->name, toString((yyvsp[-1].parameterCount)));
                        }
#line 2056 "y.tab.c"
    break;

  case 11:
#line 294 "A6_5.y"
                        { 
                            yyinfo("postfix_expression => postfix_expression . IDENTIFIER"); 
                        }
#line 2064 "y.tab.c"
    break;

  case 12:
#line 298 "A6_5.y"
                        { 
                            yyinfo("postfix_expression => postfix_expression -> IDENTIFIER"); 
                        }
#line 2072 "y.tab.c"
    break;

  case 13:
#line 302 "A6_5.y"
                        { 
                            // post increment, first generate temporary with old value, then add 1
                            yyinfo("postfix_expression => postfix_expression ++");
                            (yyval.array) = new Array();
                            (yyval.array)->symbol = gentemp((yyvsp[-1].array)->symbol->type->type);
                            emit("=", (yyval.array)->symbol->name, (yyvsp[-1].array)->symbol->name);
                            emit("+", (yyvsp[-1].array)->symbol->name, (yyvsp[-1].array)->symbol->name, toString(1)); 
                        }
#line 2085 "y.tab.c"
    break;

  case 14:
#line 311 "A6_5.y"
                        { 
                            // post decrement, first generate temporary with old value, then subtract 1
                            yyinfo("postfix_expression => postfix_expression --"); 
                            (yyval.array) = new Array();
                            (yyval.array)->symbol = gentemp((yyvsp[-1].array)->symbol->type->type);
                            emit("=", (yyval.array)->symbol->name, (yyvsp[-1].array)->symbol->name);
                            emit("-", (yyvsp[-1].array)->symbol->name, (yyvsp[-1].array)->symbol->name, toString(1));
                        }
#line 2098 "y.tab.c"
    break;

  case 15:
#line 320 "A6_5.y"
                        { 
                            yyinfo("postfix_expression => ( type_name ) { initialiser_list }"); 
                        }
#line 2106 "y.tab.c"
    break;

  case 16:
#line 324 "A6_5.y"
                        { 
                            yyinfo("postfix_expression => ( type_name ) { initialiser_list , }"); 
                        }
#line 2114 "y.tab.c"
    break;

  case 17:
#line 333 "A6_5.y"
                                    { 
                                        yyinfo("argument_expression_list_opt => argument_expression_list"); 
                                        (yyval.parameterCount) = (yyvsp[0].parameterCount);
                                    }
#line 2123 "y.tab.c"
    break;

  case 18:
#line 338 "A6_5.y"
                                    { 
                                        // empty so 0 params
                                        yyinfo("argument_expression_list_opt => epsilon");
                                        (yyval.parameterCount) = 0;
                                    }
#line 2133 "y.tab.c"
    break;

  case 19:
#line 347 "A6_5.y"
                                { 
                                    // first param, initialise param count to 1
                                    yyinfo("argument_expression_list => assignment_expression"); 
                                    emit("param", (yyvsp[0].expression)->symbol->name);
                                    (yyval.parameterCount) = 1;
                                }
#line 2144 "y.tab.c"
    break;

  case 20:
#line 354 "A6_5.y"
                                { 
                                    // one new param, add 1 to param count
                                    yyinfo("argument_expression_list => argument_expression_list , assignment_expression");
                                    emit("param", (yyvsp[0].expression)->symbol->name);
                                    (yyval.parameterCount) = (yyvsp[-2].parameterCount) + 1; 
                                }
#line 2155 "y.tab.c"
    break;

  case 21:
#line 364 "A6_5.y"
                        { 
                            yyinfo("unary_expression => postfix_expression"); 
                            (yyval.array) = (yyvsp[0].array);
                        }
#line 2164 "y.tab.c"
    break;

  case 22:
#line 369 "A6_5.y"
                        { 
                            // pre increment, no new temporary simply add 1
                            yyinfo("unary_expression => ++ unary_expression"); 
                            (yyval.array) = (yyvsp[0].array);
                            emit("+", (yyvsp[0].array)->symbol->name, (yyvsp[0].array)->symbol->name, toString(1));
                        }
#line 2175 "y.tab.c"
    break;

  case 23:
#line 376 "A6_5.y"
                        { 
                            // pre decrement, no new temporary simply subtract 1
                            yyinfo("unary_expression => -- unary_expression"); 
                            (yyval.array) = (yyvsp[0].array);
                            emit("-", (yyvsp[0].array)->symbol->name, (yyvsp[0].array)->symbol->name, toString(1));
                        }
#line 2186 "y.tab.c"
    break;

  case 24:
#line 383 "A6_5.y"
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
#line 2217 "y.tab.c"
    break;

  case 25:
#line 410 "A6_5.y"
                        { 
                            yyinfo("unary_expression => sizeof unary_expression"); 
                        }
#line 2225 "y.tab.c"
    break;

  case 26:
#line 414 "A6_5.y"
                        { 
                            yyinfo("unary_expression => sizeof ( type_name )"); 
                        }
#line 2233 "y.tab.c"
    break;

  case 27:
#line 425 "A6_5.y"
                    { 
                        yyinfo("unary_operator => &"); 
                        (yyval.unaryOperator) = strdup("&"); 
                    }
#line 2242 "y.tab.c"
    break;

  case 28:
#line 430 "A6_5.y"
                    { 
                        yyinfo("unary_operator => *"); 
                        (yyval.unaryOperator) = strdup("*"); 
                    }
#line 2251 "y.tab.c"
    break;

  case 29:
#line 435 "A6_5.y"
                    { 
                        yyinfo("unary_operator => +"); 
                        (yyval.unaryOperator) = strdup("+"); 
                    }
#line 2260 "y.tab.c"
    break;

  case 30:
#line 440 "A6_5.y"
                    { 
                        yyinfo("unary_operator => -"); 
                        (yyval.unaryOperator) = strdup("=-"); 
                    }
#line 2269 "y.tab.c"
    break;

  case 31:
#line 445 "A6_5.y"
                    { 
                        yyinfo("unary_operator => ~"); 
                        (yyval.unaryOperator) = strdup("~"); 
                    }
#line 2278 "y.tab.c"
    break;

  case 32:
#line 450 "A6_5.y"
                    { 
                        yyinfo("unary_operator => !"); 
                        (yyval.unaryOperator) = strdup("!"); 
                    }
#line 2287 "y.tab.c"
    break;

  case 33:
#line 458 "A6_5.y"
                    { 
                        yyinfo("cast_expression => unary_expression"); 
                        (yyval.array) = (yyvsp[0].array);
                    }
#line 2296 "y.tab.c"
    break;

  case 34:
#line 463 "A6_5.y"
                    { 
                        yyinfo("cast_expression => ( type_name ) cast_expression"); 
                        (yyval.array) = new Array();
                        (yyval.array)->symbol = (yyvsp[0].array)->symbol->convert(currentType);
                    }
#line 2306 "y.tab.c"
    break;

  case 35:
#line 485 "A6_5.y"
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
#line 2326 "y.tab.c"
    break;

  case 36:
#line 501 "A6_5.y"
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
#line 2353 "y.tab.c"
    break;

  case 37:
#line 524 "A6_5.y"
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
#line 2380 "y.tab.c"
    break;

  case 38:
#line 547 "A6_5.y"
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
#line 2407 "y.tab.c"
    break;

  case 39:
#line 573 "A6_5.y"
                        { 
                            yyinfo("additive_expression => multiplicative_expression"); 
                            (yyval.expression) = (yyvsp[0].expression);
                        }
#line 2416 "y.tab.c"
    break;

  case 40:
#line 578 "A6_5.y"
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
#line 2431 "y.tab.c"
    break;

  case 41:
#line 589 "A6_5.y"
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
#line 2446 "y.tab.c"
    break;

  case 42:
#line 603 "A6_5.y"
                        { 
                            yyinfo("shift_expression => additive_expression");
                            (yyval.expression) = (yyvsp[0].expression);
                        }
#line 2455 "y.tab.c"
    break;

  case 43:
#line 608 "A6_5.y"
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
#line 2470 "y.tab.c"
    break;

  case 44:
#line 619 "A6_5.y"
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
#line 2485 "y.tab.c"
    break;

  case 45:
#line 642 "A6_5.y"
                            { 
                                yyinfo("relational_expression => shift_expression"); 
                                (yyval.expression) = (yyvsp[0].expression);
                            }
#line 2494 "y.tab.c"
    break;

  case 46:
#line 647 "A6_5.y"
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
#line 2512 "y.tab.c"
    break;

  case 47:
#line 661 "A6_5.y"
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
#line 2530 "y.tab.c"
    break;

  case 48:
#line 675 "A6_5.y"
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
#line 2548 "y.tab.c"
    break;

  case 49:
#line 689 "A6_5.y"
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
#line 2566 "y.tab.c"
    break;

  case 50:
#line 706 "A6_5.y"
                        { 
                            yyinfo("equality_expression => relational_expression"); 
                            (yyval.expression) = (yyvsp[0].expression);
                        }
#line 2575 "y.tab.c"
    break;

  case 51:
#line 711 "A6_5.y"
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
#line 2595 "y.tab.c"
    break;

  case 52:
#line 727 "A6_5.y"
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
#line 2615 "y.tab.c"
    break;

  case 53:
#line 757 "A6_5.y"
                    { 
                        yyinfo("AND_expression => equality_expression"); 
                        (yyval.expression) = (yyvsp[0].expression);
                    }
#line 2624 "y.tab.c"
    break;

  case 54:
#line 762 "A6_5.y"
                    { 
                        yyinfo("AND_expression => AND_expression & equality_expression"); 
                        (yyvsp[-2].expression)->toInt();
                        (yyvsp[0].expression)->toInt();
                        (yyval.expression) = new Expression();
                        (yyval.expression)->type = Expression::NONBOOLEAN;
                        (yyval.expression)->symbol = gentemp(SymbolType::INT);
                        emit("&", (yyval.expression)->symbol->name, (yyvsp[-2].expression)->symbol->name, (yyvsp[0].expression)->symbol->name);
                    }
#line 2638 "y.tab.c"
    break;

  case 55:
#line 775 "A6_5.y"
                            { 
                                yyinfo("exclusive_OR_expression => AND_expression"); 
                                (yyval.expression) = (yyvsp[0].expression);
                            }
#line 2647 "y.tab.c"
    break;

  case 56:
#line 780 "A6_5.y"
                            { 
                                yyinfo("exclusive_OR_expression => exclusive_OR_expression ^ AND_expression"); 
                                (yyvsp[-2].expression)->toInt();
                                (yyvsp[0].expression)->toInt();
                                (yyval.expression) = new Expression();
                                (yyval.expression)->type = Expression::NONBOOLEAN;
                                (yyval.expression)->symbol = gentemp(SymbolType::INT);
                                emit("^", (yyval.expression)->symbol->name, (yyvsp[-2].expression)->symbol->name, (yyvsp[0].expression)->symbol->name);
                            }
#line 2661 "y.tab.c"
    break;

  case 57:
#line 793 "A6_5.y"
                            { 
                                yyinfo("inclusive_OR_expression => exclusive_OR_expression"); 
                                (yyval.expression) = (yyvsp[0].expression);
                            }
#line 2670 "y.tab.c"
    break;

  case 58:
#line 798 "A6_5.y"
                            { 
                                yyinfo("inclusive_OR_expression => inclusive_OR_expression | exclusive_OR_expression"); 
                                (yyvsp[-2].expression)->toInt();
                                (yyvsp[0].expression)->toInt();
                                (yyval.expression) = new Expression();
                                (yyval.expression)->type = Expression::NONBOOLEAN;
                                (yyval.expression)->symbol = gentemp(SymbolType::INT);
                                emit("|", (yyval.expression)->symbol->name, (yyvsp[-2].expression)->symbol->name, (yyvsp[0].expression)->symbol->name);
                            }
#line 2684 "y.tab.c"
    break;

  case 59:
#line 820 "A6_5.y"
        {
            yyinfo("M => epsilon");
            (yyval.instructionNumber) = nextInstruction();
        }
#line 2693 "y.tab.c"
    break;

  case 60:
#line 827 "A6_5.y"
        {
            yyinfo("N => epsilon");
            (yyval.statement) = new Statement();
            (yyval.statement)->nextList = makeList(nextInstruction());
            emit("goto", "");
        }
#line 2704 "y.tab.c"
    break;

  case 61:
#line 870 "A6_5.y"
                            { 
                                yyinfo("logical_AND_expression => inclusive_OR_expression"); 
                                (yyval.expression) = (yyvsp[0].expression);
                            }
#line 2713 "y.tab.c"
    break;

  case 62:
#line 875 "A6_5.y"
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
#line 2728 "y.tab.c"
    break;

  case 63:
#line 889 "A6_5.y"
                            { 
                                yyinfo("logical_OR_expression => logical_AND_expression"); 
                                (yyval.expression) = (yyvsp[0].expression);
                            }
#line 2737 "y.tab.c"
    break;

  case 64:
#line 894 "A6_5.y"
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
#line 2752 "y.tab.c"
    break;

  case 65:
#line 908 "A6_5.y"
                            { 
                                yyinfo("conditional_expression => logical_OR_expression"); 
                                (yyval.expression) = (yyvsp[0].expression);
                            }
#line 2761 "y.tab.c"
    break;

  case 66:
#line 913 "A6_5.y"
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
#line 2782 "y.tab.c"
    break;

  case 67:
#line 933 "A6_5.y"
                            { 
                                yyinfo("assignment_expression => conditional_expression"); 
                                (yyval.expression) = (yyvsp[0].expression);
                            }
#line 2791 "y.tab.c"
    break;

  case 68:
#line 938 "A6_5.y"
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
#line 2813 "y.tab.c"
    break;

  case 69:
#line 959 "A6_5.y"
                        { 
                            yyinfo("assignment_operator => ="); 
                        }
#line 2821 "y.tab.c"
    break;

  case 70:
#line 963 "A6_5.y"
                        { 
                            yyinfo("assignment_operator => *="); 
                        }
#line 2829 "y.tab.c"
    break;

  case 71:
#line 967 "A6_5.y"
                        { 
                            yyinfo("assignment_operator => /="); 
                        }
#line 2837 "y.tab.c"
    break;

  case 72:
#line 971 "A6_5.y"
                        { 
                            yyinfo("assignment_operator => %="); 
                        }
#line 2845 "y.tab.c"
    break;

  case 73:
#line 975 "A6_5.y"
                        { 
                            yyinfo("assignment_operator => += "); 
                        }
#line 2853 "y.tab.c"
    break;

  case 74:
#line 979 "A6_5.y"
                        { 
                            yyinfo("assignment_operator => -= "); 
                        }
#line 2861 "y.tab.c"
    break;

  case 75:
#line 983 "A6_5.y"
                        { 
                            yyinfo("assignment_operator => <<="); 
                        }
#line 2869 "y.tab.c"
    break;

  case 76:
#line 987 "A6_5.y"
                        { 
                            yyinfo("assignment_operator => >>="); 
                        }
#line 2877 "y.tab.c"
    break;

  case 77:
#line 991 "A6_5.y"
                        { 
                            yyinfo("assignment_operator => &="); 
                        }
#line 2885 "y.tab.c"
    break;

  case 78:
#line 995 "A6_5.y"
                        { 
                            yyinfo("assignment_operator => ^="); 
                        }
#line 2893 "y.tab.c"
    break;

  case 79:
#line 999 "A6_5.y"
                        { 
                            yyinfo("assignment_operator => |="); 
                        }
#line 2901 "y.tab.c"
    break;

  case 80:
#line 1006 "A6_5.y"
                { 
                    yyinfo("expression => assignment_expression"); 
                    (yyval.expression) = (yyvsp[0].expression);
                }
#line 2910 "y.tab.c"
    break;

  case 81:
#line 1011 "A6_5.y"
                {
                     yyinfo("expression => expression , assignment_expression"); 
                }
#line 2918 "y.tab.c"
    break;

  case 82:
#line 1018 "A6_5.y"
                        {
                             yyinfo("constant_expression => conditional_expression"); 
                        }
#line 2926 "y.tab.c"
    break;

  case 83:
#line 1027 "A6_5.y"
                {
                     yyinfo("declaration => declaration_specifiers init_declarator_list_opt ;"); 
                }
#line 2934 "y.tab.c"
    break;

  case 84:
#line 1034 "A6_5.y"
                                {
                                     yyinfo("init_declarator_list_opt => init_declarator_list"); 
                                }
#line 2942 "y.tab.c"
    break;

  case 85:
#line 1038 "A6_5.y"
                                {
                                     yyinfo("init_declarator_list_opt => epsilon"); 
                                }
#line 2950 "y.tab.c"
    break;

  case 86:
#line 1045 "A6_5.y"
                            {
                                 yyinfo("declaration_specifiers => storage_class_specifier declaration_specifiers_opt"); 
                            }
#line 2958 "y.tab.c"
    break;

  case 87:
#line 1049 "A6_5.y"
                            {
                                 yyinfo("declaration_specifiers => type_specifier declaration_specifiers_opt"); 
                            }
#line 2966 "y.tab.c"
    break;

  case 88:
#line 1053 "A6_5.y"
                            {
                                 yyinfo("declaration_specifiers => type_qualifier declaration_specifiers_opt"); 
                            }
#line 2974 "y.tab.c"
    break;

  case 89:
#line 1057 "A6_5.y"
                            {
                                 yyinfo("declaration_specifiers => function_specifier declaration_specifiers_opt"); 
                            }
#line 2982 "y.tab.c"
    break;

  case 90:
#line 1064 "A6_5.y"
                                {
                                     yyinfo("declaration_specifiers_opt => declaration_specifiers"); 
                                }
#line 2990 "y.tab.c"
    break;

  case 91:
#line 1068 "A6_5.y"
                                {
                                     yyinfo("declaration_specifiers_opt => epsilon "); 
                                }
#line 2998 "y.tab.c"
    break;

  case 92:
#line 1075 "A6_5.y"
                            {
                                 yyinfo("init_declarator_list => init_declarator"); 
                            }
#line 3006 "y.tab.c"
    break;

  case 93:
#line 1079 "A6_5.y"
                            {
                                 yyinfo("init_declarator_list => init_declarator_list , init_declarator"); 
                            }
#line 3014 "y.tab.c"
    break;

  case 94:
#line 1086 "A6_5.y"
                    { 
                        yyinfo("init_declarator => declarator"); 
                        (yyval.symbol) = (yyvsp[0].symbol);
                    }
#line 3023 "y.tab.c"
    break;

  case 95:
#line 1091 "A6_5.y"
                    { 
                        yyinfo("init_declarator => declarator = initialiser");
                        // if there is some initial value assign it 
                        if((yyvsp[0].symbol)->initialValue != "") 
                            (yyvsp[-2].symbol)->initialValue = (yyvsp[0].symbol)->initialValue;
                        // = assignment
		                emit("=", (yyvsp[-2].symbol)->name, (yyvsp[0].symbol)->name);
                    }
#line 3036 "y.tab.c"
    break;

  case 96:
#line 1103 "A6_5.y"
                            {
                                 yyinfo("storage_class_specifier => extern"); 
                            }
#line 3044 "y.tab.c"
    break;

  case 97:
#line 1107 "A6_5.y"
                            {
                                 yyinfo("storage_class_specifier => static"); 
                            }
#line 3052 "y.tab.c"
    break;

  case 98:
#line 1111 "A6_5.y"
                            {
                                 yyinfo("storage_class_specifier => auto"); 
                            }
#line 3060 "y.tab.c"
    break;

  case 99:
#line 1115 "A6_5.y"
                            {
                                 yyinfo("storage_class_specifier => register"); 
                            }
#line 3068 "y.tab.c"
    break;

  case 100:
#line 1122 "A6_5.y"
                    { 
                        yyinfo("type_specifier => void");
                        currentType = SymbolType::VOID;
                    }
#line 3077 "y.tab.c"
    break;

  case 101:
#line 1127 "A6_5.y"
                    { 
                        yyinfo("type_specifier => char"); 
                        currentType = SymbolType::CHAR;
                    }
#line 3086 "y.tab.c"
    break;

  case 102:
#line 1132 "A6_5.y"
                    {
                         yyinfo("type_specifier => short"); 
                    }
#line 3094 "y.tab.c"
    break;

  case 103:
#line 1136 "A6_5.y"
                    { 
                        yyinfo("type_specifier => int"); 
                        currentType = SymbolType::INT;
                    }
#line 3103 "y.tab.c"
    break;

  case 104:
#line 1141 "A6_5.y"
                    {
                         yyinfo("type_specifier => long"); 
                    }
#line 3111 "y.tab.c"
    break;

  case 105:
#line 1145 "A6_5.y"
                    { 
                        yyinfo("type_specifier => float"); 
                        currentType = SymbolType::FLOAT;
                    }
#line 3120 "y.tab.c"
    break;

  case 106:
#line 1150 "A6_5.y"
                    {
                         yyinfo("type_specifier => double"); 
                    }
#line 3128 "y.tab.c"
    break;

  case 107:
#line 1154 "A6_5.y"
                    {
                         yyinfo("type_specifier => signed"); 
                    }
#line 3136 "y.tab.c"
    break;

  case 108:
#line 1158 "A6_5.y"
                    {
                         yyinfo("type_specifier => unsigned"); 
                    }
#line 3144 "y.tab.c"
    break;

  case 109:
#line 1162 "A6_5.y"
                    {
                         yyinfo("type_specifier => enum_specifier"); 
                    }
#line 3152 "y.tab.c"
    break;

  case 110:
#line 1169 "A6_5.y"
                                { 
                                    yyinfo("specifier_qualifier_list => type_specifier specifier_qualifier_list_opt"); 
                                }
#line 3160 "y.tab.c"
    break;

  case 111:
#line 1173 "A6_5.y"
                                { 
                                    yyinfo("specifier_qualifier_list => type_qualifier specifier_qualifier_list_opt"); 
                                }
#line 3168 "y.tab.c"
    break;

  case 112:
#line 1180 "A6_5.y"
                                    { 
                                        yyinfo("specifier_qualifier_list_opt => specifier_qualifier_list"); 
                                    }
#line 3176 "y.tab.c"
    break;

  case 113:
#line 1184 "A6_5.y"
                                    { 
                                        yyinfo("specifier_qualifier_list_opt => epsilon"); 
                                    }
#line 3184 "y.tab.c"
    break;

  case 114:
#line 1191 "A6_5.y"
                    { 
                        yyinfo("enum_specifier => enum identifier_opt { enumerator_list }"); 
                    }
#line 3192 "y.tab.c"
    break;

  case 115:
#line 1195 "A6_5.y"
                    { 
                        yyinfo("enum_specifier => enum identifier_opt { enumerator_list , }"); 
                    }
#line 3200 "y.tab.c"
    break;

  case 116:
#line 1199 "A6_5.y"
                    { 
                        yyinfo("enum_specifier => enum IDENTIFIER"); 
                    }
#line 3208 "y.tab.c"
    break;

  case 117:
#line 1206 "A6_5.y"
                    { 
                        yyinfo("identifier_opt => IDENTIFIER"); 
                    }
#line 3216 "y.tab.c"
    break;

  case 118:
#line 1210 "A6_5.y"
                    { 
                        yyinfo("identifier_opt => epsilon"); 
                    }
#line 3224 "y.tab.c"
    break;

  case 119:
#line 1217 "A6_5.y"
                    { 
                        yyinfo("enumerator_list => enumerator"); 
                    }
#line 3232 "y.tab.c"
    break;

  case 120:
#line 1221 "A6_5.y"
                    { 
                        yyinfo("enumerator_list => enumerator_list , enumerator"); 
                    }
#line 3240 "y.tab.c"
    break;

  case 121:
#line 1228 "A6_5.y"
                { 
                    yyinfo("enumerator => ENUMERATION_CONSTANT"); 
                }
#line 3248 "y.tab.c"
    break;

  case 122:
#line 1232 "A6_5.y"
                { 
                    yyinfo("enumerator => ENUMERATION_CONSTANT = constant_expression"); 
                }
#line 3256 "y.tab.c"
    break;

  case 123:
#line 1239 "A6_5.y"
                    { 
                        yyinfo("type_qualifier => const"); 
                    }
#line 3264 "y.tab.c"
    break;

  case 124:
#line 1243 "A6_5.y"
                    { 
                        yyinfo("type_qualifier => restrict"); 
                    }
#line 3272 "y.tab.c"
    break;

  case 125:
#line 1247 "A6_5.y"
                    { 
                        yyinfo("type_qualifier => volatile"); 
                    }
#line 3280 "y.tab.c"
    break;

  case 126:
#line 1254 "A6_5.y"
                        { 
                            yyinfo("function_specifier => inline"); 
                        }
#line 3288 "y.tab.c"
    break;

  case 127:
#line 1261 "A6_5.y"
                { 
                    yyinfo("declarator => pointer direct_declarator"); 
                    SymbolType *it = (yyvsp[-1].symbolType);
                    while(it->arrayType != NULL) 
                        it = it->arrayType;
                    it->arrayType = (yyvsp[0].symbol)->type;
                    (yyval.symbol) = (yyvsp[0].symbol)->update((yyvsp[-1].symbolType));
                }
#line 3301 "y.tab.c"
    break;

  case 128:
#line 1270 "A6_5.y"
                { 
                    yyinfo("declarator => direct_declarator"); 
                }
#line 3309 "y.tab.c"
    break;

  case 129:
#line 1276 "A6_5.y"
                    {
                        if(currentSymbol->nestedTable == NULL) {
                            changeTable(new SymbolTable(""));
                        }
                        else {
                            changeTable(currentSymbol->nestedTable);
                            emit("label", currentTable->name);
                        }
                    }
#line 3323 "y.tab.c"
    break;

  case 130:
#line 1295 "A6_5.y"
                        { 
                            yyinfo("direct_declarator => IDENTIFIER"); 
                            (yyval.symbol) = (yyvsp[0].symbol)->update(new SymbolType(currentType)); // update type to the last type seen
                            currentSymbol = (yyval.symbol);
                        }
#line 3333 "y.tab.c"
    break;

  case 131:
#line 1301 "A6_5.y"
                        { 
                            yyinfo("direct_declarator => ( declarator )"); 
                            (yyval.symbol) = (yyvsp[-1].symbol);
                        }
#line 3342 "y.tab.c"
    break;

  case 132:
#line 1306 "A6_5.y"
                        { 
                            yyinfo("direct_declarator => direct_declarator [ type_qualifier_list assignment_expression ]"); 
                        }
#line 3350 "y.tab.c"
    break;

  case 133:
#line 1310 "A6_5.y"
                        { 
                            yyinfo("direct_declarator => direct_declarator [ type_qualifier_list ]"); 
                        }
#line 3358 "y.tab.c"
    break;

  case 134:
#line 1314 "A6_5.y"
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
#line 3380 "y.tab.c"
    break;

  case 135:
#line 1332 "A6_5.y"
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
#line 3403 "y.tab.c"
    break;

  case 136:
#line 1351 "A6_5.y"
                        { 
                            yyinfo("direct_declarator => direct_declarator [ static type_qualifier_list assignment_expression ]"); 
                        }
#line 3411 "y.tab.c"
    break;

  case 137:
#line 1355 "A6_5.y"
                        { 
                            yyinfo("direct_declarator => direct_declarator [ assignment_expression ]"); 
                        }
#line 3419 "y.tab.c"
    break;

  case 138:
#line 1359 "A6_5.y"
                        { 
                            yyinfo("direct_declarator => direct_declarator [ type_qualifier_list static assignment_expression ]"); 
                        }
#line 3427 "y.tab.c"
    break;

  case 139:
#line 1363 "A6_5.y"
                        { 
                            yyinfo("direct_declarator => direct_declarator [ type_qualifier_list * ]"); 
                        }
#line 3435 "y.tab.c"
    break;

  case 140:
#line 1367 "A6_5.y"
                        { 
                            yyinfo("direct_declarator => direct_declarator [ * ]"); 
                        }
#line 3443 "y.tab.c"
    break;

  case 141:
#line 1371 "A6_5.y"
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
                            (yyvsp[-4].symbol)->category = Symbol::FUNCTION;
                            currentTable->parent = globalTable;
                            changeTable(globalTable);
                            currentSymbol = (yyval.symbol);
                        }
#line 3463 "y.tab.c"
    break;

  case 142:
#line 1387 "A6_5.y"
                        { 
                            yyinfo("direct_declarator => direct_declarator ( identifier_list )"); 
                        }
#line 3471 "y.tab.c"
    break;

  case 143:
#line 1391 "A6_5.y"
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
                            (yyvsp[-3].symbol)->category = Symbol::FUNCTION;
                            currentTable->parent = globalTable;
                            changeTable(globalTable);
                            currentSymbol = (yyval.symbol);
                        }
#line 3491 "y.tab.c"
    break;

  case 144:
#line 1410 "A6_5.y"
                            { 
                                yyinfo("type_qualifier_list_opt => type_qualifier_list"); 
                            }
#line 3499 "y.tab.c"
    break;

  case 145:
#line 1414 "A6_5.y"
                            { 
                                yyinfo("type_qualifier_list_opt => epsilon"); 
                            }
#line 3507 "y.tab.c"
    break;

  case 146:
#line 1450 "A6_5.y"
            { 
                yyinfo("pointer => * type_qualifier_list_opt"); 
                // fresh pointer
                (yyval.symbolType) = new SymbolType(SymbolType::POINTER);
            }
#line 3517 "y.tab.c"
    break;

  case 147:
#line 1456 "A6_5.y"
            { 
                yyinfo("pointer => * type_qualifier_list_opt pointer"); 
                // nested pointer
                (yyval.symbolType) = new SymbolType(SymbolType::POINTER, (yyvsp[0].symbolType));
            }
#line 3527 "y.tab.c"
    break;

  case 148:
#line 1465 "A6_5.y"
                        { 
                            yyinfo("type_qualifier_list => type_qualifier"); 
                        }
#line 3535 "y.tab.c"
    break;

  case 149:
#line 1469 "A6_5.y"
                        { 
                            yyinfo("type_qualifier_list => type_qualifier_list type_qualifier"); 
                        }
#line 3543 "y.tab.c"
    break;

  case 150:
#line 1476 "A6_5.y"
                        { 
                            yyinfo("parameter_type_list => parameter_list"); 
                        }
#line 3551 "y.tab.c"
    break;

  case 151:
#line 1480 "A6_5.y"
                        { 
                            yyinfo("parameter_type_list => parameter_list , ..."); 
                        }
#line 3559 "y.tab.c"
    break;

  case 152:
#line 1487 "A6_5.y"
                    { 
                        yyinfo("parameter_list => parameter_declaration"); 
                    }
#line 3567 "y.tab.c"
    break;

  case 153:
#line 1491 "A6_5.y"
                    { 
                        yyinfo("parameter_list => parameter_list , parameter_declaration"); 
                    }
#line 3575 "y.tab.c"
    break;

  case 154:
#line 1498 "A6_5.y"
                            { 
                                yyinfo("parameter_declaration => declaration_specifiers declarator");
                                (yyvsp[0].symbol)->category = Symbol::PARAMETER; 
                                currentTable->parameters.push_back((yyvsp[0].symbol)->name);
                            }
#line 3585 "y.tab.c"
    break;

  case 155:
#line 1504 "A6_5.y"
                            { 
                                yyinfo("parameter_declaration => declaration_specifiers"); 
                            }
#line 3593 "y.tab.c"
    break;

  case 156:
#line 1511 "A6_5.y"
                    { 
                        yyinfo("identifier_list => IDENTIFIER"); 
                    }
#line 3601 "y.tab.c"
    break;

  case 157:
#line 1515 "A6_5.y"
                    { 
                        yyinfo("identifier_list => identifier_list , IDENTIFIER"); 
                    }
#line 3609 "y.tab.c"
    break;

  case 158:
#line 1522 "A6_5.y"
                { 
                    yyinfo("type_name => specifier_qualifier_list"); 
                }
#line 3617 "y.tab.c"
    break;

  case 159:
#line 1529 "A6_5.y"
                { 
                    yyinfo("initialiser => assignment_expression"); 
                    (yyval.symbol) = (yyvsp[0].expression)->symbol;
                }
#line 3626 "y.tab.c"
    break;

  case 160:
#line 1534 "A6_5.y"
                { 
                    yyinfo("initialiser => { initialiser_list }"); 
                }
#line 3634 "y.tab.c"
    break;

  case 161:
#line 1538 "A6_5.y"
                { 
                    yyinfo("initialiser => { initialiser_list , }"); 
                }
#line 3642 "y.tab.c"
    break;

  case 162:
#line 1545 "A6_5.y"
                        { 
                            yyinfo("initialiser_list => designation_opt initialiser"); 
                        }
#line 3650 "y.tab.c"
    break;

  case 163:
#line 1549 "A6_5.y"
                        { 
                            yyinfo("initialiser_list => initialiser_list , designation_opt initialiser"); 
                        }
#line 3658 "y.tab.c"
    break;

  case 164:
#line 1556 "A6_5.y"
                    { 
                        yyinfo("designation_opt => designation"); 
                    }
#line 3666 "y.tab.c"
    break;

  case 165:
#line 1560 "A6_5.y"
                    { 
                        yyinfo("designation_opt => epsilon"); 
                    }
#line 3674 "y.tab.c"
    break;

  case 166:
#line 1567 "A6_5.y"
                { 
                    yyinfo("designation => designator_list ="); 
                }
#line 3682 "y.tab.c"
    break;

  case 167:
#line 1574 "A6_5.y"
                    { 
                        yyinfo("designator_list => designator"); 
                    }
#line 3690 "y.tab.c"
    break;

  case 168:
#line 1578 "A6_5.y"
                    { 
                        yyinfo("designator_list => designator_list designator"); 
                    }
#line 3698 "y.tab.c"
    break;

  case 169:
#line 1585 "A6_5.y"
                { 
                    yyinfo("designator => [ constant_expression ]"); 
                }
#line 3706 "y.tab.c"
    break;

  case 170:
#line 1589 "A6_5.y"
                { 
                    yyinfo("designator => . IDENTIFIER"); 
                }
#line 3714 "y.tab.c"
    break;

  case 171:
#line 1598 "A6_5.y"
                { 
                    yyinfo("statement => labeled_statement"); 
                }
#line 3722 "y.tab.c"
    break;

  case 172:
#line 1602 "A6_5.y"
                { 
                    yyinfo("statement => compound_statement");
                    (yyval.statement) = (yyvsp[0].statement); 
                }
#line 3731 "y.tab.c"
    break;

  case 173:
#line 1607 "A6_5.y"
                { 
                    yyinfo("statement => expression_statement"); 
                    (yyval.statement) = new Statement();
                    (yyval.statement)->nextList = (yyvsp[0].expression)->nextList;
                }
#line 3741 "y.tab.c"
    break;

  case 174:
#line 1613 "A6_5.y"
                { 
                    yyinfo("statement => selection_statement"); 
                    (yyval.statement) = (yyvsp[0].statement);
                }
#line 3750 "y.tab.c"
    break;

  case 175:
#line 1618 "A6_5.y"
                { 
                    yyinfo("statement => iteration_statement"); 
                    (yyval.statement) = (yyvsp[0].statement);
                }
#line 3759 "y.tab.c"
    break;

  case 176:
#line 1623 "A6_5.y"
                { 
                    yyinfo("statement => jump_statement"); 
                    (yyval.statement) = (yyvsp[0].statement);
                }
#line 3768 "y.tab.c"
    break;

  case 177:
#line 1631 "A6_5.y"
                        { 
                            yyinfo("labeled_statement => IDENTIFIER : statement"); 
                        }
#line 3776 "y.tab.c"
    break;

  case 178:
#line 1635 "A6_5.y"
                        { 
                            yyinfo("labeled_statement => case constant_expression : statement"); 
                        }
#line 3784 "y.tab.c"
    break;

  case 179:
#line 1639 "A6_5.y"
                        { 
                            yyinfo("labeled_statement => default : statement"); 
                        }
#line 3792 "y.tab.c"
    break;

  case 180:
#line 1664 "A6_5.y"
                        { 
                            yyinfo("compound_statement => { block_item_list_opt }"); 
                            (yyval.statement) = (yyvsp[-1].statement);
                        }
#line 3801 "y.tab.c"
    break;

  case 181:
#line 1672 "A6_5.y"
                        { 
                            yyinfo("block_item_list_opt => block_item_list"); 
                            (yyval.statement) = (yyvsp[0].statement);
                        }
#line 3810 "y.tab.c"
    break;

  case 182:
#line 1677 "A6_5.y"
                        { 
                            yyinfo("block_item_list_opt => epsilon"); 
                            (yyval.statement) = new Statement();
                        }
#line 3819 "y.tab.c"
    break;

  case 183:
#line 1685 "A6_5.y"
                    {
                        yyinfo("block_item_list => block_item"); 
                        (yyval.statement) = (yyvsp[0].statement);
                    }
#line 3828 "y.tab.c"
    break;

  case 184:
#line 1690 "A6_5.y"
                    { 
                        yyinfo("block_item_list => block_item_list block_item"); 
                        (yyval.statement) = (yyvsp[0].statement);
                        // after completion of block_item_list(1) we move to block_item(3)
                        backpatch((yyvsp[-2].statement)->nextList,(yyvsp[-1].instructionNumber));
                    }
#line 3839 "y.tab.c"
    break;

  case 185:
#line 1700 "A6_5.y"
                { 
                    yyinfo("block_item => declaration"); 
                    (yyval.statement) = new Statement();
                }
#line 3848 "y.tab.c"
    break;

  case 186:
#line 1705 "A6_5.y"
                { 
                    yyinfo("block_item => statement"); 
                    (yyval.statement) = (yyvsp[0].statement);
                }
#line 3857 "y.tab.c"
    break;

  case 187:
#line 1713 "A6_5.y"
                            { 
                                yyinfo("expression_statement => expression_opt ;"); 
                                (yyval.expression) = (yyvsp[-1].expression);
                            }
#line 3866 "y.tab.c"
    break;

  case 188:
#line 1721 "A6_5.y"
                    { 
                        yyinfo("expression_opt => expression"); 
                        (yyval.expression) = (yyvsp[0].expression);
                    }
#line 3875 "y.tab.c"
    break;

  case 189:
#line 1726 "A6_5.y"
                    { 
                        yyinfo("expression_opt => epsilon"); 
                        (yyval.expression) = new Expression();
                    }
#line 3884 "y.tab.c"
    break;

  case 190:
#line 1753 "A6_5.y"
                        { 
                            yyinfo("selection_statement => if ( expression ) statement"); 
                            (yyval.statement) = new Statement();
                            (yyvsp[-4].expression)->toBool();
                            backpatch((yyvsp[-4].expression)->trueList, (yyvsp[-2].instructionNumber)); // if true go to M
                            (yyval.statement)->nextList = merge((yyvsp[-4].expression)->falseList, merge((yyvsp[-1].statement)->nextList, (yyvsp[0].statement)->nextList)); // exits
                        }
#line 3896 "y.tab.c"
    break;

  case 191:
#line 1761 "A6_5.y"
                        { 
                            yyinfo("selection_statement => if ( expression ) statement else statement"); 
                            (yyval.statement) = new Statement();
                            (yyvsp[-7].expression)->toBool();
                            backpatch((yyvsp[-7].expression)->trueList, (yyvsp[-5].instructionNumber)); // if true go to M
                            backpatch((yyvsp[-7].expression)->falseList, (yyvsp[-1].instructionNumber)); // if false go to else
                            (yyval.statement)->nextList = merge((yyvsp[0].statement)->nextList, merge((yyvsp[-4].statement)->nextList, (yyvsp[-3].statement)->nextList)); // exits
                        }
#line 3909 "y.tab.c"
    break;

  case 192:
#line 1770 "A6_5.y"
                        { 
                            yyinfo("selection_statement => switch ( expression ) statement"); 
                        }
#line 3917 "y.tab.c"
    break;

  case 193:
#line 1801 "A6_5.y"
                        { 
                            yyinfo("iteration_statement => while ( expression ) statement"); 
                            (yyval.statement) = new Statement();
                            (yyvsp[-3].expression)->toBool();
                            backpatch((yyvsp[0].statement)->nextList, (yyvsp[-5].instructionNumber)); // after statement go back to M1
                            backpatch((yyvsp[-3].expression)->trueList, (yyvsp[-1].instructionNumber)); // if true go to M2
                            (yyval.statement)->nextList = (yyvsp[-3].expression)->falseList; // exit if false
                            emit("goto", toString((yyvsp[-5].instructionNumber)));
                        }
#line 3931 "y.tab.c"
    break;

  case 194:
#line 1811 "A6_5.y"
                        { 
                            yyinfo("iteration_statement => do statement while ( expression ) ;"); 
                            (yyval.statement) = new Statement();
                            (yyvsp[-2].expression)->toBool();
                            backpatch((yyvsp[-2].expression)->trueList, (yyvsp[-7].instructionNumber)); // if true go back to M1
                            backpatch((yyvsp[-6].statement)->nextList, (yyvsp[-5].instructionNumber)); // after statement is executed go to M2
                            (yyval.statement)->nextList = (yyvsp[-2].expression)->falseList; // exit if false
                        }
#line 3944 "y.tab.c"
    break;

  case 195:
#line 1820 "A6_5.y"
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
#line 3959 "y.tab.c"
    break;

  case 196:
#line 1831 "A6_5.y"
                        { 
                            yyinfo("iteration_statement => for ( declaration expression_opt ; expression_opt ) statement"); 
                        }
#line 3967 "y.tab.c"
    break;

  case 197:
#line 1838 "A6_5.y"
                    { 
                        yyinfo("jump_statement => goto IDENTIFIER ;"); 
                    }
#line 3975 "y.tab.c"
    break;

  case 198:
#line 1842 "A6_5.y"
                    { 
                        yyinfo("jump_statement => continue ;"); 
                    }
#line 3983 "y.tab.c"
    break;

  case 199:
#line 1846 "A6_5.y"
                    { 
                        yyinfo("jump_statement => break ;"); 
                    }
#line 3991 "y.tab.c"
    break;

  case 200:
#line 1850 "A6_5.y"
                    { 
                        yyinfo("jump_statement => return expression_opt ;"); 
                        (yyval.statement) = new Statement();
                        if((yyvsp[-1].expression)->symbol != NULL) {
                            emit("return", (yyvsp[-1].expression)->symbol->name); // emit the current symbol name at return if it exists otherwise empty
                        } else {
                            emit("return", "");
                        }
                    }
#line 4005 "y.tab.c"
    break;

  case 201:
#line 1865 "A6_5.y"
                        { 
                            yyinfo("translation_unit => external_declaration"); 
                        }
#line 4013 "y.tab.c"
    break;

  case 202:
#line 1869 "A6_5.y"
                        { 
                            yyinfo("translation_unit => translation_unit external_declaration"); 
                        }
#line 4021 "y.tab.c"
    break;

  case 203:
#line 1876 "A6_5.y"
                            { 
                                yyinfo("external_declaration => function_definition"); 
                            }
#line 4029 "y.tab.c"
    break;

  case 204:
#line 1880 "A6_5.y"
                            { 
                                yyinfo("external_declaration => declaration"); 
                            }
#line 4037 "y.tab.c"
    break;

  case 205:
#line 1888 "A6_5.y"
                        { 
                            yyinfo("function_definition => declaration_specifiers declarator declaration_list_opt compound_statement"); 
                            tableCount = 0;
                            emit("labelend", (yyvsp[-5].symbol)->name);
                            if((yyvsp[-5].symbol)->type->type != SymbolType::VOID) {
                                // set type of return value
                                currentTable->lookup("return")->update((yyvsp[-5].symbol)->type);
                            }
                            changeTable(globalTable);
                        }
#line 4052 "y.tab.c"
    break;

  case 206:
#line 1902 "A6_5.y"
                            { 
                                yyinfo("declaration_list_opt => declaration_list"); 
                            }
#line 4060 "y.tab.c"
    break;

  case 207:
#line 1906 "A6_5.y"
                            { 
                                yyinfo("declaration_list_opt => epsilon"); 
                            }
#line 4068 "y.tab.c"
    break;

  case 208:
#line 1913 "A6_5.y"
                        { 
                            yyinfo("declaration_list => declaration"); 
                        }
#line 4076 "y.tab.c"
    break;

  case 209:
#line 1917 "A6_5.y"
                        { 
                            yyinfo("declaration_list => declaration_list declaration"); 
                        }
#line 4084 "y.tab.c"
    break;


#line 4088 "y.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

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
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
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
                  yystos[+*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 1922 "A6_5.y"


void yyerror(string s) {
    printf("ERROR [Line %d] : %s\n", lineCount, s.c_str());
}

void yyinfo(string s) {
    #ifdef _DEBUG
        printf("INFO [Line %d] : %s\n", lineCount, s.c_str());
    #endif
}
