//La Nota final de un estudiante es el promedio de tres notas: la nota de laboratorio que cuenta un 30% del total, la nota teórica que cuenta un 60% y la nota de Práctica que cuenta el 10% restante. Escriba un programa que lea de la entrada estándar las tres notas de un alumno y escriba en la salida estándar su nota final.
#include<iostream>
using namespace std;

//Prototipo de funcion.
void agregandoNotas();

int main()
{
    agregandoNotas();
    return 0;
}


//Definiendo Funciones.
void agregandoNotas()
{
    float nota1;
    float nota2;
    float nota3;
    float notaFinal;

    cout<<"Ingrese 1er nota: ";
    cin>>nota1;
    cout<<"Ingrese 2da nota: ";
    cin>>nota2;
    cout<<"Ingrese 3er nota: ";
    cin>>nota3;

    nota1 *= 0.30;
    nota2 *= 0.60;
    nota3 *= 0.10;

    notaFinal = nota1 + nota2 + nota3;
    cout<<"Nota final: "<<notaFinal;
}
