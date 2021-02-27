
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
#line 2 "syntaxiqueProjet.y"

    int nb_ligne=1, Col=1;


/* Line 189 of yacc.c  */
#line 78 "syntaxiqueProjet.tab.c"

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
     mc_programme = 258,
     mc_process = 259,
     mc_loop = 260,
     mc_array = 261,
     mc_var = 262,
     mc_const = 263,
     mc_real = 264,
     mc_char = 265,
     mc_string = 266,
     mc_integer = 267,
     mc_read = 268,
     mc_write = 269,
     mc_while = 270,
     mc_inf = 271,
     mc_sup = 272,
     mc_eg = 273,
     mc_infe = 274,
     mc_supe = 275,
     mc_diff = 276,
     mc_exec = 277,
     mc_if = 278,
     mc_end_if = 279,
     mc_else = 280,
     idf = 281,
     cst_int = 282,
     cst_char = 283,
     cst_real = 284,
     cst_string = 285,
     htag = 286,
     dble_htag = 287,
     dollar = 288,
     dble_point = 289,
     aff = 290,
     crochet_ovr = 291,
     crochet_frm = 292,
     slash = 293,
     separateur = 294,
     plus = 295,
     moins = 296,
     egal = 297,
     etoile = 298,
     cote = 299,
     barre = 300,
     arobase = 301,
     parnths_ovr = 302,
     parnths_frm = 303,
     prcnt = 304,
     et_com = 305,
     acolad_ovr = 306,
     acolad_frm = 307,
     dble_cote = 308,
     pvg = 309,
     pt_interrogation = 310
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 6 "syntaxiqueProjet.y"

         int	entier;
		 float	real;	
		 char	character; 
         char*	string;



