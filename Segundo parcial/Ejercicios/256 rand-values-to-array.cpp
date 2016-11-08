#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void generarArreglo(int valores);

int main()
{
	// Resetear los valores aleatorios de rand
	srand(time(NULL));
	
    generarArreglo(500);
    return false;
}

void generarArreglo(int val_tot)
{
    // Arreglo para almacenar los 50 valores generados aleatoriamente

    int valores[val_tot];

    // Generamos los 50 valores aleatorios

    for(int i = 0; i < val_tot; i++)
    {
        // Variable para almacenar cada valor generado
        int valor;

        valor = rand() % 1000;
        valores[i] = valor;
    }

    // Ordenamos en filas y columnas (9 max) los valores

    int contador = 0;

    for(int i = 0; i < val_tot; i++)
    {
        if(contador % 9 == 0)
        {
            cout<<'\n'<<endl;
        }

        cout<<valores[i]<<'\t';
        contador++;
    }
}
