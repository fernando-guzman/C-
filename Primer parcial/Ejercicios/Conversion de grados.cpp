#include <iostream>

using namespace std;

int main()
{
    float celsius, fahrenheit, kelvin;
    cout<<"Ingrese los grados Celsius:";
    cin>>celsius;

    fahrenheit = ((celsius * 9)/5)+32;
    kelvin = celsius + 237.15;

    cout<<"Los grados en Kelvin son "<<kelvin<<endl;
    cout<<"Los grados en Fahrenheit son "<<fahrenheit<<endl;
    return 0;
}

