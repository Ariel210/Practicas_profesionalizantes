/*Desarrollar un Programa que mantenga una lista de los estudiantes de Algoritmos y Estructuras de Datos I.*/

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

//Estructura de datos del alumno.
struct tAlumnos
{
    string nombre;
    string apellido;
    int edad;
    int DNI;
    float nota;
    int totalEst;
}tAlum;


//Prototipo de funcion.
void pedirDatos(struct tAlumnos tAlum);
void mostrarDatos(struct tAlumnos tAlum);


int main ()
{
    pedirDatos(tAlum);
    mostrarDatos(tAlum);

    cin.ignore();
    cin.get();
    return 0;
}



//Definiendo Funciones.
void pedirDatos(struct tAlumnos tAlum)
{
    //Creando archivo nuevo.
    ofstream archivo;
    int contador = 0;
    char aux;

    archivo.open("AyEDI.txt", ios::out);
    
    cout<<"\t\t Ingresando Datos del Alumno: \n";
    cout<<"Ingrese numero de alumno: ";
    cin>>tAlum.totalEst;
    
    while (tAlum.totalEst <= 50)
    {
       cin.get(aux);
       cout<<"Ingrese Nombre de alumno: ";
       cin>>tAlum.nombre;
       cout<<"Ingrese Apellido de alumno: ";
       cin>>tAlum.apellido;
       cout<<"Ingrese Edad del alumno: ";
       cin>>tAlum.edad;
       cout<<"Ingrese DNI del alumno: ";
       cin>>tAlum.DNI;
       cout<<"Ingrese nota del alumno: ";
       cin>>tAlum.nota;

       cout<<"\n";
       cout<<"El nombre del alumno es: "<<tAlum.nombre<<" ",
       cout<<"El apellido del alumno es: "<<tAlum.apellido<<endl;
       cout<<"La edad del alumno es: "<<tAlum.edad<<endl;
       cout<<"El DNI del alumno es: "<<tAlum.DNI<<endl;
       cout<<"La nota del alumno es: "<<tAlum.nota<<endl;

       contador ++;
       archivo<<tAlum.totalEst<<" "<<endl;
       archivo<<tAlum.nombre<<" "<<endl;
       archivo<<tAlum.apellido<<" "<<endl;
       archivo<<tAlum.edad<<" "<<endl;
       archivo<<tAlum.DNI<<" "<<endl;
       archivo<<tAlum.nota<<" "<<endl;
       

       cout<<"\nIngrese numero de alumno: ";
       cin>>tAlum.totalEst;
    }  
    cout << "Numero incorrecto \n";
}


//Mostrando datos y leyendo el .txt.
void mostrarDatos(struct tAlumnos tAlum)
{
    ifstream archivo;
    archivo.open("AyEDI.txt", ios::out);
}