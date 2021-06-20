/*Crea un programa que vaya leyendo las frases que el usuario teclea y las guarde en un fichero de texto llamado 
“frasesDeBjarme.txt”. Terminará cuando la frase introducida sea "fin" (esa frase no deberá guardarse en el fichero).*/
#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

//Prototipo de funcion.
void creandoArchivo();
void lectura();

int main ()
{
    creandoArchivo();
    lectura();
    
    return 0;
}


//Definiendo funcion.
void creandoArchivo()
{
    ofstream archivo;
    string frase;
    string fin = "fin";
    int contador = 0;
    
    archivo.open("frasesDeBjarme.txt",ios::out);

    do
    {
        cout<<"Ingrese frase: ";
        getline(cin, frase);
    
        if (frase==fin)
        {
            break;
        }
        else
        {
            archivo<<frase<<"\n";
            contador++;
        }   
    
    } while (frase != fin);

    archivo.close();

}

void lectura ()
{
    ifstream archivo;
    string frase;

    archivo.open("frasesDeBjarme.txt",ios::out);

    while (!archivo.eof())
    {
        getline(archivo,frase);
        cout<<frase<<endl;
    }
    
    archivo.close();
}
