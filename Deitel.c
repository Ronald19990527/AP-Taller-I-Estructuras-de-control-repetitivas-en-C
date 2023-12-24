/* Figura 4.7: fig04_07.c
	Cuenta las calificaciones expresadas en letras */
#include <stdio.h>

/* la funci�n main comienza la ejecuci�n del programa */
int main()
{
	int calificacion; /* una calificaci�n */
	int cuentaA = 0;  /* n�mero de As */
	int cuentaB = 0;  /* n�mero de Bs */
	int cuentaC = 0;  /* n�mero de Cs */
	int cuentaD = 0;  /* n�mero de Ds */
	int cuentaF = 0;  /* n�mero de Fs */

	printf( "Introduzca la letra que corresponde a la calificacion.\n" );
	printf( "Introduzca el caracter EOF para finalizar la entrada de datos.\n" );

	/* repite hasta que el usuario digita la secuencia de teclas de fin de archivo */
	while ( ( calificacion = getchar() ) != EOF ) {

		/* determina cual calificaci� se introdujo */
		switch ( calificacion ) { /* switch anidado dentro del while */

			case 'A': /* la calificaci�n es A */
			case 'a': /* o a */
				++cuentaA; /* incrementa cuentaA */
				break; /* necesario para salir del switch */

			case 'B': /* la calificaci�n es B */
			case 'b': /* o b */
				++cuentaB; /* incrementa cuentaB */
				break; /* sale de switch */

			case 'C': /* la calificaci�n es C */
			case 'c': /* o c */
				++cuentaC; /* incrementa cuentaC */
				break; /* sale de switch */

			case 'D': /* la calificaci�n es D */
			case 'd': /* o d */
				++cuentaD; /* incrementa cuentaD */
				break; /* sale de switch */

			case 'F': /* la calificaci�n es F */
			case 'f': /* o f */
				++cuentaF; /* incrementa cuentaF */
				break; /* sale de switch */

			case '\n': /* ignora nuevas l�neas, */
			case '\t': /* tabuladores */
			case ' ':  /* y espacios en la entrada */
				break; /* fin de switch */

			default: /* atrapa todos los dem�s caracteres */
				printf( "Introdujo una letra incorrecta." );
				printf( " Introduzca una nueva calificacion.\n" );
				break; /* opcional; de todas maneras saldr� del switch */
		} /* fin de switch */

	} /* fin de while */

	/* muestra el resumen de los resultados */
	printf( "\nLos totales por calificacion son:\n" );
	printf( "A: %d\n", cuentaA ); /* despliega el n�mero de calificaciones A */
	printf( "B: %d\n", cuentaB ); /* despliega el n�mero de calificaciones B */
	printf( "C: %d\n", cuentaC ); /* despliega el n�mero de calificaciones C */
	printf( "D: %d\n", cuentaD ); /* despliega el n�mero de calificaciones D */
	printf( "F: %d\n", cuentaF ); /* despliega el n�mero de calificaciones F */

	return 0; /* indica terminaci�n exitosa del programa */

} /* fin de la funci�n main */
