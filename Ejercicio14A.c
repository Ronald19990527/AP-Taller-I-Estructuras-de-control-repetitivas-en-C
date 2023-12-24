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
    unsigned int altura_del_triangulo = 0, cantidad_de_espacios_en_blanco = 0, cantidad_de_asteriscos_y_cruces = 1; // declaración de la variable que guarda el tamaño del triángulo ingresado por el triángulo, declaración de la variable que guarda la cantidad inicial de espacios en blanco definida por el tamaño del triángulo menos "1" y declaración de la variable que guarda la cantidad de asteriscos y cruces que se irán imprimiendo por fila para darle la forma al triangulo.

    printf( "Ingrese el tamanio del triangulo: " ); // le indica al usuario que ingrese el tamaño del triángulo.
    scanf( "%d", &altura_del_triangulo ); // el tamaño del triángulo ingresado por el usuario se guarda en su respectiva variable.

    printf( "\n" ); // se imprime un salto de línea entre el enunciado anterior y el triángulo que posteriormente se va a imprimir.

    cantidad_de_espacios_en_blanco = altura_del_triangulo - 1; // se define la cantidad inicial de espacios que se va a imprimir en pantalla definida como el tamaño del triángulo menos "1".

    // inicio del ciclo for.
    for ( unsigned int fila = 1; fila <= altura_del_triangulo; fila++ ) { // condición para imprimir el triángulo hasta la fila determinada por el tamaño del mismo.
        // inicio del ciclo for.
        for ( unsigned int columna = 1; columna <= cantidad_de_espacios_en_blanco; columna++ ) // condición para imprimir espacios cierta cantidad de veces desde la inicial y esta cantidad va disminuyendo por fila para darle forma al triángulo.
            printf( "  " ); // se imprime un espacio.
        // fin del ciclo for.

        // inicio del ciclo for.
        for ( unsigned int columna = 1; columna <= cantidad_de_asteriscos_y_cruces; columna++ ) { // condición para imprimir asteriscos y cruces después de los espacios, esta cantidad disminuye de "1" en "1" a medida que se avanza en las filas para darle forma al triángulo.
            // inicio de if - else if.
            // inicio de if.
            if ( ( ( fila % 2 == 0 ) && ( columna % 2 == 0 ) ) || ( ( fila % 2 != 0 ) && ( columna % 2 != 0 ) ) ) // condición para imprimir un asterisco de acuerdo a la fila y columna donde se encuentre.
                printf( "* " ); // se imprime un asterisco.
            // fin de if.
            // inicio de else if.
            else if ( ( ( fila % 2 == 0 ) && ( columna % 2 != 0 ) ) || ( ( fila % 2 != 0 ) && ( columna % 2 == 0 ) ) ) // condición para imprimir una cruz de acuerdo a la fila y columna en donde se encuentre.
                printf( "+ " ); // se imprime una cruz.
            // fin de else if.
            // fin de if - else if.
        } // fin del ciclo for.

        cantidad_de_espacios_en_blanco--; // la cantidad de espacios en blanco se reduce de "1" en "1" a medida que se recorren las filas para darle forma al triángulo.

        cantidad_de_asteriscos_y_cruces++; // la cantidad de asteriscos y cruces a imprimir se incrementan de "1" en "1" a medida que se recorren las filas para darle forma al triángulo.

        printf( "\n" ); // se imprime un salto de línea para pasar a la siguiente fila.
    } // fin del ciclo for.

    return 0; // indica que el programa terminó con éxito.
} // fin de la función main.