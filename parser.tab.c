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
#line 1 "parser.y" /* yacc.c:339  */
  /* Codigo C */
#include <stdio.h>

#include<math.h>

#include "diccionario.h"
DICCIONARIO diccionario; /* variable global para el diccionario */
  extern FILE *yyin;

#line 76 "parser.tab.c" /* yacc.c:339  */

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
    RESERV_ARCHIVO = 258,
    PRENTERO = 259,
    RESERV_PRINCIPAL = 260,
    RESERV_NOMBRE = 261,
    RESERV_FUNCION = 262,
    RESERV_VARIABLE = 263,
    RESERV_RETORNAR = 264,
    RESERV_SI = 265,
    RESERV_MENOR = 266,
    RESERV_MAYOR = 267,
    RESERV_MAYORIGUAL = 268,
    RESERV_MENORIGUAL = 269,
    RESERV_IGUAL = 270,
    RESERV_DIFERENTE = 271,
    RESERV_SINO = 272,
    RESERV_SINOSI = 273,
    RESERV_MIENTRAS = 274,
    RESERV_PARA = 275,
    RESERV_INCLUIR = 276,
    RESERV_ALIAS = 277,
    RESERV_ENT = 278,
    RESERV_DEC = 279,
    RESERV_LOG = 280,
    RESERV_STR = 281,
    RESERV_VAC = 282,
    RESERV_COMO = 283,
    RESERV_INICIO = 284,
    RESERV_FIN = 285,
    RESERV_RET = 286,
    RESERV_CON = 287,
    RESERV_ENTONCES = 288,
    RESERV_REPETIR = 289,
    RESERV_HASTA = 290,
    RESERV_PASO = 291,
    RESERV_HACER = 292,
    RESERV_Y = 293,
    CONSTANTE_REAL = 294,
    CONSTANTE_ENTERA = 295,
    IDENTIFICADOR = 296,
    TIPO_ARCHIVO = 297,
    TIPO_PRINCIPAL = 298,
    RESERV_TIPO = 299,
    RESERV_FNM = 300,
    RESERV_PAL = 301,
    RESERV_ENTERO = 302,
    RESERV_DECIMAL = 303,
    RESERV_BOOLEANO = 304
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 12 "parser.y" /* yacc.c:355  */

    int    valor_entero;
    double valor_real;
    char * texto;

#line 172 "parser.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 187 "parser.tab.c" /* yacc.c:358  */

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
#define YYFINAL  29
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   516

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  78
/* YYNRULES -- Number of rules.  */
#define YYNRULES  176
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  403

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   304

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    67,     2,     2,    54,     2,     2,
      57,    58,    52,    51,    59,    50,    60,    53,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    65,    68,
      62,    64,    63,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    61,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    55,     2,    56,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    66,     2,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    35,    35,    36,    37,    40,    41,    44,    45,    48,
      49,    50,    53,    54,    55,    56,    57,    58,    59,    60,
      62,    63,    64,    72,    73,    74,    75,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    90,    91,    92,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   107,   109,
     110,   111,   112,   125,   128,   129,   132,   135,   136,   137,
     138,   140,   150,   151,   152,   161,   162,   163,   164,   165,
     166,   167,   170,   173,   174,   175,   176,   177,   178,   181,
     184,   185,   186,   187,   188,   189,   193,   194,   197,   198,
     200,   201,   204,   205,   207,   208,   209,   211,   214,   216,
     217,   218,   220,   221,   222,   225,   226,   227,   230,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   246,   247,
     248,   249,   251,   252,   253,   254,   255,   256,   260,   261,
     271,   272,   274,   275,   277,   278,   281,   282,   284,   285,
     287,   288,   289,   298,   299,   300,   301,   302,   303,   305,
     306,   307,   316,   317,   318,   319,   320,   321,   324,   325,
     326,   327,   328,   331,   332,   333,   334,   337,   338,   341,
     343,   348,   351,   356,   363,   365,   367
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "RESERV_ARCHIVO", "PRENTERO",
  "RESERV_PRINCIPAL", "RESERV_NOMBRE", "RESERV_FUNCION", "RESERV_VARIABLE",
  "RESERV_RETORNAR", "RESERV_SI", "RESERV_MENOR", "RESERV_MAYOR",
  "RESERV_MAYORIGUAL", "RESERV_MENORIGUAL", "RESERV_IGUAL",
  "RESERV_DIFERENTE", "RESERV_SINO", "RESERV_SINOSI", "RESERV_MIENTRAS",
  "RESERV_PARA", "RESERV_INCLUIR", "RESERV_ALIAS", "RESERV_ENT",
  "RESERV_DEC", "RESERV_LOG", "RESERV_STR", "RESERV_VAC", "RESERV_COMO",
  "RESERV_INICIO", "RESERV_FIN", "RESERV_RET", "RESERV_CON",
  "RESERV_ENTONCES", "RESERV_REPETIR", "RESERV_HASTA", "RESERV_PASO",
  "RESERV_HACER", "RESERV_Y", "CONSTANTE_REAL", "CONSTANTE_ENTERA",
  "IDENTIFICADOR", "TIPO_ARCHIVO", "TIPO_PRINCIPAL", "RESERV_TIPO",
  "RESERV_FNM", "RESERV_PAL", "RESERV_ENTERO", "RESERV_DECIMAL",
  "RESERV_BOOLEANO", "'-'", "'+'", "'*'", "'/'", "'%'", "'{'", "'}'",
  "'('", "')'", "','", "'.'", "'^'", "'<'", "'>'", "'='", "':'", "'\\302'",
  "'\"'", "';'", "$accept", "lineas", "ejecutable", "ejecucion",
  "esfuncion", "k", "m", "retentero", "retdecimal", "retcadena", "retlog",
  "le", "contfuncion", "invocarfuncion", "funcioninterna",
  "parametrofuncion", "parametrovalor", "funcionexterna", "sentenciaejec",
  "siejec", "she", "shhe", "he", "ie", "ze", "wwe", "repetir", "para",
  "ly", "lz", "declararvariable2", "tipovariable2", "asigidentificador",
  "tipvariable", "asigvalor", "expresion2", "comparacionejec",
  "comparadorejec", "esincuir", "parejecutable", "tipoparejec", "libreria",
  "funcion", "c", "d", "cuerpo", "retornoentero", "retornodecimal",
  "contenidocuerpo", "sentencia", "mientras", "x", "y", "si", "sh", "shh",
  "h", "i", "z", "comparacion", "b", "comparador", "declararvariable1",
  "tipovariable", "declaraciondecimal", "asigvalordec",
  "declaracionentero", "expresion", "expresionentera", "parametros",
  "tipoparametro", "linea", "tipoclase", "a", "nombrep", "nombre", "tipo",
  "tipop", YY_NULLPTR
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
      45,    43,    42,    47,    37,   123,   125,    40,    41,    44,
      46,    94,    60,    62,    61,    58,   194,    34,    59
};
# endif

