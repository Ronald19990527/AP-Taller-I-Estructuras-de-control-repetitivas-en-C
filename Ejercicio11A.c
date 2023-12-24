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

#include<stdio.h> // incluir la biblioteca estándar de entrada / salida.

int main(void) // la función main inicia la ejecución del programa.
{
    unsigned int tamanio_del_rombo = 0, cantidad_de_asteriscos = 1, cantidad_de_espacios = 0; // declaración de la variable que define el tamaño del rombo, la variable para la cantidad de asteriscos y la cantidad de espacios a imprimir.

    printf( "Ingrese el tamaño del rombo: " ); // indicación para que el usuario ingrese el tamaño del rombo.
    scanf( "%d", &tamanio_del_rombo ); // el tamaño del rombo ingresado por el usuario se guarda en la variable tamanio_del_rombo.

    cantidad_de_espacios = ( tamanio_del_rombo + 1 ) / 2 - 1; // cálculo para la cantidad de espacios a imprimir antes de los asteriscos.

    // inicio del ciclo for.
    for ( unsigned int fila = 1; fila <= tamanio_del_rombo; fila++ ) { // condición para imprimir asteriscos hasta la fila definida por el tamaño del rombo ingresado por el usuario.
        // inicio del ciclo for.
        for ( unsigned int columna = 1; columna <= cantidad_de_espacios; columna++ ) { // condición para imprimir espacios antes de los asteriscos.
            printf( "  " ); // se imprimen los espacios antes de los asteriscos.
        } // fin del ciclo for.

        // inicio del ciclo for.
        for ( unsigned int columna = 1; columna <= cantidad_de_asteriscos; columna++ ) { // condición para la cantidad de asteriscos a imprimir por fila.
            printf( "* " ); // impresión de asteriscos.
        } // fin del ciclo for.

        // inicio de if - else if.
        // inicio de if.
        if ( fila < ( tamanio_del_rombo + 1 ) / 2 ) { // condición para disminuir el número de espacios e incrementar la cantidad de asteriscos a imprimir.
            cantidad_de_espacios--; // se disminuye la cantidad de espacios a imprimir.

            cantidad_de_asteriscos += 2; // se incrementa de 2 en 2 el número de asteriscos a imprimir.
        } // fin de if.
        // inicio de else if.
        else if ( fila >= ( tamanio_del_rombo + 1 ) / 2 ) { // condición para incrementar la cantidad de espacios a imprimir y decrementar la cantidad de asteriscos.
            cantidad_de_espacios++; // se incrementa la cantidad de espacios a imprimir.

            cantidad_de_asteriscos -=2; // se decrementa la cantidad de asteriscos a imprimir.
        } // fin de else if.
        // fin de if - else if

        printf( "\n" ); // Salto de línea para imprimir espacios y asteriscos en una nueva fila.
    } // fin del ciclo for.

    return 0; // indica que el programa termino con éxito.
} // fin de la función main.