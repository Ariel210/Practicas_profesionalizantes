#include<iostream>
using namespace std;

//Prototipo de Funciones.
void ingresandoDatos();


int main ()
{
    ingresandoDatos();

    return 0;
}

//Definiendo Funciones.
void ingresandoDatos()
{
    int a; 
    int b; 
    int c;
    int perimetro;

    cout<<"Ingrese Lado A: ";
    cin>>a;
    cout<<"Ingrese Lado B: ";
    cin>>b;
    cout<<"Ingrese Lado C: ";
    cin>>c;

    perimetro = a + b + c;
    cout<<"Perimetro Total: "<<perimetro;

}