/* 3. El banco Santander tiene una modalidad de préstamo que consiste en lo siguiente: Si el monto 
del préstamo es menor de 1.000.000 de pesos se paga un interés del 5% sobre el préstamo, 
pagando cuotas mensuales por un año.
Si el monto del préstamo es mayor o igual de 1.000.000, pero menor de 10.000.000 de pesos 
se paga un interés del 10% sobre el préstamo, pagando cuotas mensuales por dos años.
Si el monto del préstamo es mayor o igual de 10.000.000 de pesos se paga un interés del 15% 
sobre el préstamo, pagando cuotas mensuales por cinco años.
Hacer un programa en C que calcule el valor de la cuota mensual que tiene que pagar cada 
uno de los n clientes que solicitan un préstamo. */

#include<stdio.h> // incluir el encabezado estándar de entrada/salida.

int main(void) // la función main inicia la ejecución del programa.
{
    // declaración de las variables que guardan el número de clientes ingresado por el usuario y el préstamo solicitado por cada uno.r
    unsigned int nClientes = 0, prestamo = 0;

    printf( "Ingrese la cantidad de clientes que solicitan el préstamo: " ); // se le pide al usuario que ingrese la cantidad de clientes que hará un préstamo.
    scanf( "%d", &nClientes ); // la cantidad de clientes ingresado por el usuario se guarda en su respectiva variable.
    printf( "\n" ); // se imprime un doble salto de línea paraostr más información de forma ordenada.

    // inicio del ciclo for.
    for ( unsigned int iteradorDeClientes = 1; iteradorDeClientes <= nClientes; iteradorDeClientes++ ) { // condición para realizar el préstamo a la cantidad de clientes ingresada por el usuario.
        printf( "\nIngrese el dinero solicitado por el %d° cliente: $", iteradorDeClientes ); // se le pide al usuario que ingrese el préstamo solicitado por cada cliente.
        scanf( "%d", &prestamo ); // El préstamo solicitado por cada cliente se guarda en su respectiva variable.
        printf( "\n" ); // se imprime un salto de línea para mostrar más información de forma ordenada.

        // inicio de if - else if.
        // inicio de if.
        if ( prestamo < 1000000 ) // condición para un préstamo por debajo de $1000000.
            printf( "La cuota mensual que debe pagar este cliente es de $%.1f\n\n", ( ( float ) prestamo + ( float ) prestamo * 0.05 ) / ( float ) 12 ); // se imprime en pantalla la cuaota mensual que debe pagar cada cliente que solicite un préstamo.
        // fin de if.
        // inicio de else if.
        else if ( prestamo >= 1000000 && prestamo < 10000000 ) // condición para un préstamo mayor o igual a $1000000 y menor a $10000000.
            printf( "La cuota mensual que debe pagar este cliente es de $%.1f\n\n", ( ( float ) prestamo + ( float ) prestamo * 0.1 ) / ( float ) 24 ); // se imprime en pantalla la cuota mensual que debe pagar el cliente.
        // fin de else if.
        // inicio de else if.
        else if ( prestamo >= 10000000 ) // condición para un préstamo que sea mayor o igual a los $100000000.
            printf( "La cuota mensual que debe pagar este cliente es de $%.1f\n\n", ( ( float ) prestamo + ( float ) prestamo * 0.15 ) / ( float ) 60 ); // se imprime en pantalla la cuota mensual que debe pagar el cliente.
        // fin de else if.
        // fin de if - else if.
    } // fin del ciclo for.

    return 0; // indica que el programa finalizó con éxito.
} // fin de la función main.