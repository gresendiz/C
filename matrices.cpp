#include "iostream"
#include <stdio.h>

using namespace std;

int main()

{
	int z;
	int x[100]={};
	int y[100]={};
    int numeros[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int limite = (sizeof(numeros)/sizeof(numeros[0]));
    for (int i = 0; i < limite; i++)
    {
        	printf("%d", numeros[i]);
			
			if(numeros[i] % 3 == 0){
				for (int j = 0; j < limite; j++)
			       {x[j] = numeros[i]+x[j];
				   }
			}
			
			else {
			
			if(numeros[i] % 5 == 0){
				for (int j = 0; j < limite; j++)
			       {y[j] = numeros[i]+y[j];
				   }
			}
			}
        	
    }
    z=x[0]+y[0];
    printf("\n\nla suma de todos los multiplos de 3 y 5 debajo de 10 es: %d\n", z);
}
