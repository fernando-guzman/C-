#include <iostream>
using namespace std;

int main(){

    // BUFFER DE ENTRADA
    
    char nombre[25];
    int edad;

    cout<<"Ingresa tu edad: ";
    cin>>edad;
    
    
    ///////////////
    // IMPORTANTE
    //////////////
    
    // Al ingresar el valor de la edad, el último carácter es un salto de línea
    // getline se detiene hasta encontrar un espacio en blanco o un salto de
    // línea. 
    
    // Si no ignoramos el salto de línea, saltará la parte del nombre.

	cin.ignore(256,'\n'); 
    
    cout<<"Ingresa tu nombre: ";
    cin.getline(nombre, 25);
    
    cout<<"Te llamas "<<nombre<<" y tu edad es "<<edad<<endl;
    
	return false;
}
