#include <iostream>
using namespace std;

int main()
{
    /* 
		ARREGLOS MULTIDIMENSIONALES (MATRICES)

            C0  C1  C2
        F0   1   2   3
        F1   4   5   6
        F2   7   8   9
	*/

	int A[][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}};
	 
	int FILAS=3, COLUMNAS=3;
	int B[FILAS][COLUMNAS];
	
	
	//	Mostrar cómo se ve el arreglo de arriba (imprimir los indices)
	//
	//	for(int i=0; i<FILAS; i++)
	//	{
	//		for(int j=0; j<COLUMNAS; j++)			
	//		{          
	//			cout<<"["<<i<<"]["<<j<<"]:";
	//		}
	//		cout<<endl;
	//	}
	
	// Solicitar e introducir valores en el arreglo 
	
	for(int i = 0; i < FILAS; i++)
	{
		for(int j = 0; j < COLUMNAS; j++)
		{
			cout<<"["<<i<<"]["<<j<<"]: ";			
			cin>>B[i][j];
		}
	}
	
	// Mostrar los valores introducidos en el arreglo
	
	for(int i = 0; i < FILAS; i++)
	{
		for(int j = 0; j < COLUMNAS; j++)
		{
			cout<<"Valor en "<<"["<<i<<"]["<<j<<"]: ";
			cout<<B[i][j]<<endl;
		}
	}


	// Solicitar e introducir valores en el arreglo - variables invertidas 
	//
	//	NOTA:
	//
	//	El valor de las filas y las columnas es el mismo, no
	//	tiene mucho chiste hacer esto en este ejemplo el resul-
	//	tado será el mismo.
	//
	//	for(int i = 0; i < FILAS; i++)
	//	{
	//		for(int j = 0; j < COLUMNAS; j++)				
	//		{         
	//			cout<<"["<<i<<"]["<<j<<"]: ";
	//			cin>>B[j][i];
	//		}
	//	}
	
	return false;
}
