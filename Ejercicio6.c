/* 6. Escribir un programa que determine todos los años que son bisiestos en el siglo XXI. 
Un año es bisiesto si es múltiplo de 4 (ejemplo: 1988), excepto los múltiplos de 100 
que no son bisiestos salvo que a su vez también sean múltiplos de 400 (ejemplo: 1800 
no es bisiesto, 2000 si). */

#include<stdio.h> // incluir la biblioteca estándar de entrada / salida.

int main(void) // la función main inicia la ejecución del programa.
{
    unsigned int anio = 2000; // declaración de la variable que guarda los años del siglo XXI.

    printf( "Los años bisiestos son:\n" ); // le indica al usuario que a continuación se imprimirán los años bisiestos.
    // inicio del ciclo while.
    while ( anio <= 2100 ) { // condición para tener en cuenta a todos los años del siglo XXI.
        // inicio de if - else if.
        // inicio de if.
        if ( anio % 4 == 0 ) { // 1ra condición para determinar si un año es bisiesto.
            printf( "%d", anio ); // se imprime un año bisiesto.

            printf( "\n" ); // se imprime un salto a la siguiente línea.
        } // fin de if.
        // inicio de else if.
        else if ( ( anio % 100 == 0 ) && ( anio % 400 == 0 ) ) { // 2da condición para determinar si un año es bisiesto.
            printf( "%d", anio ); // se imprime un año bisiesto.

            printf( "\n" ); // se imprime un salto a la siguiente línea.
        } // fin de else if.
        // fin de if - else if.

        anio++; // incremento en los años del siglo XXI.
    } // fin del ciclo while.

    return 0; // indica que el programa terminó con éxito.
} // fin de la función main.