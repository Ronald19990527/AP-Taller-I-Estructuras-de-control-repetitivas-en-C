/* Una propiedad de los números impares, nos permite encontrar los cubos de los números 
naturales así:

1 => 1^3 = 1
2 => 2^3 = 3 + 5 = 8
3 => 3^3 = 7 + 9 + 11 = 27
4 => 4^3 = 13 + 15 + 17 + 19 = 64
5 => 5^3 = 21 + 23 + 25 + 27 + 29 = 125

Hacer un programa en C que imprima los n términos impares que son necesarios para calcular 
n^3 de acuerdo a la propiedad expuesta anteriormente. (n es un número entero positivo dado 
por teclado) */

#include<stdio.h> // incluir el encabezado estándar de entrada y salida.

int main(void) // la función main inicia la ejecución del programa.
{
    // declaración de las variables que guardan el número ingresado por el usuario al que se le hallará su cubo, la que hace la sumatoria de los números impares, la que cuenta los números impares, la que guarda los números impares, la que retiene los números impares válidos y la que repite el ciclo while externo 3 veces (1ra para sumar los números impares válidos, 2da para imprimirlos y la 3ra para mostrarlos como una suma. 
    unsigned int n = 0, sumatoriaDeNumerosImpares = 0, contadorDeNumerosImpares = 0, numerosImpares = 1, auxiliarDeNumerosImpares = 1, iteracionesDelCicloWhile = 1;
    printf( "Ingrese un número: " ); // le indica al usuario que ingresé un número.
    scanf( "%d", &n); // el número ingresado se guarda en la variable n.
    printf( "\n" ); // se imprime en pantalla un salto de línea.

    printf( "Los números necesarios para hallar %d^3 son: ", n ); // se imprime en pantalla un mensaje que indica los números necesarios para hallar n^3.

    // inicio del ciclo while.
    while ( ( sumatoriaDeNumerosImpares != n * n * n ) || ( iteracionesDelCicloWhile <= 3 ) ) { // condición para mantener la impresión de los números impares necesarios en pantalla.
        // inicio del ciclo for.
        for ( contadorDeNumerosImpares = 0; contadorDeNumerosImpares < n; contadorDeNumerosImpares++ ) { // condición para para mantener el cálculo de la sumatoria de los números impares.
            // inicio de if - else if.
            // inicio de if.
            if ( iteracionesDelCicloWhile == 1 ) // condición para calcular primero la suma de los números impares.
                sumatoriaDeNumerosImpares += numerosImpares; // se suman los números impares.
            // fin de if.
            // inicio de else if.
            else if ( iteracionesDelCicloWhile == 2 ) { // condición para imprimir en pantalla los números impares necesarios.
                // inicio de if - else.
                // inicio de if.
                if ( n >= 3 ) { // condición para imprimir los números impares necesarios para calcular el cubo de los números mayores o iguales a 3.
                    // inicio de if - else.
                    // inicio de if
                    if ( contadorDeNumerosImpares <= n - 3 ) // condición para imprimir los números impares necesarios con comas.
                        printf( "%d, ", numerosImpares ); // se imprime en pantalla los números impares necesarios con comas.
                    // fin de if.
                    // inicio de else if.
                    else if ( contadorDeNumerosImpares == n - 2 ) // condición para imprimir el penúltimo número impar en pantalla sin coma.
                        printf( "%d ", numerosImpares ); // se imprime en pantalla el penúltimo número impar sin la coma.
                    // fin de else if.
                    // inicio de else if.
                    else if ( contadorDeNumerosImpares == n - 1 ) // condición para imprimir el último impar.
                        printf( "y %d porque %d^3 = ", numerosImpares, n ); // se imprime en pantalla el último número impar con la justificación del por qué.
                    // fin de else if.
                    // fin de if - else if.
                } // fin de if.
                // inicio de else.
                else { // condición para imprimir los números impares necesarios para calcular el cubo de los números 1 y 2.
                    // inicio de if - else if.
                    // inicio de if.
                    if ( contadorDeNumerosImpares < n - 1 ) // condición para imprimir el penúltimo número impar necesario.
                        printf( "%d y ", numerosImpares ); // se imprime en pantalla el penúltimo número impar necesario.
                    // fin de if.
                    // inicio de else if.
                    else if ( contadorDeNumerosImpares == n - 1 ) // condición para imprimir el último número impar necesario.
                        printf( "%d porque %d^3 = ", numerosImpares, n ); // se imprime en pantalla el último número impar necesario.
                    // fin de else if.
                    // fin de if - else if.
                } // fin de else.
                // fin de if - else.
            } // fin de else if.
            // inicio de else if.
            else if ( iteracionesDelCicloWhile == 3 ) { // condición para imprimir los números impares necesarios como una sumatoria.
                // inicio de if - else if.
                // inicio de if.
                if ( contadorDeNumerosImpares < n - 1 ) // condición para imprimir desde el primero hasta el penúltimo número impar necesario.
                    printf( "%d + ", numerosImpares ); // se imprime en pantalla desde el primero hasta el penúltimo número impar necesario al que le sigue un signo mas.
                // fin de if.
                // inicio de else if.
                else if ( contadorDeNumerosImpares == n - 1 ) // condición para imprimir en pantalla el último número impar necesario sin el signo mas y con el igual al que le sigue la sumatoria de estos números.
                    printf( "%d = %d", numerosImpares, sumatoriaDeNumerosImpares ); // se imprime en pantalla el último número impar necesario sin el signo de suma con el signo igual al que le sigue la sumatoria de todos los números impares. 
                // fin de else if.
                // fin de if - else if.
            } // fin de else if.
            // fin de if - else if.

            numerosImpares += 2; // iterando los números impares.
        } // fin del ciclo for.

        // inicio de if - else if.
        // inicio de if.
        if ( sumatoriaDeNumerosImpares != n * n * n ) { // condición para volver a calcular los números impares necesarios para hallar los cubos de los números.
            sumatoriaDeNumerosImpares = 0; // la sumatoria se coloca en cero para volver a sumar otros números impares.

            auxiliarDeNumerosImpares += 2; // el primer número impar incrementa en dos y se inicia la iteración desde este mismo una vez la variable auxiliar se lo asigne a númerosImpares.

            numerosImpares = auxiliarDeNumerosImpares; // la variable numerosImapares esta vez inicia desde el siguiente número impar.
        } // fin de if.
        // inicio de else if.
        else if ( sumatoriaDeNumerosImpares == n * n * n && iteracionesDelCicloWhile == 1 ) { // condición para que en la siguiente ejecución del ciclo while externo se cumpla la siguiente condición de la condición compuesta que lo contiene y se impriman los números impares necesarios.
            numerosImpares = auxiliarDeNumerosImpares; // la impresión de estos números impares inicia desde este número.

            iteracionesDelCicloWhile = 2; // está variable se fija en dos para mantener el ciclo while y para que esta vez se impriman los números impares necesarios para hallar los cubos de los números.
        } // fin de else if.
        // inicio de else if.
        else if ( sumatoriaDeNumerosImpares == n * n * n && iteracionesDelCicloWhile == 2 ) { // condición para imprimir en la próxima ejecución del ciclo while a los números impares necesarios para hallar los cubos de los números como una sumatoria de estos.
            numerosImpares = auxiliarDeNumerosImpares; // la sumatoria de estos números impares se imprime a partir del último número de donde partió la secuencia.

            iteracionesDelCicloWhile = 3; // al fijar está variable en 3 el programa en la próxima ejecución del ciclo while tomará en cuenta la condición para cuando sea igual a 3 y luego imprimirá en pantalla los números impares necesarios para hallar los cubos de los números como una sumatoria de estos.
        }// fin de else if.
        // inicio de else if.
        else if ( sumatoriaDeNumerosImpares == n * n * n && iteracionesDelCicloWhile == 3 ) // condición para terminar la ejecución del ciclo while, debido a que 4 no es menor ni igual que 3 y que la variable que suma los números impares ya es igual al cubo del número ingresado por el usuario.
            iteracionesDelCicloWhile = 4; // se establece está variable en cuatro para terminar con el ciclo while.
        // fin de else if.
        // fin de if - else if.
    } // fin del ciclo while.

    printf( "\n" ); // se imprime un salto de línea antes finalizar el programa.

    return 0; // indica que el programa termino con éxito.
} // fin de la función main.