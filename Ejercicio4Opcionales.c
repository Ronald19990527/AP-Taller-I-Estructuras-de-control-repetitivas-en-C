/* 4. El profesor de fundamentos de programación, acordó con sus alumnos las siguientes reglas 
para la calificación final de la materia:
a. La calificación final se obtiene de 3 notas parciales, que tienen igual peso.
b. Si la nota es mayor de 3.5 se le suman 4 puntos. Es decir si la nota obtenida es de 3.7 el 
profesor suma 4 puntos, luego su nota final será de 4.1 (si la nota calculada da más de 5 
la definitiva se deja en 5).
c. Si la nota es menor de 2.5 se le resta 3 puntos. Es decir que si la nota obtenida es de 2.2 
el profesor resta 3 puntos, luego su nota final será de 1.9. Si la nota resultante fuese menor 
que 0 (cero) la definitiva se deja en 0 (cero).
Diseñe un programa en C que capture las 3 notas para cada uno de los "n" estudiantes de un 
grupo e imprima la nota final. Tenga en cuenta que las notas que el computador imprima, 
siempre deben estar entre 0 y 5. */

#include<stdio.h> // incluir el encabezado estándar de entrada/salida.

int main(void) // la función main inicia la ejecución del programa.
{
    // declaración de la variable que guarda el número de estudiantes.
    unsigned int nEstudiantes = 0;
    // declaración de las variables que guardan las notas.
    float nota1 = 0.0, nota2 = 0.0, nota3 = 0.0, notaDefinitiva = 0.0;

    printf( "Digite la cantidad de estudiantes: " ); // se le pide al usuario que ingrese la cantidad de estudiantes delcm curso.
    scanf( "%d", &nEstudiantes ); // la cantidad de estudiantes se guarda en su respectiva variable.
    printf( "\n\n" ); // se imprime un doble salto de línea para imprimir más información de forma ordenada.

    // inicio del ciclo for.
    for ( unsigned int iteradorDeEstudiantes = 1; iteradorDeEstudiantes <= nEstudiantes; iteradorDeEstudiantes++ ) { // condición para ir valorando a cada estudiante.
        printf( "Estudiante #%d\n\n", iteradorDeEstudiantes ); // se le indica al profesor el estudiante al que va a evaluar está vez.

        printf( "Digite la 1ra nota (entre 0.0 y 5.0): " ); // se le pide al profesor que digite la primera nota del estudiante en cuestión.
        scanf( "%f", &nota1 ); // la nota se guarda en su respectiva variable.
        printf( "\n" ); // se imprime un salto de línea para mostrar más información de forma ordenada.

        // inicio del ciclo while.
        while ( nota1 < 0.0 || nota1 > 5.0 ) { // condición para que el profesor vuelva a digitar la primera nota en caso de una equivocación.
            printf( "La nota ingresada no es válida, vuelva a ingresar la 1ra nota (entre 0.0 y 5.0): " ); // se le indica al profesor que su nota digitada no es válida.
            scanf( "%f", &nota1 ); // se guarda la primera nota en su respectiva variable.
            printf( "\n" ); // se imprime un salto de línea para mostrar más información de forma ordenada.
        } // fin de while.

        printf( "Digite la 2da nota (entre 0.0 y 5.0): " ); // se le pide al profesor que digite la segunda nota del estudiante en cuestión.
        scanf( "%f", &nota2 ); // la nota se guarda en su respectiva variable.
        printf( "\n" ); // se imprime un salto de línea para mostrar más información de forma ordenada.

        // inicio del ciclo while.
        while ( nota2 < 0.0 || nota2 > 5.0 ) { // condición para que el profesor vuelva a digitar la segunda nota en caso de una equivocación.
            printf( "La nota ingresada no es válida, vuelva a ingresar la 2da nota (entre 0.0 y 5.0): " ); // se le indica al profesor que su nota digitada no es válida.
            scanf( "%f", &nota2 ); // se guarda la segunda nota en su respectiva variable.
            printf( "\n" ); // se imprime un salto de línea para mostrar más información de forma ordenada.
        } // fin del ciclo while.

        printf( "Digite la 3ra nota (entre 0.0 y 5.0): " ); // se le pide al profesor que digite la tercera nota del estudiante en cuestión.
        scanf( "%f", &nota3 ); // la nota se guarda en su respectiva variable.
        printf( "\n" ); // se imprime un salto de línea para mostrar más información de forma ordenada.

        // inicio del ciclo while.
        while ( nota3 < 0.0 || nota3 > 5.0 ) { // condición para que el profesor vuelva a digitar la tercera nota en caso de equivocación.
            printf( "La nota ingresada no es válida, vuelva a ingresar la 3ra nota (entre 0.0 y 5.0): " ); // se le indica al profesor que su nota digitada no es válida.
            scanf( "%f", &nota3 ); // se guarda la tercera nota en su respectiva variable.
            printf( "\n" ); // se imprime un salto de línea para mostrar más información de forma ordenada.
        } // fin del ciclo while.

        notaDefinitiva = ( nota1 + nota2 + nota3 ) / 3.0; // se calcula la nota definitiva del estudiante en cuestión.

        // inicio de if - else if.
        // inicio de if.
        if ( notaDefinitiva > 3.5 ) { // condición para la nota definitiva en caso de que la nota promedio sea mayor a 3.5.
            notaDefinitiva += 0.4; // a la nota definitiva se le suma 4 puntos más.

            // inicio de if - else.
            // inicio de if.
            if ( notaDefinitiva > 5.0 ) // condición para el caso en que la nota definitiva sobre pase la nota máxima.
                printf( "El estudiante obtuvo una nota definitiva de %.1f la cual fue aproximada a 5.0\n\n\n", notaDefinitiva ); // se le indica al profesor que la nota del estudiante fue redondeada a 5.0 porque sobre paso el límite máximo.
            // fin de if.
            // inicio de else.
            else // condición para el caso en que la nota no sobrepase el límite mínimo.
                printf( "El estudiante obtuvo una nota de %.1f, a la cual se le sumaron cuatro puntos (0.4) para una definitiva de %.1f\n\n\n", ( nota1 + nota2 + nota3 ) / 3.0, notaDefinitiva ); // se le indica al profesor que la nota del estudiante es la obtenida después de agregarla 4 puntos al promedio.
            // fin de else.
            // fin de if - else.
        } // fin de if.
        // inicio de else if.
        else if ( notaDefinitiva < 2.5 ) { // condición para calcular la nota definitiva de un estudiante que obtiene una nota promedio por debajo de 2.5.
            notaDefinitiva -= 0.3; // a la nota promedio se le restan tres puntos.

            // inicio de if - else.
            // inicio de if.
            if ( notaDefinitiva < 0.0 ) // condición para el caso en que la nota recalculda sea menor a 0.0.
                printf( "El estudiante obtuvo una nota definitiva de %.1f la cual fue aproximada a 0.0\n\n\n", notaDefinitiva ); // la nota definitiva del estudiante se aproxima a cero dado que el recalculado fue menor a cero.
            // fin de if.
            // inicio de else.
            else // condición para el caso en que la nota recalculada no sea menor a cero.
                printf( "El estudiante obtuvo una nota de %.1f, a la cual se le restaron tres puntos (0.3) para una definitiva de %.1f\n\n\n", ( nota1 + nota2 + nota3 ) / 3.0, notaDefinitiva ); // se imprime en pantalla la nota definitiva del estudiante con los tres puntos restados.
            // fin de else.
            // fin de if - else.
        } // fin de else if.
        // inicio de else if.
        else if ( notaDefinitiva >= 2.5 && notaDefinitiva <= 3.5 ) // condición para el caso en que la nota recalculada está entre 2.5 y 3.5. 
            printf( "El estudiante obtuvo una nota definitiva de %.1f\n\n\n", notaDefinitiva ); //en este caso la nota definitiva solo se imprime como el promedio de las tres notas.
        // fin de else if.
        // fin de if - else if.
    } // fin del ciclo for.

    printf( "Fin del programa\n\n" ); // se le indica al profesor en pantalla que el programa finalizó.

    return 0; // indica que el programa finalizó con éxito.
} // fin de la función main.