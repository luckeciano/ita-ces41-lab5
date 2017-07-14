/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     DOLAR = 258,
     CALL = 259,
     CHAR = 260,
     ELSE = 261,
     FALSE = 262,
     FLOAT = 263,
     FOR = 264,
     FUNCTION = 265,
     IF = 266,
     INT = 267,
     LOGIC = 268,
     PROCEDURE = 269,
     PROGRAM = 270,
     READ = 271,
     REPEAT = 272,
     RETURN = 273,
     TRUE = 274,
     VAR = 275,
     WHILE = 276,
     WRITE = 277,
     ID = 278,
     CHARCT = 279,
     STRING = 280,
     INTCT = 281,
     FLOATCT = 282,
     OR = 283,
     AND = 284,
     NOT = 285,
     NEG = 286,
     RELOP = 287,
     ADOP = 288,
     MULTOP = 289,
     OPPAR = 290,
     CLPAR = 291,
     OPBRAK = 292,
     CLBRAK = 293,
     OPBRACE = 294,
     CLBRACE = 295,
     SCOLON = 296,
     COMMA = 297,
     ASSIGN = 298,
     INVAL = 299
   };
#endif
/* Tokens.  */
#define DOLAR 258
#define CALL 259
#define CHAR 260
#define ELSE 261
#define FALSE 262
#define FLOAT 263
#define FOR 264
#define FUNCTION 265
#define IF 266
#define INT 267
#define LOGIC 268
#define PROCEDURE 269
#define PROGRAM 270
#define READ 271
#define REPEAT 272
#define RETURN 273
#define TRUE 274
#define VAR 275
#define WHILE 276
#define WRITE 277
#define ID 278
#define CHARCT 279
#define STRING 280
#define INTCT 281
#define FLOATCT 282
#define OR 283
#define AND 284
#define NOT 285
#define NEG 286
#define RELOP 287
#define ADOP 288
#define MULTOP 289
#define OPPAR 290
#define CLPAR 291
#define OPBRAK 292
#define CLBRAK 293
#define OPBRACE 294
#define CLBRACE 295
#define SCOLON 296
#define COMMA 297
#define ASSIGN 298
#define INVAL 299




/* Copy the first part of user declarations.  */
#line 1 "lab5.y"

/* Inclusao de arquivos da biblioteca de C */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Definicao dos atributos dos atomos operadores */

#define 	LT 		1
#define 	LE 		2
#define		GT		3
#define		GE		4
#define		EQ		5
#define		NE		6
#define 	ADD		7
#define		SUB 	8
#define 	MULT	9
#define 	DIV		10
#define 	MOD		11

/*   Definicao dos tipos de identificadores   */

#define 	IDGLOB		1
#define 	IDVAR		2
#define		IDFUNC		3
#define		IDPROC		4
#define		IDPROG		5

/*	Definicao dos tipos de passagem de parametros */

#define		PARAMVAL	1
#define		PARAMREF	2

/*  Definicao dos tipos de variaveis   */

#define 	NAOVAR		0
#define 	INTEIRO		1
#define 	LOGICO		2
#define 	REAL		3
#define 	CARACTERE	4

/* Definicao de constantes para os operadores de quadruplas */

#define		OPOR			1
#define		OPAND	 		2
#define 	OPLT	 		3
#define 	OPLE	 		4
#define		OPGT		    5
#define		OPGE			6
#define		OPEQ			7
#define		OPNE			8
#define		OPMAIS		    9
#define		OPMENOS		    10
#define		OPMULTIP		11
#define		OPDIV			12
#define		OPRESTO		    13
#define		OPMENUN		    14
#define		OPNOT			15
#define		OPATRIB		    16
#define		OPENMOD		    17
#define		NOP			    18
#define		OPJUMP		    19
#define		OPJF			20
#define		PARAM			21
#define		OPREAD		    22
#define		OPWRITE		    23
#define		OPRETURN		24
#define     OPIND           25
#define     OPINDEX         26
#define     OPATRIBPONT     27
#define     OPCONTAPONT     28
#define 	OPCALL			29

/* Definicao de constantes para os tipos de operandos de quadruplas */

#define		IDLEOPND		0
#define		VAROPND		    1
#define		INTOPND		    2
#define		REALOPND		3
#define		CHAROPND		4
#define		LOGICOPND	    5
#define		CADOPND		    6
#define		ROTOPND		    7
#define		MODOPND		    8
#define		FUNCOPND		9

/*   Definicao de outras constantes   */

#define	NCLASSHASH	23
#define	VERDADE		1
#define	FALSO		0
#define MAXDIMS     10

/*  Strings para nomes dos tipos de identificadores  */

char *nometipid[6] = {" ", "IDGLOB", "IDVAR", "IDFUNC", "IDPROC"};

/*  Strings para nomes dos tipos de variaveis  */

char *nometipvar[5] = {"NAOVAR",
	"INTEIRO", "LOGICO", "REAL", "CARACTERE"
};

/* Strings para operadores de quadruplas */

char *nomeoperquad[30] = {"",
	"OR", "AND", "LT", "LE", "GT", "GE", "EQ", "NE", "MAIS",
	"MENOS", "MULT", "DIV", "RESTO", "MENUN", "NOT", "ATRIB",
	"OPENMOD", "NOP", "JUMP", "JF", "PARAM", "READ", "WRITE", "RETURN", "IND", "INDEX", "ATRIBPONT", "CONTAPONT", "CALL"
};

/*	Strings para tipos de operandos de quadruplas */

char *nometipoopndquad[10] = {"IDLE",
	"VAR", "INT", "REAL", "CARAC", "LOGIC", "CADEIA", "ROTULO", "MODULO", "FUNCTION"
};

/*    Declaracoes para a tabela de simbolos     */

typedef struct celsimb celsimb;
typedef celsimb *simbolo;

/* Listas de simbolos */
typedef struct elemlistsimb elemlistsimb;
typedef elemlistsimb *pontelemlistsimb;
typedef elemlistsimb *listsimb;

struct elemlistsimb {
	simbolo simb; 
	pontelemlistsimb prox;
};



struct celsimb {
	char *cadeia;
	int tid, tvar, tparam, ndims, dims[MAXDIMS + 1], nparam;
	char inic, ref, array, param;
	listsimb listparam, listfunc, listvardecl;
	simbolo escopo, prox;
};

/* Declaração para lista de expressões */

typedef struct infolistexpr infolistexpr;
typedef struct pontexprtipo pontexprtipo;
struct pontexprtipo {
	pontexprtipo* prox;
	int tipo;
};

struct infolistexpr { 
	pontexprtipo* listtipo;  
	int nargs; 
};

/*  Variaveis globais para a tabela de simbolos e analise semantica */

simbolo tabsimb[NCLASSHASH];
simbolo simb, escopo;
int tipocorrente;
int tab = 0;
int declparam;
listsimb pontvardecl = NULL, pontfunc = NULL, pontparam = NULL;
/* Prototipos das funcoes para a tabela de simbolos e analise semantica */

void InicTabSimb (void);
void ImprimeTabSimb (void);
simbolo InsereSimb (char *, int, int, simbolo);
int hash (char *);
simbolo ProcuraSimb (char *, simbolo);
simbolo ProcuraSimbDecl (char *, simbolo);
void DeclaracaoRepetida (char *);
void TipoInadequado (char *);
void NaoDeclarado (char *);
void VerificaInicRef (void);
void Incompatibilidade (char *);
void Esperado (char *);
void NaoEsperado (char *);
void ChecArgumentos (pontexprtipo*, listsimb);
pontexprtipo* InicListTipo (int);
void InsereListSimb (simbolo, listsimb*);


/* Declaracoes para a estrutura do codigo intermediario */
typedef union atribopnd atribopnd;
typedef struct operando operando;
typedef struct celquad celquad;
typedef celquad *quadrupla;
typedef struct celmodhead celmodhead;
typedef celmodhead *modhead;

union atribopnd {
	simbolo simb; int valint; float valfloat;
	char valchar; char vallogic; char *valcad;
	listsimb func;
	quadrupla rotulo; modhead modulo;
};

struct operando {
	int tipo; atribopnd atr;
};

struct celquad {
	int num, oper; operando opnd1, opnd2, result;
	quadrupla prox;
};

struct celmodhead {
	simbolo modname; modhead prox;
   int modtip;
	quadrupla listquad;
};

/* Variaveis globais para o codigo intermediario */

quadrupla quadcorrente, quadaux, quadaux2;
modhead codintermed, modcorrente;
int oper, numquadcorrente;
operando opnd1, opnd2, result, opndaux;
int numtemp;
const operando opndidle = {IDLEOPND, 0};

/* Prototipos das funcoes para o codigo intermediario */

void InicCodIntermed (void);
void InicCodIntermMod (simbolo);
void ImprimeQuadruplas (void);
quadrupla GeraQuadrupla (int, operando, operando, operando);
simbolo NovaTemp (int);
void RenumQuadruplas (quadrupla, quadrupla);

/* Declaracoes para atributos das expressoes e variaveis */

typedef struct infoexpressao infoexpressao;
struct infoexpressao {
	int tipo;
	operando opnd;
};

