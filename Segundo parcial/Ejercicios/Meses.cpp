#include <iostream>
#include <string>

using namespace std;

#define MESES_TOTALES	12

int main()
{
	string meses[MESES_TOTALES];
	
	// Solicitar el nombre de cada mes
	
	for(int mes = 0; mes < MESES_TOTALES; mes++)
	{
		cout<<"Escribe el nombre del mes no. "<<mes+1<<": ";
		cin>>meses[mes];
	}
	
	// Mostrar los datos previamente solicitados
	
	for(int mes = 0; mes < MESES_TOTALES; mes++)
	{
		cout<<"Mes "<<mes+1<<": "<<meses[mes]<<endl;
	}	
}
