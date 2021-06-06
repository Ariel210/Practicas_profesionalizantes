//Crear un programa por consola que convierta Grados Centígrados en Fahrenheit y viceversa, el programa debe preguntar qué operación desea hacer el usuario.
#include<iostream>
using namespace std;

//Prototipo de funciones.
float farenheitACelsius(float fahrenheit);
float celsiusAFahrenheit(float celsius);

int main ()
{
    float farenheitACelsius(9);
    float celsiusAFahrenheit(9);

    return 0;

}


//Definiendo funcion.
float farenheitACelsius (float fahrenheit)
{
    return (fahrenheit - 32) / 1.8;
}

float celsiusAFahrenheit (float celsius)
{
    return (celsius * 1.8) + 32;
}