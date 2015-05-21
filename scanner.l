%{ /* Codigo C */
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
#include "parser.tab.h"
int yycolumno=1;
  int linea=0;
%}

%option yylineno

DIGITO [0-9]
LETRA  [A-Za-z]

TEXTO 	{LETRA}([-]|[_]|{LETRA}|{DIGITO})*
ARCHIVO	{TEXTO}+(".fnm")
PRINCIPAL	{TEXTO}+(".pal")

%%

"principal"                     {int largo = strlen(yytext);yycolumno+=largo; return RESERV_PRINCIPAL;}
"if"                     {int largo = strlen(yytext);yycolumno+=largo; return RESERV_SI;}
"menor"                     {int largo = strlen(yytext);yycolumno+=largo; return RESERV_MENOR;}

"archivo"		{ int largo = strlen(yytext);yycolumno+=largo;  return RESERV_ARCHIVO; }
"nombre"		{ int largo = strlen(yytext);yycolumno+=largo;  return RESERV_NOMBRE; }
"tipo"			{ int largo = strlen(yytext);yycolumno+=largo;  return RESERV_TIPO; }
"funcion"			{ int largo = strlen(yytext);yycolumno+=largo;  return RESERV_FUNCION; }
"entero"			{ int largo = strlen(yytext);yycolumno+=largo;  yylval.texto = (char *) malloc (strlen(yytext) + 1);
                        strcpy(yylval.texto, yytext);return RESERV_ENTERO; }
"decimal"			{ int largo = strlen(yytext);yycolumno+=largo;  yylval.texto = (char *) malloc (strlen(yytext) + 1);
                        strcpy(yylval.texto, yytext);return RESERV_DECIMAL; }
"booleano"			{ int largo = strlen(yytext);yycolumno+=largo; yylval.texto = (char *) malloc (strlen(yytext) + 1);
                        strcpy(yylval.texto, yytext); return RESERV_BOOLEANO; }
"variable"			{ int largo = strlen(yytext);yycolumno+=largo;  return RESERV_VARIABLE; }
"retornar"			{ int largo = strlen(yytext);yycolumno+=largo;  return RESERV_RETORNAR; }


"fnm"		{ int largo = strlen(yytext);yycolumno+=largo; yylval.texto = (char *) malloc (strlen(yytext) + 1);
                        strcpy(yylval.texto, yytext); return RESERV_FNM; }
"pal"		{ int largo = strlen(yytext);yycolumno+=largo; yylval.texto = (char *) malloc (strlen(yytext) + 1);
                        strcpy(yylval.texto, yytext); return RESERV_PAL; }

{DIGITO}+             { yylval.valor_entero = atoi(yytext); int largo = strlen(yytext);yycolumno+=largo;
                        return (CONSTANTE_ENTERA);
                      }
                      
{DIGITO}+\.{DIGITO}+  { int largo = strlen(yytext);yycolumno+=largo;
			yylval.valor_real = atof(yytext);
                        return (CONSTANTE_REAL);
                      }
                      
"+"|"-"|"*"|"/"|"="|"{"|"}"|":"|"\""|","|"("|")"|"<"|">"|";"|"%"|"^"   { return (yytext[0]); yycolumno++;}
"\n"                   {  yycolumno=1;}
" "                     {}
[\t\r\f] {}

{LETRA}({LETRA}|_|{DIGITO})*   { int largo = strlen(yytext);yycolumno+=largo;
			yylval.texto = (char *) malloc (strlen(yytext) + 1);
                        strcpy(yylval.texto, yytext);
                        return (IDENTIFICADOR); 
                      }
{ARCHIVO}	   { int largo = strlen(yytext);yycolumno+=largo;yylval.texto = (char *) malloc (strlen(yytext) + 1);
                        strcpy(yylval.texto, yytext);return TIPO_ARCHIVO; 
                      }
{PRINCIPAL}	   { int largo = strlen(yytext);yycolumno+=largo;yylval.texto = (char *) malloc (strlen(yytext) + 1);
                        strcpy(yylval.texto, yytext);return TIPO_PRINCIPAL; 
                      }



.                    {printf ("Error lexico: %s \n\n", yytext);}

%%
