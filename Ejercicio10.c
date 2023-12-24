/* 10. Escribir un programa que visualice en pantalla un triángulo de la siguiente manera:
                        *
                      * * *
                    * * * * *
                  * * * * * * *
                * * * * * * * * *
*/

#include<stdio.h> // incluir el encabezado estándar de entrada/salida

int main(void) // la función main inicia la ejecución del programa
{
    int filas = 0, columnas = 0, cantidad_de_asteriscos = 1; // declaración de las variables para recorrer el número de filas, el número de columnas y el tamaño variable de las columnas 

    // inicio del ciclo for
    for ( filas = 0; filas < 5; filas++ ) { // condición para limitar el número de filas
        for ( columnas = 0; columnas < ( 5 - ( filas + 1 ) ); columnas++ ) { // condición para la cantidad de espacios antes imprimir el primer asterisco de cada fila
            printf( "  " ); // impresión de los espacios antes del primer asterisco de cada fila
        } // fin del ciclo for

        // inicio del ciclo for
        for ( columnas = 0; columnas < cantidad_de_asteriscos; columnas++ ) { // condición para imprimir asteriscos en cada fila cada uno separado por un espacio hasta un tamaño variable por cada fila
            printf( "* " ); // impresión de cada asterisco con un espacio
        } // fin del ciclo for

        cantidad_de_asteriscos += 2; // variación del tamaño de cada fila de dos en dos

        printf( "\n" ); // impresión de un salto de línea a la siguiente fila
    } // fin del ciclo for

    return 0; // indica que el programa terminó con éxito
} // fin de la función main