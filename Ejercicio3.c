/* 3. Implementar un programa que imprima los 20 primeros números de Fibonacci.
Recuerde que un número de Fibonacci se calcula como la suma de los dos anteriores
así: 0, 1, 1, 2, 3, 5, 8, 13... */

/* incluir el encabezado estandar de entrada/salida */
#include<stdio.h>

/* la función main inicia la ejecución del programa */
int main(void)
{
    /* declaración de las variables que guardan el antepenultimo número antes del actual y
    el penúltimo número antes del actual y declaración del contador con el cual se verifica
    si la posición actual es par o impar */ 
    unsigned int antepenultimo = 0, penultimo = 0, contador_de_la_serie = 0;

    /* inicio del ciclo while */
    while ( contador_de_la_serie < 20 ){ /* el ciclo while se encarga de controlar la impresión en pantalla de los 20 primeros números */
        /* inicio de if */
        if ( contador_de_la_serie < 2 ){ /* condición para tomar como valores de referencia el cero y el uno, esta se ejecutará solo dos veces mientras el contador sea menor que 2 */
            /* en la primera repetición se guardo un -1 y en la segunda un 0 */
            antepenultimo = contador_de_la_serie - 1;

            /* en la primera repetición se guarda un 0 y en la segunda un 1 */
            penultimo = contador_de_la_serie;

            /* en la primera repetición se imprime un 0 y en la segunda un 1 */ 
            printf( "%d, ", contador_de_la_serie );
        } /* fin de if */
        /* inicio de else */
        else { /* condición para un valor del contador de 2 en adelante */
            /* inicio de if */
            if ( contador_de_la_serie % 2 == 0 ){ /* condición para saber si la posición del siguiente número es par o impar */

                /* cuando la posición es par, los números en esta posición se representan con la variable antepenúltimo y su valor
                será la suma del anterior que es el penúltimo más el que está antes que es el antepenúltimo */
                antepenultimo = antepenultimo + penultimo;

                /* inicio de if */
                if ( contador_de_la_serie < 18 ) /* condición para imprimir en pantalla los 18 números de la serie */
                    printf( "%d, ", antepenultimo ); /* impresión en pantalla de los 18 números de la serie */
                /* fin de if */
                /* inicio de else if */
                else if ( contador_de_la_serie == 18 ) /* condición para el penúltimo número de la serie */
                    printf( "%d y ", antepenultimo ); /* impresión en pantalla del penúltimo número de la serie */
                /* fin de else if */
            } /* fin de if */
            /* inicio de else */
            else { /* condición para saber si la posición del siguiente número es impar */
                /* cuando la posición del siguiente número es impar, estos números se representan con la variable penúltimo y se
                calculan como la suma del anterior que es el antepenúltimo más el que está antes que es el penúltimo */
                penultimo = penultimo + antepenultimo;

                /* inicio de if */
                if ( contador_de_la_serie < 19 ) /* condición para los 19 números de la serie */
                    printf( "%d, ", penultimo ); /* impresión en pantalla de los 19 números de la serie */
                /* fin de if */
                /* inicio de else if */
                else if ( contador_de_la_serie == 19 ) /* condición para imprimir en pantalla el último número de la serie */
                    printf( "%d\n", penultimo ); /* impresión en pantalla del último número de la serie */
                /* fin de else if */
            } /* fin de else */
        } /* fin de else */

        /* contador que controla la serie de los 20 primeros números de Fibonacci en incremento mientras seaenor que 20, dado que se empieza a imprimir desde el cero */
        contador_de_la_serie++;
    } /* fin de while */

    return 0; /* indica que el programa finalizó con éxito */
} /* fin de la función main */
