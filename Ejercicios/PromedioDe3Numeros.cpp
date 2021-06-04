//Realizar un programa que pida 3 datos/numeros y nos devuelva el promedio.
#include<iostream>
using namespace std;

int main ()
{
    
    int num1;
    int num2;
    int num3;

    int resultado;

    cout<<"Ingrese num 1: ";
    cin >> num1;  
    cout<<"Ingrese num 2: "; 
    cin >> num2;
    cout<<"Ingrese num 3: ";
    cin >> num3;

    resultado = (num1 + num2 + num3) / 3;
    
    cout<<"El resultado final es: "<< resultado;
    
    return 0;
}