/* 5. Los hinchas del Cúcuta Deportivo han decidido donar el total del cambio (los vueltos de cada 
hincha) (dinero sobrante de cada compra) en la compra de boletas del partido del próximo 
domingo, para apoyar a los niños desplazados. Diseñe un programa en C que solicite 
inicialmente la cantidad de boletas disponibles para el partido y el valor unitario de estas. El 
programa debe solicitar repetidamente la cantidad de dinero que entrega el hincha en la 
taquilla e ir mostrando la cantidad de boletas para las que alcanza ese dinero, las cuales se le 
entregarán al comprador (pero no se le entrega el dinero de vueltos... este dinero es la 
donación). Al final del programa se debe imprimir el total de boletas vendidas, el total de 
dinero recaudado por concepto de boletería y el total de dinero donado por los compradores. 
El programa terminará cuando la cantidad de dinero entregado por un hincha en la taquilla 
sea igual a cero o cuando se agote el total de boletas disponibles. */

#include<stdio.h> // incluir el encabezado estándar de entrada/salida.

int main() // la función main inicia la ejecución del programa.
{
    // declaración de las variables que guardan la cantidad de boletas disponibles, lo que cuesta cada boleta, la cantidad de dinero que tarde el hincha, la cantidad de boletas vendidas, el total obtenido de las boletas compradas y el total de dinero donado por los hinchas.
    unsigned int boletasDisponibles = 0, valorUnitario = 0, cantidadDeDinero = 0, totalDeBoletasVendidas = 0, totalPB = 0, totalD = 0;

    printf( "Digite la cantidad de disponibles: " ); // le indica al usuario que ingrese la cantidad de boletas que están disponibles para la venta.
    scanf( "%d", &boletasDisponibles ); // la cantidad de boletas se guarda en su respectiva variable.
    printf( "\n" ); // se imprime por pantalla un salto de línea para mostrar otros datos en pantalla en las siguientes líneas.

    // inicio de if - else.
    // inicio de if.
    if ( boletasDisponibles != 0 ) { // condición para el caso en el que hayan boletas desde el inicio de la venta.
        printf( "Cuanto cuesta cada boleta?R/: $" ); // le pregunta al usuario cuanto cuesta cada boleta.
        scanf( "%d", &valorUnitario ); // el valor de la boleta se guarda en su respectiva variable.
        printf( "\n\n" ); // se imprime un doble salto de línea e pantalla para mostrar los datos a cada hincha en líneas separadas.

        printf( "Cuanto dinero trae el hincha (Digite 0 para terminar las ventas)?R/: $" ); // se le pregunta al hincha cuanto dinero trae.
        scanf( "%d", &cantidadDeDinero ); // la cantidad de dinero que trae el hincha se guarda en su respectiva variable.
        printf( "\n" ); // se imprime un salto de línea para mostrar otros datos al hincha que está haciendo la compra.
        // inicio del ciclo while.
        while ( cantidadDeDinero != 0 && boletasDisponibles != 0 ) { // condición para continuar con la venta hasta que el dinero que trae el hincha ingresado por el vendedor sea cero indicando el final de las ventas o hasta que las boletas se acaben. 
            // inicio de if - else if.
            // inicio de if.
            if ( ( cantidadDeDinero / valorUnitario ) > 1 ) { // condición para el hincha que puede comprar más de una boleta (de 2 boletas en adelante).
                // inicio de if - else.
                // inicio de if.
                if ( boletasDisponibles >= ( cantidadDeDinero / valorUnitario ) ) { // condición para una cantidad de boletas disponibles mayor a las que puede comprar el hincha.
                    printf( "Alcanza para %d boletas", cantidadDeDinero / valorUnitario ); // se imprime en pantalla la cantidad de boletas para las que alcanza el dinero que trae el hincha.
                    printf( "\n\n" ); // se imprime un salto de línea para mostrar otros datos del hincha que realiza la compra de forma ordenada.

                    totalDeBoletasVendidas += cantidadDeDinero / valorUnitario; // las boletas que se van vendiendo se van sumando para imprimir el total de boletas vendidas al final del programa.

                    printf( "La cantidad de dinero recaudado por concepto de boletería es de $%d", cantidadDeDinero / valorUnitario * valorUnitario ); // se imprime en pantalla la cantidad de dinero que pago el hincha por las boletas.
                    printf( "\n\n" ); // se imprime un doble salto de línea para mostrar más información de forma ordenada.

                    totalPB += cantidadDeDinero / valorUnitario * valorUnitario; // cantidad de dinero que paga cada hincha por sus boletas se va sumando para imprimir al final del programa la cantidad de dinero recaudado por concepto de boletería.

                    printf( "La cantidad de dinero donado por el hincha es de $%d", cantidadDeDinero - cantidadDeDinero / valorUnitario * valorUnitario ); // se imprime en pantalla la cantidad de dinero donado por el hincha.
                    printf( "\n\n" ); // se imprime un salto de línea para mostrar más información de forma ordenada.

                    totalD += cantidadDeDinero - cantidadDeDinero / valorUnitario * valorUnitario; // el dinero que va donando cada hincha se va sumando para imprimir al final del programa la cantidad total de dinero donado por los hinchas.

                    boletasDisponibles -= cantidadDeDinero / valorUnitario; // se recalculan las boletas que van sobrando.

                    // inicio de if - else if.
                    // inicio de if.
                    if ( boletasDisponibles > 1 ) // condición para un número de boletas disponibles mayor a 1.
                        printf( "Quedan %d boletas disponibles para la venta\n\n", boletasDisponibles ); // se imprime en pantalla la cantidad de boletas que van quedando por cada hincha que va comprando.
                    // fin de if.
                    // inicio de else if.
                    else if ( boletasDisponibles == 1 ) // condición para cuando queda una sola boleta disponible para la venta.
                        printf( "Queda %d boleta disponible para la venta\n\n", boletasDisponibles ); // se imprime en pantalla que sólo queda una sola boleta disponible para la venta.
                    // fin de else if.
                    // inicio de else if.
                    else if ( boletasDisponibles == 0 ) // condición para el caso en que no haya ninguna boleta disponible para la venta.
                        printf( "Se acabaron las boletas para el partido\n" ); // se imprime en pantalla que se acabaron las boletas.
                    // fin de else if.
                    // fin de if - else if.
                } // fin de if.
                // inicio de else.
                else { // condición por defecto para una cantidad de boletas disponibles inferior al número de boletas que puede comprar el hincha.
                    printf( "Alcanza para %d boletas, pero solo quedan %d boletas disponibles", cantidadDeDinero / valorUnitario, boletasDisponibles ); // se imprime en pantalla la cantidad de boletas para las que alcanza el dinero del hincha y las que quedan en realidad.
                    printf( "\n\n" ); // se imprime un doble salto de línea para mostrar más información de forma ordenada.    

                    totalDeBoletasVendidas += boletasDisponibles; // la cantidad de boletas que se va vendiendo (en este caso el total de boletas disponibles) se va mostrando en pantalla.

                    printf( "La cantidad de dinero recaudado por concepto de boletería es de $%d", boletasDisponibles * valorUnitario ); // se imprime en pantalla la cantidad de dinero recaudado de este hincha.
                    printf( "\n\n" ); // se imprime un doble salto de línea para mostrar más información de forma ordenada.

                    totalPB += boletasDisponibles * valorUnitario; // El dinero recaudado por concepto de boletería de este hincha (en este caso el obtenido por el total de boletas que quedaron disponibles) se suma al del resto de los hinchas para imprimir al final del programa la cantidad de dinero recaudado por concepto de boletería.

                    printf( "La cantidad de dinero donado por el hincha es de $%d", cantidadDeDinero - boletasDisponibles * valorUnitario ); // se imprime en pantalla la cantidad de dinero donado por este hincha.
                    printf( "\n\n" ); // se imprime en pantalla un doble salto de línea para mostrar más información de forma ordenada.

                    totalD += cantidadDeDinero - boletasDisponibles * valorUnitario; // la cantidad de dinero donado por el hincha se va sumando al del resto de los hinchas para imprimir al final del programa la cantidad total de dinero donado por los hinchas.

                    boletasDisponibles -= boletasDisponibles; // se recalcula la cantidad de boletas disponibles después de la venta a un hincha (en este caso como se vendieron las que estaban disponibles por ser inferiores a las que el hincha podía acceder, no quedó ninguna boleta).

                    printf( "Se acabaron las boletas para el partido\n" ); // se imprime en pantalla que se acabaron las boletas para la venta.
                } // fin de else.
                // fin de if - else.
            } // fin de if.
            // inicio de else if.
            else if ( ( cantidadDeDinero / valorUnitario ) == 1 ) { // condición para el caso en que a un hincha le alcanza el dinero para una sola boleta.
                printf( "Alcanza para 1 boleta" ); // se imprime en pantalla que al hincha le alcanza el dinero para una sola boleta.
                printf( "\n\n" ); // se imprime un doble salto de línea para mostrar más información de forma ordenada.

                totalDeBoletasVendidas++; // la cantidad de boletas que se vendieron al hincha se van sumando a las demás para imprimir al final del programa el total de boletas que se vendieron.

                printf( "La cantidad de dinero recaudado por concepto de boletería es de $%d", valorUnitario ); // se imprime en pantalla la cantidad de dinero que recaudaron de este hincha.
                printf( "\n\n" ); // se imprime un doble salto de línea para mostrar más información de forma ordenada.

                totalPB += valorUnitario; // la cantidad de dinero recaudado por este hincha se va sumando a los de los otros hinchas para imprimir al final del programa la cantidad de dinero recaudado por concepto de boletería.

                printf( "La cantidad de dinero donado por el hincha es de $%d", cantidadDeDinero - valorUnitario ); // se imprime en pantalla la cantidad de dinero donado por el hincha.
                printf( "\n\n" ); // se imprime un doble salto de línea para mostrar más información de forma ordenada.

                totalD += cantidadDeDinero - valorUnitario; // la cantidad de dinero donado por este hincha se suma a las cantidades de dinero donadas por otros hinchas para imprimir al final del programa la cantidad total de dinero donado por todos los hinchas.

                boletasDisponibles--; // se recalculan la cantidad de boletas que quedan disponibles.

                // inicio de if - else if.
                // inicio de if.
                if ( boletasDisponibles >= 1 ) // condición para una cantidad de boletas disponibles mayor a 1.
                    printf( "Quedan %d boletas disponibles para la venta\n\n", boletasDisponibles ); // se imprime la cantidad de boletas disponibles.
                // fin de if.
                // inicio de else if.
                else if ( boletasDisponibles == 1 ) // condición para una cantidad de boletas disponibles igual a 1.
                    printf( "Quedan %d boleta disponibles para la venta\n\n", boletasDisponibles ); // se imprime en pantalla que sólo queda una boleta disponible para la venta.
                // fin de else if.
                // inicio de else if.
                else if ( boletasDisponibles == 0 ) // condición para cuando no hayan boletas disponibles.
                    printf( "Se acabaron las boletas para el partido\n" ); // se imprime en pantalla que se acabaron las boletas.
                // fin de else if.
                // fin de if - else if.
            } // fin de else if.
            // inicio de else if.
            else if ( ( cantidadDeDinero / valorUnitario ) == 0 ) { // condición para el caso en que el hincha no tiene dinero suficiente para comprar boletas.
                printf( "No alcanza para ninguna boleta" ); // se imprime en pantalla que al hincha no le alcanza el dinero para comprar boletas.
                printf( "\n\n" ); // se imprime un doble salto de línea para mostrar más información de forma ordenada.
            } // fin de else if.
            // fin de if - else if.

            // inicio de if - else.
            if ( boletasDisponibles != 0 ) { // condición para el caso en que todavía queden boletas para la venta.
                printf( "\nCuanto dinero trae el siguiente hincha (Digite 0 para terminar las ventas)?R/: $" ); // se le pregunta a otro hincha cuanto dinero trae.
                scanf( "%d", &cantidadDeDinero ); // la cantidad de dinero que traiga el hincha se guarda en su respectiva variable.
                printf( "\n" ); // se imprime un salto de línea para mostrar más información de forma ordenada.
            } // fin de if.
            // inicio de else.
            else { // condición para cuando no hayan boletas para la venta.
                printf( "\n" ); // se establece un salto de línea para que haga otra iteración en el ciclo while para que evalúe la condición "boletasDisponibles != 0" de modo que está no se cumpla y luego se salga de la estructura y termine el programa.
            } // fin de else.
            // fin de if - else.
        } // fin del ciclo while.
    } // fin de if.
    // inicio de else.
    else // condición para el caso en que no hayan boletas disponibles desde el inicio.
        printf( "No hay boletas disponibles. No se realizó ninguna venta\n" ); // en este caso se imprime en pantalla que no hay boletas para la venta y se termina el programa.
    // fin de else.
    // fin de if - else.

    printf( "\nTotal de boletas vendidas: %d", totalDeBoletasVendidas ); // se imprime en pantalla el total de boletas vendidas.
    printf( "\n\nTotal de dinero recaudado por concepto de boletería: $%d", totalPB ); // se imprime en pantalla el total de dinero recaudado por concepto de boletería.
    printf( "\n\nTotal de dinero donado por los compradores: $%d\n", totalD ); // se imprime en pantalla el total de dinero donado por los hinchas.

    return 0; // indica que el programa finalizó con éxito.
} // fin de la función main.