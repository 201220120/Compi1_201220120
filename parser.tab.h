/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

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
    CONSTANTE_REAL = 276,
    CONSTANTE_ENTERA = 277,
    IDENTIFICADOR = 278,
    TIPO_ARCHIVO = 279,
    TIPO_PRINCIPAL = 280,
    RESERV_TIPO = 281,
    RESERV_FNM = 282,
    RESERV_PAL = 283,
    RESERV_ENTERO = 284,
    RESERV_DECIMAL = 285,
    RESERV_BOOLEANO = 286
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 12 "parser.y" /* yacc.c:1909  */

    int    valor_entero;
    double valor_real;
    char * texto;

#line 92 "parser.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
