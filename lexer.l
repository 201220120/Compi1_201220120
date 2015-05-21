/***************** 
  Definiciones
	Se colocan las cabeceras, variables y expresiones regulares
********************/

%{
  #include <stdio.h>
  #include <stdlib.h>

int yycolumno=1;
  int linea=0;
%}
%option yylineno

DIGITO 	[0-9]
NUMERO 	{DIGITO}+("."{DIGITO}+)?
LETRA 	[a-zA-Z]
TEXTO 	{LETRA}([-]|[_]|{LETRA}|{DIGITO})*
NOMFILE	{TEXTO}+("."{TEXTO})?

%%
 /***************
   Tipos de Datos
 *****************/
"entero" 	{int largo = strlen(yytext);yycolumno+=largo;}
"decimal" 	{int largo = strlen(yytext);yycolumno+=largo;}
"booleano" 	{int largo = strlen(yytext);yycolumno+=largo;}
"ent"    	{int largo = strlen(yytext);yycolumno+=largo;}
"dec"   	{int largo = strlen(yytext);yycolumno+=largo;}
"log"   	{int largo = strlen(yytext);yycolumno+=largo;}
"str"   	{int largo = strlen(yytext);yycolumno+=largo;}
"vac"   	{int largo = strlen(yytext);yycolumno+=largo;}

 /***************
    Palabras Reservadas
 *****************/
"retornar" 	{int largo = strlen(yytext);yycolumno+=largo;}
"variable" 	{int largo = strlen(yytext);yycolumno+=largo;}
"como"          {int largo = strlen(yytext);yycolumno+=largo;}
"inicio funcion" {int largo = strlen(yytext);yycolumno+=largo;}
"fin funcion"   {int largo = strlen(yytext);yycolumno+=largo;}
"ret"           {int largo = strlen(yytext);yycolumno+=largo;}
"incluir"       {int largo = strlen(yytext);yycolumno+=largo;}
"alias"         {int largo = strlen(yytext);yycolumno+=largo;}
"arreglo"       {int largo = strlen(yytext);yycolumno+=largo;}
"dimensiones"   {int largo = strlen(yytext);yycolumno+=largo;}
"con"           {int largo = strlen(yytext);yycolumno+=largo;}
"principal"     {int largo = strlen(yytext);yycolumno+=largo;}
"imprimir"      {int largo = strlen(yytext);yycolumno+=largo;}
"graficar"      {int largo = strlen(yytext);yycolumno+=largo;}

 /***************
   Expresiones Aritmeticas
 *****************/
"*"             {yycolumno++;}
"+"             {yycolumno++;}
"-"             {yycolumno++;}
"/"             {yycolumno++;}
"%"             {yycolumno++;}
"^"             {yycolumno++;}

 /***************
   Expresiones Logicas
 *****************/
"y"             {yycolumno++;}
"o"             {yycolumno++;}
"no"            {int largo = strlen(yytext);yycolumno+=largo;}
"mayor" 	{int largo = strlen(yytext);yycolumno+=largo;}
"menor" 	{int largo = strlen(yytext);yycolumno+=largo;}
"mayorigual" 	{int largo = strlen(yytext);yycolumno+=largo;}
"menorigual" 	{int largo = strlen(yytext);yycolumno+=largo;}
"igual" 	{int largo = strlen(yytext);yycolumno+=largo;}
"&"      	{yycolumno++;}
"$"             {yycolumno++;}
"¬"             {yycolumno++;}
">"             {yycolumno++;}
"<"             {yycolumno++;}
">="            {int largo = strlen(yytext);yycolumno+=largo;}
"<="            {int largo = strlen(yytext);yycolumno+=largo;}
"¬:"            {int largo = strlen(yytext);yycolumno+=largo;}
":"             {yycolumno++;}

 /***************
   Sentencias de control
 *****************/
"si"            {int largo = strlen(yytext);yycolumno+=largo;}
"sino"  	{int largo = strlen(yytext);yycolumno+=largo;}
"sino si" 	{int largo = strlen(yytext);yycolumno+=largo;}
"mientras" 	{int largo = strlen(yytext);yycolumno+=largo;}
"para"          {int largo = strlen(yytext);yycolumno+=largo;}
"entonces" 	{int largo = strlen(yytext);yycolumno+=largo;}
"sino entonces" {int largo = strlen(yytext);yycolumno+=largo;}
"repetir"       {int largo = strlen(yytext);yycolumno+=largo;}
"hasta" 	{int largo = strlen(yytext);yycolumno+=largo;}
"y paso"        {int largo = strlen(yytext);yycolumno+=largo;}
"fin para" 	{int largo = strlen(yytext);yycolumno+=largo;}

 /***************
   Signos
 *****************/
"|"             {yycolumno++;}
"{"             {yycolumno++;}
"}"             {yycolumno++;}
"\""            {yycolumno++;}
";"             {yycolumno++;}
","             {yycolumno++;}
"("             {yycolumno++;}
")"             {yycolumno++;}
"="             {yycolumno++;}
"["             {yycolumno++;}
"]"             {yycolumno++;}
"?"             {yycolumno++;}
"\'"            {yycolumno++;}

 /***************
   Gramaticas
 *****************/
{TEXTO} 	{int largo = strlen(yytext);yycolumno+=largo;}
{NUMERO} 	{int largo = strlen(yytext);yycolumno+=largo;}
{NOMFILE} 	{int largo = strlen(yytext);yycolumno+=largo;}
"\n"     	{yycolumno=1;}
[\t\r\f]        {}
" "		{yycolumno++;}
.		{char* nom = yytext; FILE* archivo= NULL;archivo = fopen("errLexico.txt","a+");  char linea[3];sprintf(linea, "%d", yylineno);fputs(linea,archivo);fputs(",",archivo);char columna[3];sprintf(columna, "%d", yycolumno);fputs(columna,archivo);fputs(",",archivo);fputs(nom,archivo);fputs(",",archivo);fclose(archivo);int largo = strlen(yytext);yycolumno+=largo;}

%%
int main(int argc,char **argv)
{
FILE *pf;
pf = fopen("errLexico.txt","w"); 
fclose(pf);
if (argc>1)
	yyin=fopen(argv[1],"r");
  else
	yyin=stdin;
    yylex();
    return 0;
}
