/*Para el ejercicio anterior, Abrir el archivo y mostrar las frases x pantalla, con cada frase
en una línea, con Interlineado.*/

#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

ifstream openFile(string path)
{
    ifstream in;
    in.open("QuotesOfBjarne.txt");

    if (!in) 
    {
        cout << "Error opening file" << endl;
        exit(EXIT_FAILURE);
    }

    return in;
}

void showQuotesOf(ifstream file)
{
    while (!file.eof())
    {
        string line;
        getline(file, line);
        cout << line << endl;
        cout << endl;
    }
}

void closingFile(ifstream file)
{
    if (file.is_open())
    {
       file.close();
       cout<<"El archivo se ha cerrado";
    }
}


int main()
{
    showQuotesOf(openFile("QuotesOfBjarne.txt"));
    closingFile(openFile("QuotesOfBjarne.txt"));

    cin.ignore();
    cin.get();
    
    return 0;
}