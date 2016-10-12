#include <iostream>

using namespace std;

#define FILAS		3
#define COLUMNAS	3

int main()
{
	int M1[FILAS][COLUMNAS], M2[FILAS][COLUMNAS], M3[FILAS][COLUMNAS];
	
	// Matriz 1 - solicitar datos
	
	cout<<"MATRIZ 1"<<endl<<endl;
	
	for(int i = 0; i < FILAS; i++)
	{
	
		for(int j = 0; j < COLUMNAS; j++)
		{
			cout<<'['<<i<<']'<<'['<<j<<']'<<':'<<' ';
			cin>>M1[i][j];
		}
		cout<<endl;
	}
	
	cout<<endl<<"MATRIZ 2"<<endl<<endl;
	
	// Matriz 2 - solicitar datos de nuevo
	
	for(int i = 0; i < FILAS; i++)
	{
	
		for(int j = 0; j < COLUMNAS; j++)
		{
			cout<<'['<<i<<']'<<'['<<j<<']'<<':'<<' ';
			cin>>M2[i][j];
		}
		cout<<endl;
	}
	
	// Matriz 3 - encontrar el numero mayor para cada indice entre las dos matrices
	
	for(int i = 0; i < FILAS; i++)
	{
	
		for(int j = 0; j < COLUMNAS; j++)
		{
			int tmp;
			
			switch((M1[i][j] > M2[i][j]))
			{
				// El valor del indice de la primera matriz es mayor que el de la segunda
				
				case true: tmp = M1[i][j];
				break;
				
				// El valor del indice de la segunda matriz es mayor que el de la primera
				
				case false: tmp = M2[i][j];
				break;
			}
			
			M3[i][j] = tmp;
		}
		cout<<endl;
	}
	
	// Mostrar matrices
	
	for(int i = 0; i < FILAS; i++)
	{
		for(int j = 0; j < COLUMNAS; j++)
		{
			cout<<"M1"<<'['<<i<<']'<<'['<<i<<']'<<' '<<M1[i][j]<<'\t';
			cout<<"M2"<<'['<<i<<']'<<'['<<i<<']'<<' '<<M2[i][j]<<'\t';
			cout<<"M3"<<'['<<i<<']'<<'['<<i<<']'<<' '<<M3[i][j]<<'\t';
			cout<<endl;
		}
	}
		
	return false;
}
