//Nos piden un programa que resuelva la siguiente ecuación con salida x consola.
#include <iostream>
using namespace std;

//Prototipo de funcion.
void datos();

int main()
{
    datos();
    
    return 0;
}

//Definiendo funcion.
void datos()
{
    float valor1;
    float valor2;
    float valor3; 
    float valor4;

    cout << "Ingrese un valor para X: " ;
    cin >> valor1;
    cout << "Para el valor de " << valor1 << ": Y = " << 2 * valor1 - 1 << endl;
    cout << "Ingrese un valor para X: " ;
    cin >> valor2;
    cout << "Para el valor de " << valor2 << ": Y = " << 2 * valor2 - 1 << endl;
    cout << "Ingrese un valor para X: " ;
    cin >> valor3;
    cout << "Para el valor de " << valor3 << ": Y = " << 2 * valor3 - 1 << endl;
    cout << "Ingrese un valor para X: " ;
    cin >> valor4;
    cout << "Para el valor de " << valor4 << ": Y = " << 2 * valor4 - 1 << endl;

    cin.ignore();
    cin.get();
}