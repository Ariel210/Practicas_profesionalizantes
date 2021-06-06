//Escribe un programa que lea del teclado un tiempo transcurrido en segundos y muestre en la pantalla las horas, los minutos y los segundos equivalentes.
#include<iostream>
using namespace std;

int main()
{
    int time;
    int hours;
    int minutes;
    int seconds;

    cout<<"Ingrese tiempo: ";
    cin >> time;

    hours = time / 3600;
    time = time % 3600;
    minutes = time / 60;
    seconds = time % 60;

    cout<<"Horas: "<<hours<<"\n";
    cout<<"Minutos: "<<minutes<<"\n";
    cout<<"Segundos: "<<seconds<<"\n";

    cin.get();
    cin.ignore();
    
    
    return 0;
}