/* 7. Escribir un programa que realice el cobro de n productos en una tienda e imprima en 
pantalla el total a pagar. Por cada producto que se cobre deberá pedir cantidad y precio 
y calcular total de los artículos y así con cada uno de los demás hasta terminar. */

#include<stdio.h> // incluir la biblioteca estándar de entrada / salida.

int main(void) // la función main inicia la ejecución del programa.
{
    unsigned int nProductos = 0, producto = 1, cantidad_del_producto = 0; // declaración de las variables que guardan la cantidad de productos, el producto en si, y la que guarda las unidades de cada producto.
    float precio = 0, total_a_pagar_por_producto = 0, total_a_pagar = 0; // declaración de las variables que guardan el precio de la unidad de cada producto, la que guarda el precio de las unidades compradas de cada producto y el total a pagar por toda la compra.

    printf( "Ingrese la cantidad de productos: " ); // le indica al usuario en pantalla que ingrese la cantidad de productos.
    scanf( "%d", &nProductos ); // se guarda la cantidad productos en su respectiva variable.
    printf( "----------------------------------------\n" ); // se imprimen en pantalla un separador de líneas para organizar el código.

    // inicio del ciclo while.
    while ( producto <= nProductos ) { // condición para que el programa se ejecute hasta que la cantidad de productos se agote.
        printf( "Cuántas unidades va a adquirir del %d° producto?: ", producto  ); // le pregunta al usuario la cantidad de unidades a adquirir del producto en cuestión.
        scanf( "%d", &cantidad_del_producto ); // la cantidad de unidades del producto ingresada por el usuario se guarda en su respectiva variable.
        printf( "\n" ); // se imprime un salto de línea.

        printf( "Cuánto cuesta la unidad?: $" ); // se le pregunta al usuario cuánto cuesta la unidad.
        scanf( "%f", &precio ); // el precio de una unidad de cada producto se guarda en su respectiva variable.
        printf( "\n" ); // se imprime un salto de línea.

        total_a_pagar_por_producto = cantidad_del_producto * precio; // se calcula la cantidad a pagar por cada producto de acuerdo a sus unidades a comprar.

        printf( "La cantidad total a pagar para este producto es de $%f", total_a_pagar_por_producto ); // se imprime en pantalla la cantidad total a pagar por cada producto.
        printf( "\n" ); // se imprime un salto de línea.

        printf( "----------------------------------------\n" ); // se imprime en la siguiente línea un separador para organizar el código.

        total_a_pagar += total_a_pagar_por_producto; // se suman los totales a pagar por cada producto para calcular el total a pagar por toda la compra.

        producto++; // se incrementa esta variable para pasar al siguiente producto.
    } // fin del ciclo while.

    printf( "El total a pagar es de $%f", total_a_pagar ); // se imprime en pantalla el total a pagar por toda la compra.

    return 0; // indica que el programa finalizó con éxito.
} // fin de la función main.