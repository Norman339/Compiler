
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "synt.y"

    char suavType [20];

    #include <stdbool.h>
    bool bibL=false;
    bool bibIo=false;
    int LangChaine;
    int cptIdf=0;
    int cptA=0;
    int cptOA=0;
    int i=0;
    int nb_line=1;
    int YN=0;
    double res;
    int tyidfar;
    int tyidf;
    
    int nbrAff=0;

    int  Sizevar(int Size){
    if (Size >32767 || Size < -32767){
       return 0;
    }else{
        return 1;
    }
}
char vaLTemp[20];
 


/* Line 189 of yacc.c  */
#line 104 "synt.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     idf = 258,
     mc_pgm = 259,
     mc_var = 260,
     mc_cst = 261,
     pvg = 262,
     mc_int = 263,
     mc_float = 264,
     mc_char = 265,
     mc_begin = 266,
     mc_end = 267,
     aff = 268,
     cst = 269,
     vg = 270,
     crch_ouv = 271,
     crch_ferm = 272,
     mc_imp = 273,
     mc_bibl = 274,
     mc_bibio = 275,
     add = 276,
     moins = 277,
     devis = 278,
     multip = 279,
     mc_for = 280,
     parOuv = 281,
     parFerm = 282,
     inf = 283,
     mc_in = 284,
     guillemets = 285,
     mc_out = 286,
     point = 287,
     ch = 288
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 31 "synt.y"

    int entier;
    char* str;
   


