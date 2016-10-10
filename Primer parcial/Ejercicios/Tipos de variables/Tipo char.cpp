#include <iostream>

using namespace std;

int main()
{
  
  
	char letra;
	
	cout<<"Escribe una letra:"<<endl;
	cin>>letra;
	
	switch(letra)
	{
		case 'a': case 'e': case 'i': case 'o': case 'u':
			cout<<"Escribiste una vocal"<<endl;
		break;
		default: cout<<letra<<" no es una vocal."<<endl;
	}
	
	return false;	
}

