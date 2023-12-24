/* 13. Escribir un programa que visualice en pantalla la siguiente figura:
                   *
                 *   *
               *       *
             *           *
           *               *
             *           *
               *       *
                 *   *
                   *
*/

#include<stdio.h> // incluir el encabezado estándar de entrada / salida.

int main(void) // la.funcion main inicia la ejecución del programa.
{
    unsigned int longitud_de_la_fila = 1, tamanio_del_rombo = 0, cantidad_de_espacios = 0; // declaración de las variables que guardan la longitud de cada fila iniciando y terminando con un asterisco, y de la variable para la cantidad de espacios antes de los asteriscos. 

    printf( "Ingrese el tamanio del rombo: " ); // le indica al usuario que ingrese el tamaño del rombo.
    scanf( "%d", &tamanio_del_rombo ); // el tamaño del rombo se guarda en la variable "tamanio_del_rombo".

    cantidad_de_espacios = ( tamanio_del_rombo + 1 ) / 2 - 1; // cantidad inicial de espacios para imprimir antes de la primera fila del rombo.

    // inicio del ciclo for.
    for ( unsigned int fila = 1; fila <= tamanio_del_rombo; fila++ ) { // condición para imprimir espacios y asteriscos hasta la fila definida por el tamaño del rombo ingresado por el usuario.
        // inicio del ciclo for.
        for ( unsigned int columna = 1; columna <= cantidad_de_espacios; columna++ ) // condición para la cantidad de espacios antes de los asteriscos.
            printf( "  " ); // se imprime un espacio.

        // inicio del ciclo for.
        for ( unsigned int columna = 1; columna <= longitud_de_la_fila; columna++ ) { // condición que define la longitud de cada fila.
            // inicio de if - else if.
            // inicio de if.
            if ( columna == 1 || columna == longitud_de_la_fila ) // condición para imprimir un asterisco en las filas.
                printf( "* " ); // se imprime un asterisco.
            // inicio de else if.
            else if ( columna > 1 && columna < longitud_de_la_fila ) // condición para imprimir espacios entre los dos asteriscos de una fila.
                printf( "  " ); // se imprime un espacio.
            // fin de else if.
            // fin de if - else if.
        } // fin del ciclo for.

        // inicio de if - else if.
        // inicio de if.
        if ( fila < ( ( tamanio_del_rombo + 1 ) / 2 ) ) { // condición para el aumento de la longitud de la fila y el decremento de los espacios a imprimir antes de la fila.
            cantidad_de_espacios--; // disminuye la cantidad de espacios.

            longitud_de_la_fila += 2; // aumenta la longitud de la fila en 2 unidades.
        } // fin de if.
        // inicio de else if.
        else if ( fila >= ( ( tamanio_del_rombo + 1 ) / 2 ) ) { // condición para aumentar la cantidad de espacios a imprimir por fila ya para decrementar la longitud de esta.
            cantidad_de_espacios++; // incremento del número de espacios a imprimir antes de los dos asteriscos.

            longitud_de_la_fila -= 2; // decremento de la longitud de la fila en dos unidades.
        } // fin de else if.
        // fin de if - else if.

        printf( "\n" ); // salto de línea para imprimir espacios y asteriscos en la siguiente línea.
    } // fin del ciclo for.

    return 0; // indica que el programa terminó con éxito.
} // fin de la función main.