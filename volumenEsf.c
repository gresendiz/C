
//Autor: Guillermo Resendiz Chavez
//Fecha: 3 de Diciembre del 2016
//Descripcion: cálculo del volumen y area de una esfera.
//Contacto: gresendizc130@hotmail.com

#include <stdio.h>
#include <stdlib.h>

int main(){

double A, V, r;
const double Pi = 3.141593;
int opcion;

printf("Elige alguna de las dos opciones: \n 1.-Calcular Area \n 2.-Calcular Volumen\n");
scanf("%d", &opcion);


if(opcion == 1){
	printf("Introduzca el tamaño del radio (metros): ");
	scanf("%lf", &r);

	A = 4 * Pi * r * r;

	printf("El area de la esfera es: %lf \n", A);

	}
  else if (opcion == 2){
	printf("Introduzca el tamaño del radio (metros): ");
	scanf("%lf", &r);

	V = (4 * Pi * r * r * r)/3;

	printf("El volumen de la esfera es: %lf, metros cubicos \n", V);

	}

	else 	{

		printf("¡Introduzca una opcion valida!\n");
		}

return 0;
}

