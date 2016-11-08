#include <iostream>
using namespace std;

void cambiar_a_uno(int &a);

int main(){

	/** PASO POR VALOR Y POR REFERENCIA **/

	int numero =5;
	cout<<"antes del procedimiento "<<numero<<endl;
	cambiar_a_uno(numero);
	cout<<"despues del procedimiento "<<numero<<endl;

	return false;
}

/** 
	PASO POR VALOR
	paso unicamente el valor de la variable
	-------
	int a = numero;
**/

void cambiar_a_uno(int &a)
{
	a = 1;
}
