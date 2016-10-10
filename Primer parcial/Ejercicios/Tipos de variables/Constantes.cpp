#include <iostream>

using namespace std;

#define LIMITE_MANZANAS 10

int main()
{
	int manzanas;
	
	cout<<"Cuántas manzanas quieres comer hoy?"<<endl;
	cin>>manzanas;
	
	if(manzanas > LIMITE_MANZANAS)
	{
		cout<<"Quieres diabetes acaso?"<<endl;
	}
	else cout<<"Continua."<<endl;
	
	return false;
}
