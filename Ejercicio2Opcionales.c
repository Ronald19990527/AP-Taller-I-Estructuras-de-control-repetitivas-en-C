/* 2. En el curso de programación hay n estudiantes, y para calcular la definitiva de un estudiante 
se utilizan 3 notas, cada una con los siguientes pesos: 25%, 35% y 40% respectivamente. El 
profesor desea construir un programa que calcule la definitiva para cada uno de los n 
estudiantes y que calcule el promedio de notas de los estudiantes que pasaron, el promedio 
de notas de los estudiantes que perdieron y el promedio de notas de los estudiantes cuya nota 
esté entre 4 y 5. */

#include<stdio.h> // incluir el encabezado estándar de entrada / salida.

int main(void) // la función main inicia la ejecución del programa.
{
    // declaración de las variables que guardan el número de estudiantes ingresado por el profesor, la cantidad de estudiantes que ganaron, la cantidad de estudiantes que perdieron y la cantidad de estudiantes que sacaron notas entre 4 y 5.
    unsigned int nEstudiantes = 0, cantidadEG = 0, cantidadEP = 0, cantidadE4y5 = 0;
    // declaración de las variables que guardan las tres notas de cada estudiante, la nota definitiva, la sumatoria de notas de los estudiantes que ganaron, los que perdieron y los que sacaron notas entre 4 y 5.
    float nota1 = 0, nota2 = 0, nota3 = 0, definitiva = 0, sumatoriaEG = 0, sumatoriaEP = 0, sumatoriaE4y5 = 0;

    printf( "Ingresé la cantidad de estudiantes que tiene el curso: " ); // se le pide al profesor que ingrese la cantidad de estudiantes que tiene.
    scanf( "%d", &nEstudiantes ); // la cantidad de estudiantes que tiene el profesor se guarda en su respectiva variable.
    printf( "\n\n" ); // se imprime un salto de línea para mostrar más información de forma ordenada.

    // inicio del ciclo for.
    for ( int iteradorDeEstudiantes = 1; iteradorDeEstudiantes <= nEstudiantes; iteradorDeEstudiantes++ ) { // condición para evaluar a la cantidad completa de estudiantes ingresada por pantalla.
        printf( "Ingresé la primera nota del %d° estudiante (1.0 - 5.0): ", iteradorDeEstudiantes ); // se le pide al profesor la primera nota del n-écimo estudiante.
        scanf( "%f", &nota1 ); // esta primera nota se guarda en la variable "nota1".
        printf( "\n" ); // se imprime un salto de línea para mostrar más información de forma ordenada.
        // inicio del ciclo while.
        while ( nota1 < 0.0 || nota1 > 5.0 ) { // condición para el caso en que el usuario ingrese una nota no válida.
            printf( "Error, la nota ingresada debe estar en el rango de 0.0 a 5.0, por favor vuela a ingresar la primera nota del %d° estudiante: ", iteradorDeEstudiantes ); // se le dice al usuario que su nota no es válida y que la vuelva a ingresar.
            scanf( "%f", &nota1 ); // la nota ingresada nuevamente se guarda en su respectiva variable.
            printf( "\n" ); // se imprime un salto de línea para mostrar más información de forma ordenada.
        } // fin del ciclo while.

        printf( "Ingresé la segunda nota del %d° estudiante (1.0 - 5.0): ", iteradorDeEstudiantes ); // se le pide al profesor la segunda nota del n-écimo estudiante.
        scanf( "%f", &nota2 ); // esta segunda nota se guarda en la variable "nota2".
        printf( "\n" ); // se imprime un salto de línea para mostrar más información de forma ordenada.
        // inicio del ciclo while.
        while ( nota2 < 0.0 || nota2 > 5.0 ) { // condición para el caso en que el usuario ingrese una nota no válida.
            printf( "Error, la nota ingresada debe estar en el rango de 0.0 a 5.0, por favor vuela a ingresar la segunda nota del %d° estudiante: ", iteradorDeEstudiantes ); // se le dice al usuario que su nota no es válida y que la vuelva a ingresar.
            scanf( "%f", &nota2 ); // la nota ingresada nuevamente por el usuario se guarda en su respectiva variable.
            printf( "\n" ); // se imprime un salto de línea para mostrar más información de forma ordenada.
        } // fin el ciclo while.

        printf( "Ingresé la tercera nota del %d° estudiante (1.0 - 5.0): ", iteradorDeEstudiantes ); // se le pide al profesor la tercera nota del n-écimo estudiante.
        scanf( "%f", &nota3 ); // esta tercera nota se guarda en la variable "nota3".
        printf( "\n" ); // se imprime un salto de línea para mostrar más información de forma ordenada.
        // inicio del ciclo while.
        while ( nota3 < 0.0 || nota3 > 5.0 ) {
            printf( "Error, la nota ingresada debe estar en el rango de 0.0 a 5.0, por favor vuela a ingresar la tercera nota del %d° estudiante: ", iteradorDeEstudiantes ); // se le dice al usuario que su nota no es válida y que la vuelva a ingresar.
            scanf( "%f", &nota3 ); // la nota ingresada nuevamente por el usuario se guarda en su respectiva variable.
            printf( "\n" ); // se imprime un salto de línea para mostrar más información de forma detallada.
        } // fin del ciclo while.

        definitiva = 0.25 * nota1 + 0.35 * nota2 + 0.40 * nota3; // se obtiene la nota definitiva del n-écimo estudiante teniendo en cuenta los porcentajes de cada una.

        printf( "La nota definitiva de este estudiante es de %.1f\n\n\n", definitiva ); // se imprime en pantalla la nota definitiva del n-écimo estudiante.

        // inicio de if - else if.
        // inicio de if.
        if ( definitiva >= 1.0 && definitiva <= 2.9 ) { // condición para el estudiante que pierde la asignatura.
            cantidadEP++; // se cuenta cada estudiante que pierde la asignatura.

            sumatoriaEP += definitiva; // se suman las notas definitivas de los estudiantes que pierden la asignatura.
        } // fin de if.
        // inicio de else if.
        else if ( definitiva >= 3.0 && definitiva <= 5.0 ) { // condición para el estudiante que gana la asignatura.
            cantidadEG++; // se cuenta cada estudiante que gana la asignatura.

            sumatoriaEG += definitiva; // se suman las notas definitivas de los estudiantes que ganan la asignatura.
        } // fin de else if.

        // inicio de if.
        if ( definitiva >= 4.0 && definitiva <= 5.0 ) { // condición para los estudiantes que sacaron notas entre 4 y 5.
            cantidadE4y5++; // se cuenta cada estudiante que saca notas entre 4 y 5.

            sumatoriaE4y5 += definitiva; // se suman las notas definitivas de los estudiantes que sacan notas entre 4 y 5.
        } // fin de if.
    } // fin del ciclo for.

    // inicio de if - else.
    // inicio de if.
    if ( cantidadEG == 0 ) // condición para el caso en que no haya ningún estudiante que haya ganado.
        printf( "Ningún estudiante ganó la asignatura\n\n "); // se indica en pantalla que ningún estudiante ganó.
    // fin de if.
    // inicio de else.
    else // condición para imprimir en pantalla el promedio de notas de los estudiantes que ganaron.
        printf( "El promedio de notas de los estudiantes que ganaron la asignatura fue de %.1f\n\n", sumatoriaEG / ( float ) cantidadEG ); // se imprime en pantalla el promedio de los estudiantes que ganaron.
    // fin de else.
    // fin de if - else.

    // inicio de if - else.
    // inicio de if.
    if ( cantidadEP == 0 ) // condición para el caso en que no haya ningún estudiante que haya perdido.
        printf( "Ningún estudiante perdió la asignatura\n\n "); // se indica en pantalla que ningún estudiante perdió.
    // fin de if.
    // inicio de else.
    else // condición para imprimir en pantalla el promedio de notas de los estudiantes que perdieron.
        printf( "El promedio de notas de los estudiantes que perdieron la asignatura fue de %.1f\n\n", sumatoriaEP / ( float ) cantidadEP );// se imprime en pantalla el promedio de los estudiantes que perdieron.
    // fin de else.
    // fin de if - else.

    // inicio de if - else.
    // inicio de if.
    if ( cantidadE4y5 == 0 ) // condición para el caso en que no haya ningún estudiante que haya sacado una nota entre 4 y 5.
        printf( "Ningún estudiante obtuvo una nota entre 4 y 5\n\n "); // se indica en pantalla que ningún estudiante sacó una nota entre 4 y 5.
    // fin de if.
    // inicio de else.
    else // condición para imprimir en pantalla el promedio de notas de los estudiantes que sacaron entre 4 y 5.
        printf( "El promedio de notas de los estudiantes que obtuvieron entre 4 y 5 fue de %.1f\n\n", sumatoriaE4y5 / ( float ) cantidadE4y5 ); // se imprime en pantalla el promedio de notas de los estudiantes que sacaron entre 4 y 5.
    // fin de else.
    // fin de if - else.

    return 0; // indica que el programa finalizó con éxito.
} // fin de la función main.