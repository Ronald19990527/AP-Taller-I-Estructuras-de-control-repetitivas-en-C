/* 1. Leer 20 n�meros por teclado y encontrar el mayor y el menor valor le�dos. */

/* incluir el encabezado estandar de entrada/salida */
#include<stdio.h>

/* la funci�n main inicia la ejecuci�n del programa */
int main(void)
{
    /* declaraci�n de la variable que guarda la cantidad de n�meros ingresados,
    declaraci�n de la variable que guarda los n�meros ingresados, declaraci�n de la
    variable que guarda el mayor valor le�do y declaraci�n de la variable que guarda
    el menor valor le�do */
    int numero = 0, contador_de_numeros = 0, mayor = 0, menor = 0;

    printf( "Ingrese un n%cmero: ", 163 ); // le indica al usuario que ingrese el primer n�mero.

    scanf( "%d", &numero ); // se guarda el primer n�mero en su respectiva variable.

    printf( "\n" ); // se imprime un salto de l�nea.

    mayor = numero; // se toma el primer n�mero ingresado como referencia de comparaci�n para identificar al mayor n�mero ingresado.

    menor = numero; // se toma el primer n�mero ingresado como referencia de comparaci�n para identificar al menor n�mero ingresado.

    /* inicio del ciclo while */
    while ( contador_de_numeros < 19 ){ /* El ciclo while se encarga de que solo se ingresen 19 n�meros */
        printf( "Ingrese otro n%cmero: ", 163 ); // le indica al usuario que ingrese m�s n�meros.
        scanf( "%d", &numero ); // el resto de n�meros ingresados por el usuario se guardan en su respectiva variable.

        printf( "\n" );

        /* inicio de if */
        if ( numero > mayor ) /* condici�n para evaluar se un n�mero ingresado es mayor que el anterior */
            mayor = numero; /* el valor de la variable "n�mero" se le asigna a la variable mayor */
        else if ( numero < menor ) /* condici�n para evaluar se un n�mero ingresado es menor que el anterior */
            menor = numero; /* el valor de la variable "n�mero" se le asigna a la variable menor */ 

        contador_de_numeros++; /* esta variable cuenta cada n�mero ingresado */
    } /* fin de la funci�n main */

    printf( "El mayor valor le%cdo es %d y el menor valor le%cdo es %d", 161, mayor, 161, menor ); /* impresi�n en pantalla del mayor y el menor valor le�dos de 20 n�meros ingresados por el usuario */

    return 0; /* indica que el programa finaliza con �xito */
} /* fin de la funci�n main*/
