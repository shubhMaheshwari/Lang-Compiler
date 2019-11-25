/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parser.y" /* yacc.c:339  */

// Include statements
#include <bits/stdc++.h>
#include "AST.h"
#include "visit.h"

// Extern defined variables 
extern "C" int yylex();
extern union Node yylval;

// Defined functions
void yyerror(string s);

class RootNode* rootAst = NULL;
int errors=0;

#line 83 "parser.tab.c" /* yacc.c:339  */

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
   by #include "parser.tab.h".  */
#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
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
    UNI_ADD = 258,
    UNI_MIN = 259,
    UNI_MUL = 260,
    UNI_DIV = 261,
    UNI_MOD = 262,
    EQUALS = 263,
    NOT_EQUALS = 264,
    GTE = 265,
    LTE = 266,
    GT = 267,
    LT = 268,
    ADD = 269,
    MIN = 270,
    MUL = 271,
    DIV = 272,
    MOD = 273,
    ASSIGN = 274,
    COND_AND = 275,
    COND_OR = 276,
    OP_OR = 277,
    OP_AND = 278,
    OP_NOT = 279,
    COMMA = 280,
    SEMICOLON = 281,
    OPEN_PAREN = 282,
    CLOSE_PAREN = 283,
    OPEN_BRACKET = 284,
    CLOSE_BRACKET = 285,
    OPEN_BRACE = 286,
    CLOSE_BRACE = 287,
    IF = 288,
    ELIF = 289,
    ELSE = 290,
    FOR = 291,
    WHILE = 292,
    BREAK = 293,
    CONTINUE = 294,
    INT_DATA_TYPE = 295,
    FLOAT_DATA_TYPE = 296,
    CHAR_DATA_TYPE = 297,
    STRING_DATA_TYPE = 298,
    BOOL_DATA_TYPE = 299,
    ID = 300,
    INT = 301,
    FLOAT = 302,
    HEXAGON = 303,
    CHAR = 304,
    STRING = 305,
    BOOL = 306,
    CLASS = 307,
    IMPORT = 308,
    FUNCTION_DEC = 309,
    RETURN = 310
  };
#endif

/* Value type.  */


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 185 "parser.tab.c" /* yacc.c:358  */

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   573

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  84
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  170

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   310

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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,   105,   105,   107,   108,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   127,   130,
     133,   136,   140,   141,   142,   146,   147,   151,   155,   157,
     160,   161,   162,   163,   166,   167,   168,   169,   170,   171,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   202,   203,   206,   210,   212,
     213,   217,   219,   223,   224,   225,   226,   227,   231,   232,
     233,   234,   237,   238,   239
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "UNI_ADD", "UNI_MIN", "UNI_MUL",
  "UNI_DIV", "UNI_MOD", "EQUALS", "NOT_EQUALS", "GTE", "LTE", "GT", "LT",
  "ADD", "MIN", "MUL", "DIV", "MOD", "ASSIGN", "COND_AND", "COND_OR",
  "OP_OR", "OP_AND", "OP_NOT", "COMMA", "SEMICOLON", "OPEN_PAREN",
  "CLOSE_PAREN", "OPEN_BRACKET", "CLOSE_BRACKET", "OPEN_BRACE",
  "CLOSE_BRACE", "IF", "ELIF", "ELSE", "FOR", "WHILE", "BREAK", "CONTINUE",
  "INT_DATA_TYPE", "FLOAT_DATA_TYPE", "CHAR_DATA_TYPE", "STRING_DATA_TYPE",
  "BOOL_DATA_TYPE", "ID", "INT", "FLOAT", "HEXAGON", "CHAR", "STRING",
  "BOOL", "CLASS", "IMPORT", "FUNCTION_DEC", "RETURN", "$accept", "S",
  "Block", "Line", "Import_Statement", "Class_defination", "Declaration",
  "Function_defination", "Parameter_list", "Return_data", "Continue_data",
  "Break_data", "Assign", "Location", "Assign_Op", "Expr", "Run_Condition",
  "Cond", "IF_list", "Else_list", "Loop1", "Loop2", "Datatype", "ID_LIST",
  "Expr_List", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310
};
# endif

#define YYPACT_NINF -125

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-125)))

