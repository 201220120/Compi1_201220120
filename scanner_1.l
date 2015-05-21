/***************** 
  Definiciones
	Se colocan las cabeceras, variables y expresiones regulares
********************/

%{
  #include <stdio.h>
  #include <stdlib.h>
#include <malloc.h>
#include <string.h>
  #include "parser.tab.h"

int yycolumno=1;
  int linea=0;
%}
%option yylineno

DIGITO 	[0-9]
NUMERO 	{DIGITO}+("."{DIGITO}+)?
LETRA 	[a-zA-Z]
FNM     [fnm]
PAL     [pal]
TEXTO 	{LETRA}([-]|[_]|{LETRA}|{DIGITO})*
ARCHIVO	{TEXTO}+("."{FNM})
PRINCIPAL	{TEXTO}+("."{PAL})


%%

"archivo"      {int largo = strlen(yytext);yycolumno+=largo;return(RESERV_ARCHIVO);}
"tipo"      {int largo = strlen(yytext);yycolumno+=largo;return(RESERV_TIPO);}
"principal"      {int largo = strlen(yytext);yycolumno+=largo;return(RESERV_PRINCIPAL);}


"{"|"}"|":"|"\"" | "," | "="           {printf ("resultado: %s\n", yytext);yycolumno++;return(yytext[0]);}
" "				  {yycolumno++;}
"\n"     	{yycolumno=1;}

{DIGITO}+             { yylval.valor_entero = atoi(yytext);
                        return (CONSTANTE_ENTERA);
                      }
                      
{DIGITO}+\.{DIGITO}+  { yylval.valor_real = atof(yytext);
                        return (CONSTANTE_REAL);
{TEXTO} 	{printf ("resultado: %s\n", yytext);yylval.texto = (char *) malloc (strlen(yytext) + 1);strcpy(yylval.texto, yytext);int largo = strlen(yytext);yycolumno+=largo;return(IDENTIFICADOR);}
{ARCHIVO} 	{yylval.texto = (char *) malloc (strlen(yytext) + 1);strcpy(yylval.texto, yytext);int largo = strlen(yytext);yycolumno+=largo;return(GRAMATICA_ARCHIVO);}
{PRINCIPAL} 	{yylval.texto = (char *) malloc (strlen(yytext) + 1);strcpy(yylval.texto, yytext);int largo = strlen(yytext);yycolumno+=largo;return(GRAMATICA_PRINCIPAL);}

.               {printf ("resultado: %s\n", yytext);}

%%