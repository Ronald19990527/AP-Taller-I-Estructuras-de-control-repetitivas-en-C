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
    int fila = 0, columna = 0, cantidad_de_asteriscos = 1, altura = 0; // declaración de las variables para recorrer el número de filas, el número de columnas, la altura del triángulo y el tamaño variable de las columnas 

    printf( "Ingrese la altura del triángulo : " ); // indicador para ingresar la altura del triángulo
    scanf( "%d", &altura ); // se lee la altura del triángulo

    printf( "\n" ); // se imprime un salto de línea para imprimir después el triángulo

    // inicio del ciclo for
    for ( fila = 0; fila < altura; fila++ ) { // condición para limitar el número de filas
        for ( columna = 0; columna < ( altura - ( fila + 1 ) ); columna++ ) { // condición para la cantidad de espacios antes imprimir el primer asterisco de cada fila
            printf( "  " ); // impresión de los espacios antes del primer asterisco de cada fila
        } // fin del ciclo for

        // inicio del ciclo for
        for ( columna = 0; columna < cantidad_de_asteriscos; columna++ ) { // condición para imprimir asteriscos en cada fila cada uno separado por un espacio hasta un tamaño variable por cada fila
            printf( "* " ); // impresión de cada asterisco con un espacio
        } // fin del ciclo for

        cantidad_de_asteriscos += 2; // variación del tamaño de cada fila de dos en dos

        printf( "\n" ); // impresión de un salto de línea a la siguiente fila
    } // fin del ciclo for

    return 0; // indica que el programa terminó con éxito
} // fin de la función main