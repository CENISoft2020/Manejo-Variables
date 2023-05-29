#include <iostream>

// El ejercicio nos pide crea un codigo, en el cual pidamos al usurio unos datos 
//y mostremos en consola

using namespace std;

int main() {

//--- Definicion de variables ----

	int edad;
	char sexo[10];
	float altura;
	char nombre[10];

//-------------------Ingreso de datos--------- 

	cout<<"Hacker Digita la edad:";
	cin>>edad;
	
	cout<<"\n Hacker Digita el sexo:";
	cin>>sexo;
	
	cout<<"\n Hacker Digita tu altura:";
	cin>>altura;
	
	cout<<"\n Hacker Digita tu nombre:";
	cin>>nombre;
	cout<<"\n";	 

//--------------- interfaz en consola -------------------------

cout<<"|------------tus datos son:------------------|";
cout<<"\n|Hacker tu edad es:"<<edad<<"--------------|";
cout<<"\n|Hacker tu sexo es:"<<sexo<<"--------------|";
cout<<"\n|Hacker tu altura es:"<<altura<<"----------|";
cout<<"\n|Hacker tu nombre es:"<<nombre<<"----------|";
cout<<"\n|------------------------------------------|";


	return 0;
}
