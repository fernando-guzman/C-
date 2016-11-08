#include <iostream>
#include <string>

using namespace std;

int main()
{
    string meses[12];

    for(int mes = 0; mes < 12; mes++)
    {
        cout<<"Ingresa el nombre del mes no. "<<mes<<": ";
        cin>>meses[mes];
    }

    for(int mes = 0; mes < 12; mes++)
    {
        cout<<"Mes "<<mes<<": ";
        cout<<*(meses+mes);
        cout<<endl;
    }


    return false;
}
