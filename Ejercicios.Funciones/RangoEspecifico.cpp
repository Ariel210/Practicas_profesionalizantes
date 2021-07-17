//Realizar un programa que pida un rango, luego que ingrese un número y determine si está dentro del rango solicitados.
#include<iostream>
using namespace std;

//Prototipo de funcion
void pidiendoRango();

int main ()
{
    pidiendoRango();

    return 0;
}

//Definiendo funciones
void pidiendoRango()
{
    int arreglo [5];
    int i;
    
    for(int i=0; i<4; i++)
    {
        cout<<"Ingrese valores: ";
        cin>>arreglo[i];
        cout<<"El valor del arreglo ingresado es: "<<arreglo[i];
    }
}
