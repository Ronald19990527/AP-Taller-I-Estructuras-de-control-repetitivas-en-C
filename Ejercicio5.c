/* Calcular el valor total de una factura conociéndose el código, el costo unitario y la 
cantidad de cada una de los artículos a facturar. Al subtotal obtenido se le debe 
realizar un descuento del 5,32% cuando sobrepase los $500 000 en caso contrario el 
descuento será solo de 2,75%. Se debe mostrar al final el número de artículos 
facturados, el subtotal de la factura, el valor del descuento y valor final de la factura, 
el programa debe mostrar estos datos cuando la cantidad de un artículo facturado sea 
cero (0). */

#include<stdio.h> // incluir el encabezado estándar de entrada/salida.

int main(void) // la función main inicia la ejecución del programa.
{
    // declaración de las variables que guardan la cantidad de artículos facturados, el subtotal de la factura, el costo unitario de cada artículo y la cantidad de artículos solicitados.
    unsigned int cantidadArticulosfacturados = 0, subtotalFactura = 0, costoUnitario = 0, cantidadArticulo = 0;
    // declaración de la variable que guarda el código de barras.
    long long unsigned int codigoDeBarras = 0;

    printf( "Ingrese la cantidad de unidades del art%cculo que desea comprar (0 para finalizar): ", 161 ); // se le pide al usuario que ingrese la cantidad de unidades que desea del producto a comprar.
    scanf( "%d", &cantidadArticulo ); // la cantidad de unidades del producto se guarda en su respectiva variable.
    printf( "\n" ); // se imprime un salto de linea.

    // inicio del ciclo while.
    while ( cantidadArticulo != 0 ) { // condición para terminar el programa.
        printf( "Ingrese el c%cdigo de barras: ", 162 ); // se le pide al usuario que ingrese el código de barras del producto solicitado.
        scanf( "%llu", &codigoDeBarras ); // el código de barras se guarda en su respectiva variable.
        printf( "\n" ); // se imprime un salto de linea.
        // inicio del ciclo while.
        while ( codigoDeBarras <= 999999999999 && codigoDeBarras >= 10000000000000 ) { // condición para volver a ingresar un código de barras válido.
            printf( "C%cdigo no v%clido, ingrese nuevamente el c%cdigo de barras: ", 162, 162, 162 ); // se le pide al usuario que vuelva a ingresar el código de barras.
            scanf( "%llu", &codigoDeBarras ); // el código de barras se guarda en su respectiva variable.
            printf( "\n" ); // se imprime un salto de linea.
        } // fin del ciclo while.

        printf( "Ingrese el precio del producto: $" ); // se le pide al usuario que ingrese el precio del producto a comprar.
        scanf( "%d", &costoUnitario ); // el precio del producto se guarda en su respectiva variable.
        printf( "\n" ); // se imprime un salto de linea.

        printf( "El subtotal a pagar por este producto es de: $%d", cantidadArticulo * costoUnitario ); // se imprime en pantalla el total a pagar por las cantidades del producto en cuestión.

        subtotalFactura += costoUnitario * cantidadArticulo; // los subtotales de las cantidades de cada producto se van sumando para calcular el subtotal parcial de toda la compra.

        cantidadArticulosfacturados++; // se cuenta la cantidad de artículos durante la compra.

        printf( "\n\n\nIngrese la cantidad del siguiente art%cculo que desea comprar (0 para finalizar): ", 161 ); // se le pide al usuario que ingrese la cantidad del siguiente artículo que desea comprar.
        scanf( "%d", &cantidadArticulo ); // la cantidad del siguiente artículo que el usuario desea comprar se guarda en su respectiva variable.
        printf( "\n" ); // se imprime un salto de linea.
    } // fin del ciclo while.

    // inicio de if - else.
    // inicio de if.
    if ( cantidadArticulosfacturados != 0 ) // condición para el caso en que por lo menos se compra un artículo.
        // inicio de if - else.
        // inicio de if.
        if ( subtotalFactura <= 500000 ) { // condición para un subtotal de la factura inferior o igual a $500000.
            printf( "\nNÃºmero de artÃ­culos facturados: %d\n\n", cantidadArticulosfacturados ); // se imprime en pantalla la cantidad de artÃ­culos facturados.

            printf( "Subtotal de la factura: $%d\n\n", subtotalFactura ); // se imprime en pantalla el total parcial de toda la factura.

            printf( "Descuento: 2,75%%\n\n" ); // se imprime en pantalla el descuento que se va a realizar.

            printf( "Valor final de la factura: $%.2f\n", ( float ) subtotalFactura - ( float ) subtotalFactura * 0.0275 ); // se imprime en pantalla el valor final de la factura.
        } // fin de if.
        // inicio de else.
        else { // condiciÃ³n para facturas mayores a $500000.
            printf( "\nNÃºmero de artÃ­culos facturados: %d\n\n", cantidadArticulosfacturados ); // se imprime en pantalla la cantidad de artÃ­culos facturados.

            printf( "Subtotal de la factura: $%d\n\n", subtotalFactura ); // se imprime en pantalla el total parcial de toda la factura.

            printf( "Descuento: 5,32%%\n\n" ); // se imprime en pantalla el descuento que se va a realizar.

            printf( "Valor final de la factura: $%.2f\n", ( float ) subtotalFactura - ( float ) subtotalFactura * 0.0532 ); // se imprime en pantalla el valor final de la factura.
        } // fin de else.
        //fin de if - else.
    // fin de if.
    // inicio de else.
    else // condiciÃ³n para el caso en que no se realice ninguna compra.
        printf( "No se realizÃ³ ninguna compra\n" ); // se imprime en pantalla que no se realizÃ³ ninguna compra.
    // fin de else.
    // fin de if - else.

    return 0; // indica que el programa finalizÃ³ con Ã©xito.
} // fin de la funciÃ³n main.
