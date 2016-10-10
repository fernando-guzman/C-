#include <iostream>

using namespace std;

int main()
{
    double n1, n2, n3;
    double promedio;

    cout<<"Ingresa la primer nota:"<<endl;
    cin>>n1;

    cout<<"Ingresa la segunda nota:"<<endl;
    cin>>n2;

    cout<<"Ingresa la tercera nota:"<<endl;
    cin>>n3;

    promedio = (n1 + n2 + n3) / 3;

    cout<<"El promedio de las tres calificaciones es "<<promedio<<endl;
    return 0;
}

