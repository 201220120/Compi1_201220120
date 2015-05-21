%{  /* Codigo C */
#include <stdio.h>

#include<math.h>

#include "diccionario.h"
DICCIONARIO diccionario; /* variable global para el diccionario */
  extern FILE *yyin;
%}

/* Declaraciones de BISON */
%union {
    int    valor_entero;
    double valor_real;
    char * texto;
}
%token RESERV_ARCHIVO PRENTERO RESERV_PRINCIPAL RESERV_NOMBRE  RESERV_FUNCION RESERV_VARIABLE RESERV_RETORNAR  
%token <valor_real> CONSTANTE_REAL
%token <valor_entero> CONSTANTE_ENTERA
%token <texto> IDENTIFICADOR TIPO_ARCHIVO TIPO_PRINCIPAL RESERV_TIPO RESERV_FNM RESERV_PAL  RESERV_ENTERO RESERV_DECIMAL RESERV_BOOLEANO

%left '-' '+'
%left '*' '/'

%type <valor_real> expresion
%type <texto> nombre tipo nombrep tipop c  
%%    /* Gramatica */



lineas:   linea
	| libreria
;

libreria: libreria funcion
	| funcion
 ;

funcion: 	RESERV_FUNCION RESERV_ENTERO c{printf ("Nombre de la funcion: %s  \n", $3); }
		| RESERV_FUNCION RESERV_DECIMAL c{printf ("Nombre de la funcion: %s  \n", $3); }
;
c:		IDENTIFICADOR '(' parametros ')' '{' cuerpo  RESERV_RETORNAR '}'{$$= $1; }
		| IDENTIFICADOR '(' ')' '{' cuerpo '}'
;
cuerpo:		cuerpo  contenidocuerpo
		| contenidocuerpo
		
;
contenidocuerpo: declararvariable1 ';'
		| RESERV_RETORNAR
;

declararvariable1: RESERV_VARIABLE tipovariable
		| IDENTIFICADOR ':' '='expresion '\n' { ENTRADA * entrada = buscar_diccionario(&diccionario,$1);
                              if (entrada != NULL) { /* encontrada */
                                 insertar_diccionario(&diccionario, $1, $4);
                              }
                              else {
                                 printf("ERROR: variable %s no definida\n", $1);

                              }
                            }

;
tipovariable:	RESERV_ENTERO declaracionentero
;
declaracionentero:	declaracionentero ',' asigvalor
		|	asigvalor
;
asigvalor:	IDENTIFICADOR {printf ("Variable %s \n", $1); insertar_diccionario(&diccionario, $1, 0);} 
		| IDENTIFICADOR ':' '=' expresion {printf("Variable %s = %f \n",$1, $4);insertar_diccionario(&diccionario, $1, $4);}
;
expresion: CONSTANTE_REAL   { $$ = $1; }
         | CONSTANTE_ENTERA { $$ = (double) $1; }
         | IDENTIFICADOR    { ENTRADA * entrada = buscar_diccionario(&diccionario,$1);
                              if (entrada != NULL) { /* encontrada */
                                 $$ = entrada->valor;
                              }
                              else {
                                 printf("ERROR: variable %s no definida\n", $1);
                                 $$ = 0;
                              }
                            }
         | '<' '+'  expresion expresion '>'  { $$ = $3 + $4; }
         | '<' '-' expresion expresion  '>' { $$ = $3 - $4; }
         | '<' '*' expresion  expresion '>'  { $$ = $3 * $4; }
         | '<' '/' expresion  expresion '>'  { $$ = $3 / $4; }
         | '<' '^' expresion  expresion '>'  { $$ = pow($3,$4); }
         | '<' '%' expresion  expresion '>'  { $$ = (int)$3 % (int)$4; }
;
/*
declararvariable: RESERV_VARIABLE RESERV_ENTERO IDENTIFICADOR expresionvariable {printf ("Tipo: %s Nombre: %s = \n", $2,$3); } 
		| RESERV_VARIABLE RESERV_BOOLEANO IDENTIFICADOR expresionvariable {printf ("Tipo: %s Nombre:%s %s = \n", $2,$3); }
		| RESERV_VARIABLE RESERV_DECIMAL IDENTIFICADOR expresionvariable {printf ("Tipo: %s Nombre:%s %s = \n", $2,$3); } 
;

expresionvariable:  
		| expresionvariable ',' declarar
		| declarar 
;
declarar:	IDENTIFICADOR {printf ("Variable %s\n", $1); $$=$1;} 
		|IDENTIFICADOR ':' '=' {printf ("Variable %s\n", $1); $$=$1;} 
;
*/
parametros:	parametros ',' tipoparametro
		| tipoparametro;
tipoparametro:	RESERV_ENTERO IDENTIFICADOR {printf ("Parametro de tipo entero: %s  \n", $2); }
		|  RESERV_DECIMAL IDENTIFICADOR {printf ("Parametro de tipo decimal: %s  \n", $2); }
		|  RESERV_BOOLEANO IDENTIFICADOR {printf ("Parametro de tipo booleano: %s  \n", $2); }
;

linea:  IDENTIFICADOR '{' tipoclase b	'}'{printf ("Nombre de la clase: %s  \n\n", $1); }
	|  IDENTIFICADOR '=' expresion  {printf ("resultado: %s\n", $1); }
     | expresion                   { printf ("resultado: %f\n", $1); }
     | error ','                       { yyerrok;}
;

tipoclase:	tipoclase a
	|	a
;

a:		RESERV_ARCHIVO ':' '{' c 
		;
b:		RESERV_PRINCIPAL ':' '{' nombrep '}'{printf ("Nombre del Principal: %s\n", $4);
			FILE* archivo= NULL;archivo = fopen("archivo1.txt","a+"); 
			char* nom = $4;fputs(nom,archivo);
			fputs(",",archivo);fclose(archivo);}
;
nombrep:	RESERV_NOMBRE ':' '"' TIPO_PRINCIPAL '"'{$$=$4; }
;

c:		nombre tipo '}' ','{printf ("Nombre del archivo: %s \nTipo de archivo: %s\n", $1,$2);
			FILE* archivo= NULL;archivo = fopen("archivo1.txt","a+"); 
			char* nom = $1;fputs(nom,archivo);
			fputs(",",archivo);fclose(archivo);
		}
		| nombrep ',' tipop '}' ','{printf ("Nombre del archivo: %s \nTipo de archivo: %s\n", $1,$3);
			FILE* archivo= NULL;archivo = fopen("archivo1.txt","a+"); 
			char* nom = $1;fputs(nom,archivo);
			fputs(",",archivo);fclose(archivo);
		}
;
		
nombre:		RESERV_NOMBRE ':' '"' TIPO_ARCHIVO '"' ','{$$=$4;}
;
tipo:		RESERV_TIPO ':' RESERV_FNM{$$=$3;}
;
tipop:		RESERV_TIPO ':' RESERV_PAL{$$=$3;}
;


%%
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