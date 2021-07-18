/*
Para el Archivo del ejercicio (a) 
contar la cantidad de palabras que hay x línea, luego
mostrar la cantidad total y el promedio de palabras x línea.
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

/*void error(string message, string message2 = "")
{
    cerr << message << ' ' << message2 << endl;
    exit(EXIT_FAILURE);
}*/

ifstream openFile(string path)
{
    ifstream in;
    in.open("QuotesOfBjarne.txt");

    //bool isCorruptFile = (!in.is_open() || !in.good()); 
    if (!in)   //(isCorruptFile) error("Error opening file");
    {
        cerr << "Error opening file" << endl;
        exit(EXIT_FAILURE);
    }

    return in;
}

int countWords(string sentence)
{
    int i = 0;
    int counter = 1;

    while (i < sentence.length())
    {
        if (sentence[i] == ' ')
        {
            counter++;
        }
        i++;
    }
    return counter;
}

void showWordsOf(ifstream file)
{
    int sentecesNumber = 0;
    int totalWords = 0;

    while (!file.eof())
    {
        string sentence;
        getline(file, sentence);
        int wordsPerSetence = countWords(sentence);
        cout << "La frase numero " << sentecesNumber + 1 << " tiene " << wordsPerSetence << " palabras" << endl;

        totalWords += wordsPerSetence;
        sentecesNumber++;
    }

    cout << "Cantidad total de palabras " << totalWords << endl;
    float averageOfWords = float(totalWords) / float(sentecesNumber);
    cout << "Promedio de palabras por línea " << averageOfWords << endl;
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
    showWordsOf(openFile("QuotesOfBjarne.txt"));
    closingFile(openFile("QuotesOfBjarne.txt"));

    cin.ignore();
    cin.get();
    

    /*ifstream textFile = openFile("QuotesOfBjarne.txt");
    showWordsOf(textFile);
    closeFile(textFile);*/
    
    return 0;
}