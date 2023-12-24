/* 16. Escribir un programa para hallar el valor total a pagar por una cantidad de pasajes a Medellín 
vendidos a cada turista, sabiendo que el valor de un solo pasaje es de $65 000. Un turista 
puede viajar solo o en grupo, cuando viaja en grupo los pasajes se venden solo al
representante del grupo. Se debe tener en cuenta que el valor total de los pasajes tendrá un 
descuento de 5% si son más de 6 los pasajes adquiridos, en caso contrario no habrá descuento. 
El programa termina cuando se solicitan cero (0) pasajes, al final se debe mostrar el número 
total de pasajes vendidos y el número de turistas atendidos. */

#include<stdio.h> // incluir el encabezado estándar de entrada / salida.

int main(void) // la función Marín inicia la ejecución del programa.
{
    unsigned int cantidadDePasajes = 0, numeroTotalDePasajesVendidos = 0, numeroTotalDeTuristasAtendidos = 0, precioTotalPorLosPasajes = 0; // declaración de las variables que guardan el número de turistas atendidos, la cantidad de pasajes adquiridos, la cantidad total de pasajes vendidos y el total a pagar por cada turista.

    printf( "[%d° turista] Ingrese la cantidad de pasajes que desea adquirir (0 para terminar): ", numeroTotalDeTuristasAtendidos + 1 ); // le indica a un turista que ingrese la cantidad de pasajes que desea adquirir.
    scanf( "%d", &cantidadDePasajes ); // la cantidad de pasajes digitados se guarda en su respectiva variable.

    // inicio del ciclo while.
    while ( cantidadDePasajes != 0 ) { // condición para terminar el programa.
        numeroTotalDePasajesVendidos += cantidadDePasajes; // la cantidad de pasajes digitados por cada turista se irá almacenando en la variable que cuenta el total de pasajes registrados por todos los turistas.

        numeroTotalDeTuristasAtendidos++; // se cuenta la cantidad de turistas que se han atendido al terminar el programa.

        // inicio de if - else.
        // inicio de if.
        if ( cantidadDePasajes <= 6 ) { // condición para una cantidad de pasajes adquiridos inferior a 6 (no hay descuento).
            precioTotalPorLosPasajes = cantidadDePasajes * 65000; // se calcula la cantidad a pagar por cada turista atendido sin el descuento.

            printf( "El precio total a pagar por los pasajes es de $%d", precioTotalPorLosPasajes ); // se imprime en pantalla la cantidad total a pagar por cada turista atendido sin descuento.
            printf( "\n\n" ); // se imprime un salto de línea para atender al siguiente turista.
        } // fin de if.
        // inicio de else.
        else {
            precioTotalPorLosPasajes = cantidadDePasajes * 65000 - cantidadDePasajes * 65000 * 5 / 100; // se calcula la cantidad a pagar por cada turista atendido con el descuento.

            printf( "El precio total a pagar por los pasajes con descuento del 5 por ciento es de $%d", precioTotalPorLosPasajes ); // se imprime en pantalla el precio total a pagar del turista por los pasajes con un descuento del 5%.
            printf( "\n\n" ); // se imprime un salto de línea para atender al siguiente turista.
        } // fin de else.
        // fun de if - else.

        printf( "[%d° turista] Ingrese la cantidad de pasajes que desea adquirir (0 para terminar): ", numeroTotalDeTuristasAtendidos + 1 ); // le indica a un turista que ingrese la cantidad de pasajes que desea adquirir.
        scanf( "%d", &cantidadDePasajes ); // la cantidad de pasajes digitados se guarda en su respectiva variable.
    } // fin del ciclo while.

    // inicio de if - else if.
    // inicio de if.
    if ( numeroTotalDePasajesVendidos == 0 && numeroTotalDeTuristasAtendidos == 0 ) // condición para indicarle al usuario que terminó el programa.
        printf( "\nPrograma finalizado, have a good day!\n" ); // le indica al usuario que terminó el programa.
    // fin de if.
    // inicio de else if.
    else if ( numeroTotalDePasajesVendidos != 0 && numeroTotalDeTuristasAtendidos != 0 ) { // condición para indicarle al usuario la cantidad total de pasajes que se vendieron y la cantidad total de turistas que se atendieron. 
        printf( "\nNumero total de pasajes vendidos: %d\n", numeroTotalDePasajesVendidos ); // le indica al usuario la cantidad total de pasajes vendidos.

        printf( "\nNumero de turistas atendidos: %d\n", numeroTotalDeTuristasAtendidos ); // le indica al usuario la cantidad total de turistas atendidos.
    } // fin de else if.
    // fin de if - else if.

    return 0; // indica que el programa finalizó con éxito.
} // fin de la función main.