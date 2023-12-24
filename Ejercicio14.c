/* 14. Escribir un programa que visualice en pantalla la siguiente figura:

                                                                      *
                                                                    + *
                                                                  * + *
                                                                + * + *
                                                              * + * + *
                                                            + * + * + *
                                                          * + * + * + *
                                                        + * + * + * + *
                                                      * + * + * + * + *

*/

#include<stdio.h> // incluir el encabezado estándar de entrada / salida.

int main(void) // la función main inicia la ejecución del programa.
{
    unsigned short cantidad_de_espacios_en_blanco = 8, cantidad_de_asteriscos_y_cruces = 1; // declaración de la variable que guarda la cantidad de espacios que se imprimen por cada fila para darle forma al triángulo y declaración de la variable que imprime cierta cantidad de cruces y asteriscos por cada fila después de los espacios.

    // inicio del ciclo for.
    for ( unsigned short fila = 1; fila <= 9; fila++ ) { // condición para imprimir el triángulo hasta la octava fila.
        // inicio del ciclo for.
        for ( unsigned short columna = 1; columna <= cantidad_de_espacios_en_blanco; columna++ ) // condición para imprimir inicialmente 8 asteriscos, esta cantidad disminuye a medida que se avanza en las filas hasta que en la última no se imprime ningún espacio.
            printf( "  " ); // se imprime un espacio.
        // fin del ciclo for.

        // inicio del ciclo for.
        for ( unsigned short columna = 1; columna <= cantidad_de_asteriscos_y_cruces; columna++ ) { // condición para imprimir inicialmente un asterisco, luego una cruz y un asterisco, luego la secuencia asterisco - cruz - asterisco, así sucesivamente hasta la última fila.
            // inicio de if - else if.
            // inicio de if.
            if ( ( ( fila % 2 == 0 ) && ( columna % 2 == 0 ) ) || ( ( fila % 2 != 0 ) && ( columna % 2 != 0 ) ) ) // condición para imprimir un asterisco de acuerdo a la fila y la columna.
                printf( "* " ); // se imprime un asterisco.
            // fin de if
            // inicio de else if.
            else if ( ( ( fila % 2 == 0 ) && ( columna % 2 != 0 ) ) || ( ( fila % 2 != 0 ) && ( columna % 2 == 0 ) ) ) // condición para imprimir una cruz de acuerdo a la fila y la columna.
                printf( "+ " ); // se imprime una cruz.
            // fin de else if.
            // fin de if - else if.
        } // fin del ciclo for.

        cantidad_de_espacios_en_blanco--; // la cantidad de espacios en blanco disminuye de 1 en 1 conforme se avanza en las filas para darle forma al triángulo.

        cantidad_de_asteriscos_y_cruces++; // la cantidad de asteriscos y cruces incrementa de 1 en 1 a medida que se avanza en las filas para darle forma al triangulo.

        printf( "\n" ); // se imprime un salto de línea para pasar a la siguiente fila.
    } // fin del ciclo for.

    return 0; // indica que el programa terminó con éxito.
} // fin de la función main.