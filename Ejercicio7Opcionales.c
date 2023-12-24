/* 7. Una compañía que vende gaseosas realizó una encuesta a 100 personas. En dicha encuesta se 
pregunta lo siguiente:
Si el encuestado toma o no gaseosa.
Si toma, de qué marca prefiere la gaseosa.( 1=PepsiCola, 2=CocaCola 3=Otra marca)
Si toma, cuántas gaseosas toma en un día.
Se le pide que realice un programa que conteste lo siguiente:

¿Cuántas personas que no toman gaseosa fueron encuestadas?
¿Cuántas personas:
toman Marca 1
toman Marca 2
¿Calcular el promedio por día de gaseosas de las personas que la consumen? */

#include<stdio.h> // incluir el encabezado estándar de entrada/salida.

int main(void) // la función main inicia la ejecución del programa.
{
    // declaración de las variables que guardan la respuesta del encuestado si toma o no gaseosa, si toma cual marca prefiere, las variables que guardan el número de personas que consumen cada marca y la que guarda la cantidad de personas que consumen gaseosa.
    unsigned char si_no[ 2 ] = { 0 }, opcionGaseosa = 0, contPepsiCola = 0, contCocaCola = 0, contOtraMarca = 0, contPG = 0;
    // declaración de las variables que guardan la cantidad de gaseosas por día de las personas que la consumen y la sumatoria de estas cantidades y la multiplicación de los diferentes casos en que se puede introducir la cadena "Si".
    unsigned int cantidadDeGaseosas = 0, sumatoriaDeGaseosasPorDia = 0, si = 1;

    // inicio del ciclo for.
    for ( unsigned char encuestado = 1; encuestado <= 100; encuestado++ ) { // condición para encuestar a 100 personas.
        printf( "%d° persona encuestada, responda las siguientes preguntas.\n", encuestado ); // le indica al usuario la persona que se está encuestando.

        // inicio del ciclo while.
        while ( ( si_no[ 0 ] != 'n' && si_no[ 0 ] != 'N' ) || ( si_no[ 1 ] != 'o' && si_no[ 1 ] != 'O' ) ) { // condición para preguntarle nuevamente al usuario si toma o no gaseosa en caso de que su respuesta sea invalida.
            printf( "\nUsted toma gaseosa (Si o No)?R/: " ); // se le pregunta al usuario si tomo o no gaseosa.
            scanf( "%s", &si_no ); // la respuesta se guarda en una cadena de caracteres.
            printf( "\n" ); // se imprime un salto de línea para hacer la siguiente pregunta.

            // inicio de if - else if.
            // inicio de if.
            if ( ( si_no[ 0 ] == 's' || si_no[ 0 ] == 'S' ) && ( si_no[ 1 ] == 'i' || si_no[ 1 ] == 'I' ) ) { // condición para la respuesta "si".
                contPG++; // se cuenta la cantidad de personas que consumen gaseosa.

                // inicio del ciclo while.
                while ( opcionGaseosa == 0 || opcionGaseosa > 3 ) { // condición para preguntarle nuevamente al usuario su marca de preferencia en caso de que la opción digitada sea invalida.
                    printf( "De que marca prefiere la gaseosa?\n1. PepsiCola.\n2. CocaCola.\n3. Otra marca\nDigite una opción: " ); // se le pregunta la usuario su marca de preferencia.
                    scanf ( "%d", &opcionGaseosa ); // la opción digitada se guarda en la variable "opcionGaseosa".
                    printf( "\n" ); // se imprime en pantalla un salto de línea para la siguiente pregunta.

                    // inicio de la estructura switch para las diferentes opciones de marcas.
                    switch ( opcionGaseosa ) { //los diferentes casos se analizan para la variable "opcionGaseosa".
                        case 1: // primer caso (PepsiCola).
                            contPepsiCola++; // se cuenta el número de personas que toman PepsiCola.
                            break; // si la condición se cumple se termina la estructura switch sin evaluar los otros casos.

                        case 2: // segundo caso (CocaCola).
                            contCocaCola++; // se cuenta el número de personas que toman CocaCola.
                            break; // si la condición se cumple se termina la estructura switch sin evaluar los otros casos.

                        case 3: // tercer caso (Otra marca).
                            contOtraMarca++; // se cuenta el número de personas que toman Otras marcas.
                            break; // si la condición se cumple se termina la estructura switch sin evaluar los otros casos.

                        default: // caso por defecto (Opción invalida).
                            printf( "Opción incorrecta, por favor digite la opción nuevamente.\n\n" ); // le indica al usuario que digite la opción nuevamente porque esta es invalida.
                    } // fin de la estructura switch.
                } // fin del ciclo while.

                printf( "Cuántas gaseosas toma en un día?R/: " ); // se le pregunta al usuario cuántas gaseosas toman en el día.
                scanf( "%d", &cantidadDeGaseosas ); // la cantidad de gaseosas se guarda en está variable.
                printf( "\n\n" ); // se imprime un doble salto de línea para encuestar a la siguiente persona o para imprimir por pantalla el resultado de la encuesta.

                sumatoriaDeGaseosasPorDia += cantidadDeGaseosas; // se suma la.cantidad de gaseosas por día que consume cada persona.

                opcionGaseosa = 0; // la variable que guarda la opción de la marca seleccionada se resetea a cero para una próxima pregunta.

                break; // en caso de que el encuestado si tome gaseosa una vez se le hagan las tres preguntas anteriores se sale del ciclo.
            } // fin de if.
            // inicio de else if.
            else if ( ( si_no[ 0 ] == 'n' || si_no[ 0 ] == 'N' ) && ( si_no[ 1 ] == 'o' || si_no[ 1 ] == 'O' ) ) // condición para el usuario que no toma gaseosa.
                printf( "\n" ); // se imprime un salto de línea para encuestar a la siguiente persona.
            // fin de else if.
            // inicio de else.
            else { // condición por defecto para una respuesta invalida.
                printf( "Respuesta invalida, responda la pregunta nuevamente.\n" ); // sinlampersona digita una respuesta invalida se le indicará.
            } // fin de else.
            // fin de if - else if.
        } // fin del ciclo while.

        si_no[ 0 ] = 0; // la primera posición del vector que guarda la respuesta se resetea a cero para una próxima respuesta.
        si_no[ 1 ] = 0; // la segunda posición del vector que guarda la respuesta se resetea a cero para una próxima respuesta.
    } // fin del ciclo for.

    printf( "Resultado de la encuesta:\n" ); // se imprime en pantalla el resultado de la encuesta.

    printf( "Cantidad de personas que no toman gaseosa: %d\n", 100 - contPG ); // se imprime en pantalla la cantidad de personas que no toman gaseosa.

    printf( "Cantidad de personas que toman PepsiCola: %d\n", contPepsiCola ); // se imprime en pantalla la cantidad de personas que toman PepsiCola.

    printf( "Cantidad de personas que toman CocaCola: %d\n", contCocaCola ); // se imprime en pantalla la cantidad de personas que toman CocaCola.

    printf( "Cantidad de personas que toman Otras marcas: %d\n", contOtraMarca ); // se imprime en pantalla la cantidad de personas que toman Otras marcas.

    // inicio de if - else.
    if ( contPG == 0 ) { // condición para el caso en que ninguna de las 100 personas encuestadas toma gaseosa.
        printf( "Ninguna persona consume gaseosa\n" ); // se le indica al usuario que realiza la encuenta que ninguno de los encuestados toma gaseosa.
    } // fin de if.
    // inicio del else.
    else { // condición para el caso en que una persona o más de las 100 encuestadas toman gaseosa.
        printf( "El promedio del consumo de gaseosas por día de las personas que la consumen es : %f\n", ( float ) sumatoriaDeGaseosasPorDia / ( float ) contPG ); // se imprime por pantalla el promedio del número de gaseosas por día que consumen las personas.
    } // fin de else.
    // fin de if - else.

    return 0; // indica que el programa finalizó con éxito.
} // fin de la función main.