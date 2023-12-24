/* 8. Escribir un programa para la conjetura de ULAM. La conjetura de ULAM se 
desarrolla de la siguiente forma:
    a. Comience con cualquier entero positivo, ingresado desde el teclado.
    b. Si es par, divídalo entre 2; si es impar, multiplíquelo por 3 y agréguele 1.
    c. Obtenga enteros sucesivamente repitiendo el proceso, al final obtendrá el 
número 1, independientemente del entero inicial.
Ejemplo: 
Si el entero inicial es 26, la secuencia de salida será: 26, 13, 40, 20, 10, 5, 16, 8, 4, 2, 
1. */

#include<stdio.h> // incluir el encabezado estándar de entrada / salida.

int main(void) // la función main inicia la ejecución del programa.
{
    unsigned int entero_inicial = 0; // declaración de la variable para guardar el número entero inicial ingresado por el usuario.

    printf( "Ingrese un número entero positivo: " ); // le indica al usuario que ingrese un número entero positivo cualquiera.
    scanf( "%d", &entero_inicial ); // el número entero positivo ingresado por el usuario se guarda en su respectiva variable.
    printf( "\n" ); // se imprime un salto de línea.

    printf( "La conjetura de ULAM es la siguiente: " ); // se imprime en la pantalla este mensaje.

    printf( "%d, ", entero_inicial ); // se imprime en Pantalla el número entero inicial ingresado por el usuario.
    // inicio del ciclo while.
    while ( entero_inicial != 1 ) { // condición del ciclo while para imprimir la conjetura de ULAM hasta el número 1.
        // inicio de if - else.
        // inicio de if.
        if ( entero_inicial % 2 == 0 ) // condición para los números pares.
            entero_inicial /= 2; // cuando el número es par se divide entre 2.
        // fin de if.
        // inicio de else.
        else
            entero_inicial = entero_inicial * 3 + 1; // cuando el número es impar se multiplica por 3 y se divide entre 1.
        // fin de else.
        // fin de if - else.

        // inicio de if - else.
        // inicio de if.
        if ( entero_inicial != 1 ) // condición para imprimir un número diferente de 1 con coma y espacio.
            printf( "%d, ", entero_inicial ); // se imprime un número diferente de 1 con coma y espacio.
        // fin de if.
        // inicio de else.
        else // el "else" evalúa si el número es 1.
            printf( "%d", entero_inicial ); // en caso de que el número sea igual a 1 se imprime sin coma y sin espacios por ser el último de la conjetura ULAM.
        // fin de else.
        // fin de if - else.
    } // fin de while.

    printf( "\n" ); // se imprime un salto de línea al terminar el programa.

    return 0; // indica que el programa finalizó con éxito.
} // fin de la función main.