/* Line 214 of yacc.c  */
#line 180 "synt.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 192 "synt.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   128

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  34
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  56
/* YYNRULES -- Number of states.  */
#define YYNSTATES  132

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   288

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      25,    26,    27,    28,    29,    30,    31,    32,    33
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     7,     9,    17,    21,    23,    25,    27,
      34,    40,    44,    49,    52,    54,    58,    62,    69,    71,
      76,    78,    80,    82,    86,    89,    91,    93,    95,    97,
      99,   101,   106,   110,   116,   124,   132,   148,   153,   161,
     166,   174,   178,   182,   184,   188,   191,   193,   195,   200,
     202,   205,   208,   212,   215,   217,   219
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      35,     0,    -1,    18,    37,    36,    -1,    36,    -1,     4,
       3,     5,    40,     6,    39,    44,    -1,    38,    15,    38,
      -1,    38,    -1,    20,    -1,    19,    -1,    43,     3,    13,
      14,    15,    39,    -1,    43,     3,    13,    14,     7,    -1,
      43,     3,     7,    -1,    43,     3,    15,    39,    -1,    41,
      40,    -1,    41,    -1,    43,    42,     7,    -1,     3,    15,
      42,    -1,     3,    16,    14,    17,    15,    42,    -1,     3,
      -1,     3,    16,    14,    17,    -1,     8,    -1,     9,    -1,
      10,    -1,    11,    45,    12,    -1,    46,    45,    -1,    46,
      -1,    51,    -1,    50,    -1,    48,    -1,    49,    -1,     3,
      -1,     3,    16,    14,    17,    -1,     3,    15,    47,    -1,
       3,    16,    14,    17,    47,    -1,    29,    26,    33,    15,
      47,    27,     7,    -1,    31,    26,    33,    15,    47,    27,
       7,    -1,    25,    26,     3,    13,    14,     7,     3,    28,
      14,     7,     3,    21,    21,    27,    44,    -1,     3,    13,
      52,     7,    -1,     3,    16,    14,    17,    13,    52,     7,
      -1,     3,    13,    33,     7,    -1,     3,    16,    14,    17,
      13,    33,     7,    -1,    52,    21,    53,    -1,    52,    22,
      53,    -1,    53,    -1,    53,    24,    54,    -1,    53,    55,
      -1,    54,    -1,     3,    -1,     3,    16,    14,    17,    -1,
      14,    -1,    22,    14,    -1,    21,    14,    -1,    26,    52,
      27,    -1,    23,    56,    -1,    14,    -1,     3,    -1,     3,
      16,    14,    17,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    40,    40,    40,    42,    45,    45,    46,    46,    48,
      49,    50,    51,    53,    53,    54,    55,    57,    59,    61,
      65,    66,    67,    74,    75,    75,    76,    77,    78,    79,
      86,    94,   104,   112,   125,   143,   159,   176,   185,   197,
     204,   222,   222,   222,   223,   223,   223,   224,   225,   226,
     227,   228,   229,   231,   234,   236,   237
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "idf", "mc_pgm", "mc_var", "mc_cst",
  "pvg", "mc_int", "mc_float", "mc_char", "mc_begin", "mc_end", "aff",
  "cst", "vg", "crch_ouv", "crch_ferm", "mc_imp", "mc_bibl", "mc_bibio",
  "add", "moins", "devis", "multip", "mc_for", "parOuv", "parFerm", "inf",
  "mc_in", "guillemets", "mc_out", "point", "ch", "$accept", "z", "S",
  "ListBIB", "BIB", "ListConst", "ListDec", "uneDec", "listeparam",
  "Typeidf", "Corps", "ListInst", "uneInst", "listIdf_inOut", "Lecture",
  "ecriture", "InstFor", "InstAff", "InstArith", "T", "F", "InstDiv",
  "diviseur", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    34,    35,    35,    36,    37,    37,    38,    38,    39,
      39,    39,    39,    40,    40,    41,    42,    42,    42,    42,
      43,    43,    43,    44,    45,    45,    46,    46,    46,    46,
      47,    47,    47,    47,    48,    49,    50,    51,    51,    51,
      51,    52,    52,    52,    53,    53,    53,    54,    54,    54,
      54,    54,    54,    55,    56,    56,    56
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     1,     7,     3,     1,     1,     1,     6,
       5,     3,     4,     2,     1,     3,     3,     6,     1,     4,
       1,     1,     1,     3,     2,     1,     1,     1,     1,     1,
       1,     4,     3,     5,     7,     7,    15,     4,     7,     4,
       7,     3,     3,     1,     3,     2,     1,     1,     4,     1,
       2,     2,     3,     2,     1,     1,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     3,     0,     8,     7,     0,     6,
       1,     0,     2,     0,    20,    21,    22,     0,    14,     0,
       5,     0,    13,    18,     0,     0,     0,     0,     0,    15,
       0,     4,     0,    16,     0,     0,     0,     0,     0,     0,
      25,    28,    29,    27,    26,    11,     0,     0,    19,     0,
       0,     0,     0,     0,    23,    24,     0,    12,     0,    47,
      49,     0,     0,     0,     0,     0,    43,    46,     0,     0,
       0,     0,    10,     0,    17,     0,    51,    50,     0,    39,
      37,     0,     0,     0,     0,    45,     0,     0,     0,     0,
       9,     0,    52,    41,    42,    55,    54,    53,    44,     0,
       0,    30,     0,     0,    48,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    40,    38,     0,    32,     0,    34,
      35,    56,     0,    31,     0,    33,     0,     0,     0,     0,
       0,    36
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,     4,     8,     9,    25,    17,    18,    24,    26,
      31,    39,    40,   102,    41,    42,    43,    44,    65,    66,
      67,    85,    97
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -89
static const yytype_int8 yypact[] =
{
       6,    42,    43,     9,   -89,     8,   -89,   -89,    45,    56,
     -89,    49,   -89,    43,   -89,   -89,   -89,    54,    49,    61,
     -89,    49,   -89,    50,    65,    62,    71,    61,    63,   -89,
      13,   -89,    -1,   -89,    58,    -5,    53,    55,    57,    64,
      13,   -89,   -89,   -89,   -89,   -89,    66,    49,    67,     1,
      70,    75,    59,    60,   -89,   -89,    33,   -89,    61,    69,
     -89,    72,    73,    25,    81,    -2,    30,   -89,    74,    76,
      79,    80,   -89,    49,   -89,    82,   -89,   -89,    34,   -89,
     -89,    25,    25,    38,    25,   -89,    77,    83,    95,    95,
     -89,    84,   -89,    30,    30,    86,   -89,   -89,   -89,     4,
      92,    52,    78,    85,   -89,    89,    93,    10,   101,    95,
      94,    99,   100,    96,   -89,   -89,    87,   -89,    97,   -89,
     -89,   -89,   102,    95,   103,   -89,   106,    90,    98,    91,
      62,   -89
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -89,   -89,   109,   -89,   107,   -44,   104,   -89,   -25,    32,
      -9,    88,   -89,   -88,   -89,   -89,   -89,   -89,   -63,   -12,
      39,   -89,   -89
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      78,   103,    33,    57,    59,    80,    45,    59,    49,    10,
       1,    50,    46,    11,    47,    60,    35,   115,    60,    81,
      82,   117,    61,    62,     2,    61,    62,    63,    59,    90,
      63,    81,    82,    74,    64,   125,   107,   106,    36,    60,
      72,    95,    37,    19,    38,     5,    61,    62,    73,     1,
      19,    63,    96,    83,    84,    81,    82,    14,    15,    16,
      21,    92,     6,     7,    23,    27,    28,   109,   110,    93,
      94,    13,    29,    30,    32,    48,    54,    34,    69,    51,
      56,    52,    58,    53,    68,    75,    76,    77,    79,    87,
      99,    86,    70,    71,    88,    89,    91,   100,   101,   108,
     114,   104,   105,   113,   116,   111,   119,   120,   118,   127,
     126,   128,   112,   121,   123,   122,   124,    12,   130,   129,
      20,   131,    22,    98,     0,     0,     0,     0,    55
};

