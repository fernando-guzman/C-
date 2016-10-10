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
    
    // Al ingresar el valor de la edad, el �ltimo car�cter es un salto de l�nea
    // getline se detiene hasta encontrar un espacio en blanco o un salto de
    // l�nea. 
    
    // Si no ignoramos el salto de l�nea, saltar� la parte del nombre.

	cin.ignore(256,'\n'); 
    
    cout<<"Ingresa tu nombre: ";
    cin.getline(nombre, 25);
    
    cout<<"Te llamas "<<nombre<<" y tu edad es "<<edad<<endl;
    
	return false;
}
