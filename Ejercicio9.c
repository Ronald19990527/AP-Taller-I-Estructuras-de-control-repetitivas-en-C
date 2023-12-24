/* 9. Escriba un programa que lea una serie de números desde el teclado, introducir -999 
para terminar de ingresar los números desde el teclado, y calcular el promedio de los 
números ingresados. */

#include<stdio.h> // incluir el encabezado estándar de entrada / salida.

int main(void) // la función main inicia la ejecución del programa.
{
    float numero = 0, suma = 0, cantidad = 0, promedio = 0; // declaración de la variable que guarda los números ingresados por el usuario, declaración de la variable que guarda la suma de estos números, declaración de la variable que guarda la cantidad de estos números ingresados y de la variable que guarda el promedio.

    printf( "Ingrese un número (Para terminar ingrese -999): " ); // le indica al usuario que ingrese el primer número y que si quiere finalizar desde el inicio que introduzca "-999".
    scanf( "%f", &numero); // el número ingresado por el usuario se guarda en su respectiva variable.

    // inicio del ciclo while.
    while ( numero != -999 ) { // condición para terminar de introducir números.
        cantidad++; // se cuentan los números ingresados por el usuario.

        suma += numero; // se San los números ingresados por el usuario.

        printf( "Ingrese otro número ( Para terminar ingrese -999): " ); // se le pide al usuario que ingrese más números y que si quiere terminar que ingrese "-999".
        scanf( "%f", &numero ); // el número ingresado por el usuario se guarda en su respectiva variable.
    } // fin del ciclo while.

    // inicio de if - else if.
    // inicio de if.
    if ( suma == 0 && cantidad == 0 ) // condición para cuando no se introduzca ningún número puesto que calcular el promedio como "promedio = suma / cantidad" ocaciona un error de ejecución, al dividir "0 / 0".
        printf( "\nPrograma finalizado con exito" ); // no se calcula el promedio y se le indica al usuario que finalizó con éxito el programa.
    // fin de if.
    // inicio de else if.
    else if ( suma != 0 && cantidad != 0 ) { // condición para cierta cantidad de números ingresados por el usuario para calcular su promedio.
        promedio = suma / cantidad; // se calcula el promedio.

        printf( "\nEl promedio de los números ingresados es %f", promedio ); // se imprime en pantalla el promedio calculado.

        printf( "\nPrograma finalizado con exito" ); // le indica al usuario que finalizó con éxito el programa.
    } // fin de else if.
    // fin de if - else if.

    return 0; // indica que el programa finalizó con éxito.
} // fin de la función main.