/* Line 214 of yacc.c  */
#line 178 "syntaxiqueProjet.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 190 "syntaxiqueProjet.tab.c"

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
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   240

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  105
/* YYNRULES -- Number of states.  */
#define YYNSTATES  232

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   310

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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,    10,    11,    17,    23,    26,    27,    32,
      34,    36,    38,    40,    44,    46,    53,    58,    61,    62,
      67,    75,    81,    89,    95,   101,   105,   111,   115,   118,
     119,   121,   123,   125,   127,   129,   131,   133,   142,   154,
     163,   167,   169,   171,   173,   175,   177,   179,   190,   192,
     194,   196,   198,   200,   202,   214,   218,   220,   223,   227,
     231,   235,   240,   245,   250,   256,   259,   261,   271,   273,
     276,   279,   283,   290,   297,   302,   312,   322,   330,   338,
     348,   358,   362,   364,   370,   376,   384,   390,   394,   402,
     410,   420,   422,   424,   426,   428,   430,   435,   440,   442,
     444,   447,   448,   452,   454,   456
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      57,     0,    -1,    87,     3,    26,    51,    58,    52,    -1,
      -1,     7,    59,     8,    63,    66,    -1,     8,    63,     7,
      59,    66,    -1,    60,    59,    -1,    -1,    61,    34,    62,
      33,    -1,    12,    -1,     9,    -1,    11,    -1,    10,    -1,
      26,    39,    62,    -1,    26,    -1,    26,    36,    27,    37,
      39,    62,    -1,    26,    36,    27,    37,    -1,    64,    63,
      -1,    -1,    61,    34,    65,    33,    -1,    26,    42,    44,
      28,    44,    39,    65,    -1,    26,    42,    27,    39,    65,
      -1,    26,    42,    53,    30,    53,    39,    65,    -1,    26,
      42,    29,    39,    65,    -1,    26,    42,    44,    28,    44,
      -1,    26,    42,    27,    -1,    26,    42,    53,    30,    53,
      -1,    26,    42,    29,    -1,    67,    66,    -1,    -1,    83,
      -1,    74,    -1,    76,    -1,    71,    -1,    68,    -1,    69,
      -1,    70,    -1,    22,    66,    23,    47,    72,    48,    24,
      33,    -1,    22,    66,    23,    47,    72,    48,    25,    22,
      66,    24,    33,    -1,    15,    47,    72,    48,    51,    66,
      52,    33,    -1,    84,    73,    84,    -1,    18,    -1,    16,
      -1,    17,    -1,    19,    -1,    20,    -1,    21,    -1,    13,
      47,    53,    75,    53,    45,    46,    26,    48,    33,    -1,
      54,    -1,    49,    -1,    55,    -1,    50,    -1,    81,    -1,
      77,    -1,    14,    47,    53,    79,    53,    45,    26,    39,
      78,    48,    33,    -1,    26,    39,    78,    -1,    26,    -1,
      75,    75,    -1,    30,    75,    75,    -1,    75,    30,    75,
      -1,    75,    75,    30,    -1,    30,    75,    30,    75,    -1,
      30,    75,    75,    30,    -1,    75,    30,    75,    30,    -1,
      30,    75,    30,    75,    30,    -1,    79,    80,    -1,    75,
      -1,    14,    47,    53,    82,    53,    45,    26,    48,    33,
      -1,    75,    -1,    30,    75,    -1,    75,    30,    -1,    30,
      75,    30,    -1,    26,    35,    44,    28,    44,    33,    -1,
      26,    35,    53,    30,    53,    33,    -1,    26,    35,    84,
      33,    -1,    26,    36,    26,    37,    35,    44,    28,    44,
      33,    -1,    26,    36,    26,    37,    35,    53,    30,    53,
      33,    -1,    26,    36,    26,    37,    35,    84,    33,    -1,
      26,    36,    27,    37,    35,    84,    33,    -1,    26,    36,
      27,    37,    35,    44,    28,    44,    33,    -1,    26,    36,
      27,    37,    35,    53,    30,    53,    33,    -1,    86,    85,
      86,    -1,    86,    -1,    47,    86,    48,    85,    86,    -1,
      86,    85,    47,    86,    48,    -1,    47,    86,    48,    85,
      47,    86,    48,    -1,    86,    85,    86,    85,    84,    -1,
      47,    86,    48,    -1,    47,    86,    48,    85,    86,    85,
      84,    -1,    86,    85,    47,    86,    48,    85,    84,    -1,
      47,    86,    48,    85,    47,    86,    48,    85,    84,    -1,
      40,    -1,    41,    -1,    38,    -1,    43,    -1,    26,    -1,
      26,    36,    27,    37,    -1,    26,    36,    26,    37,    -1,
      27,    -1,    29,    -1,    88,    87,    -1,    -1,    32,    89,
      33,    -1,     4,    -1,     5,    -1,     6,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    16,    16,    18,    21,    22,    25,    26,    29,    31,
      32,    33,    34,    37,    38,    39,    43,    51,    52,    55,
      57,    58,    59,    60,    61,    62,    63,    64,    68,    69,
      72,    73,    74,    75,    76,    78,    79,    81,    83,    85,
      87,    89,    90,    91,    92,    93,    94,    96,    99,   100,
     101,   102,   104,   105,   107,   109,   110,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   122,   125,   127,   128,
     129,   130,   134,   135,   136,   138,   142,   146,   150,   154,
     158,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   175,   176,   177,   178,   180,   181,   185,   188,   189,
     192,   193,   195,   198,   199,   200
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "mc_programme", "mc_process", "mc_loop",
  "mc_array", "mc_var", "mc_const", "mc_real", "mc_char", "mc_string",
  "mc_integer", "mc_read", "mc_write", "mc_while", "mc_inf", "mc_sup",
  "mc_eg", "mc_infe", "mc_supe", "mc_diff", "mc_exec", "mc_if",
  "mc_end_if", "mc_else", "idf", "cst_int", "cst_char", "cst_real",
  "cst_string", "htag", "dble_htag", "dollar", "dble_point", "aff",
  "crochet_ovr", "crochet_frm", "slash", "separateur", "plus", "moins",
  "egal", "etoile", "cote", "barre", "arobase", "parnths_ovr",
  "parnths_frm", "prcnt", "et_com", "acolad_ovr", "acolad_frm",
  "dble_cote", "pvg", "pt_interrogation", "$accept", "S", "PGM",
  "LIST_DEC_VAR", "DEC_VAR", "TYPE", "LIST_IDF", "LIST_DEC_CONST",
  "DEC_CST", "LIST_IDF_CST", "LIST_INSTRUCTION", "INST", "INST_CONDITION",
  "IF_SIMPLE", "IF_ELSE", "INST_WHILE", "COND", "OPERATEUR_LOGIQUE",
  "INST_READ", "SIGNE_FORMAT", "INST_WRITE", "WRITE", "IDF_WRITE",
  "AFFICH_WRITE", "ONE_SIGN_WRITE", "ONE_WRITE", "AFFICH_ONE_WRITE",
  "INST_AFF", "EXPRESSION_ARTHMTQ", "OPERATEUR", "OPERANDE", "LIST_BIBLIO",
  "BIB", "NOM_BIB", 0
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    56,    57,    57,    58,    58,    59,    59,    60,    61,
      61,    61,    61,    62,    62,    62,    62,    63,    63,    64,
      65,    65,    65,    65,    65,    65,    65,    65,    66,    66,
      67,    67,    67,    67,    67,    68,    68,    69,    70,    71,
      72,    73,    73,    73,    73,    73,    73,    74,    75,    75,
      75,    75,    76,    76,    77,    78,    78,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    80,    81,    82,    82,
      82,    82,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    85,    85,    85,    85,    86,    86,    86,    86,    86,
      87,    87,    88,    89,    89,    89
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     6,     0,     5,     5,     2,     0,     4,     1,
       1,     1,     1,     3,     1,     6,     4,     2,     0,     4,
       7,     5,     7,     5,     5,     3,     5,     3,     2,     0,
       1,     1,     1,     1,     1,     1,     1,     8,    11,     8,
       3,     1,     1,     1,     1,     1,     1,    10,     1,     1,
       1,     1,     1,     1,    11,     3,     1,     2,     3,     3,
       3,     4,     4,     4,     5,     2,     1,     9,     1,     2,
       2,     3,     6,     6,     4,     9,     9,     7,     7,     9,
       9,     3,     1,     5,     5,     7,     5,     3,     7,     7,
       9,     1,     1,     1,     1,     1,     4,     4,     1,     1,
       2,     0,     3,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     0,   101,   103,   104,   105,     0,     1,
       0,   100,   102,     0,     0,     7,    18,     0,    10,    12,
      11,     9,     0,     7,     0,     0,     0,    18,     2,    18,
       6,     0,     0,     7,    17,    29,    14,     0,     0,     0,
      29,     0,     0,     0,    29,     0,     4,    29,    34,    35,
      36,    33,    31,    32,    53,    52,    30,     0,     0,     8,
       0,    19,     5,     0,     0,     0,     0,     0,     0,    28,
       0,    13,    25,    27,     0,     0,     0,     0,    95,    98,
      99,     0,     0,     0,    82,     0,     0,     0,     0,     0,
       0,    16,     0,     0,     0,     0,    49,    51,    48,    50,
       0,     0,    68,     0,     0,     0,     0,     0,    42,    43,
      41,    44,    45,    46,     0,    93,    91,    92,    94,     0,
       0,     0,     0,    74,     0,     0,     0,    21,    23,    24,
      26,     0,    69,    70,    57,     0,    66,    65,     0,     0,
       0,    87,    29,    40,     0,    81,     0,     0,     0,     0,
       0,    15,     0,     0,     0,    71,    58,    59,    60,     0,
       0,    97,    96,     0,     0,     0,     0,     0,    72,    73,
       0,     0,     0,     0,     0,     0,    20,    22,     0,    61,
      62,    63,     0,     0,     0,    83,     0,    84,    86,     0,
       0,     0,     0,    77,     0,     0,    78,     0,    64,     0,
       0,     0,     0,    39,     0,    37,    29,     0,     0,     0,
       0,     0,    56,     0,    67,    85,    88,    89,     0,    75,
      76,    79,    80,    47,     0,     0,     0,     0,    55,    54,
      90,    38
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    17,    22,    23,    24,    37,    26,    27,    39,
      46,    47,    48,    49,    50,    51,    82,   114,    52,   100,
      53,    54,   213,   103,   137,    55,   104,    56,    83,   119,
      84,     3,     4,     8
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -137
static const yytype_int16 yypact[] =
{
       5,    99,    34,    43,    27,  -137,  -137,  -137,    19,  -137,
      35,  -137,  -137,    13,    14,   136,   136,    39,  -137,  -137,
    -137,  -137,    60,   136,    61,    86,    90,   136,  -137,   136,
    -137,   105,   107,   136,  -137,    10,    11,    95,   110,   116,
      10,   108,   109,   111,    10,    20,  -137,    10,  -137,  -137,
    -137,  -137,  -137,  -137,  -137,  -137,  -137,   127,   105,  -137,
     -13,  -137,  -137,   104,   106,    63,   138,   -14,    49,  -137,
     125,  -137,   126,   128,   135,   134,    75,    23,   132,  -137,
    -137,   124,   121,   123,    94,   129,   142,   141,   139,   137,
     140,   143,   107,   107,   131,   120,  -137,  -137,  -137,  -137,
     130,    75,    32,    68,   133,    89,   144,   145,  -137,  -137,
    -137,  -137,  -137,  -137,    63,  -137,  -137,  -137,  -137,    67,
      63,   146,   147,  -137,   149,   150,   105,  -137,  -137,   148,
     152,   153,    58,    75,   151,   154,  -137,  -137,   156,   157,
     158,    94,    10,  -137,   124,    94,   155,   160,   164,    -9,
      16,  -137,   107,   107,   159,    75,   172,   174,  -137,   162,
     163,  -137,  -137,    72,   161,   166,    63,   102,  -137,  -137,
     178,   177,   175,   181,   180,   179,  -137,  -137,   185,   186,
    -137,  -137,   176,   169,   124,    94,   187,    94,  -137,   188,
     196,   182,   170,  -137,   183,   171,  -137,   184,  -137,   193,
     189,   190,    63,  -137,    63,  -137,    10,   192,   195,   197,
     198,   200,   201,   191,  -137,    94,  -137,  -137,   205,  -137,
    -137,  -137,  -137,  -137,   193,   202,    63,   203,  -137,  -137,
    -137,  -137
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -137,  -137,  -137,    -4,  -137,    38,   -52,    82,  -137,   -82,
     -40,  -137,  -137,  -137,  -137,  -137,    59,  -137,  -137,   -75,
    -137,  -137,   -46,  -137,  -137,  -137,  -137,  -137,   -66,  -136,
     -78,   230,  -137,  -137
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -102
static const yytype_int16 yytable[] =
{
      62,    88,   102,   106,    66,   163,    71,    69,  -101,   166,
     127,   128,    78,    79,    72,    80,    73,    78,    79,    30,
      80,    15,    16,    41,    42,    43,   132,   134,   136,    40,
      86,    74,    44,    81,     9,   170,    45,     1,    81,    87,
      75,   145,    78,    79,   171,    80,    10,    57,   143,   202,
      58,   204,    12,   101,    25,    67,    68,   156,   157,     1,
     173,    13,   133,    81,    14,    25,   165,    25,    29,   174,
     176,   177,    96,    97,   151,    89,    90,    98,    99,   226,
     179,    96,    97,   172,   175,   185,    98,    99,   155,    78,
      79,    28,    80,    78,    79,    31,    80,    33,    78,    79,
     188,    80,   164,     5,     6,     7,   201,    96,    97,    34,
      81,    35,    98,    99,   144,   139,   140,    96,    97,   184,
      32,   135,    98,    99,    96,    97,   189,   190,    59,    98,
      99,    36,   115,    38,   116,   117,   216,   118,   217,   108,
     109,   110,   111,   112,   113,    18,    19,    20,    21,    61,
      78,    79,    60,    80,    70,    63,    64,    76,    65,    77,
     230,    85,    91,    94,    95,    92,   218,    93,   105,   107,
     121,   122,   123,   130,   124,   129,   120,   125,   228,   146,
       0,   158,   126,   131,   149,   150,   138,   152,   182,   183,
     147,   153,   141,   168,   161,   162,   142,   169,   154,   159,
     148,   160,   180,   167,   181,   178,   191,   192,   193,   194,
     195,   197,   196,   186,   187,   199,   198,   200,   206,   212,
     203,   205,   214,   208,   210,   219,   207,   209,   220,   227,
     221,   222,   211,   223,    11,   229,   231,     0,   215,   225,
     224
};

static const yytype_int16 yycheck[] =
{
      40,    67,    77,    81,    44,   141,    58,    47,     3,   145,
      92,    93,    26,    27,    27,    29,    29,    26,    27,    23,
      29,     7,     8,    13,    14,    15,   101,   102,   103,    33,
      44,    44,    22,    47,     0,    44,    26,    32,    47,    53,
      53,   119,    26,    27,    53,    29,     3,    36,   114,   185,
      39,   187,    33,    30,    16,    35,    36,   132,   133,    32,
      44,    26,    30,    47,    51,    27,   144,    29,     8,    53,
     152,   153,    49,    50,   126,    26,    27,    54,    55,   215,
     155,    49,    50,   149,   150,   163,    54,    55,    30,    26,
      27,    52,    29,    26,    27,    34,    29,     7,    26,    27,
     166,    29,   142,     4,     5,     6,   184,    49,    50,    27,
      47,    29,    54,    55,    47,    26,    27,    49,    50,    47,
      34,    53,    54,    55,    49,    50,    24,    25,    33,    54,
      55,    26,    38,    26,    40,    41,   202,    43,   204,    16,
      17,    18,    19,    20,    21,     9,    10,    11,    12,    33,
      26,    27,    42,    29,    27,    47,    47,    53,    47,    53,
     226,    23,    37,    28,    30,    39,   206,    39,    36,    48,
      28,    30,    33,    53,    37,    44,    47,    37,   224,   120,
      -1,    30,    39,    53,    35,    35,    53,    39,    26,    26,
      44,    39,    48,    33,    37,    37,    51,    33,    45,    45,
      53,    45,    30,    48,    30,    46,    28,    30,    33,    28,
      30,    26,    33,    52,    48,    39,    30,    48,    22,    26,
      33,    33,    33,    53,    53,    33,    44,    44,    33,    24,
      33,    33,    48,    33,     4,    33,    33,    -1,    48,    48,
      39
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    32,    57,    87,    88,     4,     5,     6,    89,     0,
       3,    87,    33,    26,    51,     7,     8,    58,     9,    10,
      11,    12,    59,    60,    61,    61,    63,    64,    52,     8,
      59,    34,    34,     7,    63,    63,    26,    62,    26,    65,
      59,    13,    14,    15,    22,    26,    66,    67,    68,    69,
      70,    71,    74,    76,    77,    81,    83,    36,    39,    33,
      42,    33,    66,    47,    47,    47,    66,    35,    36,    66,
      27,    62,    27,    29,    44,    53,    53,    53,    26,    27,
      29,    47,    72,    84,    86,    23,    44,    53,    84,    26,
      27,    37,    39,    39,    28,    30,    49,    50,    54,    55,
      75,    30,    75,    79,    82,    36,    86,    48,    16,    17,
      18,    19,    20,    21,    73,    38,    40,    41,    43,    85,
      47,    28,    30,    33,    37,    37,    39,    65,    65,    44,
      53,    53,    75,    30,    75,    53,    75,    80,    53,    26,
      27,    48,    51,    84,    47,    86,    72,    44,    53,    35,
      35,    62,    39,    39,    45,    30,    75,    75,    30,    45,
      45,    37,    37,    85,    66,    86,    85,    48,    33,    33,
      44,    53,    84,    44,    53,    84,    65,    65,    46,    75,
      30,    30,    26,    26,    47,    86,    52,    48,    84,    24,
      25,    28,    30,    33,    28,    30,    33,    26,    30,    39,
      48,    86,    85,    33,    85,    33,    22,    44,    53,    44,
      53,    48,    26,    78,    33,    48,    84,    84,    66,    33,
      33,    33,    33,    33,    39,    48,    85,    24,    78,    33,
      84,    33
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
        case 2:

/* Line 1455 of yacc.c  */
#line 17 "syntaxiqueProjet.y"
    { printf("\n Le programme est correcte syntaxiquement. \n"); YYACCEPT; ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 40 "syntaxiqueProjet.y"
    {
				if ((yyvsp[(3) - (6)].entier)<=0) printf("Erreur sementique : un tableau ne peux pas avoir une taille inferieure ou egale a 0 \n");
			;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 44 "syntaxiqueProjet.y"
    {
				if ((yyvsp[(3) - (4)].entier)<=0) printf("Erreur sementique : un tableau ne peux pas avoir une taille inferieure ou egale a 0 \n");
			;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 139 "syntaxiqueProjet.y"
    {
				if ((yyvsp[(3) - (9)].string)<=0) printf("Erreur sementique : un tableau ne peux pas avoir une taille inferieure ou egale a 0 \n");
			;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 143 "syntaxiqueProjet.y"
    {
				if ((yyvsp[(3) - (9)].string)<=0) printf("Erreur sementique : un tableau ne peux pas avoir une taille inferieure ou egale a 0 \n");
			;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 147 "syntaxiqueProjet.y"
    {
				if ((yyvsp[(3) - (7)].string)<=0) printf("Erreur sementique : un tableau ne peux pas avoir une taille inferieure ou egale a 0 \n");
			;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 151 "syntaxiqueProjet.y"
    {
				if ((yyvsp[(3) - (7)].entier)<=0) printf("Erreur sementique : un tableau ne peux pas avoir une taille inferieure ou egale a 0 \n");
			;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 155 "syntaxiqueProjet.y"
    {
				if ((yyvsp[(3) - (9)].entier)<=0) printf("Erreur sementique : un tableau ne peux pas avoir une taille inferieure ou egale a 0 \n");
			;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 159 "syntaxiqueProjet.y"
    {
				if ((yyvsp[(3) - (9)].entier)<=0) printf("Erreur sementique : un tableau ne peux pas avoir une taille inferieure ou egale a 0 \n");
			;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 182 "syntaxiqueProjet.y"
    {
				if ((yyvsp[(3) - (4)].entier)<=0) printf("Erreur sementique : un tableau ne peux pas avoir une taille inferieure ou egale a 0 \n");
			;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 186 "syntaxiqueProjet.y"
    {
			if ((yyvsp[(3) - (4)].string)<=0) printf("Erreur sementique : un tableau ne peux pas avoir une taille inferieure ou egale a 0 \n");			;}
    break;



/* Line 1455 of yacc.c  */
#line 1697 "syntaxiqueProjet.tab.c"
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
#line 203 "syntaxiqueProjet.y"

main ()
{
   initialisation();
   yyparse(); 
   printf("\n");
   afficher();
 }
 yywrap ()
 {}
int yyerror ( char*  msg )  
{
    printf ("Erreur Syntaxique a la ligne %d a la colonne %d \n", nb_ligne,Col);
} 
 
