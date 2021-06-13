//Realice un programa que lea de la entrada estándar los siguientes datos de una persona: Edad: dato de tipo entero. Sexo: dato de tipo carácter. Altura en metros: dato de tipo real. Tras leer los datos, el programa debe mostrarlos en la salida estándar.
#include<iostream>
using namespace std;

//Prototipo de funcion.
void datosPersona();

int main ()
{
    datosPersona();
    
    return 0;
}


//Definiendo Funcion.
void datosPersona()
{
    int edad;
    char sexo;
    float metros;

    cout<<"Ingrese edad: ";
    cin>>edad;
    cout<<"Ingrese sexo: ";
    cin>>sexo;
    cout<<"Ingrese metros: ";
    cin>>metros;

    cout<<"\n";

    cout<<"Edad: "<<edad;
    cout<<"Sexo: "<<sexo;
    cout<<"Metros: "<<metros;
}