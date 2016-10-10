#include <iostream>
using namespace std;

int main(){
	
	const double CENTIMETROS_POR_KM = 11;
	double cm, km;
	
	cout<<"Ingresa la cantidad de centimetros a convertir:"<<endl;
	cin>>cm;
	
	km = cm / CENTIMETROS_POR_KM;
	cout<<km<<" km"<<endl;

    return 0;
}

