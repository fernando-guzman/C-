#include <iostream>
#include <string>

using namespace std;

int main()
{
	string nombre;
	
	cout<<"Escribe tu nombre completo:"<<endl;
	
	// La extracci�n de cin considera los espacios como el final del valor,
	// para evitar extraer una sola plabra existe una funci�n llamada getline
	// que toma cin como el primer argumento y la cadena de texto como la segunda
	
	getline(cin, nombre);
	
	cout<<nombre<<endl;
	return false;
}
