%{
char tratachar (char *);
%}
delim		[ \t\n\r]
ws			{delim}+
digito		[0-9]
letra		[A-Za-z]
intct		{digito}+
id			{letra}({letra}|{digito})*
floatct		{digito}+\.{digito}*([Ee][+-]?{digito}+)?
carac1		\\.|[^\\']
carac2		\\.|[^\\\"]
charct		'{carac1}'
string		\"{carac2}*\"

%%

{ws}		{ ;}
"/*"		{comentario ();}

call 		{return CALL;}
char		{return CHAR;}
else		{return ELSE;}
false		{return FALSE;}
float		{return FLOAT;}
for			{return FOR;}
function	{return FUNCTION;}
if			{return IF;}
int			{return INT;}
logic		{return LOGIC;}
procedure	{return PROCEDURE;}
program		{return PROGRAM;}
read		{return READ;}
repeat		{return REPEAT;}
return		{return RETURN;}
true		{return TRUE;}
var			{return VAR;}
while		{return WHILE;}
write		{return WRITE;}

{id}		{strcpy (yylval.string, yytext); 	return ID;}
{intct}		{yylval.valint = atoi(yytext); 		return INTCT;}
{ctcarac}	{yylval.carac = tratachar (yytext); return CHARCT;}
{string}	{strcpy (yylval.string, yytext); 	return STRING;}
{floatct}	{yylval.valfloat = atof(yytext); 	return FLOATCT;}

"||" 		{return OR;}
"&&" 		{return AND;}
"!"			{return NOT;}
"<"			{yylval.atr = LT; 					return RELOP;}
"<="		{yylval.atr = LE; 					return RELOP;}
">"			{yylval.atr = GT; 					return RELOP;}
">="		{yylval.atr = GE; 					return RELOP;}
"=="		{yylval.atr = EQ; 					return RELOP;}
"!="		{yylval.atr = NE; 					return RELOP;}
"+"			{yylval.atr = ADD; 					return ADOP;}
"-"			{yylval.atr = SUB; 					return ADOP;}
"*"			{yylval.atr = MULT; 				return MULTOP;}
"/"			{yylval.atr = DIV; 					return MULTOP;}
"%"			{yylval.atr = MOD; 					return MULTOP;}
"~"			{return NEG;}

"("			{return OPPAR;}
")"			{return CLPAR;}
"["			{return OPBRAK;}
"]"			{return CLBRAK;}
"{"			{return OPBRACE;}
"}"			{return CLBRACE;}
";"			{return SCOLON;}
","			{return COMMA;}
"="			{return ASSIGN;}

"$"			{return DOLAR;}
.			{yylval.carac = yytext[0]; return INVAL;}

%%

/*
	tratachar: retorna o codigo ASCII de uma constante do tipo char, eliminando os apostrofos (') e as barras invertidas (\)
 */

char tratachar (char *s) {
	if (s[1] != '\\') return s[1];
	else switch (s[2]) {
		case 'a': 	return 7;		case '\\': 	return 92;
		case 'b': 	return 8;		case 'r': 	return 13;
		case '\"': 	return 34;		case 'f': 	return 12;
		case 't': 	return 9;		case 'n': 	return 10;
		case '0': 	return 0;		case '\'': 	return 39;
		case 'v': 	return 11;
		default:	return s[2];
	}
}

