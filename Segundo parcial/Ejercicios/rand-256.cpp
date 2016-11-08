#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");

    int valor_secreto, valor;

    // Inicializar valores aleatorios
    srand(time(NULL));

    // Genera un numero secreto entre 1 y 10
    valor_secreto = rand() % 256 + 1;

    do{
        cout<<"Introduzca un valor (1 al 256): ";
        cin>>valor;
        if(valor_secreto < valor) cout<<"Fr�o! El n�mero secreto es menor"<<endl;
        else if(valor_secreto > valor) cout<<"Caliente! El n�mero secreto es mayor"<<endl;
    } while(valor_secreto != valor);

    cout<<"Felicidades, diste con el n�mero secreto!";
    return false;
}
