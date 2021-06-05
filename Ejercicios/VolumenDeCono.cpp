//Escribe un programa en C++ que nos diga cuál es el volumen de un cono con un radio de la base de 14,5 y una altura de 26,79. La fórmula que debes usar es: (PI * Radio al cuadrado * altura)/3 Recuerda que el valor (aproximado) de ԉ es 3,141592.
#include<iostream>
#include<math.h>
using namespace std;

int main ()
{
    float base_radio = 14.5;
    float alCuadrado = pow(base_radio,2);
    float altura = 26.79;
    float PI = 3.141592;
    float volumen;

    volumen = (PI * (alCuadrado)* altura) / 3;
    cout<<"El volumen del cono es: "<<volumen;


    return 0;
}