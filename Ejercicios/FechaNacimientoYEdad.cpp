//Realizar un programa que pida la fecha de nacimiento y nos de la edad.
#include<iostream>
using namespace std ;

int main ()
{
    int edad;
    int fechaNac;
    int anoActual;

    cout<<"Ingrese ano de nacimiento: ";
    cin >> fechaNac;
    cout<<"Ingrese ano actual: ";
    cin >> anoActual;
    
    edad = anoActual - fechaNac;
    cout<<"La edad actual es: "<< edad;

    return 0;
}
