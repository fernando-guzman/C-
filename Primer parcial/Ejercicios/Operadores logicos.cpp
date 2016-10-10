#include <iostream>

using namespace std;

int main()
{
	// OPERADORES LOGICOS
	
	// Y -> && -> Si los 2 valores son verdaderos
	// O -> || -> Si uno de ellos es verdadero
	// NO -> !
	
	// Igualdad -> ==
	// Diferente -> !=
	// Menor -> <
	// Mayor -> >
	// Menor igual -> <=
	// Mayor igual -> >=
	
	// En expresiones booleanas la precedencia es de derecha
	// a izquierda y mientras que en las arimeticas es de izquierda o
	// derecha
	
	bool comer = false;
	
	cout<<"Quieres comerte eso? (1 - si, 0 - no):"<<endl;
	cin>>comer;
	
	bool tirar = (!comer);
	
	if(tirar) cout<<"Bueno, lo tiramos."<<endl;
	else cout<<"Delicioso, verdad?"<<endl;
	
	return 0;
}

