/* 2. Dos números a y b se dice que son amigos si la suma de los divisores de a (salvo él 
mismo) coincide con b y viceversa. Implemente un programa que tenga como entrada
dos números naturales y que indique mediante un mensaje si son amigos o no. */

/* incluir el encabezado estándar de entrada/salida */
#include<stdio.h>

/* la función main inicia la ejecución del programa */
int main(void)
{
    /* declaración de las variables que guardan los números a y b, declaración de las variables que guarda la suma los divisores de cada número, declaración de las variables
    que controlan los ciclos y declaración de la variable que controla las variables que controlan los ciclos */
    unsigned int a = 0, b = 0, sumador_de_divisores_de_a = 0, sumador_de_divisores_de_b = 0, control_de_los_contadores = 0, control_del_ciclo1 = 1, control_del_ciclo2 = 1;

    printf( "ingrese un n%cmero natural a: ", 163 ); /* indicador */
    scanf( "%d", &a ); /* se lee el primer número */

    printf( "ingrese un n%cmero natural b: ", 163 ); /* indicador */
    scanf( "%d", &b ); /* se lee el segundo número */

    printf( "\nLos divisores de %d sin incluir al %d son: ", a, a ); /* se le indica al usuario que se van a mostrar los divisores de "a" sin incluir "a".

    /* ciclo while que controla el cálculo de los divisores de a y b sin incluir a los mismos */
    while ( control_del_ciclo1 < a || control_del_ciclo2 < b ){ /* condición para que el ciclo while termine cuando ambos contadores coincidan con a y b */
        /* inicio de if */
        if ( a % control_del_ciclo1 == 0 && control_de_los_contadores == 0 ){ /* condición para que inicien a sumarse los divisores de a */
            sumador_de_divisores_de_a += control_del_ciclo1; /* los divisores de a se suman */

            printf( "%d\t", control_del_ciclo1 ); /* impresión en pantalla de los divisores de a */
        } /* fin de if */

        /* inicio de if */
        if ( b % control_del_ciclo2 == 0 && control_de_los_contadores == 1 ){ /* condición para que inicien a sumarse los divisores de b */
            sumador_de_divisores_de_b += control_del_ciclo2; /* los divisores de b se suman */

            printf( "%d\t", control_del_ciclo2 ); /* impresión en pantalla de los divisores de b */
        } /* fin de if */

        if ( control_del_ciclo1 < a && control_de_los_contadores == 0 ) /* condición para que el contador del número a siga incrementadose */
            control_del_ciclo1++; /* incremento del contador para a*/
        /* fin de if */

        /* inicio de if */
        if ( control_del_ciclo1 == a && control_de_los_contadores == 0 ){ /* condición para que el contador de a haga el último incremento */
            control_del_ciclo1++; /* último incremento del contador de a */

            control_de_los_contadores = 1; /* esta variable toma el valor de 1 para que inicie el otro contador */

            /* inicio de if */
            if ( sumador_de_divisores_de_a == b ) /* condición para que se imprima la suma de divisores de a y si estos coinciden con b */
                printf( "\n\nLa suma de estos divisores es de %d, la cual coincide con b", sumador_de_divisores_de_a ); /* impresión en pantalla de la suma de los divisores de a y su coincidencia con b */
            /* fin de if */
            /* inicio de else */
            else /* condición para imprimir la suma de divisores de a y su no coincidencia con b */
                printf( "\n\nLa suma de estos divisores es de %d, la cual no coincide con b", sumador_de_divisores_de_a ); /* impresión de la suma de los divisores de a y su no coincidencia con b */
            /* fin de else */

            /* impresión en pantalla del mensaje "los divisores de b sin incluir a b son: */
            printf( "\n\nLos divisores de %d sin incluir al %d son: ", b, b );
            } /* fin de if */
        /* inicio de else if */
        else if ( control_del_ciclo2 < b && control_de_los_contadores == 1 ) /* condición para que cuente el contador de b */
            control_del_ciclo2++; /* el contador de b empieza a incrementarse */
        /* fin de else if */

        /* inicio de if */
        if ( control_del_ciclo2 == b && control_de_los_contadores == 1 ){ /* condición para que el contador de b haga su último incremento */
            control_del_ciclo2++; /* El contador de b hace su último incremento */

            /* inicio de if */
            if ( sumador_de_divisores_de_b == a ) /* condición para saber si la suma de divisores de b coincide con a */
                printf( "\n\nLa suma de estos divisores es de %d, la cual coincide con a", sumador_de_divisores_de_b ); /* se imprime en pantalla la suma de divisores de b y esta coincide con a */ 
            /* fin de if */
            /* inicio de else */
            else /* condición para cuando la suma de divisores de b no coincide con a */
                printf( "\n\nLa suma de estos divisores es de %d, la cual no coincide con a", sumador_de_divisores_de_b ); /* se imprime en pantalla la suma de divisores de b y su no coincidencia con a */
        } /* fin de if */
    } /* fin de while */

    /* inicio de if */
    if ( sumador_de_divisores_de_a == b && sumador_de_divisores_de_b == a ) /* condición para cuando los números a y b son amigos */
        printf( "\n\nPor lo tanto, los n%cmeros %d y %d son amigos\n", 163, a, b ); /* se imprime en pantalla que los números a y b son amigos */
    /* fin de if */
    /* inicio de else */
    else /* condición para cuando los números a y b no son amigos */
        printf( "\n\nPor lo tanto, los n%cmeros %d y %d no son amigos\n", 163, a, b ); /* se imprime en pantalla que los números a y b no son amigos */
    /* fin de else */

    return 0; /* indica que el programa finalizó con éxito */
} /* fin de la función main */
