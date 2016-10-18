#include <iostream>

using namespace std;

// PROTOTIPOS
// Esto sirve para declarar las funciones antes de usarlas

void mensaje();
int suma(int a, int b);
bool esPar(int a);

int main()
{
	int a, b, resultado;
	bool par;
	
	cout<<"Ingresa dos numeros: "<<endl;
	cin>>a>>b;
	
	par = esPar(a);
	
	if(par)
	{
		resultado = suma(a, b);
		cout<<"La suma de los dos numeros es "<<resultado<<endl;	
	} 
	else cout<<"El primer numero debe ser par para realizar la suma."<<endl;
	
	
	return false;
}

void mensaje()
{
	// Las funciones void no retornan valores
	// "void" representa la ausencia de un tipo de dato
	
	cout<<"Este mensaje aparecera en la consola"<<endl;
}

int suma(int a, int b)
{
	int c = a + b;
	return c;
}

bool esPar(int a)
{
	if(a % 2 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
