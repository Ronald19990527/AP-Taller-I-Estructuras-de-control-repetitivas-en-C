/* 12. Escribir un programa que visualice en pantalla la siguiente figura:
                * * * * * * * * *
                  * * * * * * *
                    * * * * *
                      * * *
                        *
*/
#include<stdio.h> // incluir la biblioteca estándar de entrada / salida.

int main(void) // la función main inicia la ejecución del programa.
{
    unsigned int cantidad_de_espacios = 0, cantidad_de_asteriscos = 9; // declaración de las variables que guardan la cantidad de espacios y asteriscos a imprimir.

    // inicio del ciclo for.
    for ( unsigned int fila = 1; fila <= 5; fila++ ) { // condición para imprimir espacios y asteriscos hasta la 5ta fila.
        // inicio del ciclo for.
        for ( unsigned int columna = 1; columna <= cantidad_de_espacios; columna++ ) { // condición para la cantidad de espacios a imprimir por fila.
            printf( "  " ); // se imprime un espacio.
        } // fin del ciclo for.

        // inicio del ciclo for.
        for ( unsigned int columna = 1; columna <= cantidad_de_asteriscos; columna++ ) { // condición para imprimir cierta cantidad de asteriscos por fila.
            printf( "* " ); // se imprime un asterisco.
        } // fin del ciclo for.

        cantidad_de_espacios++; // se incrementa la cantidad de espacios a imprimir.

        cantidad_de_asteriscos -= 2; // se disminuye la cantidad de asteriscos a imprimir.

        printf( "\n" ); // salto de línea para imprimir espacios y asteriscos en la siguiente fila.
    } // fin del ciclo for.

    return 0; // indica que el programa terminó con éxito.
} // fin de la función main.