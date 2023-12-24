/* 4. Desarrolle un programa que calcule el máximo común divisor (mcd) de dos números 
naturales a y b */

/* incluir el encabezado estándar de entrada/salida */
#include<stdio.h>

/* la función main inicia la ejecución del programa */
int main(void)
{
    /* declaración de las variables a y b que guardarán los números a los que se les calculará el m.c.d, declaración del contador auxiliar que contará
    hasta el valor de "divisores de a y b", declaración de las variables aux1 y aux2 que mantendrán los valores de a y b, declaración de la variable "divisores_de_a_y_b"
    que guarda los números por los cuales se divide sucesivamente tanto a como b, declaración del contador de divisores que se encarga de verificar si los divisores de a y b son
    números primos */
    unsigned int a = 0, b = 0, contador_auxiliar = 1, aux1 = 0, aux2 = 0, divisores_de_a_y_b = 2, contador_de_divisores = 1, multiplicacion = 1;

    printf( "Ingresa un n%cmero: ", 163 ); /* le indica al usuario que ingrese el primer número */
    scanf( "%d", &a ); /* el número ingresado por el usuario se guarda en la variable a */
    printf( "Ingresa otro n%cmero: ", 163 ); /* le indica al usuario que ingrese un segundo número */
    scanf( "%d", &b ); /* el segundo número ingresado por el usuario se guarda en la variable b */

    aux1 = a; /* el número "a" se guarda en la variable aux1 */
    aux2 = b; /* el número "b" se guarda en la variable aux2 */

    /* inicio del ciclo while */
    while ( divisores_de_a_y_b <= aux1 && divisores_de_a_y_b <= aux2 ){ /* este ciclo while se encarga de ejecutarse hasta que divisores de a y b coincida con aux1 o con aux2 */  
        /* inicio del ciclo while */
        while ( contador_auxiliar <= divisores_de_a_y_b ){ /* este ciclo while se en carga de comprobar si los divisores de a y b son primos */
            /* inicio de if */
            if ( divisores_de_a_y_b % contador_auxiliar == 0 ) /* condición para números primos */
                contador_de_divisores++; /* contador encargado de verificar si el número es primo o compuesto */
            /* fin de if */

            contador_auxiliar++; /* contador para los divisores para los divisores de a y b */
        } /* fin del ciclo while */

        /* inicio de if */
        if ( contador_de_divisores == 3 ) { /* condición para números primos */
            /* inicio de if */
            if ( a % divisores_de_a_y_b == 0 && b % divisores_de_a_y_b == 0 ){ /* condición para saber si el número es divisible en a y en b */
                /* a se divide entre el número de forma sucesiva */   
                a = a / divisores_de_a_y_b;
                
                /* b se divide entre el número de forma sucesiva */
                b = b / divisores_de_a_y_b;

                /* el número primo se multiplica entre si varias veces */
                multiplicacion *= divisores_de_a_y_b;
            } /* fin de if */
            /* inicio de else if */
            else if ( a % divisores_de_a_y_b != 0 || b % divisores_de_a_y_b != 0 ) { /* condición para números primos no divisibles entre a y b */
                divisores_de_a_y_b++; /* se incrementa la variable para verificar si el siguiente número es primo y si es divisible entre a y b */
            } /* fin de else if */
        } /* fin de if */
        /* inicio de else */
        else { /* condición para números compuestos */
            divisores_de_a_y_b++; /* se incrementa la variable para verificar si el siguiente número es primo y si es divisible entre a y b */
        } /* fin de else */

        /* se reinicia el contador de divisores para volver a evaluar si el próximo número es primo o compuesto */
        contador_de_divisores = 1;

        /* se reinicia el contador auxiliar para volver a evaluar si el próximo número es primo o compuesto */
        contador_auxiliar = 1;
    } /* fin de while */

    printf( "El m.c.d de %d y %d es %d", aux1, aux2, multiplicacion ); /* se imprime en pantalla el m.c.d de los números a y b */

    return 0; /* indica que el programa finalizó con éxito */
} /* fin de la función main */
