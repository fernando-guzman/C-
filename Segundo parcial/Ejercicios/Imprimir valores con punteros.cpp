#include <iostream>

using namespace std;

int main()
{
	int numero[2];
	int * apuntador = &numero[0];
	
	cout<<"Ingresa el primer numero: ";
	cin>>numero[0];
	
	cout<<"Ingresa el segundo numero: ";
	cin>>numero[1];
	
	cout<<"El primer numero es: "<<* apuntador<<endl;
	cout<<"El segundo numero es: "<<* (apuntador + 1)<<endl;
	
	
	
	
	return false;
}
