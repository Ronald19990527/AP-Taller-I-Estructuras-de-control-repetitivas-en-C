/* 1. Hacer un programa en C que le permita al profesor de programación hallar el total de  
estudiantes que aprobaron, el total de estudiantes que perdieron la materia y el promedio de  
notas de sus estudiantes. Sabiendo que cada estudiante tiene un número diferente de notas y  
que para calcular la definitiva de un estudiante, se suman las notas y se dividen por el número  
de notas. */

#include<stdio.h> // incluir el encabezado estándar de entrada / salida

int main(void) // la función Marín inicia la ejecución del programa.
{
    unsigned short deseaContinuar = 0; // declaración de la variable que permite o no continuar con el resto de estudiantes para calificar.
    float nota = 0, sumarNotas = 0, notaFinalPorEstudiante = 0; // declaración de la variable que guarda cada nota de cada estudiante, declaración de la variable que suma las notas y de la que calcula la nota final de cada estudiante.
    unsigned int numeroDeNotasPorEstudiante = 0, estudiante = 0, numeroDeEstudiantesAprobados = 0, numeroDeEstudiantesReprobados = 0; // declaración de la variable que numera la nota de cada estudiante, declaración de la variable que numera a cada estudiante y de las que cuentan el número de estudiantes aprobados y reprobados.

    printf( "%d° estudiante a calificar.\n", estudiante + 1 ); // le indica al usuario que se va a calificar al primer estudiante.
    printf( "Desea continuar (1 para continuar, 0 para que terminar el programa)? " ); // se le pregunta al usuario si va a continuar con el programa o si lo quiere terminar de inmediato.
    scanf( "%d", &deseaContinuar); // la respuesta se guarda en su respectiva variable.

    // inicio del ciclo while.
    while ( deseaContinuar == 1 ) { // condición para continuar o no con las calificaciones.
        // inicio del ciclo while.
        while ( numeroDeNotasPorEstudiante < 9 ) { // condición para terminar de digitar las notas del estudiante en caso de que estén completas.
            printf( "Ingrese la %d° nota del estudiante del 0 al 10 (0 para terminar): ", numeroDeNotasPorEstudiante + 1 ); // se le indica al usuario que ingrese la nota del estudiante.
            scanf( "%f", &nota ); // la nota se guarda en su respectiva variable.

            sumarNotas += nota; // las notas que se van introduciendo se van sumando.

            // inicio de if.
            if ( nota == 0 ) // condición para parar de introducir las notas del estudiante en caso de no tener más.
                break; // se termina el ciclo while inmediatamente.
            // fin de if.

            numeroDeNotasPorEstudiante++; // se cuenta la siguiente nota del estudiante.
        } // fin del ciclo while.

        notaFinalPorEstudiante = sumarNotas / 9; // se calcula la nota final del estudiante.

        numeroDeNotasPorEstudiante = 0; // se reinicia la variable que cuenta el número de notas por estudiante para uso posterior.

        sumarNotas = 0; // la variable que suma las notas de cada estudiante se reinicia para uso posterior.

        // inicio de if - else if.
        // inicio de if.
        if ( notaFinalPorEstudiante <= 5 ) { // condición para los estudiantes que perdieron.
            printf( "Estudiante reprobado, su nota final fue de %f\n\n", notaFinalPorEstudiante ); // se le indica en pantalla al estudiante por pantalla su nota final y que perdió.

            numeroDeEstudiantesReprobados++; // se cuenta el número de estudiantes reprobados.
        } // fin de if.
        // inicio de else.
        else { // condición para los estudiantes que ganaron.
            printf( "Estudiante aprobado, su nota final fue de %f\n\n", notaFinalPorEstudiante ); // se le indica en pantalla al estudiante que aprobó la asignatura y su nota final.

            numeroDeEstudiantesAprobados++; // se cuenta el número de estudiantes aprobados.
        } // fin de else.
        // fin de if - else if

        estudiante++; // se pasa a calificar al siguiente estudiante.

        printf( "%d° estudiante a calificar.\n", estudiante + 1 ); // se le indica en pantalla al usuario el siguiente estudiante a calificar.
        printf( "Desea continuar (1 para continuar, 0 para que terminar el programa)? " ); // se le pregunta al usuario que está validando si desea continuar o no en caso de que halla otro estudiante.
        scanf( "%d", &deseaContinuar); // se guarda en su respectiva variable el número que indica si el usuario va a continuar o no calificando.
    } // fin del ciclo while.

    // inicio de if - else if.
    // inicio de if.
    if ( numeroDeEstudiantesAprobados == 0 && numeroDeEstudiantesReprobados == 0 ) // condición para el caso en que el usuario no califica a ningún estudiante.
        printf( "\nPrograma finalizado con exito\n" ); // se le indica al usuario que el programa finalizó con éxito.
    // fin de if.
    // inicio de else if.
    else if ( numeroDeEstudiantesAprobados == 0 && numeroDeEstudiantesReprobados != 0 ) // condición para el caso en que todos los estudiantes reprobaron.
        printf( "\nTodos los %d estudiantes reprobaron\n", numeroDeEstudiantesReprobados ); // se le indica en pantalla al usuario que todos los estudiantes reprobaron.
    // fin de else if.
    // inicio de else if.
    else if ( numeroDeEstudiantesAprobados != 0 && numeroDeEstudiantesReprobados == 0 ) // condición para el caso en que todos los estudiantes aprobaron.
        printf( "\nTodos los %d estudiantes aprobaron\n", numeroDeEstudiantesAprobados ); // se le indica en pantalla al usuario que todos los estudiantes aprobaron.
    // fin de else if.
    // inicio de else if.
    else if ( numeroDeEstudiantesAprobados != 0 && numeroDeEstudiantesReprobados != 0 ) // condición para el caso en que hay estudiantes aprobados y reprobados.
        printf( "\n%d estudiantes aprobaron y %d reprobaron\n", numeroDeEstudiantesAprobados, numeroDeEstudiantesReprobados ); // se imprime en pantalla el numero de estudiantes aprobados y reprobados.
    // fin de else if.
    // fin de if - else if.

    return 0; // indica que el programa terminó con éxito.
} // fin de la función main.