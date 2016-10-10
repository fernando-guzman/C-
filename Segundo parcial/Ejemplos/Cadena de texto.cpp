#include <iostream>
using namespace std;

int main() 
{
    // CADENAS DE TEXTO
    
    char cadena1[] = "Fernando Guzmán";
    char cadena2[] = {'F','e','r','n','a', 'n', 'd', 'o', '\0'};
    char cadena3[30];

    cout<<cadena1<<endl; 
    cout<<cadena2<<endl; 
    
    cout<<"Ingresa una cadena: "; 
    
    // getline nos permite obtener el valor de toda una línea (o hasta '\n')
    
	cin.getline(cadena3, 30);
    
    cout <<"La cadena es "<<cadena3<<endl;

	return false;
}
