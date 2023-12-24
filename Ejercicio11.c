/* 11. Escribir un programa que visualice en pantalla la siguiente figura:
                        *
                      * * *
                    * * * * *
                  * * * * * * *
                * * * * * * * * *
                  * * * * * * *
                    * * * * *
                      * * *
                        *
*/

#include<stdio.h> // incluir el encabezado estándar de entrada/salida

int main(void) // la función main inicia la ejecución del programa
{
    int cantidad_de_espacios = 4, cantidad_de_asteriscos = 1; // declaración de las variables que imprimen espacios horizontales y asteriscos de dos horizontal

    // inicio del ciclo for
    for ( int filas = 1; filas <= 9; filas++ ) { // condición para imprimir hasta nueve filas
        // inicio del ciclo for
        for ( int columnas = 1; columnas <= cantidad_de_espacios; columnas++ ) { // condición para imprimir determinada cantidad de espacios antes de los asteriscos
            printf( "  " ); // impresión de espacios
        } // fin del ciclo for

        // inicio del ciclo for
        for ( int columnas = 1; columnas <= cantidad_de_asteriscos; columnas++ ) { // condición para imprimir determinada cantidad de asteriscos después de los espacios está cantidad a imprimir incrementa de dos en dos
            printf( "* " ); // impresión de asteriscos
        } // fin del ciclo for

        // inicio de if
        if ( filas < ( ( 9 + 1 ) / 2 ) ) { // condición para disminuir la cantidad de espacios a imprimir e incrementar el número de asteriscosr
            cantidad_de_espacios--; // se disminuye la cantidad de espacios a imprimir

            cantidad_de_asteriscos += 2; // se incrementa el número de asteriscos a imprimir
        } // fin de if
        // inicio de else if
        else if ( filas >= ( ( 9 + 1 ) / 2 ) ) { // condición para aumentar la cantidad de espacios y disminuir el número de asteriscos a imprimir
            cantidad_de_espacios++; // se aumenta la cantidad de espacios a imprimir

            cantidad_de_asteriscos -= 2; // se disminuye la cantidad de asteriscos a imprimir
        } // fin de else if

        printf( "\n" ); // se imprime un salto de línea por cada fila
    } // fin del ciclo for

    return 0; // indica que el programa terminó con éxito
} // fin de la función main