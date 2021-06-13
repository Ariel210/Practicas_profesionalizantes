//Realizar un programa que permita saber si un número es primo o no.
#include<iostream>
using namespace std;


//Prototipo de funcion.
void numeroPrimo();

int main ()
{
    numeroPrimo();
    
    return 0;
}


//Definiendo funciones.
void numeroPrimo()
{
    int numero;
    
    cout<<"Ingrese numero: ";
    cin>>numero;

    if (numero%2==0)
    {
        cout<<"El numero no es primo, ingrese numero nuevamente: ";
        cin>>numero;
        cout<<"El numero "<<numero<< " es primo";       
    }
    else
    {
      cout<<"El numero "<<numero<< " es primo";
    }
    
}