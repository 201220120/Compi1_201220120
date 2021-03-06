/* 
 * File:   main.c
 * Author: braian
 *
 * Created on 20 de mayo de 2015, 08:45 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

void generarLexico(FILE *errLex) {
    errLex = fopen("errLexico.txt", "r");
    int a = 0;
    printf("Se han encontrado errores lexicos.\n");
    printf(".:MENU DE SCANNER LEXICO:.\n\n");
    printf("1. Generar y abrir HTML de errores\n");
    printf("2. Salir.\n");
    printf("NOTA: Es necesario reiniciar la aplicación para realizar un nuevo analisis.\n");

    scanf("%d", &a);
    if (a == 1) {
        FILE *pdf;
        pdf = fopen("lexico.html", "w");
        fputs("<meta http-equiv=\"Content-Type\" content=\"text/html; charset=UTF-8\" />", pdf);
        fputs("<html><body><center><table border=\"1\" bordercolor=\"#85f064\" cellpadding=\"1\" cellspacing=\"1\"><tbody>", pdf);
        fputs("<tr  bgcolor= \"#009e43\" > <td style=\"width: 70px;\"><b>No.</b></font></td> ", pdf);
        fputs("<td style=\"width: 60px;\"><b>Linea</b> </font></td>", pdf);
        fputs("<td style=\"width: 60px;\"><b>Columna</b> </font></td>", pdf);
        fputs("<td style=\"width: 100px;\"><b>Error Lexico</b> </font></td> <tr>", pdf);
        char lineas[800];
        char *ptrToken;
        int i = 1;
        char rango[3];
        while (fscanf(errLex, "%s", lineas) == 1) {
            ptrToken = strtok(lineas, ",");

            while (ptrToken != NULL) {

                if (i % 2 != 0) {
                    char* color = "<tr  bgcolor= \"#acf3ca\" > ";
                    fputs(color, pdf);
                } else {
                    char* color = "<tr  bgcolor= \"#ffffff\" >";
                    fputs(color, pdf);
                }
                sprintf(rango, "%d", i);
                fputs("<td style=\"width: 70px;\"> ", pdf);

                fputs(rango, pdf);
                fputs("</font></td>", pdf);

                fputs("<td style=\"width: 60px;\"><b>", pdf);
                fputs(ptrToken, pdf);
                fputs("</b> </font></td>", pdf);

                ptrToken = strtok(NULL, ",");
                fputs("<td style=\"width: 60px;\"><b>", pdf);
                fputs(ptrToken, pdf);
                fputs("</b> </font></td>", pdf);

                ptrToken = strtok(NULL, ",");
                fputs("<td style=\"width: 100px;\"><b>", pdf);
                fputs(ptrToken, pdf);
                fputs("</b> </font></td><tr>", pdf);
                i++;

                ptrToken = strtok(NULL, ",");
            }

        }
        fclose(pdf);
        system("xdg-open lexico.html");
    } else if (a == 2) {
        printf("Fin del programa");

    } else {
        printf("opción incorrecta: %i", a);
    }
    fclose(errLex);

}

void generarSintactico(char* s2) {
    printf("\n");
    system(s2);
    


}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        printf("Debe ingresar un archivo a analisar\nEjemplo: 201220120 proyecto.olc");
    } else {
        FILE* archivo = NULL;
        char* nombreArchivo = argv[1];
        archivo = fopen(nombreArchivo, "r");
        if (archivo == NULL) {
            printf("\nEl archivo se encuentra vació o no es compatible\n");
        } else {
            printf("\n.:Realización de analisis léxico:.\n");
            system("flex lexer.l");
            system("cc lex.yy.c -o scanner -lfl -lm");
            char* tmp2 = "Se asigna la memoria necesaria para el funcionamiento del archivo";
            char TInOrden[900];
            char* s1 = malloc(sizeof (char)*(2 * strlen(TInOrden) + strlen(tmp2) + 10));
            char* tmp1 = "./scanner ";
            strcpy(s1, tmp1);
            strcat(s1, nombreArchivo);
            system(s1);
            FILE *errLex = NULL;
            errLex = fopen("errLexico.txt", "r");
            long int tamano;
            fseek(errLex, 0, SEEK_END); //Nos vamos el final del archivo
            tamano = ftell(errLex);

            if (tamano > 1) {
                generarLexico(errLex);
                break;

            } else
                printf("\nNo se han encontrado errores léxicos\n");

            printf("\n.:Realización de analisis sintactico:.\n");
            system("flex scanner.l && bison -d parser.y && cc lex.yy.c parser.tab.c -o analizador -lfl -lm diccionario.c");
            char* tmp3 = "./analizador ";
            char* s2 = malloc(sizeof (char)*(2 * strlen(TInOrden) + strlen(tmp2) + 10));
            strcpy(s2, tmp3);
            strcat(s2, nombreArchivo);
            generarSintactico(s2);

        }

        fclose(archivo);


    }
    

    return 0;
}

