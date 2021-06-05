//Realizar un programa que pida 4 datos y devuelva el producto de Ambos.
#include<iostream>
using namespace std;

int main ()
{

    int num1;
    int num2;
    int num3;
    int num4;
    int producto;

    cout<<"Ingrese 1er num: ";
    cin >> num1;
    cout<<"Ingrese 2do num: ";
    cin>>num2;
    cout<<"Ingrese 3er num: ";
    cin>>num3;
    cout<<"Ingrese 4to num: ";
    cin>>num4;

    producto = (num1 * num2 * num3 * num4);
    cout<<"El producto de estos 4 numeros es: "<<producto;

    cin.ignore();
    cin.get();

    return 0 ;
}