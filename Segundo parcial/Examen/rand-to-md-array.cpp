#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void generarValores(int arr[][25], int valores);
void mostrarTabla(int arr[][25], int valores);


int main()
{

	// Resetear los valores de rand
	srand(time(NULL));

	int arreglo[30][25];


	generarValores(arreglo, 30);
	mostrarTabla(arreglo, 30);

	return false;
}

void generarValores(int arr[][25], int valores)
{
	for(int i = 0; i  < valores; i++)
	{
		for(int j = 0; j < 25; j++)
		{
			int valor_aleatorio;

			valor_aleatorio = rand() % 256;
			arr[i][j] = valor_aleatorio;
		}
	}
}

void mostrarTabla(int arr[][25], int valores)
{
	int contador = 0;

	for(int i = 0; i  < valores; i++)
	{
		if(contador % 25 == 0) cout<<'\n';
		for(int j = 0; j < 25; j++)
		{
			cout<<arr[i][j]<<'\t';
			contador++;
		}
	}
}