#define YYPACT_NINF -236

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-236)))

#define YYTABLE_NINF -57

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      41,   -48,    17,   -30,  -236,  -236,    30,   325,    39,    -8,
    -236,  -236,  -236,    36,  -236,  -236,  -236,  -236,     3,    12,
      49,    85,    74,    74,    74,    74,    74,    74,    74,  -236,
      42,  -236,  -236,    69,    44,  -236,    48,   110,   101,  -236,
     105,   103,   146,   156,   161,   173,   195,  -236,   -24,  -236,
      84,  -236,  -236,  -236,    74,    74,    74,    74,    74,    74,
      -9,   166,   261,   193,   175,   190,   357,   232,   201,  -236,
    -236,  -236,  -236,   252,   114,  -236,   205,  -236,  -236,  -236,
     330,   210,  -236,  -236,   235,   258,   266,   267,   269,   277,
      62,   253,   254,   256,   287,    86,  -236,   278,   294,   314,
     326,   317,    93,   332,     3,   297,  -236,   333,   191,   191,
     191,   191,   191,   191,  -236,  -236,  -236,  -236,  -236,  -236,
    -236,   320,   322,  -236,  -236,  -236,   185,   335,   321,   356,
     348,  -236,  -236,   185,   361,  -236,  -236,    59,   -12,   297,
     121,   259,  -236,  -236,  -236,  -236,  -236,  -236,  -236,  -236,
    -236,   -10,  -236,  -236,   411,  -236,  -236,   191,   191,   191,
     191,   191,   191,   359,  -236,   115,   191,   362,   363,   358,
    -236,   185,  -236,  -236,  -236,  -236,  -236,   353,   185,  -236,
    -236,  -236,   219,   185,  -236,  -236,  -236,    59,  -236,   295,
     389,   392,    -1,   279,    59,    54,   384,   364,  -236,   396,
    -236,   280,   386,   365,   373,   368,   369,   370,   371,   372,
     374,  -236,   395,   397,  -236,   375,   377,   377,   376,   385,
    -236,  -236,   185,   234,   388,   219,   313,    59,    59,    59,
      59,    59,    59,   378,   381,  -236,   382,    59,   297,    59,
     380,    59,   342,  -236,  -236,   118,  -236,   393,   191,  -236,
    -236,  -236,  -236,   439,  -236,  -236,  -236,  -236,  -236,  -236,
    -236,   387,  -236,  -236,  -236,  -236,  -236,  -236,  -236,    18,
    -236,   390,   391,   394,  -236,  -236,   191,  -236,   399,  -236,
     400,    74,  -236,   403,  -236,  -236,  -236,   347,   383,  -236,
     404,  -236,   137,   137,   401,   401,   401,   342,  -236,  -236,
    -236,   342,   237,  -236,   283,   377,  -236,  -236,   414,    89,
    -236,  -236,   409,   395,   402,   397,   398,   406,  -236,   408,
    -236,  -236,  -236,   234,   234,   234,   234,   234,   234,  -236,
    -236,    59,   454,  -236,  -236,    59,   405,  -236,  -236,   158,
    -236,    74,  -236,  -236,  -236,  -236,  -236,  -236,  -236,    88,
     185,   185,   432,  -236,   301,   395,  -236,  -236,   407,    11,
     123,   297,   431,   410,  -236,   451,  -236,   231,    59,   416,
     415,  -236,   441,  -236,  -236,  -236,   159,   185,   377,   297,
     281,   147,   417,   282,   456,   281,  -236,  -236,  -236,   422,
    -236,  -236,  -236,   185,   151,   245,   423,  -236,  -236,  -236,
     185,   165,  -236
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,   140,   141,   142,     0,     0,     4,
       6,     7,     8,     3,    87,   165,     2,   166,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
       0,     5,    86,     0,     0,    88,     0,     0,     0,    89,
       0,     0,     0,     0,     0,     0,     0,    10,     0,    81,
       0,   168,   142,   164,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    82,
      83,    85,    84,     0,     0,     9,     0,   121,   120,   151,
       0,     0,   119,   167,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   159,     0,     0,     0,
       0,     0,     0,     0,     0,    22,    80,     0,     0,     0,
       0,     0,     0,     0,   163,   144,   143,   145,   146,   148,
     147,     0,     0,   160,   161,   162,     0,     0,     0,     0,
       0,   175,   172,     0,     0,    79,   169,     0,     0,    22,
     138,     0,    21,    26,    27,    28,    25,    36,    37,    38,
      23,     0,    55,    24,     0,   149,   150,     0,     0,     0,
       0,     0,     0,     0,   171,     0,     0,     0,     0,     0,
     104,     0,   100,    95,   101,   103,   102,     0,     0,   158,
     176,   173,     0,     0,    62,    63,    64,     0,    39,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    16,     0,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   174,     0,     0,   128,     0,     0,     0,     0,   100,
      94,    99,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    73,    74,    77,     0,     0,    22,     0,
       0,     0,    61,    33,    30,     0,    32,     0,     0,    12,
      13,    14,    15,     0,    57,    58,    59,    60,    53,    56,
      54,     0,   170,   153,   152,   154,   155,   157,   156,   138,
     137,   130,   134,   131,   133,    97,     0,   109,     0,   105,
       0,     0,    91,   100,   140,   141,   142,     0,     0,    93,
       0,    71,    66,    65,    67,    68,    70,    69,    76,    75,
      78,    72,     0,    40,     0,     0,    48,    29,     0,     0,
     139,    11,     0,     0,     0,     0,     0,     0,   110,     0,
     106,   129,    90,     0,     0,     0,     0,     0,     0,    98,
      92,     0,     0,    41,    42,     0,     0,    31,    35,     0,
     136,     0,   132,   122,   123,   124,   125,   126,   127,     0,
      96,    96,     0,    47,     0,     0,    34,   135,     0,     0,
       0,    22,     0,     0,   118,   112,   107,     0,     0,     0,
       0,   111,     0,    44,    43,    45,     0,    96,     0,    22,
       0,     0,     0,     0,     0,     0,    49,    51,   108,     0,
      46,    52,    50,    96,     0,   114,     0,   115,   113,   116,
      96,     0,   117
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -236,  -236,  -236,   470,  -236,   433,  -236,  -236,  -236,  -236,
    -236,  -136,  -133,  -236,  -236,   171,   174,  -236,  -236,  -236,
    -236,  -236,   116,  -236,  -236,   102,  -236,  -103,  -236,    99,
    -236,  -236,   284,  -236,  -207,  -153,  -235,  -236,  -236,  -236,
     413,  -236,   475,   412,  -236,  -132,  -161,   264,  -159,  -236,
    -236,  -236,  -236,  -236,  -236,  -236,    95,  -236,  -236,  -213,
     142,  -236,   300,  -236,  -236,   178,  -236,     0,   -40,   428,
     367,  -236,  -236,   446,   343,  -236,  -236,  -236
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     8,     9,    10,    11,    47,   199,   249,   250,   251,
     252,   141,   142,   143,   144,   245,   246,   145,   146,   147,
     188,   303,   333,   374,   375,   334,   148,   170,   386,   387,
     150,   151,   152,   258,   153,   189,   190,   237,    12,    48,
      49,    13,    14,    35,    39,   171,   172,   224,   173,   174,
     175,   279,   320,   176,   277,   318,   371,   398,   399,   278,
      81,   349,   177,   214,   273,   274,   271,    54,    82,    95,
      96,    16,    50,    51,    36,    37,    65,    98
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      15,   182,   149,   193,   280,   270,   306,   165,   200,    33,
     219,    17,   220,     3,    42,    43,    44,    45,   201,   165,
     166,   167,    53,   220,    55,    56,    57,    58,    59,   191,
     168,   138,    46,    30,   226,    74,   149,    20,   149,    29,
     169,   242,     1,     2,    34,   192,   222,    46,     2,   202,
     194,   225,   169,    38,    84,    85,    86,    87,    88,    89,
     200,   283,     3,   220,    18,    19,   220,   365,   157,   158,
     159,   160,   161,   162,   292,   293,   294,   295,   296,   297,
       4,     5,     6,   197,   301,    21,   304,    41,    41,    76,
     149,    40,   336,    76,    22,   243,   352,    60,   184,   185,
     186,    62,   302,     7,   121,   122,   340,    63,    42,    43,
      44,    45,   244,     4,     5,    52,   187,   205,   206,   207,
     208,   209,   210,    77,    78,    79,   215,    77,    78,    79,
     243,   165,   166,   167,    61,   149,     7,    42,    43,    44,
      45,    46,   168,   138,   127,   128,    80,   338,   363,   -56,
      80,   134,   128,   194,    64,   165,   166,   167,    66,   165,
     166,   167,   212,   213,   169,   382,   168,   138,    68,   200,
     168,   138,    67,   165,   166,   167,   307,   308,   195,   366,
     -56,   196,   354,   215,   168,   138,   197,    69,   169,   229,
     230,   231,   169,   165,   166,   167,   380,    70,   232,   149,
     220,   220,    71,   388,   168,   138,   169,   395,   310,   227,
     228,   229,   230,   231,    72,   376,   356,   308,   359,   360,
     232,   402,   220,   288,    73,   367,   169,   165,   223,   167,
     155,   156,    79,    90,   200,   220,   316,    97,   168,   138,
      99,   137,   220,   383,   385,   381,   100,   137,   372,   331,
     200,   138,   200,    80,   103,   331,   104,   138,   149,   105,
     169,   394,   396,   370,   149,   139,   114,   332,   401,   137,
     107,   139,   140,   284,   285,   286,   149,   149,   140,   138,
     149,   321,   149,   157,   158,   159,   160,   161,   162,   137,
     198,   137,   137,   139,   123,   124,   287,   125,   115,   138,
     140,   138,   138,   254,   255,   256,   257,   137,    91,    92,
      93,   384,   332,   139,   241,   139,   139,   138,   335,    94,
     140,   116,   140,   140,    55,    56,    57,    58,    59,   117,
     118,   139,   119,   227,   228,   229,   230,   231,   140,   362,
     120,   357,   126,   129,   232,   227,   228,   229,   230,   231,
     130,   227,   228,   229,   230,   231,   232,   233,   234,   131,
     235,   236,   232,   227,   228,   229,   230,   231,    91,    92,
      93,   291,   133,   135,   232,    23,    24,    25,    26,    27,
     108,   109,   110,   111,   112,   132,    28,   163,   154,   164,
     178,   113,   227,   228,   229,   230,   231,   323,   324,   325,
     326,   327,   180,   232,    91,    92,    93,   181,   328,   343,
     344,   345,   346,   347,   348,   101,   183,   203,   211,   216,
     217,   221,   238,   218,   239,   247,   253,   259,   248,   262,
     261,   263,   264,   265,   266,   267,   269,   268,   272,   276,
     281,   282,   298,   275,   289,   299,   311,   300,   305,   313,
     309,   329,   122,   315,   312,   243,   314,   317,   319,   322,
     330,   350,   232,   351,   353,   361,   341,   368,   369,   370,
     364,   377,   378,   355,   379,   389,   391,   393,   400,    31,
     339,    75,   337,   373,   392,   390,   260,   106,    32,   290,
     397,   358,   240,   342,   102,   179,    83,   204,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   136
};