typedef struct infovariavel infovariavel;
struct infovariavel {
	simbolo simb;
	operando opnd,varindex;
};


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

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 251 "lab5.y"
{
	char string[50];
	int valint, atr;
	float valfloat;
	char carac;
	simbolo simb;
	int tipoexpr;
	int nsubscr, nargs;
	infolistexpr infolexpr;
	infoexpressao infoexpr;
	infovariavel infovar;
	quadrupla quad;
}
/* Line 193 of yacc.c.  */
#line 446 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 459 "y.tab.c"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
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
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   193

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  120
/* YYNRULES -- Number of rules.  */
#define YYNRULES  166
/* YYNRULES -- Number of states.  */
#define YYNSTATES  257

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   299

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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     5,    14,    15,    16,    20,    22,
      25,    26,    31,    33,    35,    37,    39,    41,    42,    47,
      48,    52,    53,    56,    60,    61,    64,    68,    69,    72,
      74,    75,    76,    85,    86,    87,    97,    98,    99,   107,
     108,   109,   118,   120,   121,   126,   129,   130,   135,   136,
     139,   141,   142,   145,   146,   149,   150,   153,   154,   157,
     158,   161,   162,   165,   166,   169,   170,   173,   174,   177,
     178,   181,   182,   183,   184,   185,   186,   198,   199,   200,
     201,   206,   207,   208,   209,   210,   220,   221,   222,   223,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   268,   269,   270,   278,   280,   281,   286,   287,   288,
     296,   298,   299,   304,   306,   308,   314,   315,   323,   326,
     327,   332,   333,   334,   341,   343,   344,   349,   351,   352,
     357,   359,   360,   365,   367,   368,   372,   374,   375,   380,
     382,   383,   388,   390,   391,   396,   398,   400,   402,   404,
     406,   408,   409,   413,   414,   419,   421,   422,   426,   427,
     430,   431,   436,   437,   438,   445,   446
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      46,     0,    -1,    -1,    -1,    47,    15,    23,    41,    48,
      49,    61,    78,    -1,    -1,    -1,    20,    50,    51,    -1,
      52,    -1,    51,    52,    -1,    -1,    53,    54,    55,    41,
      -1,    12,    -1,     8,    -1,     5,    -1,    13,    -1,    57,
      -1,    -1,    55,    42,    56,    57,    -1,    -1,    23,    58,
      59,    -1,    -1,    59,    60,    -1,    37,    26,    38,    -1,
      -1,    61,    62,    -1,    63,    49,    78,    -1,    -1,    64,
      65,    -1,    70,    -1,    -1,    -1,    10,    54,    23,    35,
      66,    36,    67,    41,    -1,    -1,    -1,    10,    54,    23,
      35,    68,    75,    36,    69,    41,    -1,    -1,    -1,    14,
      23,    35,    71,    36,    72,    41,    -1,    -1,    -1,    14,
      23,    35,    73,    75,    36,    74,    41,    -1,    77,    -1,
      -1,    75,    42,    76,    77,    -1,    54,    23,    -1,    -1,
      39,    79,    80,    40,    -1,    -1,    80,    81,    -1,    78,
      -1,    -1,    82,    92,    -1,    -1,    83,   101,    -1,    -1,
      84,   106,    -1,    -1,    85,   110,    -1,    -1,    86,   121,
      -1,    -1,    87,   126,    -1,    -1,    88,   136,    -1,    -1,
      89,   132,    -1,    -1,    90,   134,    -1,    -1,    91,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    11,    35,    93,   141,
      36,    94,    95,    96,    81,    97,    98,    -1,    -1,    -1,
      -1,     6,    99,   100,    81,    -1,    -1,    -1,    -1,    -1,
      21,    35,   102,   141,    36,   103,   104,   105,    81,    -1,
      -1,    -1,    -1,    17,   107,    81,    21,    35,   108,   141,
      36,    41,   109,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     9,    35,   111,   156,    43,   112,
     141,    41,   113,   141,   114,    41,   115,   156,    43,   116,
     141,    36,   117,   118,   119,   120,    81,    -1,    -1,    -1,
      16,    35,   122,   124,   123,    36,    41,    -1,   156,    -1,
      -1,   124,    42,   125,   156,    -1,    -1,    -1,    22,    35,
     127,   129,   128,    36,    41,    -1,   131,    -1,    -1,   129,
      42,   130,   131,    -1,    25,    -1,   141,    -1,     4,    23,
      35,    36,    41,    -1,    -1,     4,    23,    35,   133,   164,
      36,    41,    -1,    18,    41,    -1,    -1,    18,   135,   141,
      41,    -1,    -1,    -1,   156,   137,    43,   138,   141,    41,
      -1,   141,    -1,    -1,   139,    42,   140,   141,    -1,   143,
      -1,    -1,   141,    28,   142,   143,    -1,   145,    -1,    -1,
     143,    29,   144,   145,    -1,   147,    -1,    -1,    30,   146,
     147,    -1,   149,    -1,    -1,   149,    32,   148,   149,    -1,
     151,    -1,    -1,   149,    33,   150,   151,    -1,   153,    -1,
      -1,   151,    34,   152,   153,    -1,   156,    -1,    26,    -1,
      27,    -1,    24,    -1,    19,    -1,     7,    -1,    -1,    31,
     154,   153,    -1,    -1,    35,   155,   141,    36,    -1,   161,
      -1,    -1,    23,   157,   158,    -1,    -1,   158,   159,    -1,
      -1,    37,   160,   149,    38,    -1,    -1,    -1,    23,   162,
      35,   163,   164,    36,    -1,    -1,   139,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   324,   324,   335,   324,   343,   344,   344,   349,   350,
     353,   353,   357,   358,   359,   360,   363,   364,   364,   367,
     367,   378,   379,   382,   388,   389,   392,   412,   412,   413,
     416,   416,   416,   423,   433,   423,   439,   439,   439,   450,
     461,   450,   467,   468,   468,   472,   480,   480,   500,   501,
     506,   507,   507,   508,   508,   509,   509,   510,   510,   511,
     511,   512,   512,   513,   513,   514,   514,   515,   515,   518,
     518,   521,   522,   522,   529,   529,   521,   546,   547,   551,
     547,   558,   559,   559,   565,   558,   573,   574,   575,   573,
     584,   585,   590,   598,   602,   608,   614,   615,   616,   621,
     584,   635,   636,   635,   644,   663,   663,   689,   690,   689,
     698,   703,   703,   709,   714,   717,   726,   725,   737,   741,
     741,   747,   748,   747,   764,   767,   767,   776,   777,   777,
     787,   788,   788,   798,   799,   799,   808,   809,   809,   854,
     855,   855,   873,   874,   874,   907,   921,   923,   925,   927,
     929,   931,   931,   941,   941,   945,   947,   947,   980,   981,
     984,   984,   992,   992,   992,  1018,  1019
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "DOLAR", "CALL", "CHAR", "ELSE", "FALSE",
  "FLOAT", "FOR", "FUNCTION", "IF", "INT", "LOGIC", "PROCEDURE", "PROGRAM",
  "READ", "REPEAT", "RETURN", "TRUE", "VAR", "WHILE", "WRITE", "ID",
  "CHARCT", "STRING", "INTCT", "FLOATCT", "OR", "AND", "NOT", "NEG",
  "RELOP", "ADOP", "MULTOP", "OPPAR", "CLPAR", "OPBRAK", "CLBRAK",
  "OPBRACE", "CLBRACE", "SCOLON", "COMMA", "ASSIGN", "INVAL", "$accept",
  "Prog", "@1", "@2", "Decls", "@3", "DeclList", "Declaration", "@4",
  "Type", "ElemList", "@5", "Elem", "@6", "DimList", "Dim", "SubProgs",
  "SubProgDecl", "Header", "@7", "FuncHeader", "@8", "@9", "@10", "@11",
  "ProcHeader", "@12", "@13", "@14", "@15", "ParamList", "@16",
  "Parameter", "CompStat", "@17", "StatList", "Statement", "@18", "@19",
  "@20", "@21", "@22", "@23", "@24", "@25", "@26", "@27", "IfStat", "@28",
  "@29", "@30", "@31", "@32", "ElseStat", "@33", "@34", "WhileStat", "@35",
  "@36", "@37", "@38", "RepeatStat", "@39", "@40", "@41", "ForStat", "@42",
  "@43", "@44", "@45", "@46", "@47", "@48", "@49", "@50", "@51",
  "ReadStat", "@52", "@53", "ReadList", "@54", "WriteStat", "@55", "@56",
  "WriteList", "@57", "WriteElem", "CallStat", "@58", "ReturnStat", "@59",
  "AssignStat", "@60", "@61", "ExprList", "@62", "Expression", "@63",
  "AuxExpr1", "@64", "AuxExpr2", "@65", "AuxExpr3", "@66", "AuxExpr4",
  "@67", "Term", "@68", "Factor", "@69", "@70", "Variable", "@71",
  "SubscrList", "Subscript", "@72", "FuncCall", "@73", "@74", "Arguments", 0
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
     295,   296,   297,   298,   299
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    45,    47,    48,    46,    49,    50,    49,    51,    51,
      53,    52,    54,    54,    54,    54,    55,    56,    55,    58,
      57,    59,    59,    60,    61,    61,    62,    64,    63,    63,
      66,    67,    65,    68,    69,    65,    71,    72,    70,    73,
      74,    70,    75,    76,    75,    77,    79,    78,    80,    80,
      81,    82,    81,    83,    81,    84,    81,    85,    81,    86,
      81,    87,    81,    88,    81,    89,    81,    90,    81,    91,
      81,    93,    94,    95,    96,    97,    92,    98,    99,   100,
      98,   102,   103,   104,   105,   101,   107,   108,   109,   106,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     110,   122,   123,   121,   124,   125,   124,   127,   128,   126,
     129,   130,   129,   131,   131,   132,   133,   132,   134,   135,
     134,   137,   138,   136,   139,   140,   139,   141,   142,   141,
     143,   144,   143,   145,   146,   145,   147,   148,   147,   149,
     150,   149,   151,   152,   151,   153,   153,   153,   153,   153,
     153,   154,   153,   155,   153,   153,   157,   156,   158,   158,
     160,   159,   162,   163,   161,   164,   164
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,     8,     0,     0,     3,     1,     2,
       0,     4,     1,     1,     1,     1,     1,     0,     4,     0,
       3,     0,     2,     3,     0,     2,     3,     0,     2,     1,
       0,     0,     8,     0,     0,     9,     0,     0,     7,     0,
       0,     8,     1,     0,     4,     2,     0,     4,     0,     2,
       1,     0,     2,     0,     2,     0,     2,     0,     2,     0,
       2,     0,     2,     0,     2,     0,     2,     0,     2,     0,
       2,     0,     0,     0,     0,     0,    11,     0,     0,     0,
       4,     0,     0,     0,     0,     9,     0,     0,     0,    10,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      23,     0,     0,     7,     1,     0,     4,     0,     0,     7,
       1,     0,     4,     1,     1,     5,     0,     7,     2,     0,
       4,     0,     0,     6,     1,     0,     4,     1,     0,     4,
       1,     0,     4,     1,     0,     3,     1,     0,     4,     1,
       0,     4,     1,     0,     4,     1,     1,     1,     1,     1,
       1,     0,     3,     0,     4,     1,     0,     3,     0,     2,
       0,     4,     0,     0,     6,     0,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     1,     0,     0,     3,     5,     6,    24,
      10,    27,    10,     8,     0,     0,    46,    25,     5,     0,
      29,     4,     9,    14,    13,    12,    15,     0,     0,    48,
       0,     0,    28,    19,     0,    16,    39,    51,    26,     0,
      21,    11,    17,     0,     0,    47,    50,    49,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    20,
       0,    37,     0,     0,    42,     0,    52,     0,    54,    86,
      56,     0,    58,     0,    60,     0,    62,   156,    64,   121,
       0,    66,   119,    68,    70,    33,     0,    22,    18,     0,
      45,    40,    43,    71,    81,    51,    90,   101,   107,   158,
       0,     0,   118,     0,     0,     0,     0,    38,     0,     0,
       0,     0,     0,     0,     0,     0,   157,   122,   116,   150,
     149,   156,   148,   146,   147,   134,   151,   153,     0,   127,
     130,   133,   136,   139,   142,   145,   155,    31,     0,    23,
      41,    44,     0,     0,     0,     0,   102,   104,   113,   108,
     110,   114,   160,   159,     0,     0,   165,     0,     0,     0,
       0,   128,   120,   131,   137,   140,   143,     0,    34,    72,
      82,    87,    91,   105,     0,   111,     0,     0,     0,   115,
     166,   124,     0,   163,   135,   152,     0,     0,     0,     0,
       0,     0,    32,     0,    73,    83,     0,     0,     0,     0,
       0,     0,     0,   123,   125,     0,   165,   154,   129,   132,
     138,   141,   144,    35,    74,    84,     0,     0,   106,   103,
     112,   109,   161,     0,   117,     0,    51,    51,     0,    92,
     126,   164,    75,    85,    88,     0,    77,    89,    93,    78,
      76,     0,    79,    94,    51,     0,    80,     0,    95,     0,
       0,    96,    97,    98,    99,    51,   100
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     7,     9,    10,    12,    13,    14,    62,
      34,    60,    35,    40,    59,    87,    11,    17,    18,    19,
      32,   104,   167,   105,   193,    20,    43,    89,    44,   108,
      63,   109,    64,    46,    29,    37,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    66,   110,   194,
     214,   226,   236,   240,   242,   244,    68,   111,   195,   215,
     227,    70,    95,   196,   237,    72,   113,   197,   235,   241,
     245,   249,   252,   253,   254,   255,    74,   114,   174,   146,
     198,    76,   115,   176,   149,   200,   150,    81,   156,    83,
     103,    78,   100,   154,   180,   223,   151,   187,   129,   188,
     130,   158,   131,   189,   132,   190,   133,   191,   134,   159,
     160,   135,    99,   116,   153,   177,   136,   157,   206,   182
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -152
static const yytype_int16 yypact[] =
{
    -152,    10,    -9,  -152,     2,     0,  -152,    25,  -152,  -152,
    -152,     4,    14,  -152,    89,    27,  -152,  -152,    25,    64,
    -152,  -152,  -152,  -152,  -152,  -152,  -152,    84,    74,  -152,
      71,    89,  -152,  -152,    29,  -152,    78,    -2,  -152,    92,
    -152,  -152,  -152,    80,    89,  -152,  -152,  -152,   106,    97,
     102,   111,   105,   100,   101,   119,   108,    86,    93,    94,
      84,  -152,   107,     6,  -152,    99,  -152,   103,  -152,  -152,
    -152,   104,  -152,   110,  -152,   112,  -152,  -152,  -152,  -152,
     113,  -152,    88,  -152,  -152,   116,   109,  -152,  -152,   114,
    -152,  -152,  -152,  -152,  -152,    13,  -152,  -152,  -152,  -152,
      98,   118,  -152,    56,   120,    89,   121,  -152,   117,    89,
      56,    56,   122,   101,   101,    42,   123,  -152,   126,  -152,
    -152,   128,  -152,  -152,  -152,  -152,  -152,  -152,     5,   125,
    -152,  -152,    52,   115,  -152,  -152,  -152,  -152,    70,  -152,
    -152,  -152,   -25,    19,   129,   124,   127,  -152,  -152,   130,
    -152,   137,  -152,  -152,    56,   132,    56,   131,    69,    69,
      56,  -152,  -152,  -152,  -152,  -152,  -152,   133,  -152,  -152,
    -152,  -152,  -152,  -152,   134,  -152,   135,    69,    16,  -152,
     136,   137,   139,  -152,  -152,  -152,    53,    56,    56,    69,
      69,    69,  -152,   138,  -152,  -152,    56,    56,   101,   140,
      42,   141,    -6,  -152,  -152,   142,    56,  -152,   125,  -152,
     143,   115,  -152,  -152,  -152,  -152,    75,    23,  -152,  -152,
    -152,  -152,  -152,    56,  -152,   144,    13,    13,   145,  -152,
     137,  -152,  -152,  -152,  -152,    56,   151,  -152,   137,  -152,
    -152,   146,  -152,  -152,    13,   101,  -152,   147,  -152,    56,
      77,  -152,  -152,  -152,  -152,    13,  -152
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -152,  -152,  -152,  -152,   150,  -152,  -152,   165,  -152,    -5,
    -152,  -152,    82,  -152,  -152,  -152,  -152,  -152,  -152,  -152,
    -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,
      35,  -152,    37,    -7,  -152,  -152,   -94,  -152,  -152,  -152,
    -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,
    -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,
    -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,
    -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,
    -152,  -152,  -152,  -152,  -152,  -152,   -52,  -152,  -152,  -152,
    -152,  -152,  -152,  -152,  -152,  -152,   -98,  -152,    -3,  -152,
       1,  -152,    30,  -152,   -99,  -152,     3,  -152,  -151,  -152,
    -152,   -54,  -152,  -152,  -152,  -152,  -152,  -152,  -152,   -21
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -163
static const yytype_int16 yytable[] =
{
      79,   112,   -65,   161,    21,   128,     4,   -57,   185,    27,
       3,   169,   142,   143,   -59,   -55,   -67,   -65,    15,   -53,
     -61,   -63,   -57,    38,    -7,     5,    39,   165,    -7,   -59,
     -55,   -67,   222,   161,   -53,   -61,   -63,    16,    45,   -69,
     212,     6,    91,    16,   161,     8,   162,   161,    92,   119,
      28,   161,    16,    -7,   -69,   170,   178,   203,   181,   145,
     147,   120,   186,   119,   229,   121,   122,   148,   123,   124,
      41,    42,   125,   126,    31,   120,   119,   127,   202,   121,
     122,   161,   123,   124,   164,   165,   125,   126,   120,   207,
     210,   127,   121,   122,    23,   123,   124,    24,   216,   217,
     126,    25,    26,   161,   127,   161,   168,    33,   181,    36,
      16,   228,    92,   251,   -36,    58,    61,    65,    67,    69,
      71,    73,    75,    80,    77,   230,    82,    84,    85,   102,
      90,    86,   232,   233,    93,   106,   101,   238,    94,    96,
     138,   117,    88,   144,   218,    97,   141,    98,   220,   166,
     246,   250,   -30,   118,   163,   107,   137,   239,   140,   139,
     152,   256,   155,  -162,   171,   161,   183,   172,    30,   173,
     199,   201,   175,   179,   192,   205,   165,    22,   204,   213,
     231,   219,   221,   224,   208,   225,   234,   243,   184,   209,
     248,   247,     0,   211
};

static const yytype_int16 yycheck[] =
{
      54,    95,     4,    28,    11,   103,    15,     9,   159,    14,
       0,    36,   110,   111,    16,    17,    18,     4,    14,    21,
      22,    23,     9,    30,    10,    23,    31,    33,    14,    16,
      17,    18,    38,    28,    21,    22,    23,    39,    40,    41,
     191,    41,    36,    39,    28,    20,    41,    28,    42,     7,
      23,    28,    39,    39,    41,    36,   154,    41,   156,   113,
     114,    19,   160,     7,    41,    23,    24,    25,    26,    27,
      41,    42,    30,    31,    10,    19,     7,    35,   177,    23,
      24,    28,    26,    27,    32,    33,    30,    31,    19,    36,
     189,    35,    23,    24,     5,    26,    27,     8,   196,   197,
      31,    12,    13,    28,    35,    28,    36,    23,   206,    35,
      39,    36,    42,    36,    36,    23,    36,    11,    21,    17,
       9,    16,    22,     4,    23,   223,    18,    41,    35,    41,
      23,    37,   226,   227,    35,    26,    23,   235,    35,    35,
     105,    43,    60,    21,   198,    35,   109,    35,   200,    34,
     244,   249,    36,    35,    29,    41,    36,     6,    41,    38,
      37,   255,    36,    35,    35,    28,    35,    43,    18,    42,
      36,    36,    42,    41,    41,    36,    33,    12,    42,    41,
      36,    41,    41,    41,   187,   206,    41,    41,   158,   188,
      43,   245,    -1,   190
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    46,    47,     0,    15,    23,    41,    48,    20,    49,
      50,    61,    51,    52,    53,    14,    39,    62,    63,    64,
      70,    78,    52,     5,     8,    12,    13,    54,    23,    79,
      49,    10,    65,    23,    55,    57,    35,    80,    78,    54,
      58,    41,    42,    71,    73,    40,    78,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    23,    59,
      56,    36,    54,    75,    77,    11,    92,    21,   101,    17,
     106,     9,   110,    16,   121,    22,   126,    23,   136,   156,
       4,   132,    18,   134,    41,    35,    37,    60,    57,    72,
      23,    36,    42,    35,    35,   107,    35,    35,    35,   157,
     137,    23,    41,   135,    66,    68,    26,    41,    74,    76,
      93,   102,    81,   111,   122,   127,   158,    43,    35,     7,
      19,    23,    24,    26,    27,    30,    31,    35,   141,   143,
     145,   147,   149,   151,   153,   156,   161,    36,    75,    38,
      41,    77,   141,   141,    21,   156,   124,   156,    25,   129,
     131,   141,    37,   159,   138,    36,   133,   162,   146,   154,
     155,    28,    41,    29,    32,    33,    34,    67,    36,    36,
      36,    35,    43,    42,   123,    42,   128,   160,   141,    41,
     139,   141,   164,    35,   147,   153,   141,   142,   144,   148,
     150,   152,    41,    69,    94,   103,   108,   112,   125,    36,
     130,    36,   149,    41,    42,    36,   163,    36,   143,   145,
     149,   151,   153,    41,    95,   104,   141,   141,   156,    41,
     131,    41,    38,   140,    41,   164,    96,   105,    36,    41,
     141,    36,    81,    81,    41,   113,    97,   109,   141,     6,
      98,   114,    99,    41,   100,   115,    81,   156,    43,   116,
     141,    36,   117,   118,   119,   120,    81
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
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

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
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
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
#line 324 "lab5.y"
    { InicTabSimb (); InicCodIntermed (); numtemp = 0;
									declparam = FALSO;
									escopo = simb = InsereSimb("global##", IDGLOB, NAOVAR, NULL);
							  		pontvardecl = simb->listvardecl;
									pontfunc = simb->listfunc;
									InicCodIntermMod (simb);
									opnd1.tipo = MODOPND;
						          	opnd1.atr.modulo = modcorrente;
						          	GeraQuadrupla (OPENMOD, opnd1, opndidle, opndidle);

								}
    break;

  case 3:
#line 335 "lab5.y"
    {printf ("program %s ;\n", (yyvsp[(3) - (4)].string));}
    break;

  case 4:
#line 336 "lab5.y"
    { 
		                VerificaInicRef ();
		                ImprimeTabSimb ();
		                ImprimeQuadruplas ();
		            }
    break;

  case 6:
#line 344 "lab5.y"
    {tabular (); printf ("var\n"); tab++;}
    break;

  case 7:
#line 346 "lab5.y"
    {tab--; tabular (); printf ("\n");}
    break;

  case 10:
#line 353 "lab5.y"
    {tabular ();}
    break;

  case 11:
#line 354 "lab5.y"
    {printf(";\n");}
    break;

  case 12:
#line 357 "lab5.y"
    {printf ("int "); tipocorrente = INTEIRO;}
    break;

  case 13:
#line 358 "lab5.y"
    {printf ("float "); tipocorrente = REAL;}
    break;

  case 14:
#line 359 "lab5.y"
    {printf ("char "); tipocorrente = CARACTERE;}
    break;

  case 15:
#line 360 "lab5.y"
    {printf ("logic "); tipocorrente = LOGICO;}
    break;

  case 17:
#line 364 "lab5.y"
    {printf(", ");}
    break;

  case 19:
#line 367 "lab5.y"
    {
	              printf ("%s ", (yyvsp[(1) - (1)].string));
	              if  (ProcuraSimb ((yyvsp[(1) - (1)].string), escopo)  !=  NULL)
                  DeclaracaoRepetida ((yyvsp[(1) - (1)].string));
	              else {
                  simb = InsereSimb ((yyvsp[(1) - (1)].string),  IDVAR,  tipocorrente, escopo);
                  simb->array = FALSO; simb->ndims = 0;
	              }
		          }
    break;

  case 22:
#line 379 "lab5.y"
    {simb->array = VERDADE;}
    break;

  case 23:
#line 382 "lab5.y"
    {
						              printf ("[ %d ] ", (yyvsp[(2) - (3)].valint));
						              if ((yyvsp[(2) - (3)].valint) <= 0) Esperado ("Valor inteiro positivo");
						              simb->ndims++; simb->dims[simb->ndims] = (yyvsp[(2) - (3)].valint);}
    break;

  case 26:
#line 392 "lab5.y"
    {
								if ((yyvsp[(3) - (3)].infoexpr).tipo == NAOVAR) {
									if ((yyvsp[(1) - (3)].infovar).simb->tvar != NAOVAR)
										Incompatibilidade ("Funcao nao void sem retorno");
								} else {
									if ((yyvsp[(1) - (3)].infovar).simb->tvar == INTEIRO && (yyvsp[(3) - (3)].infoexpr).tipo != INTEIRO && (yyvsp[(3) - (3)].infoexpr).tipo != CARACTERE)  
										Incompatibilidade ("Função do tipo inteiro não retorna inteiro ou caractere");
									if ((yyvsp[(1) - (3)].infovar).simb->tvar == REAL && (yyvsp[(3) - (3)].infoexpr).tipo != INTEIRO && (yyvsp[(3) - (3)].infoexpr).tipo != REAL && (yyvsp[(3) - (3)].infoexpr).tipo != CARACTERE)
										Incompatibilidade ("Função do tipo real não retorna real, inteiro ou caractere");
									if ((yyvsp[(1) - (3)].infovar).simb->tvar == CARACTERE && (yyvsp[(3) - (3)].infoexpr).tipo != INTEIRO && (yyvsp[(3) - (3)].infoexpr).tipo != CARACTERE)
										Incompatibilidade ("Função do tipo caractere não retorna inteiro ou caractere");
									if ((yyvsp[(1) - (3)].infovar).simb->tvar == LOGICO && (yyvsp[(3) - (3)].infoexpr).tipo != LOGICO)
										Incompatibilidade ("Função do tipo lógico não retorna tipo lógico");
									if ((yyvsp[(1) - (3)].infovar).simb->tvar == NAOVAR && (yyvsp[(3) - (3)].infoexpr).tipo != NAOVAR)
										Incompatibilidade ("Função do tipo void retornando expressão");
									}	
								escopo = escopo->escopo;
							}
    break;

  case 27:
#line 412 "lab5.y"
    {printf("function ");}
    break;

  case 28:
#line 412 "lab5.y"
    {(yyval.infovar).simb = (yyvsp[(2) - (2)].infovar).simb;}
    break;

  case 29:
#line 413 "lab5.y"
    {(yyval.infovar).simb = (yyvsp[(1) - (1)].infovar).simb;}
    break;

  case 30:
#line 416 "lab5.y"
    {declparam = VERDADE;}
    break;

  case 31:
#line 416 "lab5.y"
    {declparam = FALSO;}
    break;

  case 32:
#line 416 "lab5.y"
    {
								printf ("%s ();\n",(yyvsp[(3) - (8)].string)); (yyval.infovar).simb = simb;
								if  (ProcuraSimb ((yyvsp[(3) - (8)].string), escopo)  !=  NULL)
                  DeclaracaoRepetida ((yyvsp[(3) - (8)].string));
								escopo = simb = InsereSimb ((yyvsp[(3) - (8)].string), IDFUNC, tipocorrente, escopo);
	             				(yyval.simb) = simb;
							}
    break;

  case 33:
#line 423 "lab5.y"
    {
								declparam = VERDADE;
								printf ("%s (",(yyvsp[(3) - (4)].string));
								if  (ProcuraSimb ((yyvsp[(3) - (4)].string), escopo)  !=  NULL)
                  DeclaracaoRepetida ((yyvsp[(3) - (4)].string));
									escopo = simb = InsereSimb ((yyvsp[(3) - (4)].string), IDFUNC, tipocorrente, escopo);
									pontvardecl = simb->listvardecl;
									pontparam = simb->listparam;
									(yyval.simb) = simb;
							}
    break;

  case 34:
#line 433 "lab5.y"
    {declparam = FALSO;}
    break;

  case 35:
#line 434 "lab5.y"
    {printf (");\n");
								(yyval.infovar).simb = simb;
							}
    break;

  case 36:
#line 439 "lab5.y"
    {declparam = VERDADE;}
    break;

  case 37:
#line 439 "lab5.y"
    {declparam = FALSO;}
    break;

  case 38:
#line 439 "lab5.y"
    {
								if  (ProcuraSimb ((yyvsp[(2) - (7)].string), escopo)  !=  NULL)
	                DeclaracaoRepetida ((yyvsp[(2) - (7)].string));
								escopo = simb = InsereSimb ((yyvsp[(2) - (7)].string), IDPROC, NAOVAR, escopo);
								pontvardecl = simb->listvardecl;
								pontparam = simb->listparam;
								(yyval.simb) = simb;
								printf ("procedure %s ();\n",(yyvsp[(2) - (7)].string));
								(yyval.infovar).simb = simb;
							}
    break;

  case 39:
#line 450 "lab5.y"
    {
								printf ("procedure %s (",(yyvsp[(2) - (3)].string)); 
								declparam = VERDADE;
								if  (ProcuraSimb ((yyvsp[(2) - (3)].string), escopo)  !=  NULL)
	                DeclaracaoRepetida ((yyvsp[(2) - (3)].string));
								escopo = simb = InsereSimb ((yyvsp[(2) - (3)].string), IDPROC, NAOVAR, escopo);
								pontvardecl = simb->listvardecl;
								pontparam = simb->listparam;
								(yyval.simb) = simb;
				
							}
    break;

  case 40:
#line 461 "lab5.y"
    {declparam = FALSO;}
    break;

  case 41:
#line 462 "lab5.y"
    {printf (");\n");
								(yyval.infovar).simb = simb;
							}
    break;

  case 43:
#line 468 "lab5.y"
    {printf(", ");}
    break;

  case 45:
#line 472 "lab5.y"
    {printf(" %s",(yyvsp[(2) - (2)].string));
				if  (ProcuraSimb ((yyvsp[(2) - (2)].string), escopo)  !=  NULL) 
	                DeclaracaoRepetida ((yyvsp[(2) - (2)].string));
				else simb = InsereSimb ((yyvsp[(2) - (2)].string), IDVAR, tipocorrente, escopo);
				}
    break;

  case 46:
#line 480 "lab5.y"
    {
							tab--;
							tabular (); 
							printf ("\{\n"); 
							tab++;	
							tab++;
						}
    break;

  case 47:
#line 488 "lab5.y"
    {
							if (quadcorrente->oper != OPRETURN)
	    						GeraQuadrupla (OPRETURN, opndidle, opndidle, opndidle);
							tab--;
							tab--; 
							tabular ();
							 printf ("}\n");
							 tab++;
							 (yyval.infoexpr).tipo = (yyvsp[(3) - (4)].infoexpr).tipo;
						}
    break;

  case 49:
#line 501 "lab5.y"
    {
							(yyval.infoexpr).tipo = (yyvsp[(2) - (2)].infoexpr).tipo;
						}
    break;

  case 50:
#line 506 "lab5.y"
    {(yyval.infoexpr).tipo = (yyvsp[(1) - (1)].infoexpr).tipo;}
    break;

  case 51:
#line 507 "lab5.y"
    {tabular ();}
    break;

  case 52:
#line 507 "lab5.y"
    {(yyval.infoexpr).tipo = NAOVAR;}
    break;

  case 53:
#line 508 "lab5.y"
    {tabular ();}
    break;

  case 54:
#line 508 "lab5.y"
    {(yyval.infoexpr).tipo = NAOVAR;}
    break;

  case 55:
#line 509 "lab5.y"
    {tabular ();}
    break;

  case 56:
#line 509 "lab5.y"
    {(yyval.infoexpr).tipo = NAOVAR;}
    break;

  case 57:
#line 510 "lab5.y"
    {tabular ();}
    break;

  case 58:
#line 510 "lab5.y"
    {(yyval.infoexpr).tipo = NAOVAR;}
    break;

  case 59:
#line 511 "lab5.y"
    {tabular ();}
    break;

  case 60:
#line 511 "lab5.y"
    {(yyval.infoexpr).tipo = NAOVAR;}
    break;

  case 61:
#line 512 "lab5.y"
    {tabular ();}
    break;

  case 62:
#line 512 "lab5.y"
    {(yyval.infoexpr).tipo = NAOVAR;}
    break;

  case 63:
#line 513 "lab5.y"
    {tabular ();}
    break;

  case 64:
#line 513 "lab5.y"
    {(yyval.infoexpr).tipo = NAOVAR;}
    break;

  case 65:
#line 514 "lab5.y"
    {tabular ();}
    break;

  case 66:
#line 514 "lab5.y"
    {(yyval.infoexpr).tipo = NAOVAR;}
    break;

  case 67:
#line 515 "lab5.y"
    {tabular ();}
    break;

  case 68:
#line 515 "lab5.y"
    {
							(yyval.infoexpr).tipo = (yyvsp[(2) - (2)].infoexpr).tipo;
						}
    break;

  case 69:
#line 518 "lab5.y"
    {tabular ();}
    break;

  case 70:
#line 518 "lab5.y"
    {(yyval.infoexpr).tipo = NAOVAR;}
    break;

  case 71:
#line 521 "lab5.y"
    {printf("if (");}
    break;

  case 72:
#line 522 "lab5.y"
    {printf(")\n");}
    break;

  case 73:
#line 522 "lab5.y"
    {
								if ((yyvsp[(4) - (6)].infoexpr).tipo != LOGICO)
                  					Incompatibilidade ("Expressao nao logica/relacional dentro de if");
                 				opndaux.tipo = ROTOPND;
		         				(yyval.quad) = 
									GeraQuadrupla (OPJF, (yyvsp[(4) - (6)].infoexpr).opnd, opndidle, opndaux);
							}
    break;

  case 74:
#line 529 "lab5.y"
    {tab++;}
    break;

  case 75:
#line 529 "lab5.y"
    {tab--; 
								(yyval.quad) = quadcorrente;
								(yyvsp[(7) - (9)].quad)->result.atr.rotulo =
	                       			 GeraQuadrupla (NOP, opndidle, opndidle, opndidle);
							}
    break;

  case 76:
#line 534 "lab5.y"
    {
					           	if ((yyvsp[(10) - (11)].quad)->prox != quadcorrente) {
					                  	quadaux = (yyvsp[(10) - (11)].quad)->prox;
					                        	(yyvsp[(10) - (11)].quad)->prox = quadaux->prox;
					                        	quadaux->prox = (yyvsp[(10) - (11)].quad)->prox->prox;
					                        	(yyvsp[(10) - (11)].quad)->prox->prox = quadaux;
					                        	RenumQuadruplas ((yyvsp[(10) - (11)].quad), quadcorrente);
					         	}
					 		}
    break;

  case 78:
#line 547 "lab5.y"
    {tabular (); printf("else\n");
									 opndaux.tipo = ROTOPND;
									(yyval.quad) = GeraQuadrupla (OPJUMP, opndidle, opndidle, opndaux);
								}
    break;

  case 79:
#line 551 "lab5.y"
    {tab++;}
    break;

  case 80:
#line 551 "lab5.y"
    {tab--;
									(yyvsp[(2) - (4)].quad)->result.atr.rotulo =
								GeraQuadrupla (NOP, opndidle, opndidle, opndidle);	
							}
    break;

  case 81:
#line 558 "lab5.y"
    {printf("while ( "); (yyval.quad) = GeraQuadrupla (NOP, opndidle, opndidle, opndidle);}
    break;

  case 82:
#line 559 "lab5.y"
    {printf(" )\n");}
    break;

  case 83:
#line 559 "lab5.y"
    {
									if ((yyvsp[(4) - (6)].infoexpr).tipo != LOGICO)
		                				Incompatibilidade ("Expressao nao logica/relacional dentro de while");
		                			opndaux.tipo = ROTOPND;
                        			(yyval.quad) = GeraQuadrupla (OPJF, (yyvsp[(4) - (6)].infoexpr).opnd, opndidle, opndaux);
								}
    break;

  case 84:
#line 565 "lab5.y"
    {tab++;}
    break;

  case 85:
#line 565 "lab5.y"
    {tab--;
									opndaux.tipo = ROTOPND;
			                        opndaux.atr.rotulo = (yyvsp[(3) - (9)].quad);
			                        GeraQuadrupla (OPJUMP, opndidle, opndidle, opndaux);
			                        (yyvsp[(7) - (9)].quad)->result.atr.rotulo = GeraQuadrupla (NOP, opndidle, opndidle, opndidle);
								}
    break;

  case 86:
#line 573 "lab5.y"
    {printf("repeat "); (yyval.quad) = GeraQuadrupla (NOP, opndidle, opndidle, opndidle);}
    break;

  case 87:
#line 574 "lab5.y"
    {printf(" while ( ");}
    break;

  case 88:
#line 575 "lab5.y"
    {printf(" );\n");}
    break;

  case 89:
#line 575 "lab5.y"
    {
								if ((yyvsp[(7) - (10)].infoexpr).tipo != LOGICO)
                					Incompatibilidade ("Expressao nao logica/relacional dentro de repeat");
            					opndaux.tipo = ROTOPND;
                    			opndaux.atr.rotulo = (yyvsp[(2) - (10)].quad);
                    			GeraQuadrupla (OPJF, (yyvsp[(7) - (10)].infoexpr).opnd, opndidle, opndaux);
							}
    break;

  case 90:
#line 584 "lab5.y"
    {printf("for ( ");}
    break;

  case 91:
#line 585 "lab5.y"
    {printf(" = "); 
					if ((yyvsp[(4) - (5)].infovar).simb != NULL && ((yyvsp[(4) - (5)].infovar).simb->ndims != 0 || ((yyvsp[(4) - (5)].infovar).simb->tvar != INTEIRO && (yyvsp[(4) - (5)].infovar).simb->tvar != CARACTERE))) {
						Incompatibilidade ("Variavel de inicializacao deve ser escalar do tipo inteiro ou caractere");
					}
				}
    break;

  case 92:
#line 590 "lab5.y"
    {printf("; ");
					if(!((yyvsp[(7) - (8)].infoexpr).tipo==INTEIRO || (yyvsp[(7) - (8)].infoexpr).tipo == CARACTERE))
						Incompatibilidade ("Expressao deve ser escalar do tipo inteiro ou caractere");
					if((yyvsp[(4) - (8)].infovar).simb->array == VERDADE)
						GeraQuadrupla(OPATRIBPONT, (yyvsp[(7) - (8)].infoexpr).opnd, opndidle, (yyvsp[(4) - (8)].infovar).varindex);
					else GeraQuadrupla(OPATRIB, (yyvsp[(7) - (8)].infoexpr).opnd, opndidle, (yyvsp[(4) - (8)].infovar).opnd);
					(yyval.quad) = GeraQuadrupla (NOP, opndidle, opndidle, opndidle);
				}
    break;

  case 93:
#line 598 "lab5.y"
    {
					opndaux.tipo = ROTOPND;
					(yyval.quad) = GeraQuadrupla (OPJF, (yyvsp[(10) - (10)].infoexpr).opnd, opndidle, opndaux);
				}
    break;

  case 94:
#line 602 "lab5.y"
    {printf("; ");
					(yyval.quad) = GeraQuadrupla (NOP, opndidle, opndidle, opndidle);
					if ((yyvsp[(10) - (12)].infoexpr).tipo != LOGICO) {
						Incompatibilidade ("A segunda expressao de um comando for deve ser do tipo logico");
					}
				}
    break;

  case 95:
#line 608 "lab5.y"
    { printf(" = ");
					if ((yyvsp[(4) - (15)].infovar).simb != (yyvsp[(14) - (15)].infovar).simb) {
						Incompatibilidade ("A variavel de atualizacao do comando for deve ser a mesma daquela de sua inicializacao");
					}
				}
    break;

  case 96:
#line 614 "lab5.y"
    { (yyval.quad) = quadcorrente; }
    break;

  case 97:
#line 615 "lab5.y"
    { (yyval.quad) = GeraQuadrupla (NOP, opndidle, opndidle, opndidle); }
    break;

  case 98:
#line 616 "lab5.y"
    {	printf(" )\n");
					if (((yyvsp[(7) - (20)].infoexpr).tipo != INTEIRO && (yyvsp[(7) - (20)].infoexpr).tipo != CARACTERE) || ((yyvsp[(17) - (20)].infoexpr).tipo != INTEIRO && (yyvsp[(17) - (20)].infoexpr).tipo != CARACTERE)) {
						Incompatibilidade ("A primeira e terceira expressao de um comando for deve ser do tipo inteiro ou caractere");
					}
				}
    break;

  case 99:
#line 621 "lab5.y"
    {tab++;}
    break;

  case 100:
#line 621 "lab5.y"
    {tab--;
					quadaux = quadcorrente;
					opndaux.tipo = ROTOPND; opndaux.atr.rotulo = (yyvsp[(9) - (23)].quad);
					quadaux2 = GeraQuadrupla (OPJUMP, opndidle, opndidle, opndaux);
					(yyvsp[(11) - (23)].quad)->result.atr.rotulo = GeraQuadrupla(NOP, opndidle, opndidle, opndidle);

					//---Correção ordem das quádruplas
					(yyvsp[(11) - (23)].quad)->prox = (yyvsp[(20) - (23)].quad);
					quadaux->prox = (yyvsp[(13) - (23)].quad);
					(yyvsp[(19) - (23)].quad)->prox = quadaux2;
					RenumQuadruplas((yyvsp[(11) - (23)].quad),quadcorrente);
				}
    break;

  case 101:
#line 635 "lab5.y"
    {printf("read (");}
    break;

  case 102:
#line 636 "lab5.y"
    {
							opnd1.tipo = INTOPND;
							opnd1.atr.valint = (yyvsp[(4) - (4)].nargs);
							GeraQuadrupla (OPREAD, opnd1, opndidle, opndidle);
						}
    break;

  case 103:
#line 641 "lab5.y"
    {printf(");\n");}
    break;

  case 104:
#line 644 "lab5.y"
    {
					if ((yyvsp[(1) - (1)].infovar).simb != NULL) {
						(yyvsp[(1) - (1)].infovar).simb->inic = (yyvsp[(1) - (1)].infovar).simb->ref = VERDADE;
					}
					(yyval.nargs) = 1;
					if ((yyvsp[(1) - (1)].infovar).simb->array == VERDADE) {
						(yyval.nargs) = 0;
						opnd1.tipo = VAROPND;
						opnd1.atr.simb = NovaTemp ((yyvsp[(1) - (1)].infovar).simb->tvar); 
						GeraQuadrupla (PARAM, opnd1, opndidle, opndidle);
						opndaux.tipo = INTOPND;
						opndaux.atr.valint = 1;
						GeraQuadrupla (OPREAD, opndaux, opndidle, opndidle);
						GeraQuadrupla (OPATRIBPONT, opnd1, opndidle, (yyvsp[(1) - (1)].infovar).varindex);
					}
					else {
						GeraQuadrupla (PARAM, (yyvsp[(1) - (1)].infovar).opnd, opndidle, opndidle);
					}
		        }
    break;

  case 105:
#line 663 "lab5.y"
    {printf (", ");}
    break;

  case 106:
#line 664 "lab5.y"
    {
		            if ((yyvsp[(4) - (4)].infovar).simb != NULL) {
		              (yyvsp[(4) - (4)].infovar).simb->inic = (yyvsp[(4) - (4)].infovar).simb->ref = VERDADE;
		            }
					if ((yyvsp[(4) - (4)].infovar).simb->array == VERDADE) {
						Incompatibilidade ("Aqui!");
						opndaux.tipo = INTOPND;
						opndaux.atr.valint = (yyvsp[(1) - (4)].nargs);
						GeraQuadrupla (OPREAD, opndaux, opndidle, opndidle);
						(yyval.nargs) = 0;
						opnd1.tipo = VAROPND;
						opnd1.atr.simb = NovaTemp ((yyvsp[(4) - (4)].infovar).simb->tvar); 
						GeraQuadrupla (PARAM, opnd1, opndidle, opndidle);
						opndaux.tipo = INTOPND;
						opndaux.atr.valint = 1;
						GeraQuadrupla (OPREAD, opndaux, opndidle, opndidle);
						GeraQuadrupla (OPATRIBPONT, opnd1, opndidle, (yyvsp[(4) - (4)].infovar).varindex);
					}
					else {
						(yyval.nargs) = (yyvsp[(1) - (4)].nargs) + 1;
						GeraQuadrupla (PARAM, (yyvsp[(4) - (4)].infovar).opnd, opndidle, opndidle);
					}
				}
    break;

  case 107:
#line 689 "lab5.y"
    {printf("write (");}
    break;

  case 108:
#line 690 "lab5.y"
    {
							opnd1.tipo = INTOPND;
							opnd1.atr.valint = (yyvsp[(4) - (4)].nargs);
							GeraQuadrupla (OPWRITE, opnd1, opndidle, opndidle);
						}
    break;

  case 109:
#line 695 "lab5.y"
    {printf(");\n");}
    break;

  case 110:
#line 698 "lab5.y"
    {
					(yyval.nargs) = 1;
					GeraQuadrupla (PARAM, (yyvsp[(1) - (1)].infoexpr).opnd, opndidle, opndidle);
				}
    break;

  case 111:
#line 703 "lab5.y"
    {printf(", ");}
    break;

  case 112:
#line 703 "lab5.y"
    {
					(yyval.nargs) = (yyvsp[(1) - (4)].nargs) + 1;
					GeraQuadrupla (PARAM, (yyvsp[(4) - (4)].infoexpr).opnd, opndidle, opndidle);
				}
    break;

  case 113:
#line 709 "lab5.y"
    {printf("%s",(yyvsp[(1) - (1)].string));
					(yyval.infoexpr).opnd.tipo = CADOPND;
					(yyval.infoexpr).opnd.atr.valcad = malloc (strlen((yyvsp[(1) - (1)].string)) + 1);
					strcpy ((yyval.infoexpr).opnd.atr.valcad, (yyvsp[(1) - (1)].string));
				}
    break;

  case 115:
#line 718 "lab5.y"
    {printf ("call %s ();\n",(yyvsp[(2) - (5)].string));
								simb = ProcuraSimb ((yyvsp[(2) - (5)].string), escopo);
								if (! simb) NaoDeclarado ((yyvsp[(2) - (5)].string));
								else if (simb->tid != IDPROC)
									TipoInadequado ((yyvsp[(2) - (5)].string));
								(yyval.simb) = simb;	
							}
    break;

  case 116:
#line 726 "lab5.y"
    {printf ("call %s (",(yyvsp[(2) - (3)].string));
								simb = ProcuraSimb ((yyvsp[(2) - (3)].string), escopo);
								if (! simb) NaoDeclarado ((yyvsp[(2) - (3)].string));
								else if (simb->tid != IDPROC)
									TipoInadequado ((yyvsp[(2) - (3)].string));
								(yyval.simb) = simb;	
							}
    break;

  case 117:
#line 734 "lab5.y"
    {printf (");\n");}
    break;

  case 118:
#line 737 "lab5.y"
    {printf ("return ;\n");
								(yyval.infoexpr).tipo = NAOVAR;
								GeraQuadrupla (OPRETURN, opndidle, opndidle, opndidle);
						}
    break;

  case 119:
#line 741 "lab5.y"
    {printf ("return ");}
    break;

  case 120:
#line 741 "lab5.y"
    {printf (";\n");
								(yyval.infoexpr).tipo = (yyvsp[(3) - (4)].infoexpr).tipo;
								GeraQuadrupla (OPRETURN, (yyvsp[(3) - (4)].infoexpr).opnd, opndidle, opndidle);
						}
    break;

  case 121:
#line 747 "lab5.y"
    {if  ((yyvsp[(1) - (1)].infovar).simb != NULL) (yyvsp[(1) - (1)].infovar).simb->inic = (yyvsp[(1) - (1)].infovar).simb->ref = VERDADE;}
    break;

  case 122:
#line 748 "lab5.y"
    {printf ("= ");}
    break;

  case 123:
#line 748 "lab5.y"
    {
                  printf (";\n");
                  if ((yyvsp[(1) - (6)].infovar).simb != NULL) {
                    if ((((yyvsp[(1) - (6)].infovar).simb->tvar == INTEIRO || (yyvsp[(1) - (6)].infovar).simb->tvar == CARACTERE) &&
                      ((yyvsp[(5) - (6)].infoexpr).tipo == REAL || (yyvsp[(5) - (6)].infoexpr).tipo == LOGICO)) ||
                      ((yyvsp[(1) - (6)].infovar).simb->tvar == REAL && (yyvsp[(5) - (6)].infoexpr).tipo == LOGICO) ||
                      ((yyvsp[(1) - (6)].infovar).simb->tvar == LOGICO && (yyvsp[(5) - (6)].infoexpr).tipo != LOGICO))
                      	Incompatibilidade ("Lado direito de comando de atribuicao improprio");
                    if((yyvsp[(1) - (6)].infovar).simb->array == VERDADE)
                    	GeraQuadrupla(OPATRIBPONT, (yyvsp[(5) - (6)].infoexpr).opnd, opndidle, (yyvsp[(1) - (6)].infovar).varindex);
                    else 
                    	GeraQuadrupla (OPATRIB, (yyvsp[(5) - (6)].infoexpr).opnd, opndidle, (yyvsp[(1) - (6)].infovar).opnd);
                  }
                }
    break;

  case 124:
#line 764 "lab5.y"
    {(yyval.infolexpr).nargs = 1;   (yyval.infolexpr).listtipo = InicListTipo ((yyvsp[(1) - (1)].infoexpr).tipo);
							GeraQuadrupla (PARAM, (yyvsp[(1) - (1)].infoexpr).opnd, opndidle, opndidle);
						}
    break;

  case 125:
#line 767 "lab5.y"
    {printf(", ");}
    break;

  case 126:
#line 767 "lab5.y"
    {
							(yyval.infolexpr).nargs = (yyvsp[(1) - (4)].infolexpr).nargs + 1;
							(yyval.infolexpr).listtipo = 
								ConcatListTipo ((yyvsp[(1) - (4)].infolexpr).listtipo, InicListTipo ((yyvsp[(4) - (4)].infoexpr).tipo));
							GeraQuadrupla (PARAM, (yyvsp[(4) - (4)].infoexpr).opnd, opndidle, opndidle);

						}
    break;

  case 128:
#line 777 "lab5.y"
    {printf ("|| ");}
    break;

  case 129:
#line 777 "lab5.y"
    {
                  if ((yyvsp[(1) - (4)].infoexpr).tipo != LOGICO || (yyvsp[(4) - (4)].infoexpr).tipo != LOGICO)
                    Incompatibilidade ("Operando improprio para operador or");
                  (yyval.infoexpr).tipo = LOGICO;
                  (yyval.infoexpr).opnd.tipo = VAROPND;  
				 (yyval.infoexpr).opnd.atr.simb = NovaTemp ((yyval.infoexpr).tipo);
					GeraQuadrupla (OPOR, (yyvsp[(1) - (4)].infoexpr).opnd, (yyvsp[(4) - (4)].infoexpr).opnd, (yyval.infoexpr).opnd);

                }
    break;

  case 131:
#line 788 "lab5.y"
    {printf ("&& ");}
    break;

  case 132:
#line 788 "lab5.y"
    {
                  if ((yyvsp[(1) - (4)].infoexpr).tipo != LOGICO || (yyvsp[(4) - (4)].infoexpr).tipo != LOGICO)
                    Incompatibilidade ("Operando improprio para operador and");
                  (yyval.infoexpr).tipo = LOGICO;
                  (yyval.infoexpr).opnd.tipo = VAROPND;  
				  (yyval.infoexpr).opnd.atr.simb = NovaTemp ((yyval.infoexpr).tipo);
				  GeraQuadrupla (OPAND, (yyvsp[(1) - (4)].infoexpr).opnd, (yyvsp[(4) - (4)].infoexpr).opnd, (yyval.infoexpr).opnd);

                }
    break;

  case 134:
#line 799 "lab5.y"
    {printf ("! ");}
    break;

  case 135:
#line 799 "lab5.y"
    {
                  if ((yyvsp[(3) - (3)].infoexpr).tipo != LOGICO)
                    Incompatibilidade ("Operando improprio para operador not");
                  (yyval.infoexpr).tipo = LOGICO;
                  (yyval.infoexpr).opnd.tipo = VAROPND;
                  (yyval.infoexpr).opnd.atr.simb = NovaTemp ((yyvsp[(3) - (3)].infoexpr).tipo);
                  GeraQuadrupla (OPNOT, (yyvsp[(3) - (3)].infoexpr).opnd, opndidle, (yyval.infoexpr).opnd);
                }
    break;

  case 137:
#line 809 "lab5.y"
    {
                  switch ((yyvsp[(2) - (2)].atr)) {
                    case LT: printf ("< "); break;
                    case LE: printf ("<= "); break;
                    case EQ: printf ("== "); break;
                    case NE: printf ("!= "); break;
                    case GT: printf ("> "); break;
                    case GE: printf (">= "); break;
                  }
                }
    break;

  case 138:
#line 818 "lab5.y"
    {
                  switch ((yyvsp[(2) - (4)].atr)) {
                    case LT: case LE: case GT: case GE:
                      if ((yyvsp[(1) - (4)].infoexpr).tipo != INTEIRO && (yyvsp[(1) - (4)].infoexpr).tipo != REAL && (yyvsp[(1) - (4)].infoexpr).tipo != CARACTERE || (yyvsp[(4) - (4)].infoexpr).tipo != INTEIRO && (yyvsp[(4) - (4)].infoexpr).tipo != REAL && (yyvsp[(4) - (4)].infoexpr).tipo != CARACTERE)
                        Incompatibilidade	("Operando improprio para operador relacional");
                      break;
                    case EQ: case NE:
                      if (((yyvsp[(1) - (4)].infoexpr).tipo == LOGICO || (yyvsp[(4) - (4)].infoexpr).tipo == LOGICO) && (yyvsp[(1) - (4)].infoexpr).tipo != (yyvsp[(4) - (4)].infoexpr).tipo)
                        Incompatibilidade ("Operando improprio para operador relacional");
                      break;
                  }
                    (yyval.infoexpr).tipo = LOGICO;
                    (yyval.infoexpr).opnd.tipo = VAROPND;
	                (yyval.infoexpr).opnd.atr.simb = NovaTemp ((yyval.infoexpr).tipo);
	                switch ((yyvsp[(2) - (4)].atr)) {
	                    case LT:
	                        GeraQuadrupla (OPLT, (yyvsp[(1) - (4)].infoexpr).opnd, (yyvsp[(4) - (4)].infoexpr).opnd, (yyval.infoexpr).opnd);
	                        break;
	                    case LE:
	                        GeraQuadrupla (OPLE, (yyvsp[(1) - (4)].infoexpr).opnd, (yyvsp[(4) - (4)].infoexpr).opnd, (yyval.infoexpr).opnd);
	                        break;
	                    case GT:
	                        GeraQuadrupla (OPGT, (yyvsp[(1) - (4)].infoexpr).opnd, (yyvsp[(4) - (4)].infoexpr).opnd, (yyval.infoexpr).opnd);
	                        break;
	                    case GE:
	                        GeraQuadrupla (OPGE, (yyvsp[(1) - (4)].infoexpr).opnd, (yyvsp[(4) - (4)].infoexpr).opnd, (yyval.infoexpr).opnd);
	                        break;
	                    case EQ:
	                        GeraQuadrupla (OPEQ, (yyvsp[(1) - (4)].infoexpr).opnd, (yyvsp[(4) - (4)].infoexpr).opnd, (yyval.infoexpr).opnd);
	                        break;
	                    case NE:
	                        GeraQuadrupla (OPNE, (yyvsp[(1) - (4)].infoexpr).opnd, (yyvsp[(4) - (4)].infoexpr).opnd, (yyval.infoexpr).opnd);
	                        break;
	                }
                }
    break;

  case 140:
#line 855 "lab5.y"
    {
		              switch ((yyvsp[(2) - (2)].atr)) {
                    case ADD: printf ("+ "); break;
                    case SUB: printf ("- "); break;
		              }
                }
    break;

  case 141:
#line 860 "lab5.y"
    {
                  if ((yyvsp[(1) - (4)].infoexpr).tipo != INTEIRO && (yyvsp[(1) - (4)].infoexpr).tipo != REAL && (yyvsp[(1) - (4)].infoexpr).tipo != CARACTERE || (yyvsp[(4) - (4)].infoexpr).tipo != INTEIRO && (yyvsp[(4) - (4)].infoexpr).tipo!=REAL && (yyvsp[(4) - (4)].infoexpr).tipo!=CARACTERE)
                      Incompatibilidade ("Operando improprio para operador aritmetico");
                  if ((yyvsp[(1) - (4)].infoexpr).tipo == REAL || (yyvsp[(4) - (4)].infoexpr).tipo == REAL) (yyval.infoexpr).tipo = REAL;
                  else (yyval.infoexpr).tipo = INTEIRO;
                  (yyval.infoexpr).opnd.tipo = VAROPND;
                  (yyval.infoexpr).opnd.atr.simb = NovaTemp ((yyval.infoexpr).tipo);
                  if ((yyvsp[(2) - (4)].atr) == ADD)
                    GeraQuadrupla (OPMAIS, (yyvsp[(1) - (4)].infoexpr).opnd, (yyvsp[(4) - (4)].infoexpr).opnd, (yyval.infoexpr).opnd);
                  else  GeraQuadrupla (OPMENOS, (yyvsp[(1) - (4)].infoexpr).opnd, (yyvsp[(4) - (4)].infoexpr).opnd, (yyval.infoexpr).opnd);
                }
    break;

  case 143:
#line 874 "lab5.y"
    {
          		if ((yyvsp[(2) - (2)].atr) == MULT) printf (" * ");
          		else if ((yyvsp[(2) - (2)].atr) == DIV) printf (" / ");
						else printf (" %% ");
            	}
    break;

  case 144:
#line 879 "lab5.y"
    {
		            switch ((yyvsp[(2) - (4)].atr)) {
		              case MULT: case DIV:
		                if ((yyvsp[(1) - (4)].infoexpr).tipo != INTEIRO && (yyvsp[(1) - (4)].infoexpr).tipo != REAL && (yyvsp[(1) - (4)].infoexpr).tipo != CARACTERE
		                  || (yyvsp[(4) - (4)].infoexpr).tipo != INTEIRO && (yyvsp[(4) - (4)].infoexpr).tipo!=REAL && (yyvsp[(4) - (4)].infoexpr).tipo!=CARACTERE)
		                  Incompatibilidade ("Operando improprio para operador aritmetico");
		                if ((yyvsp[(1) - (4)].infoexpr).tipo == REAL || (yyvsp[(4) - (4)].infoexpr).tipo == REAL) (yyval.infoexpr).tipo = REAL;
		                else (yyval.infoexpr).tipo = INTEIRO;
		                (yyval.infoexpr).opnd.tipo = VAROPND;  
						(yyval.infoexpr).opnd.atr.simb = NovaTemp ((yyval.infoexpr).tipo);
						if ((yyvsp[(2) - (4)].atr) == MULT)  
						    GeraQuadrupla   (OPMULTIP, (yyvsp[(1) - (4)].infoexpr).opnd, (yyvsp[(4) - (4)].infoexpr).opnd, (yyval.infoexpr).opnd);
						else  GeraQuadrupla  (OPDIV, (yyvsp[(1) - (4)].infoexpr).opnd, (yyvsp[(4) - (4)].infoexpr).opnd, (yyval.infoexpr).opnd);     
		                break;
		              case MOD:
		                if ((yyvsp[(1) - (4)].infoexpr).tipo != INTEIRO && (yyvsp[(1) - (4)].infoexpr).tipo != CARACTERE
		                  ||  (yyvsp[(4) - (4)].infoexpr).tipo != INTEIRO && (yyvsp[(4) - (4)].infoexpr).tipo != CARACTERE)
		                  Incompatibilidade ("Operando improprio para operador resto");
		                (yyval.infoexpr).tipo = INTEIRO;
		                (yyval.infoexpr).opnd.tipo = VAROPND;  
						(yyval.infoexpr).opnd.atr.simb = NovaTemp ((yyval.infoexpr).tipo);
						GeraQuadrupla (OPRESTO, (yyvsp[(1) - (4)].infoexpr).opnd, (yyvsp[(4) - (4)].infoexpr).opnd, (yyval.infoexpr).opnd);

		                break;
		            }
              }
    break;

  case 145:
#line 907 "lab5.y"
    {
                    if  ((yyvsp[(1) - (1)].infovar).simb != NULL)  {
                        (yyvsp[(1) - (1)].infovar).simb->ref  =  VERDADE;
                        (yyval.infoexpr).tipo = (yyvsp[(1) - (1)].infovar).simb->tvar;
                        (yyval.infoexpr).opnd = (yyvsp[(1) - (1)].infovar).opnd;

                        if((yyvsp[(1) - (1)].infovar).simb->array == VERDADE){
                        	result.tipo = VAROPND;
                        	result.atr.simb = NovaTemp ((yyvsp[(1) - (1)].infovar).simb->tvar);
                        	GeraQuadrupla(OPCONTAPONT, (yyvsp[(1) - (1)].infovar).varindex, opndidle, result);
                        	(yyval.infoexpr).opnd = result;
                        }
                    }
                }
    break;

  case 146:
#line 921 "lab5.y"
    {printf ("%d ", (yyvsp[(1) - (1)].valint)); (yyval.infoexpr).tipo = INTEIRO; (yyval.infoexpr).opnd.tipo = INTOPND;
						(yyval.infoexpr).opnd.atr.valint = (yyvsp[(1) - (1)].valint);}
    break;

  case 147:
#line 923 "lab5.y"
    {printf ("%g ", (yyvsp[(1) - (1)].valfloat)); (yyval.infoexpr).tipo = REAL; (yyval.infoexpr).opnd.tipo = REALOPND;
						(yyval.infoexpr).opnd.atr.valfloat = (yyvsp[(1) - (1)].valfloat);}
    break;

  case 148:
#line 925 "lab5.y"
    {printf ("\'%c\' ", (yyvsp[(1) - (1)].string)); (yyval.infoexpr).tipo = CARACTERE; (yyval.infoexpr).opnd.tipo = CHAROPND;
						(yyval.infoexpr).opnd.atr.valchar = (yyvsp[(1) - (1)].string);}
    break;

  case 149:
#line 927 "lab5.y"
    {printf ("true "); (yyval.infoexpr).tipo = LOGICO; (yyval.infoexpr).opnd.tipo = LOGICOPND;
						(yyval.infoexpr).opnd.atr.vallogic = 1;}
    break;

  case 150:
#line 929 "lab5.y"
    {printf ("false "); (yyval.infoexpr).tipo = LOGICO; (yyval.infoexpr).opnd.tipo = LOGICOPND;
        			(yyval.infoexpr).opnd.atr.vallogic = 0;}
    break;

  case 151:
#line 931 "lab5.y"
    {printf ("~ ");}
    break;

  case 152:
#line 931 "lab5.y"
    {
                    if ((yyvsp[(3) - (3)].infoexpr).tipo != INTEIRO && (yyvsp[(3) - (3)].infoexpr).tipo != REAL && (yyvsp[(3) - (3)].infoexpr).tipo != CARACTERE)
                        Incompatibilidade  ("Operando improprio para menos unario");
                    if ((yyvsp[(3) - (3)].infoexpr).tipo == REAL) (yyval.infoexpr).tipo = REAL;
                    else (yyval.infoexpr).tipo = INTEIRO;
                    (yyval.infoexpr).opnd.tipo = VAROPND;
					(yyval.infoexpr).opnd.atr.simb = NovaTemp ((yyval.infoexpr).tipo);
          			GeraQuadrupla  (OPMENUN, (yyvsp[(3) - (3)].infoexpr).opnd, opndidle, (yyval.infoexpr).opnd);

            }
    break;

  case 153:
#line 941 "lab5.y"
    {printf ("( ");}
    break;

  case 154:
#line 941 "lab5.y"
    {
                    printf (") "); (yyval.infoexpr).tipo = (yyvsp[(3) - (4)].infoexpr).tipo;
                    (yyval.infoexpr).opnd = (yyvsp[(3) - (4)].infoexpr).opnd;
            }
    break;

  case 156:
#line 947 "lab5.y"
    {
                    printf ("%s ", (yyvsp[(1) - (1)].string));
                    simb = ProcuraSimbDecl ((yyvsp[(1) - (1)].string), escopo);
                    if (simb == NULL)   
                    	NaoDeclarado ((yyvsp[(1) - (1)].string));
                    else if (simb->tid != IDVAR)   
                    	TipoInadequado ((yyvsp[(1) - (1)].string));
                    (yyval.simb) = simb;
                }
    break;

  case 157:
#line 955 "lab5.y"
    {
                    (yyval.infovar).simb = (yyvsp[(2) - (3)].simb);
                    if ((yyval.infovar).simb != NULL) {
                        if ((yyval.infovar).simb->array == FALSO && (yyvsp[(3) - (3)].nsubscr) > 0)
                             NaoEsperado ("Subscrito\(s)");
                        else if ((yyval.infovar).simb->array == VERDADE && (yyvsp[(3) - (3)].nsubscr) == 0)
                                Esperado ("Subscrito\(s)");
                        else if ((yyval.infovar).simb->ndims != (yyvsp[(3) - (3)].nsubscr))
                            Incompatibilidade ("Numero de subscritos incompativel com declaracao");
                        (yyval.infovar).opnd.tipo = VAROPND;
						if ((yyvsp[(3) - (3)].nsubscr) == 0)
                  			(yyval.infovar).opnd.atr.simb = (yyval.infovar).simb;
                  		else {
                  			(yyval.infovar).opnd.atr.simb = (yyval.infovar).simb;
                  			opnd2.tipo = INTOPND;
                  			opnd2.atr.valint = (yyvsp[(3) - (3)].nsubscr);
                  			result.tipo = VAROPND;
                  			result.atr.simb = NovaTemp ((yyval.infovar).simb->tvar);
                  			(yyval.infovar).varindex = result;
                  			GeraQuadrupla(OPINDEX,(yyval.infovar).opnd,opnd2,result);
                  		}
                    }
                }
    break;

  case 158:
#line 980 "lab5.y"
    {(yyval.nsubscr) = 0;}
    break;

  case 159:
#line 981 "lab5.y"
    {(yyval.nsubscr) = (yyvsp[(1) - (2)].nsubscr) + 1;}
    break;

  case 160:
#line 984 "lab5.y"
    {printf ("[ ");}
    break;

  case 161:
#line 984 "lab5.y"
    {
                        printf ("] ");
                        if ((yyvsp[(3) - (4)].infoexpr).tipo != INTEIRO && (yyvsp[(3) - (4)].infoexpr).tipo != CARACTERE)
                            Incompatibilidade ("Tipo inadequado para subscrito");
                        GeraQuadrupla(OPIND, (yyvsp[(3) - (4)].infoexpr).opnd, opndidle, opndidle);
                        }
    break;

  case 162:
#line 992 "lab5.y"
    {printf ("%s",(yyvsp[(1) - (1)].string));}
    break;

  case 163:
#line 992 "lab5.y"
    {printf ("(");
					simb = ProcuraSimb ((yyvsp[(1) - (3)].string), escopo);
					if (! simb) NaoDeclarado ((yyvsp[(1) - (3)].string));
					else if (simb->tid != IDFUNC)
						TipoInadequado ((yyvsp[(1) - (3)].string));
					(yyval.simb) = simb;	
			}
    break;

  case 164:
#line 998 "lab5.y"
    {printf (")");
				(yyval.infovar).simb = (yyvsp[(4) - (6)].simb);
				if ((yyval.infovar).simb && (yyval.infovar).simb->tid == IDFUNC) {
					if ((yyval.infovar).simb->nparam != (yyvsp[(5) - (6)].infolexpr).nargs)
						Incompatibilidade 
				("Numero de argumentos diferente do  numero de parametros");
					if ((yyvsp[(5) - (6)].infolexpr).listtipo && (yyval.infovar).simb->listparam) {;
						ChecArgumentos  ((yyvsp[(5) - (6)].infolexpr).listtipo, (yyval.infovar).simb->listparam); 
					}
				}
				opnd1.tipo = FUNCOPND;  opnd1.atr.func = (yyval.infovar).simb->listfunc;
				opnd2.tipo = INTOPND; opnd2.atr.valint = (yyvsp[(5) - (6)].infolexpr).nargs;
				if ((yyval.infovar).simb->tvar == NAOVAR) result = opndidle;
				else { result.tipo = VAROPND;
					result.atr.simb = NovaTemp ((yyval.infovar).simb->tvar); } 	
				GeraQuadrupla (OPCALL, opnd1, opnd2, result);
				(yyval.infovar).opnd = result;
			}
    break;

  case 165:
#line 1018 "lab5.y"
    { (yyval.infolexpr).nargs = 0; (yyval.infolexpr).listtipo = NULL;}
    break;


/* Line 1267 of yacc.c.  */
#line 3099 "y.tab.c"
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
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  if (yyn == YYFINAL)
    YYACCEPT;

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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
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


#line 1021 "lab5.y"


/* Inclusao do analisador lexico  */

#include "lex.yy.c" 

tabular () {
	int i;
	for (i = 1; i <= tab; i++)
   	/* printf ("\t");*/
   	printf("  ");
}

comentario () {
	char c;  int estado;
	estado = 1;
	while (estado != 3) {
		switch (estado) {
			case 1:
				c = input ();
				if (c == EOF) estado = 3;
				else if (c == '*') estado = 2;
				break;
			case 2:
				c = input ();
				if (c=='*') estado = 2;
				else if (c == EOF || c=='/') estado = 3;
				else estado = 1;
				break;
		}
	}
}

/*  InicTabSimb: Inicializa a tabela de simbolos   */

void InicTabSimb () {
	int i;
	for (i = 0; i < NCLASSHASH; i++)
		tabsimb[i] = NULL;
}

/*
	ProcuraSimb (cadeia): Procura cadeia na tabela de simbolos;
	Caso ela ali esteja, retorna um ponteiro para sua celula;
	Caso contrario, retorna NULL.
 */

simbolo ProcuraSimb (char *cadeia, simbolo escopo) {
	simbolo s; int i;
	i = hash (cadeia);
	for (s = tabsimb[i]; (s!=NULL); s = s->prox) {
		if (strcmp(cadeia, s->cadeia) == 0 && (s->escopo == escopo)) break;
	}
	return s;
}

/*
	ProcuraSimbDecl (cadeia): Procura cadeia na tabela de simbolos;
	Caso ela ali esteja, retorna um ponteiro para sua celula;
	Caso contrario, retorna NULL. Esta função procura no escopo local e global.
 */
 simbolo ProcuraSimbDecl (char *cadeia, simbolo escopo) {
	simbolo s = ProcuraSimb (cadeia, escopo);
	if (s != NULL) return s;
	s = ProcuraSimb (cadeia, escopo->escopo);
	return s;
}

/*
	InsereSimb (cadeia, tid, tvar, simbolo escopo): Insere cadeia na tabela de
	simbolos, com tid como tipo de identificador, com tvar como
	tipo de variavel, e com o escopo; Retorna um ponteiro para a celula inserida
 */
simbolo InsereSimb (char *cadeia, int tid, int tvar, simbolo escopo) {
	int i; simbolo aux, s;
	i = hash (cadeia);  aux = tabsimb[i];
	s = tabsimb[i] = malloc (sizeof (celsimb));
	s->cadeia = malloc ((strlen(cadeia)+1)* sizeof(char));
	strcpy (s->cadeia, cadeia);
	s->prox = aux; s->tid = tid;  s->tvar = tvar;
	s->escopo = escopo; s->listvardecl = NULL;

/*	Codigo para parametros e variáveis globais e locais  */
	if (declparam) {
		s->inic = s->ref = s->param = VERDADE;
		if (s->tid == IDVAR)
			InsereListSimb (s, &pontparam);
		s->escopo->nparam++;
	}
	else {
		s->inic = s->ref = s->param = FALSO;
		if (s->tid == IDVAR)
			InsereListSimb (s, &pontvardecl);
	}

/*	Codigo para identificador global ou nome de função  */

	if (tid == IDGLOB || tid == IDFUNC || tid == IDPROC) {
		s->listvardecl = (elemlistsimb *) 
			malloc  (sizeof (elemlistsimb));
		s->listvardecl->prox = NULL;
	}
	if (tid == IDGLOB) {
		s->listfunc = (elemlistsimb *) 
			malloc  (sizeof (elemlistsimb));
		s->listfunc->prox = NULL;
	}
/*	Codigo para nome de função e retorno de Inserir */
	if (tid == IDFUNC || tid == IDPROC) {
		s->listparam = (elemlistsimb *) 
			malloc  (sizeof (elemlistsimb));
		s->listparam->prox = NULL;
		s->nparam = 0;
   		InsereListSimb (s, &pontfunc);
	}
	return s;
}

/*
	hash (cadeia): funcao que determina e retorna a classe
	de cadeia na tabela de simbolos implementada por hashing
 */

int hash (char *cadeia) {
	int i, h;
	for (h = i = 0; cadeia[i]; i++) {h += cadeia[i];}
	h = h % NCLASSHASH;
	return h;
}

/* ImprimeTabSimb: Imprime todo o conteudo da tabela de simbolos  */

void ImprimeTabSimb () {
	int i; simbolo s;
	listsimb p;
	printf ("\n\n   TABELA  DE  SIMBOLOS:\n\n");
	for (i = 0; i < NCLASSHASH; i++)
		if (tabsimb[i]) {
			printf ("Classe %d:\n", i);
			for (s = tabsimb[i]; s!=NULL; s = s->prox){
				printf ("  (%s, %s", s->cadeia,  nometipid[s->tid]);
				if (s->tid == IDVAR) {
					printf (", %s, %d, %d",
						nometipvar[s->tvar], s->inic, s->ref);
          if (s->array == VERDADE) { int j;
            printf (", EH ARRAY\n\tndims = %d, dimensoes:", s->ndims);
            for (j = 1; j <= s->ndims; j++)
            	printf ("  %d", s->dims[j]);
          }
        }
				if (s->tid == IDFUNC) {
					printf (", %d parametros", s->nparam);
          if (s->listparam->prox != NULL) { int j;
            printf (", [");
            for (p = s->listparam->prox; p!=NULL; p = p->prox)
            	printf ("  %s;", nometipvar[p->simb->tvar]);
            
            printf ("]");
          }
        }
				printf(")\n");
			}
		}
}

/*  Mensagens de erros semanticos  */

void DeclaracaoRepetida (char *s) {
		printf ("\n\n***** Declaracao Repetida: %s *****\n\n", s);
}

void NaoDeclarado (char *s) {
		printf ("\n\n***** Identificador Nao Declarado: %s *****\n\n", s);
}

void TipoInadequado (char *s) {
		printf ("\n\n***** Identificador de Tipo Inadequado: %s *****\n\n", s);
}

void Incompatibilidade (char *s) {
		printf ("\n\n***** Incompatibilidade: %s *****\n\n", s);
}

void Esperado (char *s) {
    printf ("\n\n***** Esperado: %s *****\n\n", s);
}

void NaoEsperado (char *s) {
    printf ("\n\n***** Nao Esperado: %s *****\n\n", s);
}

void VerificaInicRef () {
	int i; simbolo s;

	printf ("\n");
	for (i = 0; i < NCLASSHASH; i++)
		if (tabsimb[i])
			for (s = tabsimb[i]; s!=NULL; s = s->prox)
				if (s->tid == IDVAR) {
					if (s->inic == FALSO)
						printf ("%s: Nao Inicializada\n", s->cadeia);
					if (s->ref == FALSO)
						printf ("%s: Nao Referenciada\n", s->cadeia);
				}
}

void ChecArgumentos (pontexprtipo* Ltiparg,   listsimb Lparam) {
	pontexprtipo* p;  pontelemlistsimb q;
	p = Ltiparg; q = Lparam->prox;
	while (p != NULL && q != NULL) {
		switch (q->simb->tvar) {
			case INTEIRO: case CARACTERE:
				if (p->tipo != INTEIRO && p->tipo != CARACTERE) {
					Incompatibilidade("Tipo de argumento diferente do tipo de parametro");
					printf ("Argumento do tipo %s e parametro do tipo %s", nometipvar[p->tipo], nometipvar[q->simb->tvar]);
				}
				break;
			case REAL:
				if (p->tipo != INTEIRO &&  p->tipo != CARACTERE && 
								p->tipo != REAL) {
					Incompatibilidade("Tipo de argumento diferente do tipo de parametro");
					printf ("Argumento do tipo %s e parametro do tipo %s", nometipvar[p->tipo], nometipvar[q->simb->tvar]);
				}			
				break;
			case LOGICO:
				if (p->tipo != LOGICO) {
					Incompatibilidade("Tipo de argumento diferente do tipo de parametro");
					printf ("Argumento do tipo %s e parametro do tipo %s", nometipvar[p->tipo], nometipvar[q->simb->tvar]);
				}
				break;
			default:
				if (q->simb->tvar != p->tipo) {
					Incompatibilidade("Tipo de argumento diferente do tipo de parametro");
					printf ("Argumento do tipo %s e parametro do tipo %s", nometipvar[p->tipo], nometipvar[q->simb->tvar]);
				
				}
				break;
		}
		p = p->prox; q = q->prox;
	}
}

pontexprtipo* InicListTipo (int tipoexpr) {
	pontexprtipo* s;
	s = (pontexprtipo*) malloc (sizeof (pontexprtipo));
	s->prox = NULL;
	s->tipo = tipoexpr; 
	return s;
} 

pontexprtipo* ConcatListTipo (pontexprtipo* first, pontexprtipo* second) {
	pontexprtipo* p = first;
	while (p->prox != NULL) p = p->prox;
	p->prox = second;
	return first;
}

void InsereListSimb (simbolo s, listsimb* p) {
	listsimb* aux = p;
	if (*aux == NULL) {
		(*p) = (listsimb) malloc(sizeof(elemlistsimb));
		(*p)->simb = s;
		(*p)->prox = NULL;

	}
	else {
		while ((*aux)->prox != NULL){ 
			
			(*aux) = (*aux)->prox;
		}
		(*aux)->prox = (listsimb) malloc(sizeof(elemlistsimb));
		(*aux)->prox->simb = s;
		(*aux)->prox->prox = NULL;

	}
}

/* Funcoes para o codigo intermediario */

void InicCodIntermed () {
	modcorrente = codintermed = malloc (sizeof (celmodhead));
    modcorrente->listquad = NULL;
	modcorrente->prox = NULL;
}

void InicCodIntermMod (simbolo simb) {
	modcorrente->prox = malloc (sizeof (celmodhead));
	modcorrente = modcorrente->prox;
	modcorrente->prox = NULL;
	modcorrente->modname = simb;
	modcorrente->modtip = simb->tid;
	modcorrente->listquad = malloc (sizeof (celquad));
	quadcorrente = modcorrente->listquad;
	quadcorrente->prox = NULL;
	numquadcorrente = 0;
	quadcorrente->num = numquadcorrente;
}


quadrupla GeraQuadrupla (int oper, operando opnd1, operando opnd2,
	operando result) {
	quadcorrente->prox = malloc (sizeof (celquad));
	quadcorrente = quadcorrente->prox;
	quadcorrente->oper = oper;
	quadcorrente->opnd1 = opnd1;
	quadcorrente->opnd2 = opnd2;
	quadcorrente->result = result;
	quadcorrente->prox = NULL;
	numquadcorrente ++;
    quadcorrente->num = numquadcorrente;
    return quadcorrente;
}

simbolo NovaTemp (int tip) {
	simbolo simb; int temp, i, j;
	char nometemp[10] = "##", s[10] = {0};

	numtemp ++; temp = numtemp;
	for (i = 0; temp > 0; temp /= 10, i++)
		s[i] = temp % 10 + '0';
	i --;
	for (j = 0; j <= i; j++)
		nometemp[2+i-j] = s[j];
	simb = InsereSimb (nometemp, IDVAR, tip, escopo);
	simb->inic = simb->ref = VERDADE;
    simb->array = FALSO;
	return simb;
}

void ImprimeQuadruplas () {
	modhead p;
	quadrupla q;
	for (p = codintermed->prox; p != NULL; p = p->prox) {
		printf ("\n\nQuadruplas do modulo %s:\n", p->modname->cadeia);
		for (q = p->listquad->prox; q != NULL; q = q->prox) {
			printf ("\n\t%4d) %s", q->num, nomeoperquad[q->oper]);
			printf (", (%s", nometipoopndquad[q->opnd1.tipo]);
			switch (q->opnd1.tipo) {
				case IDLEOPND: break;
				case VAROPND: printf (", %s", q->opnd1.atr.simb->cadeia); break;
				case INTOPND: printf (", %d", q->opnd1.atr.valint); break;
				case REALOPND: printf (", %g", q->opnd1.atr.valfloat); break;
				case CHAROPND: printf (", %c", q->opnd1.atr.valchar); break;
				case LOGICOPND: printf (", %d", q->opnd1.atr.vallogic); break;
				case CADOPND: printf (", %s", q->opnd1.atr.valcad); break;
				case ROTOPND: printf (", %d", q->opnd1.atr.rotulo->num); break;
				case MODOPND: printf(", %s", q->opnd1.atr.modulo->modname->cadeia);
					break;
			}
			printf (")");
			printf (", (%s", nometipoopndquad[q->opnd2.tipo]);
			switch (q->opnd2.tipo) {
				case IDLEOPND: break;
				case VAROPND: printf (", %s", q->opnd2.atr.simb->cadeia); break;
				case INTOPND: printf (", %d", q->opnd2.atr.valint); break;
				case REALOPND: printf (", %g", q->opnd2.atr.valfloat); break;
				case CHAROPND: printf (", %c", q->opnd2.atr.valchar); break;
				case LOGICOPND: printf (", %d", q->opnd2.atr.vallogic); break;
				case CADOPND: printf (", %s", q->opnd2.atr.valcad); break;
				case ROTOPND: printf (", %d", q->opnd2.atr.rotulo->num); break;
				case MODOPND: printf(", %s", q->opnd2.atr.modulo->modname->cadeia);
					break;
			}
			printf (")");
			printf (", (%s", nometipoopndquad[q->result.tipo]);
			switch (q->result.tipo) {
				case IDLEOPND: break;
				case VAROPND: printf (", %s", q->result.atr.simb->cadeia); break;
				case INTOPND: printf (", %d", q->result.atr.valint); break;
				case REALOPND: printf (", %g", q->result.atr.valfloat); break;
				case CHAROPND: printf (", %c", q->result.atr.valchar); break;
				case LOGICOPND: printf (", %d", q->result.atr.vallogic); break;
				case CADOPND: printf (", %s", q->result.atr.valcad); break;
				case ROTOPND: printf (", %d", q->result.atr.rotulo->num); break;
				case MODOPND: printf(", %s", q->result.atr.modulo->modname->cadeia);
					break;
			}
			printf (")");
		}
	}
   printf ("\n");
}

void RenumQuadruplas (quadrupla quad1, quadrupla quad2) {
	quadrupla q; int nquad;
	for (q = quad1->prox, nquad = quad1->num; q != quad2; q = q->prox) {
      nquad++;
		q->num = nquad;
	}
}

