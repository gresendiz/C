
//Autor: Guillermo Resendiz Chavez
//Fecha: 3 de Diciembre del 2016
//Descripcion: Una empresa que trabaja con vehículos desea calcular las necesidades de combustible
//Contacto: gresendizc130@hotmail.com

#include <stdio.h>
#include <stdlib.h>

int main(){

	int turismo, todoterrenos;
	int capTurismo, capTodo;
	int necesidadesCom;

		printf("Introduce el numero de turismo: ");
		scanf("%d", &turismo);

		printf("Introduce el numero de todo terrenos: ");
		scanf("%d", &todoterrenos);

		printf("Introduce la capacidad de los turismos (litros): ");
		scanf("%d", &capTurismo);

		printf("Introduce la capacidad de los todo terreno (litros): ");
		scanf("%d", &capTodo);


	necesidadesCom = turismo * capTurismo + todoterrenos * capTodo;
		printf("Las necesidades de combultible totales son (litros): %d\n", necesidadesCom);
	return 0;

}

