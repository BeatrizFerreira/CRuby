/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "compiler.y" /* yacc.c:339  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "symbol_table.h"

char condicao[100][100];

int contador_for = 0;
int contador_tab = 0;

extern char* yytext;

#line 80 "compiler.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "compiler.tab.h".  */
#ifndef YY_YY_COMPILER_TAB_H_INCLUDED
# define YY_YY_COMPILER_TAB_H_INCLUDED
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
    TYPE_INT = 258,
    TYPE_FLOAT = 259,
    TYPE_DOUBLE = 260,
    TYPE_CHAR = 261,
    IDENTIFIER = 262,
    ATTR = 263,
    N_INTEGER = 264,
    N_REAL = 265,
    N_CHAR = 266,
    END_LINE = 267,
    SEMICOLON = 268,
    PLUS = 269,
    MINUS = 270,
    TIMES = 271,
    DIVISION = 272,
    MENOR = 273,
    MENORIGUAL = 274,
    MAIOR = 275,
    MAIORIGUAL = 276,
    IGUAL = 277,
    DIFERENTE = 278,
    E = 279,
    OU = 280,
    SE = 281,
    SENAO = 282,
    LEFT_PARENTHESIS = 283,
    RIGHT_PARENTHESIS = 284,
    eof = 285,
    LEFT_BRACKETS = 286,
    RIGHT_BRACKETS = 287,
    FOR = 288,
    WHILE = 289,
    REFUSE = 290
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 15 "compiler.y" /* yacc.c:355  */

    char * strval;
    int intval;

#line 161 "compiler.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_COMPILER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 176 "compiler.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
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
#define YYLAST   203

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  68
/* YYNRULES -- Number of rules.  */
#define YYNRULES  123
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  196

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   290

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
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
      35
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    33,    33,    35,    38,    39,    43,    44,    45,    49,
      50,    54,    54,    55,    59,    59,    59,    63,    63,    63,
      67,    68,    69,    70,    71,    72,    73,    73,    77,    78,
      79,    80,    81,    82,    83,    86,    87,    87,    88,    88,
      89,    89,    90,    90,    94,    94,    95,    95,    96,    96,
      97,    97,    98,    98,    99,    99,   102,   103,   103,   104,
     104,   105,   105,   106,   106,   110,   110,   111,   111,   112,
     112,   113,   113,   114,   114,   115,   115,   119,   119,   122,
     122,   124,   124,   126,   126,   130,   131,   135,   135,   139,
     140,   144,   146,   148,   148,   148,   152,   152,   154,   156,
     156,   160,   164,   164,   164,   168,   170,   172,   181,   182,
     183,   187,   188,   189,   193,   194,   198,   198,   199,   199,
     203,   204,   205,   206
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TYPE_INT", "TYPE_FLOAT", "TYPE_DOUBLE",
  "TYPE_CHAR", "IDENTIFIER", "ATTR", "N_INTEGER", "N_REAL", "N_CHAR",
  "END_LINE", "SEMICOLON", "PLUS", "MINUS", "TIMES", "DIVISION", "MENOR",
  "MENORIGUAL", "MAIOR", "MAIORIGUAL", "IGUAL", "DIFERENTE", "E", "OU",
  "SE", "SENAO", "LEFT_PARENTHESIS", "RIGHT_PARENTHESIS", "eof",
  "LEFT_BRACKETS", "RIGHT_BRACKETS", "FOR", "WHILE", "REFUSE", "$accept",
  "Input", "Line", "command", "loop_and_conditional", "declaration", "$@1",
  "declaration_attribution", "$@2", "$@3", "attribution", "$@4", "$@5",
  "expression", "$@6", "expression_loop", "math_operation_loop", "$@7",
  "$@8", "$@9", "$@10", "comparator_loop", "$@11", "$@12", "$@13", "$@14",
  "$@15", "$@16", "math_operation", "$@17", "$@18", "$@19", "$@20",
  "comparator", "$@21", "$@22", "$@23", "$@24", "$@25", "$@26", "if_",
  "$@27", "else_", "$@28", "$@29", "$@30", "loop", "while_statement",
  "$@31", "while", "for_", "$@32", "$@33", "for_statement", "$@34", "$@35",
  "first_for_loop_part", "last_for_loop_part", "$@36", "$@37",
  "conditional", "multiple_command", "multiple_conditional",
  "multiple_conditional_loop", "booleans", "$@38", "$@39", "type", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290
};
# endif

