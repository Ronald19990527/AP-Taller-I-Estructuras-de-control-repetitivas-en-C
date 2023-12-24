/* 3. Implementar un programa que imprima los 20 primeros n�meros de Fibonacci.
Recuerde que un n�mero de Fibonacci se calcula como la suma de los dos anteriores
as�: 0, 1, 1, 2, 3, 5, 8, 13... */

/* incluir el encabezado estandar de entrada/salida */
#include<stdio.h>

/* la funci�n main inicia la ejecuci�n del programa */
int main(void)
{
    /* declaraci�n de las variables que guardan el antepenultimo n�mero antes del actual y
    el pen�ltimo n�mero antes del actual y declaraci�n del contador con el cual se verifica
    si la posici�n actual es par o impar */ 
    unsigned int antepenultimo = 0, penultimo = 0, contador_de_la_serie = 0;

    /* inicio del ciclo while */
    while ( contador_de_la_serie < 20 ){ /* el ciclo while se encarga de controlar la impresi�n en pantalla de los 20 primeros n�meros */
        /* inicio de if */
        if ( contador_de_la_serie < 2 ){ /* condici�n para tomar como valores de referencia el cero y el uno, esta se ejecutar� solo dos veces mientras el contador sea menor que 2 */
            /* en la primera repetici�n se guardo un -1 y en la segunda un 0 */
            antepenultimo = contador_de_la_serie - 1;

            /* en la primera repetici�n se guarda un 0 y en la segunda un 1 */
            penultimo = contador_de_la_serie;

            /* en la primera repetici�n se imprime un 0 y en la segunda un 1 */ 
            printf( "%d, ", contador_de_la_serie );
        } /* fin de if */
        /* inicio de else */
        else { /* condici�n para un valor del contador de 2 en adelante */
            /* inicio de if */
            if ( contador_de_la_serie % 2 == 0 ){ /* condici�n para saber si la posici�n del siguiente n�mero es par o impar */

                /* cuando la posici�n es par, los n�meros en esta posici�n se representan con la variable antepen�ltimo y su valor
                ser� la suma del anterior que es el pen�ltimo m�s el que est� antes que es el antepen�ltimo */
                antepenultimo = antepenultimo + penultimo;

                /* inicio de if */
                if ( contador_de_la_serie < 18 ) /* condici�n para imprimir en pantalla los 18 n�meros de la serie */
                    printf( "%d, ", antepenultimo ); /* impresi�n en pantalla de los 18 n�meros de la serie */
                /* fin de if */
                /* inicio de else if */
                else if ( contador_de_la_serie == 18 ) /* condici�n para el pen�ltimo n�mero de la serie */
                    printf( "%d y ", antepenultimo ); /* impresi�n en pantalla del pen�ltimo n�mero de la serie */
                /* fin de else if */
            } /* fin de if */
            /* inicio de else */
            else { /* condici�n para saber si la posici�n del siguiente n�mero es impar */
                /* cuando la posici�n del siguiente n�mero es impar, estos n�meros se representan con la variable pen�ltimo y se
                calculan como la suma del anterior que es el antepen�ltimo m�s el que est� antes que es el pen�ltimo */
                penultimo = penultimo + antepenultimo;

                /* inicio de if */
                if ( contador_de_la_serie < 19 ) /* condici�n para los 19 n�meros de la serie */
                    printf( "%d, ", penultimo ); /* impresi�n en pantalla de los 19 n�meros de la serie */
                /* fin de if */
                /* inicio de else if */
                else if ( contador_de_la_serie == 19 ) /* condici�n para imprimir en pantalla el �ltimo n�mero de la serie */
                    printf( "%d\n", penultimo ); /* impresi�n en pantalla del �ltimo n�mero de la serie */
                /* fin de else if */
            } /* fin de else */
        } /* fin de else */

        /* contador que controla la serie de los 20 primeros n�meros de Fibonacci en incremento mientras seaenor que 20, dado que se empieza a imprimir desde el cero */
        contador_de_la_serie++;
    } /* fin de while */

    return 0; /* indica que el programa finaliz� con �xito */
} /* fin de la funci�n main */
