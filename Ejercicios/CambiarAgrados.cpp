//Escribe un programa en C++ que lea del teclado un número (real) de grados Fahrenheit y lo convierta a Celsius mostrando el resultado en la pantalla. ºC = 5 / 9 x (ºF ‐ 32).
#include<iostream>
using namespace std;

int main ()
{

    float centigrados;
    float fahrenheit;

    cout<<"Ingrese grados fahrenheit: ";
    cin>>fahrenheit;

    centigrados = (5.0/9.0) * (fahrenheit-32);
    cout<<"El resultado final de la temperatura es: "<<centigrados;

    cin.get();
    cin.ignore();
    
    return 0;
}