#define YYPACT_NINF -90

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-90)))

#define YYTABLE_NINF -119

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -90,    12,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -23,   -90,   -90,   -90,   -90,   -90,   -90,   -90,     1,   -90,
      23,   -90,    24,   -90,   -90,    14,    -2,   -20,    15,    31,
      78,    44,    78,    40,    78,    44,    34,   -90,    16,    60,
     -90,    63,    16,   -90,    44,    44,    11,   -90,    44,   -90,
      66,    93,    95,    30,   -90,    -9,   -90,   -90,   -90,   166,
     -90,    96,    86,    87,    88,    30,    94,   -90,   -90,    80,
      92,   -90,   -90,   -90,   -90,   -90,   145,   -90,    30,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,    97,   -90,   107,    41,    89,   123,   -90,    74,   -90,
     -90,    30,   -90,   112,    30,    30,    30,    30,    30,    30,
      30,    30,    30,    30,    16,    16,   -90,   -90,   125,   -90,
     -90,   -90,   114,   121,   156,   -90,   166,   166,   166,   166,
     166,   166,   166,   166,   166,   166,   -90,   -90,   -90,   131,
      78,   -90,    44,   -90,    44,   -90,   124,   -90,   122,   168,
     147,   -90,   -90,   -90,   -90,    90,   -90,   -90,   -90,   -90,
      90,   176,   -90,   -90,   128,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,   176,   176,   176,   176,
     176,   176,   176,   176,   176,   176
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,   120,   121,   122,   123,    17,     5,    77,
       0,    87,     3,     4,     8,     6,    13,     7,     0,    10,
       0,    86,     0,    85,     9,     0,     0,     0,     0,     0,
       0,   108,     0,     0,     0,   108,    11,    18,    56,     0,
     101,    93,    56,   105,   108,   108,     0,    89,   108,    96,
       0,     0,     0,    56,    23,    20,    21,    22,    26,     0,
      24,    25,     0,     0,     0,    56,     0,   110,   109,   106,
       0,    97,    98,    12,    15,    20,     0,    25,    56,    57,
      59,    61,    63,    65,    67,    69,    71,    73,    75,   116,
     113,     0,    78,     0,     0,    25,     0,    88,    79,   107,
      90,    56,    19,     0,    56,    56,    56,    56,    56,    56,
      56,    56,    56,    56,    56,    56,    91,    92,     0,   115,
      94,    81,     0,     0,     0,    27,    58,    60,    62,    64,
      66,    68,    70,    72,    74,    76,   117,   119,    99,     0,
       0,    80,   108,    16,   108,   102,     0,    82,     0,     0,
       0,    95,    84,   100,   103,    35,    31,    28,    29,    30,
      35,   104,    32,    33,     0,    36,    38,    40,    42,    44,
      46,    48,    50,    52,    54,    34,    35,    35,    35,    35,
      35,    35,    35,    35,    35,    35,    37,    39,    41,    43,
      45,    47,    49,    51,    53,    55
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -90,   -90,   -90,    -1,   -90,   -90,   -90,   -90,   -90,   -90,
     173,   -90,   -90,   -44,   -90,   -89,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -35,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
      81,   -34,   -40,   -90,    61,   -90,   -90,   -90
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    12,    45,    14,    15,    51,    16,    52,   101,
      17,    26,    53,    59,    78,   161,   162,   176,   177,   178,
     179,   163,   180,   181,   182,   183,   184,   185,    60,   104,
     105,   106,   107,    77,   108,   109,   110,   111,   112,   113,
      18,    27,    99,   122,   140,   123,    19,    20,    29,    21,
      22,    65,   139,    23,    71,   144,    41,   146,   150,   155,
      24,    46,    62,    96,    90,   114,    91,    25
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      13,    50,    66,    61,  -111,    28,    37,    61,    38,    76,
      67,    68,     2,    30,    70,     3,     4,     5,     6,     7,
    -111,    36,     7,    54,     8,    55,    56,    57,    39,    43,
      95,    47,    31,    49,   103,    32,    34,    54,     9,    75,
      56,    57,   -14,    69,    58,    10,    11,     3,     4,     5,
       6,     7,    48,   117,    33,    35,    44,   124,    58,    42,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
       9,   164,   118,    63,   136,   137,    64,    10,    11,    61,
      61,     3,     4,     5,     6,     7,   121,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   156,    72,   157,
     158,   159,  -114,    74,     9,   -83,    73,    98,   148,  -112,
     149,    10,    11,    89,  -118,    92,    93,    94,   160,   116,
      89,  -118,   115,    97,   100,  -112,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,   120,   138,   145,   147,
       9,   125,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   142,   151,   152,   154,   119,   175,   102,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,   143,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     153,    40,     0,   141
};

