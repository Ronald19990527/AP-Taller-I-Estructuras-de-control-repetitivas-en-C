/* 15. El ejercicio 15 no fue posible concretarlo puesto que está la fecha no existe un número perfecto impar, puede que a nivel de lógica
se haya resuelto el algoritmo, pero a momento de ejecutar el código, la computadora no encuentra a un número que cumpla las condiciones de
un número perfecto impar. Debido a esto se realizó un programa en C que calcule la cantidad de números perfectos ingresada por el usuario,
a pesar de que todos sean pares. */

#include<stdio.h> // incluir el.encabezado estándar de entrada/salida.

int main(void)
{ // la función main inicia la ejecución del programa.
    // declaración de la variable que itera los procedimientos para imprimir los números perfectos pares.
    unsigned char procedimiento = 1;
    // declaración de las variables que guardan la cantidad de números perfectos ingresados por el usuario, la que guarda la cantidad de números perfectos que se van encontrando, la que guarda los números que se van iterando para encontrar los números perfectos
    unsigned long long int cantidadDeNumerosPerfectos = 0, iteradorCantidadDeNumerosPerfectos = 0, iteradorDeNumeros = 1, sumadorDeDivisores = 0, contadorDeDivisores = 0, iteradorDeDivisores = 0;

    printf( "Ingrese la cantidad de números perfectos que desea visualizar: " );
    scanf( "%d", &cantidadDeNumerosPerfectos );
    printf( "\n\n" );

    // inicio del ciclo while.
    while ( iteradorCantidadDeNumerosPerfectos <= cantidadDeNumerosPerfectos ) { // condición para terminar de imprimir en pantalla los n primeros números perfectos pares.
        // inicio de if.
        if ( iteradorDeNumeros == 1 ) // condición para imprimir en pantalla el título "Los n primeros números perfectos son: ".
            // inicio de if - else if.
            // inicio de if.
            if ( cantidadDeNumerosPerfectos != 1 ) // condición para el momento en que el usuario ingrese una cantidad diferente de uno de números perfectos.
                printf( "Los %d primeros números perfectos son:\n\n", cantidadDeNumerosPerfectos ); // se imprime en pantalla el título "Los n primeros números perfectos son: ".
            // fin de if.
            // inicio de else.
            else // condición para el caso en que el usuario requiera un solo número perfecto.
                printf( "El primer número perfecto es: \n\n" ); // se imprime en pantalla el título "El primer número perfecto es: ".
            // fin de else.
            // fin de if - else if.
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
        if ( procedimiento == 1 ) { // condición para imprimir cada número perfecto y el "por qué".
            // inicio de if.
            if ( sumadorDeDivisores == iteradorDeNumeros && iteradorCantidadDeNumerosPerfectos < cantidadDeNumerosPerfectos ) { // condición para imprimir cada número perfecto.
                printf( "%d, ya que los divisores de %d son: ", iteradorDeNumeros, iteradorDeNumeros ); // se imprime en pantalla cada número perfecto.

                iteradorCantidadDeNumerosPerfectos++; // se cuenta la cantidad de números perfectos.

                procedimiento = 2; // se pasa al procedimiento de contar la cantidad de divisores de cada número perfecto.
            } // fin de if.
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
        else if ( procedimiento == 4 ) { // condición para reiniciar todas las variables usadas en los cálculos de los números perfectos.
            iteradorDeDivisores = 0; // se reinicia el iterador de los divisores para cálculos posteriores.

            sumadorDeDivisores = 0; // se reinicia el sumador de divisores para cálculos posteriores.

            contadorDeDivisores = 0; // se reinicia el contador de divisores para cálculos posteriores.

            procedimiento = 1; // se vuelve al procedimiento de sumar los divisores de cada número iterador para saber cuál es perfecto.

            // inicio de if.
            if ( iteradorCantidadDeNumerosPerfectos == cantidadDeNumerosPerfectos ) // condición para terminar el programa.
                iteradorCantidadDeNumerosPerfectos++; // se termina el programa incrementando está variable a su siguiente valor de modo que la condición del while no se cumpla.
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