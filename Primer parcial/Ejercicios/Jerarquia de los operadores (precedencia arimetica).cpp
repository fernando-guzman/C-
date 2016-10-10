#include <iostream>

using namespace std;

int main()
{
	int operacion_1, operacion_2;
	
	operacion_1 = (2 + 2) * 2;
	operacion_2 = 2 + 2 * 2;
	
	cout<<operacion_1<<endl;
	cout<<operacion_2<<endl;

	bool iguales = (operacion_1 == operacion_2);
	if(iguales) cout<<"Las dos operaciones anteriores son iguales"<<endl;
	else cout<<"Las dos operaciones anteriores no son iguales"<<endl;

    return 0;
}

