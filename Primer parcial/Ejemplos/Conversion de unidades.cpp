#include <iostream>
using namespace std;

int main(){
	
	const double PRECIO_DOLAR = 20.00;
	double pesos, dolares;
	
	cout<<"Ingresa la cantidad de pesos a convertir:"<<endl;
	cin>>pesos;
	
	dolares = pesos / PRECIO_DOLAR;
	cout<<"$"<<pesos<<" pesos son $"<<dolares<<" dolares"<<endl;

    return 0;
}

