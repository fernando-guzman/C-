#include <iostream>

using namespace std;

int main()
{
	int a, b;
	int * r = &a;
	
	cout<<"Ingresa el primer numero: "
	cin>>* r; 
	
	cout<<"Ingresa el segundo numero: "
	cin>>* (r + 1);
	
	cout<<"El primer numero es: "<<a<<endl;
	cout<<"El segundo numero es: "<<b<<endl;
	
	return false;
}
