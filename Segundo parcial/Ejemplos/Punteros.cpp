#include <iostream>

using namespace std;

int main()
{
    /** PUNTEROS
        * -> declaracion de puntero
        & -> direccion de ...

            PARTES DE LA VARIABLE
                    nombre y tipo
                    contenido
                    direccion de memoria



    **/

    int var = 100;
    int *puntero = &var;

    // Mostrar el contenido de var
    cout<<"Contenido de var "<<var<<endl;


    // Mostrar la direccion de var
    cout<<"Direccion de var "<<&var<<endl;

    cout<<endl;

    // Mostrar el contenido de puntero
    cout<<"Contenido de puntero "<<puntero<<endl;

    // Mostrar la direccion de puntero
    cout<<"Direccion de puntero "<<&puntero<<endl;

    // Las direcciones son mostrados en forma hexadecimal
    // para convertirlas a entero, anteponemos int detrás
    // de la variable que queremos mostrar la direccion.

    // cout<<(int) &puntero<<endl;






    return false;
}
