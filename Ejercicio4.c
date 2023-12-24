/* 4. Desarrolle un programa que calcule el m�ximo com�n divisor (mcd) de dos n�meros 
naturales a y b */

/* incluir el encabezado est�ndar de entrada/salida */
#include<stdio.h>

/* la funci�n main inicia la ejecuci�n del programa */
int main(void)
{
    /* declaraci�n de las variables a y b que guardar�n los n�meros a los que se les calcular� el m.c.d, declaraci�n del contador auxiliar que contar�
    hasta el valor de "divisores de a y b", declaraci�n de las variables aux1 y aux2 que mantendr�n los valores de a y b, declaraci�n de la variable "divisores_de_a_y_b"
    que guarda los n�meros por los cuales se divide sucesivamente tanto a como b, declaraci�n del contador de divisores que se encarga de verificar si los divisores de a y b son
    n�meros primos */
    unsigned int a = 0, b = 0, contador_auxiliar = 1, aux1 = 0, aux2 = 0, divisores_de_a_y_b = 2, contador_de_divisores = 1, multiplicacion = 1;

    printf( "Ingresa un n%cmero: ", 163 ); /* le indica al usuario que ingrese el primer n�mero */
    scanf( "%d", &a ); /* el n�mero ingresado por el usuario se guarda en la variable a */
    printf( "Ingresa otro n%cmero: ", 163 ); /* le indica al usuario que ingrese un segundo n�mero */
    scanf( "%d", &b ); /* el segundo n�mero ingresado por el usuario se guarda en la variable b */

    aux1 = a; /* el n�mero "a" se guarda en la variable aux1 */
    aux2 = b; /* el n�mero "b" se guarda en la variable aux2 */

    /* inicio del ciclo while */
    while ( divisores_de_a_y_b <= aux1 && divisores_de_a_y_b <= aux2 ){ /* este ciclo while se encarga de ejecutarse hasta que divisores de a y b coincida con aux1 o con aux2 */  
        /* inicio del ciclo while */
        while ( contador_auxiliar <= divisores_de_a_y_b ){ /* este ciclo while se en carga de comprobar si los divisores de a y b son primos */
            /* inicio de if */
            if ( divisores_de_a_y_b % contador_auxiliar == 0 ) /* condici�n para n�meros primos */
                contador_de_divisores++; /* contador encargado de verificar si el n�mero es primo o compuesto */
            /* fin de if */

            contador_auxiliar++; /* contador para los divisores para los divisores de a y b */
        } /* fin del ciclo while */

        /* inicio de if */
        if ( contador_de_divisores == 3 ) { /* condici�n para n�meros primos */
            /* inicio de if */
            if ( a % divisores_de_a_y_b == 0 && b % divisores_de_a_y_b == 0 ){ /* condici�n para saber si el n�mero es divisible en a y en b */
                /* a se divide entre el n�mero de forma sucesiva */   
                a = a / divisores_de_a_y_b;
                
                /* b se divide entre el n�mero de forma sucesiva */
                b = b / divisores_de_a_y_b;

                /* el n�mero primo se multiplica entre si varias veces */
                multiplicacion *= divisores_de_a_y_b;
            } /* fin de if */
            /* inicio de else if */
            else if ( a % divisores_de_a_y_b != 0 || b % divisores_de_a_y_b != 0 ) { /* condici�n para n�meros primos no divisibles entre a y b */
                divisores_de_a_y_b++; /* se incrementa la variable para verificar si el siguiente n�mero es primo y si es divisible entre a y b */
            } /* fin de else if */
        } /* fin de if */
        /* inicio de else */
        else { /* condici�n para n�meros compuestos */
            divisores_de_a_y_b++; /* se incrementa la variable para verificar si el siguiente n�mero es primo y si es divisible entre a y b */
        } /* fin de else */

        /* se reinicia el contador de divisores para volver a evaluar si el pr�ximo n�mero es primo o compuesto */
        contador_de_divisores = 1;

        /* se reinicia el contador auxiliar para volver a evaluar si el pr�ximo n�mero es primo o compuesto */
        contador_auxiliar = 1;
    } /* fin de while */

    printf( "El m.c.d de %d y %d es %d", aux1, aux2, multiplicacion ); /* se imprime en pantalla el m.c.d de los n�meros a y b */

    return 0; /* indica que el programa finaliz� con �xito */
} /* fin de la funci�n main */