static const yytype_int16 yycheck[] =
{
       1,    35,    42,    38,    13,    28,     8,    42,    28,    53,
      44,    45,     0,    12,    48,     3,     4,     5,     6,     7,
      29,     7,     7,     7,    12,     9,    10,    11,    13,    30,
      65,    32,    31,    34,    78,    12,    12,     7,    26,     9,
      10,    11,     8,    32,    28,    33,    34,     3,     4,     5,
       6,     7,    12,    12,    31,    31,    12,   101,    28,    28,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
      26,   160,    31,    13,   114,   115,    13,    33,    34,   114,
     115,     3,     4,     5,     6,     7,    12,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,     7,    32,     9,
      10,    11,    13,     8,    26,    31,    13,    27,   142,    13,
     144,    33,    34,    24,    25,    29,    29,    29,    28,    12,
      24,    25,    25,    29,    32,    29,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    13,    12,     7,   140,
      26,    29,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    31,    29,    32,     8,    95,    29,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      32,    28,    -1,   122
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    37,     0,     3,     4,     5,     6,     7,    12,    26,
      33,    34,    38,    39,    40,    41,    43,    46,    76,    82,
      83,    85,    86,    89,    96,   103,    47,    77,    28,    84,
      12,    31,    12,    31,    12,    31,     7,     8,    28,    13,
      46,    92,    28,    39,    12,    39,    97,    39,    12,    39,
      97,    42,    44,    48,     7,     9,    10,    11,    28,    49,
      64,    69,    98,    13,    13,    87,    98,    97,    97,    32,
      97,    90,    32,    13,     8,     9,    49,    69,    50,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
     100,   102,    29,    29,    29,    69,    99,    29,    27,    78,
      32,    45,    13,    49,    65,    66,    67,    68,    70,    71,
      72,    73,    74,    75,   101,    25,    12,    12,    31,   100,
      13,    12,    79,    81,    49,    29,    49,    49,    49,    49,
      49,    49,    49,    49,    49,    49,    98,    98,    12,    88,
      80,    96,    31,    13,    91,     7,    93,    39,    97,    97,
      94,    29,    32,    32,     8,    95,     7,     9,    10,    11,
      28,    51,    52,    57,    51,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    29,    53,    54,    55,    56,
      58,    59,    60,    61,    62,    63,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    51
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    36,    37,    37,    38,    38,    39,    39,    39,    40,
      40,    42,    41,    41,    44,    45,    43,    47,    48,    46,
      49,    49,    49,    49,    49,    49,    50,    49,    51,    51,
      51,    51,    51,    51,    51,    52,    53,    52,    54,    52,
      55,    52,    56,    52,    58,    57,    59,    57,    60,    57,
      61,    57,    62,    57,    63,    57,    64,    65,    64,    66,
      64,    67,    64,    68,    64,    70,    69,    71,    69,    72,
      69,    73,    69,    74,    69,    75,    69,    77,    76,    79,
      78,    80,    78,    81,    78,    82,    82,    84,    83,    85,
      85,    86,    86,    87,    88,    86,    90,    89,    89,    91,
      89,    92,    94,    95,    93,    96,    96,    96,    97,    97,
      97,    98,    98,    98,    99,    99,   101,   100,   102,   100,
     103,   103,   103,   103
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     0,     4,     1,     0,     0,     7,     0,     0,     6,
       1,     1,     1,     1,     1,     1,     0,     4,     1,     1,
       1,     1,     1,     1,     3,     0,     0,     4,     0,     4,
       0,     4,     0,     4,     0,     4,     0,     4,     0,     4,
       0,     4,     0,     4,     0,     4,     0,     0,     4,     0,
       4,     0,     4,     0,     4,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     4,     0,     4,     0,     5,     0,
       3,     0,     4,     0,     5,     1,     1,     0,     5,     3,
       5,     6,     6,     0,     0,     9,     0,     4,     4,     0,
      10,     1,     0,     0,     5,     3,     4,     5,     0,     2,
       2,     1,     1,     2,     1,     2,     0,     3,     0,     3,
       1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
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
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
            /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
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
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

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
      int yyn = yypact[*yyssp];
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
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
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
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
          yyp++;
          yyformat++;
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

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
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
        case 11:
#line 54 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, ((yyvsp[0].strval)), linhas); InsereNaSaida(&saida, " = 0\n", linhas);}
#line 1408 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 54 "compiler.y" /* yacc.c:1646  */
    {InserirSimbolo(&tabela_simbolos, (yyvsp[-2].strval)); cont++; linhas++; }
#line 1414 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 59 "compiler.y" /* yacc.c:1646  */
    {InserirSimbolo(&tabela_simbolos, (yyvsp[0].strval));InsereNaSaida(&saida, ((yyvsp[0].strval)), linhas);cont++;}
#line 1420 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 59 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, " = ", linhas);}
#line 1426 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 59 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, "\n", linhas);linhas++;}
#line 1432 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 63 "compiler.y" /* yacc.c:1646  */
    {if(procura_tabela_simbolos((yyvsp[0].strval))){InsereNaSaida(&saida, yytext, linhas);}else{erro++;yyerror("Variavel nao declarada");}}
#line 1438 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 63 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, " = ", linhas);}
#line 1444 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 63 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, "\n", linhas);linhas++;}
#line 1450 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 67 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, yytext, linhas);}
#line 1456 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 68 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, yytext, linhas);}
#line 1462 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 69 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, yytext, linhas);}
#line 1468 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 70 "compiler.y" /* yacc.c:1646  */
    {printf("!%s\n", (yyvsp[0].strval));if(procura_tabela_simbolos((yyvsp[0].strval))){InsereNaSaida(&saida, yytext, linhas);}else{erro++;yyerror("Variavel nao declarada");} }
#line 1474 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 73 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, yytext, linhas);}
#line 1480 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 73 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, yytext, linhas);}
#line 1486 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 77 "compiler.y" /* yacc.c:1646  */
    { strcat(condicao[contador_for], yytext ); }
#line 1492 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 78 "compiler.y" /* yacc.c:1646  */
    { strcat(condicao[contador_for], yytext); }
#line 1498 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 79 "compiler.y" /* yacc.c:1646  */
    { strcat(condicao[contador_for], yytext ); }
#line 1504 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 80 "compiler.y" /* yacc.c:1646  */
    { printf("expressao %s\n", yytext); strcat(condicao[contador_for], yytext ); printf("[%d] = %s\n", contador_for , condicao[contador_for]); }
#line 1510 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 87 "compiler.y" /* yacc.c:1646  */
    { strcat(condicao[contador_for], yytext ); }
#line 1516 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 88 "compiler.y" /* yacc.c:1646  */
    { strcat(condicao[contador_for], yytext ); }
#line 1522 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 89 "compiler.y" /* yacc.c:1646  */
    { strcat(condicao[contador_for], yytext ); }
#line 1528 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 90 "compiler.y" /* yacc.c:1646  */
    { strcat(condicao[contador_for], yytext ); }
#line 1534 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 94 "compiler.y" /* yacc.c:1646  */
    { strcat(condicao[contador_for], yytext ); }
#line 1540 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 95 "compiler.y" /* yacc.c:1646  */
    { strcat(condicao[contador_for], yytext ); }
#line 1546 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 96 "compiler.y" /* yacc.c:1646  */
    { strcat(condicao[contador_for], yytext ); }
#line 1552 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 97 "compiler.y" /* yacc.c:1646  */
    { strcat(condicao[contador_for], yytext ); }
#line 1558 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 98 "compiler.y" /* yacc.c:1646  */
    { strcat(condicao[contador_for], yytext ); }
#line 1564 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 99 "compiler.y" /* yacc.c:1646  */
    { strcat(condicao[contador_for], yytext ); }
#line 1570 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 103 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, " + ", linhas);}
#line 1576 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 104 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, " - ", linhas);}
#line 1582 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 105 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, " * ", linhas);}
#line 1588 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 106 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, " / ", linhas);}
#line 1594 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 110 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, " < ", linhas);}
#line 1600 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 111 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, " <= ", linhas);}
#line 1606 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 112 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, " > ", linhas);}
#line 1612 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 113 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, " >= ", linhas);}
#line 1618 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 114 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, " == ", linhas);}
#line 1624 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 115 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, " != ", linhas);}
#line 1630 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 119 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, "if (", linhas); }
#line 1636 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 119 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, ")\n", linhas);}
#line 1642 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 122 "compiler.y" /* yacc.c:1646  */
    { contador_tab--; InsereNaSaida(&saida, "els", linhas); }
#line 1648 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 124 "compiler.y" /* yacc.c:1646  */
    { InsereNaSaida(&saida, "else\n", linhas); }
#line 1654 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 124 "compiler.y" /* yacc.c:1646  */
    {  InsereNaSaida(&saida, "end\n", linhas);}
#line 1660 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 126 "compiler.y" /* yacc.c:1646  */
    { InsereNaSaida(&saida, "else\n", linhas); }
#line 1666 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 126 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, "end\n", linhas);}
#line 1672 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 135 "compiler.y" /* yacc.c:1646  */
    { InsereNaSaida(&saida, "while ( ", linhas); }
#line 1678 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 135 "compiler.y" /* yacc.c:1646  */
    { InsereNaSaida(&saida, " ) \n" , linhas); }
#line 1684 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 139 "compiler.y" /* yacc.c:1646  */
    { InsereNaSaida(&saida, "\nend\n" , linhas); }
#line 1690 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 140 "compiler.y" /* yacc.c:1646  */
    { InsereNaSaida(&saida, "\nend\n" , linhas); }
#line 1696 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 144 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, "while true\n", linhas);}
#line 1702 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 146 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, "while true\n", linhas);}
#line 1708 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 148 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, "while ", linhas);}
#line 1714 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 148 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, "\n", linhas);}
#line 1720 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 148 "compiler.y" /* yacc.c:1646  */
    {contador_for++;}
#line 1726 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 152 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, condicao[--contador_for], linhas); condicao[contador_for][0] = '\0';}
#line 1732 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 152 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, "\nend\n", linhas);}
#line 1738 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 154 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, condicao[--contador_for], linhas); condicao[contador_for][0] = '\0'; printf("condicao eh %s\n", condicao[contador_for]);InsereNaSaida(&saida, "\nend\n", linhas);}
#line 1744 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 156 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, "while true\n", linhas);}
#line 1750 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 156 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, "end\n", linhas);}
#line 1756 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 164 "compiler.y" /* yacc.c:1646  */
    {if(procura_tabela_simbolos((yyvsp[0].strval))){strcat(condicao[contador_for], yytext );printf(" KK %s\n", condicao[contador_for]);}else{erro++;yyerror("Variavel nao declarada");}}
#line 1762 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 164 "compiler.y" /* yacc.c:1646  */
    { strcat(condicao[contador_for], " = " ); }
#line 1768 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 164 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, "\n", linhas);linhas++;}
#line 1774 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 168 "compiler.y" /* yacc.c:1646  */
    {contador_tab--; InsereTabsSaida(&saida, contador_tab , linhas); InsereNaSaida(&saida, "end\n", linhas);}
#line 1780 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 170 "compiler.y" /* yacc.c:1646  */
    {contador_tab--; InsereTabsSaida(&saida, contador_tab , linhas); InsereNaSaida(&saida, "end\n", linhas);}
#line 1786 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 187 "compiler.y" /* yacc.c:1646  */
    { if ( strcmp((yyvsp[0].strval), "0") == 0 )InsereNaSaida(&saida, "false", linhas); else InsereNaSaida(&saida, "true", linhas);}
#line 1792 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 198 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, " and ", linhas);}
#line 1798 "compiler.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 199 "compiler.y" /* yacc.c:1646  */
    {InsereNaSaida(&saida, " or ", linhas);}
#line 1804 "compiler.tab.c" /* yacc.c:1646  */
    break;


#line 1808 "compiler.tab.c" /* yacc.c:1646  */
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

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

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
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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
                  yystos[*yyssp], yyvsp);
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
#line 207 "compiler.y" /* yacc.c:1906  */


int yyerror(char *s) {
    printf("error: %s\n",s);
    // erro++;
}

int main(void) {
    saida = NULL;
    tabela_simbolos = NULL;
    linhas = 0;

    yyparse();

    fp = fopen("ruby.rb", "w");
    Imprime(saida);
    printf("caracalho %s\n", condicao[contador_for]);

    int i;

    printf("hue\n%s\n", condicao[0]);
    printf("hue\n%s\n", condicao[1]);
    printf("hue\n%s\n", condicao[2]);


    fclose(fp);
    /*passo = 1;
    yyparse();

    rewind(fp, 0); //volta o arquivo para 0

    passo = 2;
    yyparse();

    fclose(fp);*/
}


