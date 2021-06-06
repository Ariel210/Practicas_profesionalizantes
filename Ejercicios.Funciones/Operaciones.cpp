//Crear un programa que sume, reste, multiplica y divida.
#include<iostream>
using namespace std;

//Prototipo de funciones.
double suma (double num1, double num2);
double resta (double num1, double num2);
double producto(double num1, double num2);
double division (double num1, double num2);

int main ()
{
    double num1;
    double num2;

    cout<<"Ingrese num1: ";
    cin>> num1;

    cout<<"Ingrese num2: ";
    cin>>num2;

    cout<<"La suma queda: "<<suma(num1,num2)<<"\n";
    cout<<"La resta queda: "<<resta(num1,num2)<<"\n";
    cout<<"El producto queda: "<<producto(num1,num2)<<"\n";
    cout<<"La division queda: "<<division(num1,num2)<<"\n";

    return 0;
}



//Definiendo funciones.
double suma (double num1, double num2)
{
    return num1 + num2;
}

double resta (double num1, double num2)
{
    return num1 - num2;
}

double producto(double num1, double num2)
{
    return num1 * num2;
}

double division (double num1, double num2)
{
    return num1/num2;
}