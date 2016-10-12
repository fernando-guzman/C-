#include <iostream>

using namespace std;

int main()
{
	
	int valor[5], val_tmp;
	
	
	// Solicitar los valores del arreglo
	
	for(int i = 0; i < 5; i++)
	{
		cout<<"Indice "<<i<<": ";
		cin>>valor[i];
	}
	
	// Mostrar los valores del arreglo
	
	for(int i = 0; i < 5; i++)
	{
		cout<<"Valor indice "<<i<<": "<<valor[i]<<endl;
	}
	
	cout<<endl<<"Ordenando los valores en forma ascendente..."<<'\n'<<endl;
	
	// Ordenar de menor a mayor
	for(int i = 0; i < 5; i++)
	{
		for(int j = i+1; j < 5; j++)
		{
			// Si el valor que sigue despuès del indice i en el arreglo es menor
			// intercambiamos los valores
			if(valor[j] < valor[i])
			{
				val_tmp = valor[i];
				valor[i] = valor[j];
				valor[j] = val_tmp;
			}
		}
	}
	
	// Mostrar los valores del arreglo de nuevo
	
	for(int i = 0; i < 5; i++)
	{
		cout<<"Valor indice "<<i<<": "<<valor[i]<<endl;
	}
	
	return false;
}
