%{
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

char *nomeoperquad[24] = {"",
	"OR", "AND", "LT", "LE", "GT", "GE", "EQ", "NE", "MAIS",
	"MENOS", "MULT", "DIV", "RESTO", "MENUN", "NOT", "ATRIB",
	"OPENMOD", "NOP", "JUMP", "JF", "PARAM", "READ", "WRITE"
};

/*	Strings para tipos de operandos de quadruplas */

char *nometipoopndquad[9] = {"IDLE",
	"VAR", "INT", "REAL", "CARAC", "LOGIC", "CADEIA", "ROTULO", "MODULO"
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

quadrupla quadcorrente, quadaux;
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
	operando opnd;
};
%}

/* Definicao do tipo de yylval e dos atributos dos nao terminais */

%union {
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
/* Declaracao dos atributos dos tokens e dos nao-terminais */

%type	    <infovar>	        Variable Header FuncHeader  ProcHeader
%type 	  <infoexpr> 	    Expression  AuxExpr1  AuxExpr2 CompStat StatList Statement ReturnStat
                            AuxExpr3   AuxExpr4   Term   Factor WriteElem
%type 		<nargs> 	ReadList WriteList                            
%type     <nsubscr>   SubscrList
%type 		<infolexpr>	ExprList Arguments
%type  		<simb>  		FuncCall


%token		DOLAR

%token CALL 		
%token CHAR 		
%token ELSE 		
%token FALSE 		
%token FLOAT 		
%token FOR 		
%token FUNCTION 	
%token IF 			
%token INT 		
%token LOGIC 		
%token PROCEDURE 	
%token PROGRAM 	
%token READ 		
%token REPEAT 		
%token RETURN 		
%token TRUE 		
%token VAR 	
%token WHILE 
%token WRITE 

%token	<string>	ID
%token	<string>	CHARCT
%token	<string>	STRING
%token	<valint>	INTCT
%token	<valfloat>	FLOATCT
%token				OR
%token				AND
%token				NOT
%token 				NEG
%token	<atr>		RELOP
%token	<atr>		ADOP
%token	<atr>		MULTOP
%token				OPPAR
%token				CLPAR
%token				OPBRAK
%token 				CLBRAK
%token				OPBRACE
%token				CLBRACE
%token				SCOLON
%token				COMMA
%token				ASSIGN
%token	<carac>		INVAL

%%

/* Producoes da gramatica:
	Os terminais sao escritos e, depois de alguns,
	para alguma estetica, ha mudanca de linha       */

Prog 			: 		{ InicTabSimb (); InicCodIntermed (); numtemp = 0;
									declparam = FALSO;
									escopo = simb = InsereSimb("global##", IDGLOB, NAOVAR, NULL);
							  		pontvardecl = simb->listvardecl;
									pontfunc = simb->listfunc;
									InicCodIntermMod (simb);
									opnd1.tipo = MODOPND;
						          	opnd1.atr.modulo = modcorrente;
						          	GeraQuadrupla (OPENMOD, opnd1, opndidle, opndidle);

								}  PROGRAM  ID  SCOLON
			            {printf ("program %s ;\n", $3);}
			            Decls SubProgs CompStat  { 
		                VerificaInicRef ();
		                ImprimeTabSimb ();
		                ImprimeQuadruplas ();
		            }
						;

Decls 			:
						| 	VAR {tabular (); printf ("var\n"); tab++;} 
							DeclList
							{tab--; tabular (); printf ("\n");}
						;

DeclList 		:	Declaration
						| 	DeclList Declaration
						;

Declaration : 	{tabular ();} 
							Type ElemList SCOLON {printf(";\n");}
						;

Type				: 	INT  {printf ("int "); tipocorrente = INTEIRO;}
			      |   FLOAT  {printf ("float "); tipocorrente = REAL;}
			      |   CHAR  {printf ("char "); tipocorrente = CARACTERE;}
			      |   LOGIC  {printf ("logic "); tipocorrente = LOGICO;}
						;

ElemList 		: 	Elem
						| 	ElemList COMMA  {printf(", ");}	Elem
						;

Elem 				:	ID  {
	              printf ("%s ", $1);
	              if  (ProcuraSimb ($1, escopo)  !=  NULL)
                  DeclaracaoRepetida ($1);
	              else {
                  simb = InsereSimb ($1,  IDVAR,  tipocorrente, escopo);
                  simb->array = FALSO; simb->ndims = 0;
	              }
		          }  DimList
						;

DimList 		:
						| 	DimList Dim {simb->array = VERDADE;}
						;

Dim 				: 	OPBRAK  INTCT  CLBRAK  {
						              printf ("[ %d ] ", $2);
						              if ($2 <= 0) Esperado ("Valor inteiro positivo");
						              simb->ndims++; simb->dims[simb->ndims] = $2;}
						;

SubProgs 		:
						|	SubProgs SubProgDecl
						;

SubProgDecl :	Header Decls CompStat {
								if ($3.tipo == NAOVAR) {
									if ($1.simb->tvar != NAOVAR)
										Incompatibilidade ("Função não void sem retorno");
								} else {
									if ($1.simb->tvar == INTEIRO && $3.tipo != INTEIRO && $3.tipo != CARACTERE)  
										Incompatibilidade ("Função do tipo inteiro não retorna inteiro ou caractere");
									if ($1.simb->tvar == REAL && $3.tipo != INTEIRO && $3.tipo != REAL && $3.tipo != CARACTERE)
										Incompatibilidade ("Função do tipo real não retorna real, inteiro ou caractere");
									if ($1.simb->tvar == CARACTERE && $3.tipo != INTEIRO && $3.tipo != CARACTERE)
										Incompatibilidade ("Função do tipo caractere não retorna inteiro ou caractere");
									if ($1.simb->tvar == LOGICO && $3.tipo != LOGICO)
										Incompatibilidade ("Função do tipo lógico não retorna tipo lógico");
									if ($1.simb->tvar == NAOVAR && $3.tipo != NAOVAR)
										Incompatibilidade ("Função do tipo void retornando expressão");
									}	
								escopo = escopo->escopo;
							}
						;					

Header 			: 	{printf("function ");} FuncHeader {$$.simb = $2.simb;}
						| 	ProcHeader {$$.simb = $1.simb;}
						;

FuncHeader 	: 	FUNCTION Type ID OPPAR {declparam = VERDADE;} CLPAR {declparam = FALSO;} SCOLON {
								printf ("%s ();\n",$3); $$.simb = simb;
								if  (ProcuraSimb ($3, escopo)  !=  NULL)
                  DeclaracaoRepetida ($3);
								escopo = simb = InsereSimb ($3, IDFUNC, tipocorrente, escopo);
	             				$<simb>$ = simb;
							}
						|	FUNCTION Type ID OPPAR {
								declparam = VERDADE;
								printf ("%s (",$3);
								if  (ProcuraSimb ($3, escopo)  !=  NULL)
                  DeclaracaoRepetida ($3);
									escopo = simb = InsereSimb ($3, IDFUNC, tipocorrente, escopo);
									pontvardecl = simb->listvardecl;
									pontparam = simb->listparam;
									$<simb>$ = simb;
							} 
							ParamList CLPAR {declparam = FALSO;} SCOLON
							{printf (");\n");
								$$.simb = simb;
							}
						;

ProcHeader 	: 	PROCEDURE ID OPPAR {declparam = VERDADE;} CLPAR {declparam = FALSO;} SCOLON {
								if  (ProcuraSimb ($2, escopo)  !=  NULL)
	                DeclaracaoRepetida ($2);
								escopo = simb = InsereSimb ($2, IDPROC, NAOVAR, escopo);
								pontvardecl = simb->listvardecl;
								pontparam = simb->listparam;
								$<simb>$ = simb;
								printf ("procedure %s ();\n",$2);
								$$.simb = simb;
							}

						| 	PROCEDURE ID OPPAR {
								printf ("procedure %s (",$2); 
								declparam = VERDADE;
								if  (ProcuraSimb ($2, escopo)  !=  NULL)
	                DeclaracaoRepetida ($2);
								escopo = simb = InsereSimb ($2, IDPROC, NAOVAR, escopo);
								pontvardecl = simb->listvardecl;
								pontparam = simb->listparam;
								$<simb>$ = simb;
				
							}
							ParamList CLPAR {declparam = FALSO;} SCOLON
							{printf (");\n");
								$$.simb = simb;
							}
						;																						

ParamList 	: 	Parameter
				|	ParamList COMMA {printf(", ");} Parameter 
				;


Parameter 	:	Type ID {printf(" %s",$2);
				if  (ProcuraSimb ($2, escopo)  !=  NULL) 
	                DeclaracaoRepetida ($2);
				else simb = InsereSimb ($2, IDVAR, tipocorrente, escopo);
				}
			;


CompStat    :	OPBRACE {
								tab--;
								tabular (); 
								printf ("\{\n"); 
								tab++;	
								tab++;
							}
							StatList 
							CLBRACE {
								tab--;
								tab--; 
								tabular ();
								 printf ("}\n");
								 tab++;
								 $$.tipo = $3.tipo;
							}
						;

StatList		:	
						|	StatList Statement {
							$$.tipo = $2.tipo;
						}
						;

Statement   :	CompStat {$$.tipo = $1.tipo;}
						|	{tabular ();} IfStat {$$.tipo = NAOVAR;}
						|	{tabular ();} WhileStat {$$.tipo = NAOVAR;}
						|	{tabular ();} RepeatStat {$$.tipo = NAOVAR;}
						|	{tabular ();} ForStat {$$.tipo = NAOVAR;}
						|	{tabular ();} ReadStat {$$.tipo = NAOVAR;}
						|	{tabular ();} WriteStat {$$.tipo = NAOVAR;}
						|	{tabular ();} AssignStat {$$.tipo = NAOVAR;}
						|	{tabular ();} CallStat {$$.tipo = NAOVAR;}
						|	{tabular ();} ReturnStat {
							$$.tipo = $2.tipo;
						}
						|	{tabular ();} SCOLON {$$.tipo = NAOVAR;}
						;

IfStat			: IF OPPAR {printf("if (");} 
							Expression CLPAR {printf(")\n");} {
								if ($4.tipo != LOGICO)
                  					Incompatibilidade ("Expressao nao logica/relacional dentro de if");
                 				opndaux.tipo = ROTOPND;
		         				$<quad>$ = 
									GeraQuadrupla (OPJF, $4.opnd, opndidle, opndaux);
							}
							{tab++;} Statement {tab--; 
								$<quad>$ = quadcorrente;
								$<quad>7->result.atr.rotulo =
	                       			 GeraQuadrupla (NOP, opndidle, opndidle, opndidle);
							}
							ElseStat {
					           	if ($<quad>10->prox != quadcorrente) {
					                  	quadaux = $<quad>10->prox;
					                        	$<quad>10->prox = quadaux->prox;
					                        	quadaux->prox = $<quad>10->prox->prox;
					                        	$<quad>10->prox->prox = quadaux;
					                        	RenumQuadruplas ($<quad>10, quadcorrente);
					         	}
					 		}

						;

ElseStat 		: 	
						| 	ELSE {tabular (); printf("else\n");
									 opndaux.tipo = ROTOPND;
									$<quad>$ = GeraQuadrupla (OPJUMP, opndidle, opndidle, opndaux);
								} 
							{tab++;} Statement {tab--;
									$<quad>2->result.atr.rotulo =
								GeraQuadrupla (NOP, opndidle, opndidle, opndidle);	
							}

						;

WhileStat 	: 	WHILE OPPAR {printf("while ( "); $<quad>$ = GeraQuadrupla (NOP, opndidle, opndidle, opndidle);}
								Expression CLPAR {printf(" )\n");} {
									if ($4.tipo != LOGICO)
		                				Incompatibilidade ("Expressao nao logica/relacional dentro de while");
		                			opndaux.tipo = ROTOPND;
                        			$<quad>$ = GeraQuadrupla (OPJF, $4.opnd, opndidle, opndaux);
								}
								{tab++;} Statement {tab--;
									opndaux.tipo = ROTOPND;
			                        opndaux.atr.rotulo = $<quad>3;
			                        GeraQuadrupla (OPJUMP, opndidle, opndidle, opndaux);
			                        $<quad>7->result.atr.rotulo = GeraQuadrupla (NOP, opndidle, opndidle, opndidle);
								}
						;

RepeatStat 	: 	REPEAT {printf("repeat ");}
							Statement WHILE OPPAR {printf(" while ( ");}
							Expression CLPAR SCOLON {printf(" );\n");} {
								if ($7.tipo != LOGICO)
                	Incompatibilidade ("Expressao nao logica/relacional dentro de repeat");
							}
						;

ForStat 	: 	FOR OPPAR {printf("for ( ");}
						Variable ASSIGN {printf(" = "); 
							if ($4.simb != NULL && ($4.simb->ndims != 0 || ($4.simb->tvar != INTEIRO && $4.simb->tvar != CARACTERE))) {
								Incompatibilidade ("Variavel de inicializacao deve ser escalar do tipo inteiro ou caractere");
							}
						}
						Expression SCOLON {printf("; ");}
						Expression SCOLON {printf("; ");
							if ($10.tipo != LOGICO) {
								Incompatibilidade ("A segunda expressao de um comando for deve ser do tipo logico");
							}
						}
						Variable ASSIGN { printf(" = ");
							if ($4.simb != $13.simb) {
								Incompatibilidade ("A variavel de atualizacao do comando for deve ser a mesma daquela de sua inicializacao");
							}
						}
						Expression CLPAR {printf(" )\n");
							if (($7.tipo != INTEIRO && $7.tipo != CARACTERE) || ($16.tipo != INTEIRO && $16.tipo != CARACTERE)) {
								Incompatibilidade ("A primeira e terceira expressao de um comando for deve ser do tipo inteiro ou caractere");
							}
						}
						{tab++;} Statement {tab--;}
					;

ReadStat 	:	READ OPPAR {printf("read (");} 
						ReadList {
							opnd1.tipo = INTOPND;
							opnd1.atr.valint = $4;
							GeraQuadrupla (OPREAD, opnd1, opndidle, opndidle);
						} CLPAR SCOLON
						{printf(");\n");}
					;

ReadList 	: 	Variable  {
		              if ($1.simb != NULL) {
		                $1.simb->inic = VERDADE;
		                $1.simb->ref = VERDADE;
		              }
		              $$ = 1;
					  GeraQuadrupla (PARAM, $1.opnd, opndidle, opndidle);
		          } 
				|   ReadList  COMMA  {printf (", ");}  
					Variable {
			            if ($4.simb != NULL) {
			              $4.simb->inic = VERDADE;
			              $4.simb->ref = VERDADE;
			            }
			            $$ = $1 + 1;
						GeraQuadrupla (PARAM, $4.opnd, opndidle, opndidle);
		          }
					;

WriteStat 	: 	WRITE OPPAR {printf("write (");} 
						WriteList  {
							opnd1.tipo = INTOPND;
							opnd1.atr.valint = $4;
							GeraQuadrupla (OPWRITE, opnd1, opndidle, opndidle);
						}
						CLPAR SCOLON {printf(");\n");}
				;

WriteList 	: 	WriteElem {
					$$ = 1;
					GeraQuadrupla (PARAM, $1.opnd, opndidle, opndidle);
				}

				| 	WriteList COMMA {printf(", ");} WriteElem {
					$$ = $1 + 1;
					GeraQuadrupla (PARAM, $4.opnd, opndidle, opndidle);
				}
				;

WriteElem 	: 	STRING {printf("%s",$1);
					$$.opnd.tipo = CADOPND;
					$$.opnd.atr.valcad = malloc (strlen($1) + 1);
					strcpy ($$.opnd.atr.valcad, $1);
				}
				| 	Expression 
				;	

CallStat 		: 	CALL ID OPPAR CLPAR SCOLON 
							{printf ("call %s ();\n",$2);
								simb = ProcuraSimb ($2, escopo);
								if (! simb) NaoDeclarado ($2);
								else if (simb->tid != IDPROC)
									TipoInadequado ($2);
								$<simb>$ = simb;	
							}
						|	CALL ID OPPAR 
							{printf ("call %s (",$2);
								simb = ProcuraSimb ($2, escopo);
								if (! simb) NaoDeclarado ($2);
								else if (simb->tid != IDPROC)
									TipoInadequado ($2);
								$<simb>$ = simb;	
							}
							Arguments CLPAR SCOLON
							{printf (");\n");}
						;

ReturnStat 	: 	RETURN SCOLON {printf ("return ;\n");
								$$.tipo = NAOVAR;
						}
						| 	RETURN {printf ("return ");} Expression SCOLON {printf (";\n");
								$$.tipo = $3.tipo;
						}
						;

AssignStat 	:	Variable  {if  ($1.simb != NULL) $1.simb->inic = $1.simb->ref = VERDADE;}
                ASSIGN  {printf ("= ");}  Expression  SCOLON  {
                  printf (";\n");
                  if ($1.simb != NULL) {
                    if ((($1.simb->tvar == INTEIRO || $1.simb->tvar == CARACTERE) &&
                      ($5.tipo == REAL || $5.tipo == LOGICO)) ||
                      ($1.simb->tvar == REAL && $5.tipo == LOGICO) ||
                      ($1.simb->tvar == LOGICO && $5.tipo != LOGICO))
                      	Incompatibilidade ("Lado direito de comando de atribuicao improprio");
                    GeraQuadrupla (OPATRIB, $5.opnd, opndidle, $1.opnd);
                  }
                }
						;

ExprList 		: 	Expression {$$.nargs = 1;   $$.listtipo = InicListTipo ($1.tipo);}
						| 	ExprList COMMA {printf(", ");} Expression {
							$$.nargs = $1.nargs + 1;
							$$.listtipo = 
								ConcatListTipo ($1.listtipo, InicListTipo ($4.tipo));

						}
						;

Expression  :   AuxExpr1
            |   Expression  OR  {printf ("|| ");}  AuxExpr1  {
                  if ($1.tipo != LOGICO || $4.tipo != LOGICO)
                    Incompatibilidade ("Operando improprio para operador or");
                  $$.tipo = LOGICO;
                  $$.opnd.tipo = VAROPND;  
				 $$.opnd.atr.simb = NovaTemp ($$.tipo);
					GeraQuadrupla (OPOR, $1.opnd, $4.opnd, $$.opnd);

                }
            ;
AuxExpr1    :   AuxExpr2
            |   AuxExpr1  AND  {printf ("&& ");}  AuxExpr2  {
                  if ($1.tipo != LOGICO || $4.tipo != LOGICO)
                    Incompatibilidade ("Operando improprio para operador and");
                  $$.tipo = LOGICO;
                  $$.opnd.tipo = VAROPND;  
				  $$.opnd.atr.simb = NovaTemp ($$.tipo);
				  GeraQuadrupla (OPAND, $1.opnd, $4.opnd, $$.opnd);

                }
            ;
AuxExpr2    :   AuxExpr3
            |   NOT  {printf ("! ");}  AuxExpr3  {
                  if ($3.tipo != LOGICO)
                    Incompatibilidade ("Operando improprio para operador not");
                  $$.tipo = LOGICO;
                  $$.opnd.tipo = VAROPND;
                  $$.opnd.atr.simb = NovaTemp ($3.tipo);
                  GeraQuadrupla (OPNOT, $3.opnd, opndidle, $$.opnd);
                }
            ;
AuxExpr3    :   AuxExpr4
            |   AuxExpr4  RELOP  {
                  switch ($2) {
                    case LT: printf ("< "); break;
                    case LE: printf ("<= "); break;
                    case EQ: printf ("== "); break;
                    case NE: printf ("!= "); break;
                    case GT: printf ("> "); break;
                    case GE: printf (">= "); break;
                  }
                }  AuxExpr4  {
                  switch ($2) {
                    case LT: case LE: case GT: case GE:
                      if ($1.tipo != INTEIRO && $1.tipo != REAL && $1.tipo != CARACTERE || $4.tipo != INTEIRO && $4.tipo != REAL && $4.tipo != CARACTERE)
                        Incompatibilidade	("Operando improprio para operador relacional");
                      break;
                    case EQ: case NE:
                      if (($1.tipo == LOGICO || $4.tipo == LOGICO) && $1.tipo != $4.tipo)
                        Incompatibilidade ("Operando improprio para operador relacional");
                      break;
                  }
                    $$.tipo = LOGICO;
                    $$.opnd.tipo = VAROPND;
	                $$.opnd.atr.simb = NovaTemp ($$.tipo);
	                switch ($2) {
	                    case LT:
	                        GeraQuadrupla (OPLT, $1.opnd, $4.opnd, $$.opnd);
	                        break;
	                    case LE:
	                        GeraQuadrupla (OPLE, $1.opnd, $4.opnd, $$.opnd);
	                        break;
	                    case GT:
	                        GeraQuadrupla (OPGT, $1.opnd, $4.opnd, $$.opnd);
	                        break;
	                    case GE:
	                        GeraQuadrupla (OPGE, $1.opnd, $4.opnd, $$.opnd);
	                        break;
	                    case EQ:
	                        GeraQuadrupla (OPEQ, $1.opnd, $4.opnd, $$.opnd);
	                        break;
	                    case NE:
	                        GeraQuadrupla (OPNE, $1.opnd, $4.opnd, $$.opnd);
	                        break;
	                }
                }
            ;
AuxExpr4    :   Term
            |   AuxExpr4  ADOP  {
		              switch ($2) {
                    case ADD: printf ("+ "); break;
                    case SUB: printf ("- "); break;
		              }
                }  Term  {
                  if ($1.tipo != INTEIRO && $1.tipo != REAL && $1.tipo != CARACTERE || $4.tipo != INTEIRO && $4.tipo!=REAL && $4.tipo!=CARACTERE)
                      Incompatibilidade ("Operando improprio para operador aritmetico");
                  if ($1.tipo == REAL || $4.tipo == REAL) $$.tipo = REAL;
                  else $$.tipo = INTEIRO;
                  $$.opnd.tipo = VAROPND;
                  $$.opnd.atr.simb = NovaTemp ($$.tipo);
                  if ($2 == ADD)
                    GeraQuadrupla (OPMAIS, $1.opnd, $4.opnd, $$.opnd);
                  else  GeraQuadrupla (OPMENOS, $1.opnd, $4.opnd, $$.opnd);
                }
            ;

Term 		: 	Factor
				| 	Term MULTOP {
          		if ($2 == MULT) printf (" * ");
          		else if ($2 == DIV) printf (" / ");
						else printf (" %% ");
            	}
            	Factor {
		            switch ($2) {
		              case MULT: case DIV:
		                if ($1.tipo != INTEIRO && $1.tipo != REAL && $1.tipo != CARACTERE
		                  || $4.tipo != INTEIRO && $4.tipo!=REAL && $4.tipo!=CARACTERE)
		                  Incompatibilidade ("Operando improprio para operador aritmetico");
		                if ($1.tipo == REAL || $4.tipo == REAL) $$.tipo = REAL;
		                else $$.tipo = INTEIRO;
		                $$.opnd.tipo = VAROPND;  
						$$.opnd.atr.simb = NovaTemp ($$.tipo);
						if ($2 == MULT)  
						    GeraQuadrupla   (OPMULTIP, $1.opnd, $4.opnd, $$.opnd);
						else  GeraQuadrupla  (OPDIV, $1.opnd, $4.opnd, $$.opnd);     
		                break;
		              case MOD:
		                if ($1.tipo != INTEIRO && $1.tipo != CARACTERE
		                  ||  $4.tipo != INTEIRO && $4.tipo != CARACTERE)
		                  Incompatibilidade ("Operando improprio para operador resto");
		                $$.tipo = INTEIRO;
		                $$.opnd.tipo = VAROPND;  
						$$.opnd.atr.simb = NovaTemp ($$.tipo);
						GeraQuadrupla (OPRESTO, $1.opnd, $4.opnd, $$.opnd);

		                break;
		            }
              }
					;

Factor 		: 	Variable  {
                    if  ($1.simb != NULL)  {
                        $1.simb->ref  =  VERDADE;
                        $$.tipo = $1.simb->tvar;
                        $$.opnd = $1.opnd;
                    }
                }
          	|   INTCT  {printf ("%d ", $1); $$.tipo = INTEIRO; $$.opnd.tipo = INTOPND;
						$$.opnd.atr.valint = $1;}
         	|   FLOATCT  {printf ("%g ", $1); $$.tipo = REAL; $$.opnd.tipo = REALOPND;
						$$.opnd.atr.valfloat = $1;}
        	|   CHARCT  {printf ("\'%c\' ", $1); $$.tipo = CARACTERE; $$.opnd.tipo = CHAROPND;
						$$.opnd.atr.valchar = $1;}
        	|   TRUE  {printf ("true "); $$.tipo = LOGICO; $$.opnd.tipo = LOGICOPND;
						$$.opnd.atr.vallogic = 1;}
        	|   FALSE  {printf ("false "); $$.tipo = LOGICO; $$.opnd.tipo = LOGICOPND;
        			$$.opnd.atr.vallogic = 0;}
        	|   NEG  {printf ("~ ");}  Factor {
                    if ($3.tipo != INTEIRO && $3.tipo != REAL && $3.tipo != CARACTERE)
                        Incompatibilidade  ("Operando improprio para menos unario");
                    if ($3.tipo == REAL) $$.tipo = REAL;
                    else $$.tipo = INTEIRO;
                    $$.opnd.tipo = VAROPND;
					$$.opnd.atr.simb = NovaTemp ($$.tipo);
          			GeraQuadrupla  (OPMENUN, $3.opnd, opndidle, $$.opnd);

            }
        	|   OPPAR  {printf ("( ");}  Expression  CLPAR  {
                    printf (") "); $$.tipo = $3.tipo;
                    $$.opnd = $3.opnd;
            }
			| 	FuncCall
					;
Variable 	: 	ID  {
                    printf ("%s ", $1);
                    simb = ProcuraSimbDecl ($1, escopo);
                    if (simb == NULL)   NaoDeclarado ($1);
                    else if (simb->tid != IDVAR)   TipoInadequado ($1);
                    $<simb>$ = simb;
                }  SubscrList  {
                    $$.simb = $<simb>2;
                    if ($$.simb != NULL) {
                        if ($$.simb->array == FALSO && $3 > 0)
                             NaoEsperado ("Subscrito\(s)");
                        else if ($$.simb->array == VERDADE && $3 == 0)
                                Esperado ("Subscrito\(s)");
                        else if ($$.simb->ndims != $3)
                            Incompatibilidade ("Numero de subscritos incompativel com declaracao");

                        $$.opnd.tipo = VAROPND;
						if ($3 == 0)
                  			$$.opnd.atr.simb = $$.simb;

                    }


                }
			;

SubscrList 	:   {$$ = 0;}
            |   SubscrList  Subscript {$$ = $1 + 1;}
			;

Subscript 	: 	OPBRAK  {printf ("[ ");}  AuxExpr4  CLBRAK  {
                        printf ("] ");
                        if ($3.tipo != INTEIRO && $3.tipo != CARACTERE)
                            Incompatibilidade ("Tipo inadequado para subscrito");
                        }
			;

FuncCall 	: 	ID {printf ("%s",$1);}  OPPAR {printf ("(");
					simb = ProcuraSimb ($1, escopo);
					if (! simb) NaoDeclarado ($1);
					else if (simb->tid != IDFUNC)
						TipoInadequado ($1);
					$<simb>$ = simb;	
			} Arguments CLPAR {printf (")");
				$$ = $<simb>4;
				if ($$ && $$->tid == IDFUNC) {
					if ($$->nparam != $5.nargs)
						Incompatibilidade 
				("Numero de argumentos diferente do  numero de parametros");
					if ($5.listtipo && $$->listparam) {;
						ChecArgumentos  ($5.listtipo, $$->listparam); 
					}
				}
			}
			;

Arguments	:	{ $$.nargs = 0; $$.listtipo = NULL;}
			|	ExprList /*default: $$ = $1;*/

%%

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