static const yytype_int16 yycheck[] =
{
       0,   133,   105,   139,   217,   212,   241,     8,   141,     6,
     171,    59,   171,    21,    23,    24,    25,    26,    28,     8,
       9,    10,    22,   182,    24,    25,    26,    27,    28,    41,
      19,    20,    56,    41,   187,    59,   139,    67,   141,     0,
      41,   194,     1,     7,    41,    57,   178,    56,     7,    59,
      32,   183,    41,    41,    54,    55,    56,    57,    58,    59,
     193,   222,    21,   222,    47,    48,   225,    56,   108,   109,
     110,   111,   112,   113,   227,   228,   229,   230,   231,   232,
      39,    40,    41,    65,   237,    55,   239,     3,     3,     5,
     193,    42,   305,     5,    64,    41,   331,    55,    39,    40,
      41,    57,   238,    62,    42,    43,   313,    59,    23,    24,
      25,    26,    58,    39,    40,    41,    57,   157,   158,   159,
     160,   161,   162,    39,    40,    41,   166,    39,    40,    41,
      41,     8,     9,    10,    65,   238,    62,    23,    24,    25,
      26,    56,    19,    20,    58,    59,    62,    58,   355,    28,
      62,    58,    59,    32,    44,     8,     9,    10,    57,     8,
       9,    10,    47,    48,    41,   378,    19,    20,    65,   302,
      19,    20,    67,     8,     9,    10,    58,    59,    57,    56,
      59,    60,   335,   223,    19,    20,    65,    41,    41,    52,
      53,    54,    41,     8,     9,    10,    37,    41,    61,   302,
     359,   360,    41,    56,    19,    20,    41,    56,   248,    50,
      51,    52,    53,    54,    41,   368,    58,    59,   350,   351,
      61,    56,   381,   223,    29,   361,    41,     8,     9,    10,
      39,    40,    41,    67,   367,   394,   276,    44,    19,    20,
      65,    10,   401,   379,   380,   377,    56,    10,    17,    18,
     383,    20,   385,    62,    22,    18,    55,    20,   361,     7,
      41,   393,    17,    18,   367,    34,    56,    30,   400,    10,
      65,    34,    41,    39,    40,    41,   379,   380,    41,    20,
     383,   281,   385,   323,   324,   325,   326,   327,   328,    10,
      31,    10,    10,    34,    41,    41,    62,    41,    63,    20,
      41,    20,    20,    23,    24,    25,    26,    10,    47,    48,
      49,    30,    30,    34,    35,    34,    34,    20,    35,    58,
      41,    63,    41,    41,   324,   325,   326,   327,   328,    63,
      63,    34,    63,    50,    51,    52,    53,    54,    41,    38,
      63,   341,    55,    65,    61,    50,    51,    52,    53,    54,
      56,    50,    51,    52,    53,    54,    61,    62,    63,    45,
      65,    66,    61,    50,    51,    52,    53,    54,    47,    48,
      49,    58,    55,    41,    61,    50,    51,    52,    53,    54,
      50,    51,    52,    53,    54,    59,    61,    67,    55,    67,
      55,    61,    50,    51,    52,    53,    54,    50,    51,    52,
      53,    54,    46,    61,    47,    48,    49,    59,    61,    11,
      12,    13,    14,    15,    16,    58,    55,     6,    59,    57,
      57,    68,    33,    65,    32,    41,    30,    41,    64,    56,
      65,    63,    63,    63,    63,    63,    41,    63,    41,    62,
      64,    56,    64,    68,    56,    64,     7,    65,    68,    59,
      57,    68,    43,    59,    67,    41,    65,    58,    58,    56,
      56,    55,    61,    55,    10,    33,    64,    36,    58,    18,
      63,    55,    57,    68,    33,    58,    20,    55,    55,     9,
     309,    48,   308,   367,   385,   383,   202,    74,    13,   225,
     395,   349,   192,   315,    66,   128,    50,   154,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   104
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     7,    21,    39,    40,    41,    62,    70,    71,
      72,    73,   107,   110,   111,   136,   140,    59,    47,    48,
      67,    55,    64,    50,    51,    52,    53,    54,    61,     0,
      41,    72,   111,     6,    41,   112,   143,   144,    41,   113,
      42,     3,    23,    24,    25,    26,    56,    74,   108,   109,
     141,   142,    41,   136,   136,   136,   136,   136,   136,   136,
      55,    65,    57,    59,    44,   145,    57,    67,    65,    41,
      41,    41,    41,    29,    59,    74,     5,    39,    40,    41,
      62,   129,   137,   142,   136,   136,   136,   136,   136,   136,
      67,    47,    48,    49,    58,   138,   139,    44,   146,    65,
      56,    58,   138,    22,    55,     7,   109,    65,    50,    51,
      52,    53,    54,    61,    56,    63,    63,    63,    63,    63,
      63,    42,    43,    41,    41,    41,    55,    58,    59,    65,
      56,    45,    59,    55,    58,    41,   112,    10,    20,    34,
      41,    80,    81,    82,    83,    86,    87,    88,    95,    96,
      99,   100,   101,   103,    55,    39,    40,   137,   137,   137,
     137,   137,   137,    67,    67,     8,     9,    10,    19,    41,
      96,   114,   115,   117,   118,   119,   122,   131,    55,   139,
      46,    59,   114,    55,    39,    40,    41,    57,    89,   104,
     105,    41,    57,    80,    32,    57,    60,    65,    31,    75,
      81,    28,    59,     6,   143,   137,   137,   137,   137,   137,
     137,    59,    47,    48,   132,   137,    57,    57,    65,   115,
     117,    68,   114,     9,   116,   114,   104,    50,    51,    52,
      53,    54,    61,    62,    63,    65,    66,   106,    33,    32,
     131,    35,   104,    41,    58,    84,    85,    41,    64,    76,
      77,    78,    79,    30,    23,    24,    25,    26,   102,    41,
     101,    65,    56,    63,    63,    63,    63,    63,    63,    41,
     103,   135,    41,   133,   134,    68,    62,   123,   128,   120,
     128,    64,    56,   115,    39,    40,    41,    62,   136,    56,
     116,    58,   104,   104,   104,   104,   104,   104,    64,    64,
      65,   104,    80,    90,   104,    68,   105,    58,    59,    57,
     137,     7,    67,    59,    65,    59,   137,    58,   124,    58,
     121,   136,    56,    50,    51,    52,    53,    54,    61,    68,
      56,    18,    30,    91,    94,    35,   128,    85,    58,    84,
     103,    64,   134,    11,    12,    13,    14,    15,    16,   130,
      55,    55,   105,    10,   104,    68,    58,   136,   129,   114,
     114,    33,    38,   103,    63,    56,    56,    80,    36,    58,
      18,   125,    17,    91,    92,    93,   104,    55,    57,    33,
      37,   114,   128,    80,    30,    80,    97,    98,    56,    58,
      94,    20,    98,    55,   114,    56,    17,   125,   126,   127,
      55,   114,    56
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    69,    70,    70,    70,    71,    71,    72,    72,    73,
      73,    74,    75,    75,    75,    75,    76,    77,    78,    79,
      80,    80,    80,    81,    81,    81,    81,    82,    82,    83,
      83,    84,    84,    85,    86,    86,    87,    87,    87,    88,
      89,    90,    90,    91,    92,    92,    93,    94,    95,    96,
      97,    97,    98,    99,   100,   100,   101,   102,   102,   102,
     102,   103,   104,   104,   104,   104,   104,   104,   104,   104,
     104,   104,   105,   106,   106,   106,   106,   106,   106,   107,
     108,   108,   109,   109,   109,   109,   110,   110,   111,   111,
     112,   112,   113,   113,   114,   114,   114,   115,   116,   117,
     117,   117,   118,   118,   118,   119,   120,   121,    96,   122,
     123,   124,   124,   125,   125,   126,   126,   127,   128,   129,
     129,   129,   130,   130,   130,   130,   130,   130,   131,   131,
     132,   132,   133,   133,   134,   134,   135,   135,   103,   103,
     136,   136,   136,   136,   136,   136,   136,   136,   136,   137,
     137,   137,   137,   137,   137,   137,   137,   137,   138,   138,
     139,   139,   139,   140,   140,   140,   140,   141,   141,   142,
     129,   143,   112,   112,   144,   145,   146
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     2,     1,     1,     1,     4,
       3,     7,     2,     2,     2,     2,     0,     0,     0,     0,
       2,     1,     0,     1,     1,     1,     1,     1,     1,     4,
       3,     3,     1,     1,     6,     5,     1,     1,     1,     2,
       3,     2,     2,     5,     1,     1,     4,     2,     4,    11,
       2,     1,     2,     3,     3,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     1,     2,     2,     1,     2,     6,
       3,     1,     2,     2,     2,     2,     2,     1,     3,     3,
       8,     7,     8,     7,     2,     1,     0,     3,     3,     2,
       1,     1,     1,     1,     1,     3,     2,     4,    11,     3,
       2,     5,     4,     8,     0,     1,     1,     4,     5,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     4,
       2,     2,     3,     1,     1,     4,     3,     1,     1,     4,
       1,     1,     1,     5,     5,     5,     5,     5,     5,     1,
       1,     1,     5,     5,     5,     5,     5,     5,     3,     1,
       2,     2,     2,     5,     3,     1,     2,     2,     1,     4,
       5,     5,     4,     5,     6,     3,     3
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
        case 33:
#line 83 "parser.y" /* yacc.c:1646  */
    {printf ("Parametro ENVIADO: %s  \n", (yyvsp[0].texto)); }
#line 1577 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 132 "parser.y" /* yacc.c:1646  */
    {printf ("Variable %s \n", (yyvsp[0].texto)); insertar_diccionario(&diccionario, (yyvsp[0].texto), 0);}
#line 1583 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 140 "parser.y" /* yacc.c:1646  */
    {printf("Variable %s = %d \n",(yyvsp[-2].texto), (yyvsp[0].valor_entero)); ENTRADA * entrada = buscar_diccionario(&diccionario,(yyvsp[-2].texto));
                              if (entrada != NULL) { /* encontrada */
                                 insertar_diccionario(&diccionario, (yyvsp[-2].texto), (yyvsp[0].valor_entero));
                              }
                              else {
                                 printf("ERROR: variable %s no definida\n", (yyvsp[-2].texto));

                              }
                            }
#line 1597 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 150 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (int) (yyvsp[0].valor_real); }
#line 1603 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 151 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_entero) =  (yyvsp[0].valor_entero); }
#line 1609 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 152 "parser.y" /* yacc.c:1646  */
    { ENTRADA * entrada = buscar_diccionario(&diccionario,(yyvsp[0].texto));
                              if (entrada != NULL) {
                                 (yyval.valor_entero) = entrada->valor;
                              }
                              else {
                                 printf("ERROR: variable %s no definida\n", (yyvsp[0].texto));
                                 (yyval.valor_entero) = 0;
                              }
                            }
#line 1623 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 161 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (yyvsp[-2].valor_entero) + (yyvsp[0].valor_entero); }
#line 1629 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 162 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (yyvsp[-2].valor_entero) - (yyvsp[0].valor_entero); }
#line 1635 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 163 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (yyvsp[-2].valor_entero) * (yyvsp[0].valor_entero); }
#line 1641 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 164 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (yyvsp[-2].valor_entero) / (yyvsp[0].valor_entero); }
#line 1647 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 165 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = pow((yyvsp[-2].valor_entero),(yyvsp[0].valor_entero)); }
#line 1653 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 166 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (int)(yyvsp[-2].valor_entero) % (int)(yyvsp[0].valor_entero); }
#line 1659 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 167 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (int) (yyvsp[-1].valor_entero); }
#line 1665 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 186 "parser.y" /* yacc.c:1646  */
    {printf ("Parametro de tipo entero: %s  \n", (yyvsp[0].texto)); }
#line 1671 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 187 "parser.y" /* yacc.c:1646  */
    {printf ("Parametro de tipo decimal: %s  \n", (yyvsp[0].texto)); }
#line 1677 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 188 "parser.y" /* yacc.c:1646  */
    {printf ("Parametro de tipo cadena: %s  \n", (yyvsp[0].texto)); }
#line 1683 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 189 "parser.y" /* yacc.c:1646  */
    {printf ("Parametro de tipo booleano: %s  \n", (yyvsp[0].texto)); }
#line 1689 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 197 "parser.y" /* yacc.c:1646  */
    {printf ("Nombre de la funcion: %s  \n", (yyvsp[0].texto)); }
#line 1695 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 198 "parser.y" /* yacc.c:1646  */
    {printf ("Nombre de la funcion: %s  \n", (yyvsp[0].texto)); }
#line 1701 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 200 "parser.y" /* yacc.c:1646  */
    {(yyval.texto)= (yyvsp[-7].texto); }
#line 1707 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 204 "parser.y" /* yacc.c:1646  */
    {(yyval.texto)= (yyvsp[-7].texto); }
#line 1713 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 211 "parser.y" /* yacc.c:1646  */
    {printf ("Retorno Entero: %d  \n", (yyvsp[-1].valor_entero)); }
#line 1719 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 214 "parser.y" /* yacc.c:1646  */
    {printf ("Retorno Decimal: %f  \n", (yyvsp[-1].valor_real)); }
#line 1725 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 261 "parser.y" /* yacc.c:1646  */
    { ENTRADA * entrada = buscar_diccionario(&diccionario,(yyvsp[-3].texto));
                              if (entrada != NULL) { /* encontrada */
                                 insertar_diccionario(&diccionario, (yyvsp[-3].texto), (yyvsp[0].valor_real));
                              }
                              else {
                                 printf("ERROR: variable %s no definida\n", (yyvsp[-3].texto));

                              }
                            }
#line 1739 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 277 "parser.y" /* yacc.c:1646  */
    {printf ("Variable %s \n", (yyvsp[0].texto)); insertar_diccionario(&diccionario, (yyvsp[0].texto), 0);}
#line 1745 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 278 "parser.y" /* yacc.c:1646  */
    {printf("Variable %s = %f \n",(yyvsp[-3].texto), (yyvsp[0].valor_real));insertar_diccionario(&diccionario, (yyvsp[-3].texto), (yyvsp[0].valor_real));}
#line 1751 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 284 "parser.y" /* yacc.c:1646  */
    {printf ("Variable %s \n", (yyvsp[0].texto)); insertar_diccionario(&diccionario, (yyvsp[0].texto), 0);}
#line 1757 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 285 "parser.y" /* yacc.c:1646  */
    {printf("Variable %s = %d \n",(yyvsp[-3].texto), (yyvsp[0].valor_entero));insertar_diccionario(&diccionario, (yyvsp[-3].texto), (yyvsp[0].valor_entero));}
#line 1763 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 287 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_real) = (yyvsp[0].valor_real); }
#line 1769 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 288 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_real) = (double) (yyvsp[0].valor_entero); }
#line 1775 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 289 "parser.y" /* yacc.c:1646  */
    { ENTRADA * entrada = buscar_diccionario(&diccionario,(yyvsp[0].texto));
                              if (entrada != NULL) { /* encontrada */
                                 (yyval.valor_real) = entrada->valor;
                              }
                              else {
                                 printf("ERROR: variable %s no definida\n", (yyvsp[0].texto));
                                 (yyval.valor_real) = 0;
                              }
                            }
#line 1789 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 298 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_real) = (yyvsp[-2].valor_real) + (yyvsp[-1].valor_real); }
#line 1795 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 299 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_real) = (yyvsp[-2].valor_real) - (yyvsp[-1].valor_real); }
#line 1801 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 300 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_real) = (yyvsp[-2].valor_real) * (yyvsp[-1].valor_real); }
#line 1807 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 301 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_real) = (yyvsp[-2].valor_real) / (yyvsp[-1].valor_real); }
#line 1813 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 302 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_real) = pow((yyvsp[-2].valor_real),(yyvsp[-1].valor_real)); }
#line 1819 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 303 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_real) = (int)(yyvsp[-2].valor_real) % (int)(yyvsp[-1].valor_real); }
#line 1825 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 305 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (int)(yyvsp[0].valor_real); }
#line 1831 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 306 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_entero) =  (yyvsp[0].valor_entero); }
#line 1837 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 307 "parser.y" /* yacc.c:1646  */
    { ENTRADA * entrada = buscar_diccionario(&diccionario,(yyvsp[0].texto));
                              if (entrada != NULL) { /* encontrada */
                                 (yyval.valor_entero) = entrada->valor;
                              }
                              else {
                                 printf("ERROR: variable %s no definida\n", (yyvsp[0].texto));
                                 (yyval.valor_entero) = 0;
                              }
                            }
#line 1851 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 316 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (yyvsp[-2].valor_entero) + (yyvsp[-1].valor_entero); }
#line 1857 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 317 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (yyvsp[-2].valor_entero) - (yyvsp[-1].valor_entero); }
#line 1863 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 318 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (yyvsp[-2].valor_entero) * (yyvsp[-1].valor_entero); }
#line 1869 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 319 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (yyvsp[-2].valor_entero) / (yyvsp[-1].valor_entero); }
#line 1875 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 320 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = pow((yyvsp[-2].valor_entero),(yyvsp[-1].valor_entero)); }
#line 1881 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 321 "parser.y" /* yacc.c:1646  */
    { (yyval.valor_entero) = (int)(yyvsp[-2].valor_entero) % (int)(yyvsp[-1].valor_entero); }
#line 1887 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 326 "parser.y" /* yacc.c:1646  */
    {printf ("Parametro de tipo entero: %s  \n", (yyvsp[0].texto)); }
#line 1893 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 327 "parser.y" /* yacc.c:1646  */
    {printf ("Parametro de tipo decimal: %s  \n", (yyvsp[0].texto)); }
#line 1899 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 328 "parser.y" /* yacc.c:1646  */
    {printf ("Parametro de tipo booleano: %s  \n", (yyvsp[0].texto)); }
#line 1905 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 331 "parser.y" /* yacc.c:1646  */
    {printf ("Nombre de la clase: %s  \n\n", (yyvsp[-4].texto)); }
#line 1911 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 332 "parser.y" /* yacc.c:1646  */
    {printf ("resultado: %s\n", (yyvsp[-2].texto)); }
#line 1917 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 333 "parser.y" /* yacc.c:1646  */
    { printf ("resultado: %f\n", (yyvsp[0].valor_real)); }
#line 1923 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 334 "parser.y" /* yacc.c:1646  */
    { yyerrok;}
#line 1929 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 343 "parser.y" /* yacc.c:1646  */
    {printf ("Nombre del Principal: %s\n", (yyvsp[-1].texto));
			FILE* archivo= NULL;archivo = fopen("archivo1.txt","a+"); 
			char* nom = (yyvsp[-1].texto);fputs(nom,archivo);
			fputs(",",archivo);fclose(archivo);}
#line 1938 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 348 "parser.y" /* yacc.c:1646  */
    {(yyval.texto)=(yyvsp[-1].texto); }
#line 1944 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 351 "parser.y" /* yacc.c:1646  */
    {printf ("Nombre del archivo: %s \nTipo de archivo: %s\n", (yyvsp[-3].texto),(yyvsp[-2].texto));
			FILE* archivo= NULL;archivo = fopen("archivo1.txt","a+"); 
			char* nom = (yyvsp[-3].texto);fputs(nom,archivo);
			fputs(",",archivo);fclose(archivo);
		}
#line 1954 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 356 "parser.y" /* yacc.c:1646  */
    {printf ("Nombre del archivo: %s \nTipo de archivo: %s\n", (yyvsp[-4].texto),(yyvsp[-2].texto));
			FILE* archivo= NULL;archivo = fopen("archivo1.txt","a+"); 
			char* nom = (yyvsp[-4].texto);fputs(nom,archivo);
			fputs(",",archivo);fclose(archivo);
		}
#line 1964 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 363 "parser.y" /* yacc.c:1646  */
    {(yyval.texto)=(yyvsp[-2].texto);}
#line 1970 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 365 "parser.y" /* yacc.c:1646  */
    {(yyval.texto)=(yyvsp[0].texto);}
#line 1976 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 367 "parser.y" /* yacc.c:1646  */
    {(yyval.texto)=(yyvsp[0].texto);}
#line 1982 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 1986 "parser.tab.c" /* yacc.c:1646  */
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
#line 371 "parser.y" /* yacc.c:1906  */

int main(int argc, char** argv) {
FILE *pf;
pf = fopen("archivo1.txt","w"); 
fclose(pf);
     if (argc>1)
	yyin=fopen(argv[1],"rt");
    else
	yyin=stdin;
    inicializar_diccionario(&diccionario);
    yyparse();
    
}

yyerror (char *s) { printf ("%s\n", s);  }

int yywrap()  { return 1; }
