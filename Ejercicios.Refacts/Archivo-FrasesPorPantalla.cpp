/*Para el ejercicio anterior, Abrir el archivo y mostrar las frases x pantalla, con cada frase
en una línea, con Interlineado.*/

#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

//STROUSTRUP:
// void error(const char* message, const char* message2 = "")
// {
//    cerr << message << ' ' << message2 << endl;
//    exit(1);
// }

/*void error(string message, string message2 = "")
{
    cerr << message << ' ' << message2 << endl;
    exit(EXIT_FAILURE);
}*/

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

    
    /*ifstream textFile = openFile("QuotesOfBjarne.txt");
    showQuotesOf(textFile);
    closeFile(textFile);*/
    
    return 0;
}