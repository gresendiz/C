#include<stdio.h>

int main(){
	
	int num1,i; //Declaramos las variables de tipo entero

	printf("Introduce un numero: ");
	scanf("%d",&num1); //Guardamos el número introducido por el usuario en la variable num1

/*Con un bucle for, recorremos todos los números desde el 1 hasta el introducido por el usuario para comprobar uno a uno si es dividor de este.*/
 
for(i=1;i<=num1;i++)
{
    if(num1%i==0) //La condición es que el numero dividido entre num1 de como resto 0    
    {
        printf("%d, es divisor de %d \n",i,num1);
    }
}
 
	
	
}