static const yytype_int16 yycheck[] =
{
      63,    89,    27,    47,     3,     7,     7,     3,    13,     0,
       4,    16,    13,     5,    15,    14,     3,     7,    14,    21,
      22,   109,    21,    22,    18,    21,    22,    26,     3,    73,
      26,    21,    22,    58,    33,   123,    99,    33,    25,    14,
       7,     3,    29,    11,    31,     3,    21,    22,    15,     4,
      18,    26,    14,    23,    24,    21,    22,     8,     9,    10,
       6,    27,    19,    20,     3,    15,    16,    15,    16,    81,
      82,    15,     7,    11,     3,    17,    12,    14,     3,    26,
      14,    26,    15,    26,    14,    16,    14,    14,     7,    13,
      13,    17,    33,    33,    15,    15,    14,    14,     3,     7,
       7,    17,    16,    14,     3,    27,     7,     7,    14,     3,
       7,    21,    27,    17,    17,    28,    14,     8,    27,    21,
      13,   130,    18,    84,    -1,    -1,    -1,    -1,    40
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,    18,    35,    36,     3,    19,    20,    37,    38,
       0,     5,    36,    15,     8,     9,    10,    40,    41,    43,
      38,     6,    40,     3,    42,    39,    43,    15,    16,     7,
      11,    44,     3,    42,    14,     3,    25,    29,    31,    45,
      46,    48,    49,    50,    51,     7,    13,    15,    17,    13,
      16,    26,    26,    26,    12,    45,    14,    39,    15,     3,
      14,    21,    22,    26,    33,    52,    53,    54,    14,     3,
      33,    33,     7,    15,    42,    16,    14,    14,    52,     7,
       7,    21,    22,    23,    24,    55,    17,    13,    15,    15,
      39,    14,    27,    53,    53,     3,    14,    56,    54,    13,
      14,     3,    47,    47,    17,    16,    33,    52,     7,    15,
      16,    27,    27,    14,     7,     7,     3,    47,    14,     7,
       7,    17,    28,    17,    14,    47,     7,     3,    21,    21,
      27,    44
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:

/* Line 1455 of yacc.c  */
#line 40 "synt.y"
    { printf ("Syntaxicaly correct program\n"); YYACCEPT;;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 42 "synt.y"
    {printf("Correct syntax\n"); YYACCEPT;;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 46 "synt.y"
    {bibIo =true ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 46 "synt.y"
    {bibL=true;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 48 "synt.y"
    { sprintf(vaLTemp,"%d",(yyvsp[(4) - (6)].entier));InsertConst((yyvsp[(2) - (6)].str),vaLTemp);InsertType((yyvsp[(2) - (6)].str),suavType,1);}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 49 "synt.y"
    { sprintf(vaLTemp,"%d",(yyvsp[(4) - (5)].entier));InsertConst((yyvsp[(2) - (5)].str),vaLTemp);InsertType((yyvsp[(2) - (5)].str),suavType,1);}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 50 "synt.y"
    {InsertConst((yyvsp[(2) - (3)].str),"");InsertType((yyvsp[(2) - (3)].str),suavType,1);}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 51 "synt.y"
    {InsertConst((yyvsp[(2) - (4)].str),"");InsertType((yyvsp[(2) - (4)].str),suavType,1);}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 55 "synt.y"
    { if (doubleDeclaration((yyvsp[(1) - (3)].str))==1){ InsertType((yyvsp[(1) - (3)].str),suavType,1); }
                                 else printf("Semantic Error: double declaration de %s, in the line %d\n", (yyvsp[(1) - (3)].str), nb_line); ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 57 "synt.y"
    { if (doubleDeclaration((yyvsp[(1) - (6)].str))==1){ InsertType((yyvsp[(1) - (6)].str),suavType,(yyvsp[(3) - (6)].entier)); }
                                 else printf("Semantic Error: double declaration de %s, in the line %d\n", (yyvsp[(1) - (6)].str), nb_line); ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 59 "synt.y"
    { if ( doubleDeclaration((yyvsp[(1) - (1)].str))==1)InsertType((yyvsp[(1) - (1)].str),suavType,1);
                                 else printf("Semantic Error: double declaration de %s, in the line %d\n", (yyvsp[(1) - (1)].str), nb_line);;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 61 "synt.y"
    { if (doubleDeclaration((yyvsp[(1) - (4)].str))==1){ InsertType((yyvsp[(1) - (4)].str),suavType,(yyvsp[(3) - (4)].entier)); }
                                 else printf("Semantic Error: double declaration de %s, in the line %d\n", (yyvsp[(1) - (4)].str), nb_line); ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 65 "synt.y"
    { strcpy(suavType,(yyvsp[(1) - (1)].str));  ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 66 "synt.y"
    { strcpy(suavType,(yyvsp[(1) - (1)].str));  ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 67 "synt.y"
    { strcpy(suavType,(yyvsp[(1) - (1)].str));  ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 76 "synt.y"
    {if(bibIo=false)printf("Error : bib  ISIL.lang not declared to execut the instruction AFF in the line %d \n",nb_line);;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 77 "synt.y"
    {if(bibIo=false)printf("Error : bib  ISIL.lang not declared to execut the instruction FOR in the line %d \n",nb_line);;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 78 "synt.y"
    {if(bibIo==false) printf("Error : bib  ISIL.io not declared to execut the instruction IN in the line %d \n",nb_line);;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 79 "synt.y"
    {if(bibIo==false) printf("Error : bib  ISIL.io not declared to execut the instruction OUT in the line %d \n",nb_line);;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 86 "synt.y"
    {
    if (doubleDeclaration((yyvsp[(1) - (1)].str)) == 1) {
        printf("Semantic Error: %s non declare, in the line %d\n", (yyvsp[(1) - (1)].str), nb_line);
    } else{
        cptIdf++;
        getType((yyvsp[(1) - (1)].str));
    }
;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 94 "synt.y"
    {
    if(doubleDeclaration((yyvsp[(1) - (4)].str)) == 1) 
        printf("Semantic Error: %s non declare, in the line %d\n", (yyvsp[(1) - (4)].str), nb_line);
    else if(SizeOverselect((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].entier))==0)
        printf("Semantic Error: Overselecting in the array %s , in the line %d\n",(yyvsp[(1) - (4)].str),nb_line);
    else{
        cptIdf++;
        getType((yyvsp[(1) - (4)].str));
    }
;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 104 "synt.y"
    {
    if (doubleDeclaration((yyvsp[(1) - (3)].str)) == 1) 
        printf("Semantic Error: %s non declare, in the line %d\n", (yyvsp[(1) - (3)].str), nb_line);
    else{
        cptIdf++;
        getType((yyvsp[(1) - (3)].str));
    }
;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 112 "synt.y"
    {
    if(doubleDeclaration((yyvsp[(1) - (5)].str)) == 1) 
        printf("Semantic Error: %s non declare, in the line %d\n", (yyvsp[(1) - (5)].str), nb_line);
    else if(SizeOverselect((yyvsp[(1) - (5)].str),(yyvsp[(3) - (5)].entier))==0)
        printf("Semantic Error: Overselecting in the array %s , in the line %d\n",(yyvsp[(1) - (5)].str),nb_line);
    else{
        cptIdf++;
        getType((yyvsp[(1) - (5)].str));
    }
;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 125 "synt.y"
    {
    if(IsValide((yyvsp[(3) - (7)].str))==0){
        printf("Semantic Error: The content of IN is non-valid in the line %d \n",nb_line);
    }else{
        if(nbrP((yyvsp[(3) - (7)].str))!=cptIdf)
        printf("Semantic Error: Number of formats and idfs are different in the line %d\n",nb_line);
    else{
        getFormats((yyvsp[(3) - (7)].str));
        if(compatible((yyvsp[(3) - (7)].str))!=0)
            printf("Semantic Error: type incompatible in the line %d\n",nb_line);
    }
    cptIdf=0;
    i=0;
    }
;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 143 "synt.y"
    {
    if(nbrP((yyvsp[(3) - (7)].str))!=cptIdf)
        printf("Semantic Error: Number of formats and idfs differents in the line %d\n",nb_line);
    else{
        getFormats((yyvsp[(3) - (7)].str));
        if(compatible((yyvsp[(3) - (7)].str))!=0)
            printf("Semantic Error: type incompatible in the line %d\n",nb_line);
    }
    cptIdf=0;
    i=0;
;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 159 "synt.y"
    {
    if (doubleDeclaration((yyvsp[(3) - (15)].str)) == 1)
    {
        printf("Semantic Error: idf non declared of %s, in the line %d\n", (yyvsp[(3) - (15)].str), nb_line);
    }else{
        if(RGetType((yyvsp[(3) - (15)].str))!='d'){
            printf("Semantic Error: you can use a variable of type integer in FOR in the line %d \n", nb_line);
        }
        else
        {
            if (((yyvsp[(3) - (15)].str) != (yyvsp[(7) - (15)].str)) || ((yyvsp[(3) - (15)].str) != (yyvsp[(11) - (15)].str)))
                printf("Semantic Error: use of two different variables in FOR in the line %d \n", nb_line);
        }
    }
;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 177 "synt.y"
    {
    if (doubleDeclaration((yyvsp[(1) - (4)].str)) == 1)
    {
        printf("Semantic Error: idf non-declared de %s, in the line %d\n", (yyvsp[(1) - (4)].str), nb_line);
    }
    nbrAff = 0;
    cptA = 0;
;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 186 "synt.y"
    {
    if (doubleDeclaration((yyvsp[(1) - (7)].str)) == 1)
        printf("Semantic Error: idf non-declared de %s, in the line %d\n", (yyvsp[(1) - (7)].str), nb_line);
    else
    {
        if (SizeOverselect((yyvsp[(1) - (7)].str), (yyvsp[(3) - (7)].entier)) == 0)
        {
            printf("array Size overselecting \n");
        }
    }
;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 198 "synt.y"
    {
    if (doubleDeclaration((yyvsp[(1) - (4)].str)) == 1)
        printf("Semantic Error: idf non-declared of %s, in the line %d\n", (yyvsp[(1) - (4)].str), nb_line);
    else {if (RGetType((yyvsp[(1) - (4)].str)) != 's')
        printf("Error in the line %d : incompatibility of type \n",nb_line);}
;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 205 "synt.y"
    {
    if (doubleDeclaration((yyvsp[(1) - (7)].str)) == 1)
        printf("Semantic Error: idf non declaree de %s, in the line %d\n", (yyvsp[(1) - (7)].str), nb_line);
    else
    {
        if (SizeOverselect((yyvsp[(1) - (7)].str), (yyvsp[(3) - (7)].entier)) == 0)
        {
            printf("depassement Size tableau \n",nb_line);
        }
        else
        {
            if (RGetType((yyvsp[(1) - (7)].str)) != 's')
                printf("Error in the line %d : incompatiblity of type \n");
        }
    }
;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 222 "synt.y"
    {cptA++ ; InsertOpDansTab("+");;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 222 "synt.y"
    {cptA++; InsertOpDansTab("-");;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 222 "synt.y"
    {cptA++;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 223 "synt.y"
    {cptA++;InsertOpDansTab("*");}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 223 "synt.y"
    {cptA++;;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 223 "synt.y"
    {cptA++;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 224 "synt.y"
    {if(InsertIdfDansTab((yyvsp[(1) - (1)].str))==1){printf("Error in the line %d: you can affect in %s a value to make the calculation \n",nb_line,(yyvsp[(1) - (1)].str));YN=1;};}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 226 "synt.y"
    {if(Sizevar((yyvsp[(1) - (1)].entier))==0){printf("Error in the line %d Size overflowing \n",nb_line);}else{sprintf(vaLTemp,"%d",(yyvsp[(1) - (1)].entier));InsertCstDansTab(vaLTemp);};}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 231 "synt.y"
    {InsertOpDansTab("/");}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 234 "synt.y"
    { 
    if ((yyvsp[(1) - (1)].entier)==0){printf("Semantic Error: Division on zero in the line %d\n",nb_line);}else{sprintf(vaLTemp,"%d",(yyvsp[(1) - (1)].entier));InsertCstDansTab(vaLTemp);};}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 236 "synt.y"
    {if(InsertIdfDansTab((yyvsp[(1) - (1)].str))==1){printf("Error in the line %d: you can affect in %s a value to make the calculation \n",nb_line,(yyvsp[(1) - (1)].str)); YN=1;};}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 237 "synt.y"
    {if(InsertIdfDansTab((yyvsp[(1) - (4)].str))==1)printf("Error in the line %d: you can affect in %s a value to make the calculation \n",nb_line,(yyvsp[(1) - (4)].str));}
    break;



/* Line 1455 of yacc.c  */
#line 1897 "synt.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 240 "synt.y"

main()
{
yyparse();
Show();
}

yywrap()
{}

int yyerror (char *msg){
    printf ("Lexical Error in the line %d\n",nb_line);
}