#define YYTABLE_NINF -82

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -125,    25,   237,  -125,   -17,  -125,   -17,   -19,     4,    22,
    -125,  -125,  -125,  -125,  -125,  -125,  -125,     8,  -125,  -125,
    -125,  -125,  -125,    -7,    12,    15,   -17,  -125,    37,    58,
      61,    62,    63,    65,    71,    72,    89,   486,    73,    74,
      84,    85,    55,    21,  -125,   423,   -17,   -24,   -17,   -17,
     -17,    81,    87,    92,    93,   524,  -125,  -125,  -125,  -125,
    -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,
     -17,   -17,   -17,   -17,   -17,   -17,   -17,   -17,   -17,   -17,
     -17,   -17,   -17,   -17,   -17,   -17,  -125,  -125,   109,  -125,
    -125,  -125,    57,    92,   -17,  -125,   444,    90,    88,    76,
     465,   524,    -2,   285,  -125,   -17,    77,   225,   524,   538,
     538,    38,    38,    38,    38,    20,    20,    20,    20,    20,
    -125,  -125,   552,   552,  -125,  -125,  -125,   -17,   308,   109,
     -17,   -17,    95,   109,   -17,  -125,    99,   141,   331,  -125,
      11,    80,   173,   354,  -125,  -125,   377,   505,   -17,  -125,
     524,  -125,  -125,   225,    97,  -125,  -125,    39,  -125,   -24,
     400,    86,  -125,   101,  -125,  -125,   205,   109,  -125,  -125
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     2,     1,     0,    17,     0,     0,     0,     0,
      28,    27,    73,    74,    75,    76,    77,    40,    44,    47,
      45,    46,    48,     0,    78,     0,    26,     4,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    69,
       0,     0,    78,    40,    64,     0,     0,     0,     0,    82,
       0,     0,    81,    18,     0,    25,     5,     6,     8,     7,
      14,    16,    15,     9,    35,    36,    37,    38,    39,    34,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,     0,    67,
      12,    13,    32,    20,     0,    43,     0,    30,     0,     0,
       0,    84,     0,     0,     3,     0,     0,    22,    29,    56,
      57,    59,    63,    58,    62,    51,    52,    53,    54,    55,
      60,    61,    49,    50,     3,    65,    70,     0,     0,     0,
       0,     0,    32,     0,     0,    42,    41,     0,     0,    79,
       0,     0,     0,     0,    41,    68,     0,     0,     0,    71,
      83,    19,    80,     0,     0,    23,    66,    33,    31,     0,
       0,     0,     3,     0,    33,    24,     0,     0,    21,    72
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -125,  -125,  -100,   -82,  -125,  -125,  -125,  -125,  -125,  -125,
    -125,  -125,   -44,  -125,  -125,    -4,  -124,  -125,  -125,  -125,
    -125,  -125,   -46,    96,  -125
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    27,    28,    29,    30,    31,   140,    32,
      33,    34,    35,    36,    70,    37,   126,    38,    39,    89,
      40,    41,    42,    53,   102
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      44,    99,    45,    98,   137,   145,   125,     4,    46,   149,
       6,   -30,   -30,   -30,   -30,   -30,    12,    13,    14,    15,
      16,    97,    55,   134,   142,     3,   135,   -30,    43,    18,
      19,    47,    20,    21,    22,    49,   153,    50,    51,   154,
      82,    83,    96,   169,   100,   101,   103,   125,    49,    48,
      94,   125,    77,    78,    79,    80,    81,    52,    82,    83,
      54,   141,   166,    56,   -80,   -80,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   -81,   -81,    57,   125,   127,    58,    59,    60,
     128,    61,    64,    65,    66,    67,    68,    62,    63,    87,
      92,   138,   -31,   -31,   -31,   -31,   -31,   161,    69,    88,
      90,    91,   104,    99,   131,   163,   105,   106,   -31,   130,
     107,   132,   139,   143,   148,   155,   146,   147,   162,   167,
     150,   165,     0,     4,     0,     5,     6,     0,    93,     0,
     124,     0,     7,     0,   160,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,     0,    20,    21,
      22,    23,    24,    25,    26,     4,     0,     5,     6,     0,
       0,     0,     0,   151,     7,     0,     0,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,     0,
      20,    21,    22,    23,    24,    25,    26,     4,     0,     5,
       6,     0,     0,     0,     0,   156,     7,     0,     0,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,     0,    20,    21,    22,    23,    24,    25,    26,     4,
       0,     5,     6,     0,     0,     0,     0,   168,     7,     0,
       0,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,     0,    20,    21,    22,    23,    24,    25,
      26,     4,     0,     5,     6,    12,    13,    14,    15,    16,
       7,     0,     0,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,     0,    20,    21,    22,    23,
      24,    25,    26,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,     0,    82,    83,    84,    85,     0,
       0,     0,     0,     0,     0,   136,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,     0,    82,    83,
      84,    85,     0,     0,     0,     0,     0,     0,   144,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
       0,    82,    83,    84,    85,     0,     0,     0,     0,     0,
       0,   152,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,     0,    82,    83,    84,    85,     0,     0,
       0,     0,     0,     0,   157,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,     0,    82,    83,    84,
      85,     0,     0,     0,     0,     0,     0,   158,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,     0,
      82,    83,    84,    85,     0,     0,     0,     0,     0,     0,
     164,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,     0,    82,    83,    84,    85,     0,     0,     0,
       0,    95,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,     0,    82,    83,    84,    85,     0,     0,
       0,     0,   129,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,     0,    82,    83,    84,    85,     0,
       0,     0,     0,   133,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,     0,    82,    83,    84,    85,
       0,     0,    86,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,     0,    82,    83,    84,    85,     0,
       0,   159,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,     0,    82,    83,    84,    85,    73,    74,
      75,    76,    77,    78,    79,    80,    81,     0,    82,    83,
      84,    85,    73,    74,    75,    76,    77,    78,    79,    80,
      81,     0,    82,    83
};

