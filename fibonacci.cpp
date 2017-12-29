#include<iostream>
using namespace std;

int fibo(int n)
{
    if(n == 0 || n == 1)
       return n;
    else
       return fibo(n - 2) + fibo(n - 1);
}

int main()
{
    cout<<"\n         FIBONACCI \n\n";
    
    int i, num ;
    int x=0;
    
    do
    {
        cout<<"Ingrese un numero entero y positivo: ";
        cin>>num;
        
    } while(num < 0);
    
    cout<<"\nLa serie es: \n\n\t";
    
    for(i=0; i<num; i++)
    {
       if(fibo(i) != 0)
          cout<< ", "; 
        
        cout<< fibo(i);
		
		if(fibo(i) %2==0)
		x=fibo(i) +x;      
    }
    
	cout<<"\n\n";
	cout<<"la suma de los pares es: " << x ;
	cout<<"\n";
       
    return 0;
}
