/* 4.27 (Triples Pitag�ricos.) Un tri�ngulo recto puede tener todos sus lados enteros. Al conjunto de tres valores enteros
para los lados del tri�ngulo se le llama Triple Pitag�rico. Estos tres lados deben satisfacer la relaci�n que indica
que la suma de los cuadrados de los lados es igual al cuadrado de la hipotenusa. Encuentre todos los Triples Pitag�-
ricos para lado1, lado2 y la hipotenusa que no sean mayores que 500. Utilice un triple for anidado que intente
todas las posibilidades. �ste es un ejemplo de computaci�n de �fuerza bruta�. No es muy est�tico para mucha gente.
Pero existen muchas razones por las cuales esta t�cnica es importante. Primero, con el fenomenal incremento en el
poder de las computadoras, las soluciones que hubieran tardado a�os o incluso siglos con la tecnolog�a de hace tan
s�lo un par de a�os, ahora puede realizarse en horas, minutos o incluso segundos. Los recientes chips con micro-
procesadores pueden procesar �mil millones de instrucciones por segundo! Segundo, como aprender� en cursos de
computaci�n m�s avanzados, existe un gran n�mero de problemas interesantes para los cuales no se conocen un
m�todo o algoritmo conocido que no sea el de la fuerza bruta. En este libro, investigamos muchos tipos de t�cnicas
para resolver problemas. Aplicaremos muchos m�todos de fuerza bruta para distintos problemas interesantes. */

#include <stdio.h>

int main( void )
{
	unsigned int lado1 = 0, lado2 = 0, hipotenusa = 0;

	printf( "Los triples pitagoricos menores o iguales a 500 son:\n" );

	for ( lado1 = 1; lado1 <= 500; lado1++ ) {
		for ( lado2 = 1; lado2 <= 500; lado2++ ) {
			for ( hipotenusa = 1; hipotenusa <= 500; hipotenusa++ ) {
				if ( lado1 * lado1 + lado2 * lado2 == hipotenusa * hipotenusa )
					printf ( "lado1 = %u, lado2 = %u, hiptenusa = %u\n", lado1, lado2, hipotenusa );
			}
		}
	}
}
