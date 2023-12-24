/* 15. Escribir un programa que encuentre los 2 primeros números perfectos pares y los 2 primeros 
números perfectos impares. Un número perfecto es un entero positivo, que es igual a la suma 
de todos los enteros positivos (excluido el mismo) que son divisores del número. EL primer 
número perfecto es 6, ya que los divisores de 6 son 1, 2, 3 y 1+2+3=6 */

#include<stdio.h> // incluir el.encabezado estándar de entrada/salida.

int main(void)
{ // la función main inicia la ejecución del programa.
    // declaración de las variables que guardan la cantidad de números perfectos pares y la cantidad de números perfectos impares, y la variable que guarda los cuatro procedimientos realizados.
    unsigned char cantidadDeNumerosPerfectosPares = 0, cantidadDeNumerosPerfectosImpares = 0, procedimiento = 1;
    // declaración de las variables que guardan los números que van iterandose, la sumatoria de los divisores, la cantidad de divisores, y la que itera a los divisores.
    unsigned long long int iteradorDeNumeros = 1, sumadorDeDivisores = 0, contadorDeDivisores = 0, iteradorDeDivisores = 0;

    // inicio del ciclo while.
    while ( cantidadDeNumerosPerfectosPares < 2 || cantidadDeNumerosPerfectosImpares < 2 ) { // condición para terminar de imprimir en pantalla los 2 primeros números perfectos pares.
        // inicio de if.
        if ( iteradorDeNumeros == 1 && cantidadDeNumerosPerfectosPares != 2 ) // condición para imprimir en pantalla el título "Los 2 primeros números perfectos pares son: ".
            printf( "Los 2 primeros números perfectos pares son:\n\n" ); // se imprime en pantalla el título "Los 2 primeros números perfectos pares son: ".
        // fin de if.

        // inicio de if.
        if ( ( iteradorDeNumeros == 1 && cantidadDeNumerosPerfectosPares == 2 ) && cantidadDeNumerosPerfectosImpares != 2 ) // condición para imprimir en pantalla el título "Los 2 primeros números perfectos impares son: ".
            printf( "Los 2 primeros números perfectos impares son:\n\n" ); // se imprime en pantalla el título "Los 2 primeros números perfectos impares son: ".
        // fin de if.

        // inicio del ciclo for.
        for ( unsigned int iteradorNumeroActual = 1; iteradorNumeroActual < iteradorDeNumeros; iteradorNumeroActual++ ) // condición para terminar de evaluar los divisore=s de cada número excluyendo al mismo.
            // inicio de if.
            if ( iteradorDeNumeros % iteradorNumeroActual == 0 ) // condición para verificar los divisores de cada número evaluado.
                // inicio de if - else if.
                // inicio de if.
                if ( procedimiento == 1 ) // condición para sumar todos los que sean divisores del número.
                    sumadorDeDivisores += iteradorNumeroActual; // se suman todos los que sean divisores del número.
                // fin de if.
                // inicio de else if.
                else if ( procedimiento == 2 ) // condición para contar los divisores de cada número.
                    contadorDeDivisores++; // se cuentan los divisores de cada número.
                // fin de else if.
                // inicio de else if.
                else if ( procedimiento == 3 ) { // condición para imprimir en pantalla los divisores de cada número.
                    iteradorDeDivisores++; // se iteran los divisores de cada número.

                    // inicio de if - else if.
                    // inicio de if.    
                    if ( iteradorDeDivisores < contadorDeDivisores - 1 ) // condición para escribir los divisores seguidos de comas.
                        printf( "%d, ", iteradorNumeroActual ); // se imprimen los divisores seguidos de comas.
                        // fin de if.
                    // inicio de else if.
                    else if ( iteradorDeDivisores == contadorDeDivisores - 1 ) // condición para imprimir el pantalla el penúltimo divisor al cual le sigue la "y".
                        printf( "%d y ", iteradorNumeroActual ); // se imprime en pantalla el penúltimo divisor al cual le sigue la "y".
                    // fin de else if.
                    // inicio de else if.
                    else if ( iteradorDeDivisores == contadorDeDivisores ) // condición para imprimir en pantalla el último divisor al cual le sigue una coma y la "y".
                        printf( "%d, y ", iteradorNumeroActual ); // se imprime en pantalla el último divisor al cuál le sigue una coma y la "y".
                    // fin de else if.
                    // fin de if - else if.
                } // fin de else if.
                // inicio de else if.
                else if ( procedimiento == 4 ) { // condición para imprimir la suma de todos los divisores.
                    iteradorDeDivisores++; // se iteran los divisores.

                    // inicio de if - else if.
                    // inicio de if.
                    if ( iteradorDeDivisores < contadorDeDivisores ) // condición para imprimir los primeros divisores como una suma a los cuales les sigue un signo "+".
                        printf( "%d + ", iteradorNumeroActual ); // se imprimen los divisores con un signo "+" seguido de cada uno.
                    // fin de if.
                    // inicio de else if.
                    else if ( iteradorDeDivisores == contadorDeDivisores ) // condición para imprimir el último divisor con el signo "=" y la suma de todos los divisores seguidos.
                        printf( "%d = %d", iteradorNumeroActual, sumadorDeDivisores ); // se imprime en pantalla el último divisor con el signo "=" y la suma de todos los divisores seguidos.
                    // fin de else if.
                    // fin de if - else if.
                } // fin de else if.
                // fin de if - else if.
            // fin de if.
        // fin del ciclo for.

        // inicio de if - else if.
        // inicio de if.
        if ( procedimiento == 1 ) { // condición para imprimir cada número perfecto para o impar y el "por qué".
            // inicio de if - else if.
            // inicio de if.
            if ( ( ( sumadorDeDivisores == iteradorDeNumeros ) && ( iteradorDeNumeros % 2 == 0 ) ) && cantidadDeNumerosPerfectosPares < 2 ) { // condición para imprimir cada número perfecto par.
                printf( "%d, ya que los divisores de %d son: ", iteradorDeNumeros, iteradorDeNumeros ); // se imprime en pantalla cada número perfecto par.

                cantidadDeNumerosPerfectosPares++; // se cuenta la cantidad de números perfectos pares.

                procedimiento = 2; // se pasa al procedimiento de contar la cantidad de divisores de cada número perfecto par.
            } // fin de if.
            // inicio de else if.
            else if ( ( ( sumadorDeDivisores == iteradorDeNumeros ) && ( iteradorDeNumeros % 2 != 0 ) ) && ( cantidadDeNumerosPerfectosImpares < 2 && cantidadDeNumerosPerfectosPares == 2 ) ) { // condición para imprimir cada número perfecto impar.
                printf( "%d, ya que los divisores de %d son: ", iteradorDeNumeros, iteradorDeNumeros ); // se imprime en pantalla cada número perfecto impar.

                cantidadDeNumerosPerfectosImpares++; // se cuenta la cantidad de números perfectos impares.

                procedimiento = 2; // se pasa al procedimiento de contar la cantidad de divisores de cada número perfecto impar.
            } // fin de else if.
            // fin de if - else if.
        } // fin de if.
        // inicio de else if.
        else if ( procedimiento == 2 ) // condición para pasar al procedimiento de imprimir los divisores de cada número perfecto.
            procedimiento = 3; // se pasa al procedimiento de imprimir los divisores de cada número perfecto.
        // fin de else if.
        // inicio de else if.
        else if ( procedimiento == 3 ) { // condición para pasar al procedimiento de escribir los divisores de cada número perfecto como una suma de todos y su respectiva suma al final.
            iteradorDeDivisores = 0; // se reinicia el iterador de divisores para una próxima iteración.

            procedimiento = 4; // se pasa al procedimiento de escribir los divisores de cada número perfecto como una suma de todos y su respectiva suma al final.
        } // fin de else if.
        // inicio de else if.
        else if ( procedimiento == 4 ) { // condición para reiniciar todas las variables usadas en los cálculos de los números perfectos pares e impares.
            iteradorDeDivisores = 0; // se reinicia el iterador de los divisores para cálculos posteriores.

            sumadorDeDivisores = 0; // se reinicia el sumador de divisores para cálculos posteriores.

            contadorDeDivisores = 0; // se reinicia el contador de divisores para cálculos posteriores.

            procedimiento = 1; // se vuelve al procedimiento de sumar los divisores de cada número iterador para saber cuál es perfecto (par o impar).

            // inicio de if.
            if ( cantidadDeNumerosPerfectosPares == 2 && cantidadDeNumerosPerfectosImpares == 0 ) // condición para iniciar la búsqueda de números perfectos impares reiniciando el iterador de los números a cero.
                iteradorDeNumeros = 0; // se reinicia el iterador de los números a cero.
            // fin de if.

            printf( "\n\n" ); // se imprime un doble salto de línea para especificar más números perfectos de forma ordenada.
        } // fin de else if.
        // fin de if - else if.

        // inicio de if.
        if ( sumadorDeDivisores != iteradorDeNumeros || iteradorDeNumeros == 0 ) { // condición para reiniciar a cero el sumador de divisores para sumar nuevos divisores y también seguir iterando números o iterar nuevamente al primer número.
            sumadorDeDivisores = 0; // se reinicia el sumador de divisores.

            iteradorDeNumeros++; // continua con la iteración de números o se itera al primer número nuevamente.
        } // fin de if.
    } // fin del ciclo while.

    iteradorDeNumeros = 0; // la variable que itera los números se lleva nuevamente a su estado inicial.

    return 0; // indica que el programa finalizó con éxito.
} // fin de la función main.