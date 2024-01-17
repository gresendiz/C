/*
Autor: Guillermo Resendiz Chavez
Fecha: 2 de enero del 2014
Descripcion: Función que permite intercambiar el valor entre ambas variables
Contacto: gresendizc130@hotmail.com
*/

#include <stdio.h>
#include <conio.h>

int intercambio(int var1, int var2){
	
    //intercambiando valores de las variables

	int temp;
	temp=var1;
	var1=var2;
	var2=temp;
	
    printf("valores intercambiados:\n");
	printf("valor 1: %d \n", var1);
	printf("valor 2: %d \n", var2);
	
}

int main(){
	
    printf("valores antes del intercambio:\n valor1=3\n valor2=5\n");

	intercambio(3, 5); //llamada de función y pasando para parametros
	
}