static const yytype_int16 yycheck[] =
{
       4,    47,     6,    47,   104,   129,    88,    24,    27,   133,
      27,     3,     4,     5,     6,     7,    40,    41,    42,    43,
      44,    45,    26,    25,   124,     0,    28,    19,    45,    46,
      47,    27,    49,    50,    51,    27,    25,    29,    45,    28,
      20,    21,    46,   167,    48,    49,    50,   129,    27,    27,
      29,   133,    14,    15,    16,    17,    18,    45,    20,    21,
      45,   107,   162,    26,    25,    26,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    25,    26,    26,   167,    29,    26,    26,    26,
      94,    26,     3,     4,     5,     6,     7,    26,    26,    26,
      45,   105,     3,     4,     5,     6,     7,   153,    19,    35,
      26,    26,    31,   159,    26,   159,    29,    25,    19,    29,
      27,    45,    45,   127,    29,    45,   130,   131,    31,    28,
     134,    45,    -1,    24,    -1,    26,    27,    -1,    42,    -1,
      31,    -1,    33,    -1,   148,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    50,
      51,    52,    53,    54,    55,    24,    -1,    26,    27,    -1,
      -1,    -1,    -1,    32,    33,    -1,    -1,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    50,    51,    52,    53,    54,    55,    24,    -1,    26,
      27,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    50,    51,    52,    53,    54,    55,    24,
      -1,    26,    27,    -1,    -1,    -1,    -1,    32,    33,    -1,
      -1,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,    50,    51,    52,    53,    54,
      55,    24,    -1,    26,    27,    40,    41,    42,    43,    44,
      33,    -1,    -1,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,    50,    51,    52,
      53,    54,    55,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    -1,    20,    21,    22,    23,    -1,
      -1,    -1,    -1,    -1,    -1,    30,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    -1,    20,    21,
      22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    30,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      -1,    20,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,
      -1,    30,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,    20,    21,    22,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    30,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,    20,    21,    22,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    30,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    -1,
      20,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,
      30,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    20,    21,    22,    23,    -1,    -1,    -1,
      -1,    28,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,    20,    21,    22,    23,    -1,    -1,
      -1,    -1,    28,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    -1,    20,    21,    22,    23,    -1,
      -1,    -1,    -1,    28,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    -1,    20,    21,    22,    23,
      -1,    -1,    26,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    -1,    20,    21,    22,    23,    -1,
      -1,    26,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,    20,    21,    22,    23,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    -1,    20,    21,
      22,    23,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,    20,    21
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    57,    58,     0,    24,    26,    27,    33,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      49,    50,    51,    52,    53,    54,    55,    59,    60,    61,
      62,    63,    65,    66,    67,    68,    69,    71,    73,    74,
      76,    77,    78,    45,    71,    71,    27,    27,    27,    27,
      29,    45,    45,    79,    45,    71,    26,    26,    26,    26,
      26,    26,    26,    26,     3,     4,     5,     6,     7,    19,
      70,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    20,    21,    22,    23,    26,    26,    35,    75,
      26,    26,    45,    79,    29,    28,    71,    45,    68,    78,
      71,    71,    80,    71,    31,    29,    25,    27,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    31,    59,    72,    29,    71,    28,
      29,    26,    45,    28,    25,    28,    30,    58,    71,    45,
      64,    78,    58,    71,    30,    72,    71,    71,    29,    72,
      71,    32,    30,    25,    28,    45,    32,    30,    30,    26,
      71,    78,    31,    68,    30,    45,    58,    28,    32,    72
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    56,    57,    58,    58,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    60,    61,
      62,    63,    64,    64,    64,    65,    65,    66,    67,    68,
      69,    69,    69,    69,    70,    70,    70,    70,    70,    70,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    72,    72,    73,    74,    75,
      75,    76,    77,    78,    78,    78,    78,    78,    79,    79,
      79,    79,    80,    80,    80
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     1,     2,     5,
       2,     8,     0,     2,     4,     2,     1,     1,     1,     3,
       1,     4,     2,     5,     1,     1,     1,     1,     1,     1,
       1,     4,     4,     3,     1,     1,     1,     1,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     1,     3,     2,     5,     0,
       2,     5,     9,     1,     1,     1,     1,     1,     0,     3,
       4,     1,     0,     3,     1
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
        case 2:
#line 105 "parser.y" /* yacc.c:1646  */
    {(yyval.root_node) = new RootNode((yyvsp[0].block_node)); rootAst = (yyval.root_node); }
#line 1463 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 107 "parser.y" /* yacc.c:1646  */
    {(yyval.block_node) = new BlockNode(); }
#line 1469 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 108 "parser.y" /* yacc.c:1646  */
    { (yyval.block_node) = (yyvsp[-1].block_node); (yyval.block_node)->push_back((yyvsp[0].line_node)); }
#line 1475 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 111 "parser.y" /* yacc.c:1646  */
    {(yyval.line_node) = (yyvsp[-1].import_node);}
#line 1481 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 112 "parser.y" /* yacc.c:1646  */
    {(yyval.line_node) = (yyvsp[-1].class_node);}
#line 1487 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 113 "parser.y" /* yacc.c:1646  */
    {(yyval.line_node) = (yyvsp[-1].function_node);}
#line 1493 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 114 "parser.y" /* yacc.c:1646  */
    {(yyval.line_node) = (yyvsp[-1].declaration_node);}
#line 1499 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 115 "parser.y" /* yacc.c:1646  */
    {(yyval.line_node) = (yyvsp[-1].assign_node);}
#line 1505 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 116 "parser.y" /* yacc.c:1646  */
    {(yyval.line_node) = (yyvsp[-1].expr_node);}
#line 1511 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 117 "parser.y" /* yacc.c:1646  */
    {(yyval.line_node) = (yyvsp[-1].cond_node);}
#line 1517 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 118 "parser.y" /* yacc.c:1646  */
    {(yyval.line_node) = (yyvsp[-1].while_node);}
#line 1523 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 119 "parser.y" /* yacc.c:1646  */
    {(yyval.line_node) = (yyvsp[-1].for_node);}
#line 1529 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 120 "parser.y" /* yacc.c:1646  */
    {(yyval.line_node) = (yyvsp[-1].return_node);}
#line 1535 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 121 "parser.y" /* yacc.c:1646  */
    {(yyval.line_node) = (yyvsp[-1].break_node);}
#line 1541 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 122 "parser.y" /* yacc.c:1646  */
    {(yyval.line_node) = (yyvsp[-1].continue_node);}
#line 1547 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 123 "parser.y" /* yacc.c:1646  */
    {(yyval.line_node) = new LineNode();}
#line 1553 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 127 "parser.y" /* yacc.c:1646  */
    {(yyval.import_node) = new ImportNode((yyvsp[0].variable_list_node));}
#line 1559 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 130 "parser.y" /* yacc.c:1646  */
    {(yyval.class_node) = new ClassNode((yyvsp[-3].lit),(yyvsp[-1].block_node));}
#line 1565 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 133 "parser.y" /* yacc.c:1646  */
    { (yyval.declaration_node) = new DeclarationNode((yyvsp[0].variable_list_node));}
#line 1571 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 136 "parser.y" /* yacc.c:1646  */
    {(yyval.function_node) = new FunctionNode((yyvsp[-6].lit),(yyvsp[-4].parameter_list),(yyvsp[-1].block_node));}
#line 1577 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 140 "parser.y" /* yacc.c:1646  */
    {(yyval.parameter_list) = new ParameterListNode();}
#line 1583 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 141 "parser.y" /* yacc.c:1646  */
    { (yyval.parameter_list) = new ParameterListNode();(yyval.parameter_list)->push_back((yyvsp[-1].lit),(yyvsp[0].lit));}
#line 1589 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 142 "parser.y" /* yacc.c:1646  */
    { (yyval.parameter_list) = (yyvsp[-3].parameter_list); (yyval.parameter_list)->push_back((yyvsp[-1].lit),(yyvsp[0].lit)); }
#line 1595 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 146 "parser.y" /* yacc.c:1646  */
    { (yyval.return_node) = new ReturnNode((yyvsp[0].expr_node));}
#line 1601 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 147 "parser.y" /* yacc.c:1646  */
    { (yyval.return_node) = new ReturnNode();}
#line 1607 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 151 "parser.y" /* yacc.c:1646  */
    { (yyval.continue_node) = new ContinueNode();}
#line 1613 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 155 "parser.y" /* yacc.c:1646  */
    {(yyval.break_node) = new BreakNode();}
#line 1619 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 157 "parser.y" /* yacc.c:1646  */
    {(yyval.assign_node) = new AssignNode((yyvsp[-2].location_node),(yyvsp[-1].lit),(yyvsp[0].expr_node));}
#line 1625 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 160 "parser.y" /* yacc.c:1646  */
    {(yyval.location_node) = new LocationNode((yyvsp[0].lit));}
#line 1631 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 161 "parser.y" /* yacc.c:1646  */
    {(yyval.location_node) = new LocationNode((yyvsp[-3].lit),(yyvsp[-1].expr_node));}
#line 1637 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 162 "parser.y" /* yacc.c:1646  */
    {(yyval.location_node) = new LocationNode((yyvsp[-1].lit),(yyvsp[0].lit));}
#line 1643 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 163 "parser.y" /* yacc.c:1646  */
    {(yyval.location_node) = new LocationNode((yyvsp[-4].lit),(yyvsp[-3].lit),(yyvsp[-1].expr_node));}
#line 1649 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 166 "parser.y" /* yacc.c:1646  */
    {(yyval.lit) = (yyvsp[0].lit);}
#line 1655 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 167 "parser.y" /* yacc.c:1646  */
    {(yyval.lit) = (yyvsp[0].lit);}
#line 1661 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 168 "parser.y" /* yacc.c:1646  */
    {(yyval.lit) = (yyvsp[0].lit);}
#line 1667 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 169 "parser.y" /* yacc.c:1646  */
    {(yyval.lit) = (yyvsp[0].lit);}
#line 1673 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 170 "parser.y" /* yacc.c:1646  */
    {(yyval.lit) = (yyvsp[0].lit);}
#line 1679 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 171 "parser.y" /* yacc.c:1646  */
    {(yyval.lit) = (yyvsp[0].lit);}
#line 1685 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 175 "parser.y" /* yacc.c:1646  */
    { (yyval.expr_node) = new VariableNode((yyvsp[0].lit)); }
#line 1691 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 176 "parser.y" /* yacc.c:1646  */
    { (yyval.expr_node) = new VariableNode((yyvsp[-3].lit),(yyvsp[-1].expr_node));}
#line 1697 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 177 "parser.y" /* yacc.c:1646  */
    {(yyval.expr_node) = new CallMethodNode((yyvsp[-3].lit),(yyvsp[-1].expr_list_node));}
#line 1703 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 178 "parser.y" /* yacc.c:1646  */
    { (yyval.expr_node) = (yyvsp[-1].expr_node);}
#line 1709 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 179 "parser.y" /* yacc.c:1646  */
    {(yyval.expr_node) = new LiteralNode((yyvsp[0].num));}
#line 1715 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 180 "parser.y" /* yacc.c:1646  */
    {(yyval.expr_node) = new LiteralNode((yyvsp[0].lit));}
#line 1721 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 181 "parser.y" /* yacc.c:1646  */
    {(yyval.expr_node) = new LiteralNode((yyvsp[0].lit));}
#line 1727 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 182 "parser.y" /* yacc.c:1646  */
    {(yyval.expr_node) = new LiteralNode((yyvsp[0].fnum));}
#line 1733 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 183 "parser.y" /* yacc.c:1646  */
    {(yyval.expr_node) = new LiteralNode((yyvsp[0].lit));}
#line 1739 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 184 "parser.y" /* yacc.c:1646  */
    {(yyval.expr_node) = new BinaryOperationNode((yyvsp[-2].expr_node),(yyvsp[0].expr_node),Op::OP_OR);}
#line 1745 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 185 "parser.y" /* yacc.c:1646  */
    {(yyval.expr_node) = new BinaryOperationNode((yyvsp[-2].expr_node),(yyvsp[0].expr_node),Op::OP_AND);}
#line 1751 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 186 "parser.y" /* yacc.c:1646  */
    {(yyval.expr_node) = new BinaryOperationNode((yyvsp[-2].expr_node),(yyvsp[0].expr_node),Op::ADD);}
#line 1757 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 187 "parser.y" /* yacc.c:1646  */
    {(yyval.expr_node) = new BinaryOperationNode((yyvsp[-2].expr_node),(yyvsp[0].expr_node),Op::MIN);}
#line 1763 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 188 "parser.y" /* yacc.c:1646  */
    {(yyval.expr_node) = new BinaryOperationNode((yyvsp[-2].expr_node),(yyvsp[0].expr_node),Op::MUL);}
#line 1769 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 189 "parser.y" /* yacc.c:1646  */
    {(yyval.expr_node) = new BinaryOperationNode((yyvsp[-2].expr_node),(yyvsp[0].expr_node),Op::DIV);}
#line 1775 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 190 "parser.y" /* yacc.c:1646  */
    {(yyval.expr_node) = new BinaryOperationNode((yyvsp[-2].expr_node),(yyvsp[0].expr_node),Op::MOD);}
#line 1781 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 191 "parser.y" /* yacc.c:1646  */
    {(yyval.expr_node) = new BinaryOperationNode((yyvsp[-2].expr_node),(yyvsp[0].expr_node),Op::EQUALS);}
#line 1787 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 192 "parser.y" /* yacc.c:1646  */
    {(yyval.expr_node) = new BinaryOperationNode((yyvsp[-2].expr_node),(yyvsp[0].expr_node),Op::NOT_EQUALS);}
#line 1793 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 193 "parser.y" /* yacc.c:1646  */
    {(yyval.expr_node) = new BinaryOperationNode((yyvsp[-2].expr_node),(yyvsp[0].expr_node),Op::GT);}
#line 1799 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 194 "parser.y" /* yacc.c:1646  */
    {(yyval.expr_node) = new BinaryOperationNode((yyvsp[-2].expr_node),(yyvsp[0].expr_node),Op::GTE);}
#line 1805 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 195 "parser.y" /* yacc.c:1646  */
    {(yyval.expr_node) = new BinaryOperationNode((yyvsp[-2].expr_node),(yyvsp[0].expr_node),Op::COND_AND);}
#line 1811 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 196 "parser.y" /* yacc.c:1646  */
    {(yyval.expr_node) = new BinaryOperationNode((yyvsp[-2].expr_node),(yyvsp[0].expr_node),Op::COND_OR);}
#line 1817 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 197 "parser.y" /* yacc.c:1646  */
    {(yyval.expr_node) = new BinaryOperationNode((yyvsp[-2].expr_node),(yyvsp[0].expr_node),Op::LT);}
#line 1823 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 198 "parser.y" /* yacc.c:1646  */
    {(yyval.expr_node) = new BinaryOperationNode((yyvsp[-2].expr_node),(yyvsp[0].expr_node),Op::LTE);}
#line 1829 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 199 "parser.y" /* yacc.c:1646  */
    {(yyval.expr_node) = new NotOperationNode((yyvsp[0].expr_node));}
#line 1835 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 202 "parser.y" /* yacc.c:1646  */
    {(yyval.block_node) = new BlockNode(); (yyval.block_node)->push_back((yyvsp[0].line_node));}
#line 1841 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 203 "parser.y" /* yacc.c:1646  */
    {(yyval.block_node) = (yyvsp[-1].block_node);}
#line 1847 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 206 "parser.y" /* yacc.c:1646  */
    { (yyval.cond_node) = new CondNode((yyvsp[-1].if_node),(yyvsp[0].else_node));}
#line 1853 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 210 "parser.y" /* yacc.c:1646  */
    {(yyval.if_node) = new IfNode((yyvsp[-2].expr_node),(yyvsp[0].block_node));}
#line 1859 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 212 "parser.y" /* yacc.c:1646  */
    {(yyval.else_node) = new ElseNode();}
#line 1865 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 213 "parser.y" /* yacc.c:1646  */
    {(yyval.else_node) = new ElseNode((yyvsp[0].block_node));}
#line 1871 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 217 "parser.y" /* yacc.c:1646  */
    {(yyval.while_node) = new WhileNode((yyvsp[-2].expr_node),(yyvsp[0].block_node));}
#line 1877 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 219 "parser.y" /* yacc.c:1646  */
    {(yyval.for_node) = new ForNode((yyvsp[-6].assign_node),(yyvsp[-4].expr_node),(yyvsp[-2].assign_node),(yyvsp[0].block_node));}
#line 1883 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 223 "parser.y" /* yacc.c:1646  */
    {(yyval.lit) = (yyvsp[0].lit);}
#line 1889 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 224 "parser.y" /* yacc.c:1646  */
    {(yyval.lit) = (yyvsp[0].lit);}
#line 1895 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 225 "parser.y" /* yacc.c:1646  */
    {(yyval.lit) = (yyvsp[0].lit);}
#line 1901 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 226 "parser.y" /* yacc.c:1646  */
    {(yyval.lit) = (yyvsp[0].lit);}
#line 1907 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 227 "parser.y" /* yacc.c:1646  */
    {(yyval.lit) = (yyvsp[0].lit);}
#line 1913 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 231 "parser.y" /* yacc.c:1646  */
    {(yyval.variable_list_node) = new VariableListNode();}
#line 1919 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 232 "parser.y" /* yacc.c:1646  */
    {(yyval.variable_list_node) = (yyvsp[-2].variable_list_node); (yyval.variable_list_node)->push_back((yyvsp[0].lit));}
#line 1925 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 233 "parser.y" /* yacc.c:1646  */
    {(yyval.variable_list_node) = new VariableListNode(); (yyval.variable_list_node)->push_back((yyvsp[-3].lit),(yyvsp[-1].expr_node));}
#line 1931 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 234 "parser.y" /* yacc.c:1646  */
    {(yyval.variable_list_node) = new VariableListNode();(yyval.variable_list_node)->push_back((yyvsp[0].lit));}
#line 1937 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 237 "parser.y" /* yacc.c:1646  */
    {(yyval.expr_list_node) = new ExprListNode();}
#line 1943 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 238 "parser.y" /* yacc.c:1646  */
    {(yyval.expr_list_node) = (yyvsp[-2].expr_list_node); (yyval.expr_list_node)->push_back((yyvsp[0].expr_node));}
#line 1949 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 239 "parser.y" /* yacc.c:1646  */
    {(yyval.expr_list_node) = new ExprListNode();(yyval.expr_list_node)->push_back((yyvsp[0].expr_node));}
#line 1955 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 1959 "parser.tab.c" /* yacc.c:1646  */
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
#line 244 "parser.y" /* yacc.c:1906  */




int main(int argc, char **argv)
{
        yyparse();
        printf("Parsing Over\nCreating AST\n");

        class MainVisitor* visitor = new MainVisitor();
        visitor->visit(rootAst);
}
