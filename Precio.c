//Autor: Guillermo Resendiz Chavez
//Fecha: 3 de Diciembre del 2016
//Descripcion: Precio medio de un producto
//Contacto: gresendizc130@hotmail.com

#include <stdio.h>
#include <stdlib.h>

int main(){

double Precio1, Precio2, Precio3;
double media;

printf("Introduzca el precio del producto en el establecimiento número 1, en Pesos mexicanos: ");
scanf("%lf", &Precio1);

printf("Introduzca el precio del producto en el establecimiento número 2, en Pesos mexicanos: ");
scanf("%lf", &Precio2);

printf("Introduzca el precio del producto en el establecimiento número 3, en Pesos mexicanos: ");
scanf("%lf", &Precio3);

media = (Precio1 + Precio2 + Precio3)/3;

printf("El Precio medio del producto es: %lf Pesos mexicanos \n", media);
return 0;

}
