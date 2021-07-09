#include<iostream>
using namespace std;


//Prototipo de funcion.
void ingresarNumero();
int sacandoVolumenCuadrado(int s); 

//Variable Global.
int num;

int main ()
{
    ingresarNumero();
    sacandoVolumenCuadrado(num);

    return 0;
}

//Definiendo Funciones.
void ingresarNumero()
{
    cout<<"Ingrese numero para sacar volumen: ";
    cin>>num;
}

int sacandoVolumenCuadrado (int s)
{
    int volumen = 4*s;

    cout<<"Volumen Del Cuadrado: "<<volumen;

    return volumen;
}