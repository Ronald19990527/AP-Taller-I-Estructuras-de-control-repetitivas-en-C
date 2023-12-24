/* 17. Codifique un programa en C que lea por teclado cierta cantidad de números hasta teclear 0 
(cero). El programa debe validar que cada uno de estos valores tecleados estén entre un 
intervalo [a,b] (a y b son dos números leído por teclado). El programa debe imprimir la suma 
de aquellos valores que sean múltiplos de un valor z también leído por teclado.
Por ejemplo para a=8, b=96 (intervalo [8,96]) y z=4, se deben leer ciertos valores hasta 
encontrar un cero como por ejemplo 9, 13, 93, 16, 19, 27, 33, 36, 41, 59, 11, 24, 0. La suma 
de los múltiplos de z (z=4 en este caso) es 76. */

#include<stdio.h> // incluir el encabezado estándar de entrada / salida.

int main(void) // la función main inicia la ejecución del programa.
{
    unsigned int a = 0, b = 0, z = 0, numero = 0, suma = 0, contadorDeNumeros = 0; // declaración de las variables que guardan los límites del intervalo cerrado [a, b], la variable que cuenta los números ingresados a escepcion del "0" El valor de "z" del cual se evaluará si un número es múltiplo de este, la variable que guarda cada uno de los números ingresados y de la variable que guarda la sumatoria de los múltiplos de "z".

    printf( "Ingrese el límite inferior a: " ); // le indica al usuario que ingrese el límite inferior del intervalo cerrado.
    scanf( "%d", &a ); // el límite inferior ingresado por el usuario se guarda en su respectiva variable.
    printf( "\n" ); // se imprime un salto de línea antes de pedir el siguiente dato.

    printf( "Ingrese el límite superior b: " ); // le indica al usuario que ingrese el límite superior del intervalo cerrado.
    scanf( "%d", &b ); // El límite superior ingresado por el usuario se guarda en su respectiva variable.
    printf( "\n" ); // se imprime un salto de línea antes de pedir el siguiente dato.

    printf( "Ingrese un valor cualquiera: " );
    scanf( "%d", &z ); // el valor ingresado por el usuario se guarda en su respectiva variable.
    printf( "\n" ); // se imprime un salto de línea antes de pedir el siguiente dato.

    printf( "Ingrese un número: " ); // se le pide al usuario que ingrese el primer número que será evaluado.
    scanf ( "%d", &numero ); // el número ingresado por el usuario se guarda en su respectiva variable.

    // inicio del ciclo while
    while ( numero != 0 ) { // condición para dejar de pedir números.
        contadorDeNumeros++; // cuenta la cantidad de números ingresados para establecer una determinada salida.

        // inicio de if - else if.
        // inicio de if.
        if ( numero >= a && numero <= b ) { // condición para evaluar si el número está dentro del rango establecido por el usuario.
            // inicio de if - else.
            // inicio de if.
            if ( numero % z == 0 ) { // condición para evaluar si el número ingresado es múltiplo de "z".
                printf( "El número se encuentra en el intervalo [%d, %d] y es múltiplo de %d\n\n", a, b, z ); // se imprime en pantalla que el número es múltiplo de "z" y que pertenece al rango [a, b].

                suma += numero; // se suman los números que son múltiplos de "z" y que pertenecen al rango [a, b].
            } // fin de if.
            // inicio del else.
            else {
                printf( "El número se encuentra en el intervalo [%d, %d], pero no es múltiplo de %d\n\n", a, b, z ); // se imprime en pantalla que el número pertenece al intervalo [a, b], pero que no es múltiplo de "z".
            } // fin de else.
            // fin de if - else.
        } // fin de if.
        // inicio de else if.
        else if ( numero < a || numero > b ) // condición para evaluar si el número está fuera del rango establecido por el usuario.
            printf( "El número no pertenece al intervalo [%d, %d], por favor, vuelva a intentarlo\n\n", a, b ); // de imprime en pantalla que el número no se encuentra en el rango establecido por el usuario.
        // fin de else if.

        printf( "Ingrese otro número: " ); // se le pide al usuario que ingrese otro número para ser evaluado.
        scanf ( "%d", &numero ); // el siguiente número ingresado por el usuario se guarda en su respectiva variable.
    } // fin del ciclo while.

    // inicio de if - else if.
    // inicio de if.
    if ( contadorDeNumeros == 0 ) // condición para el caso en que el programa se termina a penas iniciando (se ingresa 0 desde el principio).
        printf( "\nPrograma finalizado, have a good day!\n" ); // se imprime en pantalla que el programa ha finalizado.
    // fin de if.
    // inicio de else if.
    else if ( contadorDeNumeros != 0 && suma == 0 ) // condición para los números que no pertenecen al intervalo establecido por el usuario.
        printf( "\nNo existen números pertenecientes al intervalo [%d, %d] que a su vez sean múltiplos de %d\n", a, b, z ); // se imprime en pantalla que ninguno de los números ingresados pertenecen al intervalo establecido por el usuario y que al mismo tiempo sean múltiplos de "z".
    // fin de else if.
    // inicio de else if.
    else if ( contadorDeNumeros != 0 && suma != 0 ) // condición para los números que pertenecen al intervalo establecido por el usuario y que a su vez son múltiplos de "z".
        printf( "\nLa sumatoria de los números que pertenecen al intervalo [%d, %d] que a su vez son múltiplos de %d es %d\n", a, b, z, suma ); // se imprime en pantalla la sumatoria de los números que pertenecen al intervalo establecido por el usuario y que a su vez son múltiplos de "z".
    // fin de else if.
    // fin de if - else if.

    return 0; // indica que el programa finalizó con éxito.
} // fin de la función main.