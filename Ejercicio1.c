/* 1. Leer 20 números por teclado y encontrar el mayor y el menor valor leídos. */

/* incluir el encabezado estandar de entrada/salida */
#include<stdio.h>

/* la función main inicia la ejecución del programa */
int main(void)
{
    /* declaración de la variable que guarda la cantidad de números ingresados,
    declaración de la variable que guarda los números ingresados, declaración de la
    variable que guarda el mayor valor leído y declaración de la variable que guarda
    el menor valor leído */
    int numero = 0, contador_de_numeros = 0, mayor = 0, menor = 0;

    printf( "Ingrese un n%cmero: ", 163 ); // le indica al usuario que ingrese el primer número.

    scanf( "%d", &numero ); // se guarda el primer número en su respectiva variable.

    printf( "\n" ); // se imprime un salto de línea.

    mayor = numero; // se toma el primer número ingresado como referencia de comparación para identificar al mayor número ingresado.

    menor = numero; // se toma el primer número ingresado como referencia de comparación para identificar al menor número ingresado.

    /* inicio del ciclo while */
    while ( contador_de_numeros < 19 ){ /* El ciclo while se encarga de que solo se ingresen 19 números */
        printf( "Ingrese otro n%cmero: ", 163 ); // le indica al usuario que ingrese más números.
        scanf( "%d", &numero ); // el resto de números ingresados por el usuario se guardan en su respectiva variable.

        printf( "\n" );

        /* inicio de if */
        if ( numero > mayor ) /* condición para evaluar se un número ingresado es mayor que el anterior */
            mayor = numero; /* el valor de la variable "número" se le asigna a la variable mayor */
        else if ( numero < menor ) /* condición para evaluar se un número ingresado es menor que el anterior */
            menor = numero; /* el valor de la variable "número" se le asigna a la variable menor */ 

        contador_de_numeros++; /* esta variable cuenta cada número ingresado */
    } /* fin de la función main */

    printf( "El mayor valor le%cdo es %d y el menor valor le%cdo es %d", 161, mayor, 161, menor ); /* impresión en pantalla del mayor y el menor valor leídos de 20 números ingresados por el usuario */

    return 0; /* indica que el programa finaliza con éxito */
} /* fin de la función main*/
