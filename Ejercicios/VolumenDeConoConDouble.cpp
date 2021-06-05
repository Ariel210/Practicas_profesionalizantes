//Modifica el programa anterior para que use tres variables, todas de tipo double: radio, altura y volumen. Las dos primeras se inicializarán a 14,5 y 26,79 respectivamente. La tercera obtendrá el resultado de la fórmula.
#include<iostream>
#include<math.h>
using namespace std;

int main () 
{
    double radio = 14.5;
    double altura = 26.79;
    double volumen;
    
    volumen = (3.14*(pow(radio,2))*altura)/3;
    cout<<"El volumen final es: "<<volumen;

    cin.ignore();
    cin.get();
    
    return 0;
}