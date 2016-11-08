#include <iostream>

using namespace std;

#define TOTAL_NUMEROS	7

int main()
{

	int arreglo[TOTAL_NUMEROS], val_tmp;

	// Solicitar los 7 numeros

	for(int i = 0; i < TOTAL_NUMEROS; i++)
	{
	    cout<<i<<"->";
		cin>>arreglo[i];
	}

	// Ordenamos el arreglo en forma ascendente
	for(int i = 0; i < TOTAL_NUMEROS; i++)
	{
		for(int j = i+1; j < TOTAL_NUMEROS; j++)
		{
			// Si el valor que sigue despuès del indice i en el arreglo es menor
			// intercambiamos los valores
			if(arreglo[j] < arreglo[i])
			{
				val_tmp = arreglo[i];
				arreglo[i] = arreglo[j];
				arreglo[j] = val_tmp;
			}
		}
	}

	cout<<"Primer valor mas grande: "<<arreglo[6]<<endl;
	cout<<"Segundo valor mas grande: "<<arreglo[5]<<endl;

	return false;
}
