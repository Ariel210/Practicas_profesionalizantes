#include<iostream>
using namespace std;

//Prototipo de funcion.
int datosRect(int L, int W);

int main ()
{
    datosRect(3, 4);
    
    return 0;
}


//Definiendo Funciones.
int datosRect(int L, int W)
{
    int volumen = 2*L + 2*W;

    cout<<"El Volumen del Rectangulo es: "<<volumen;

    return volumen;
}