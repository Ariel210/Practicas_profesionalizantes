/*Crea un programa que vaya leyendo las frases que el usuario teclea y las guarde en un fichero de texto llamado 
“frasesDeBjarme.txt”. Terminará cuando la frase introducida sea "fin" (esa frase no deberá guardarse en el fichero).*/
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

//Prototipo de funcion.
void creandoArchivo();
void lectura();
//void contador();

int main()
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

    archivo.open("frasesDeBjarme.txt", ios::out);

    do
    {
        cout << "Ingrese frase: ";
        getline(cin, frase);

        if (frase == fin)
        {
            break;
        }
        else
        {
            archivo << frase << " ";
            contador++;
        }

    } while (frase != fin);

    archivo.close();
}

void lectura()
{
    ifstream archivo;
    string frase;
    int cont = 0;
    string pal;

    archivo.open("frasesDeBjarme.txt", ios::out);

    while (!archivo.eof())
    {
        cout << frase;
        getline(archivo, frase);
        // Total de palabras.
        for(int i=0; frase[i] != '\0'; i++)
        {
            if (frase[i] == ' ')
            {
                cont++;
            }
        }
    }
    cout << "\nTotal de palabras: "<<cont++;

    archivo.close();

    cin.ignore();
    cin.get();
}