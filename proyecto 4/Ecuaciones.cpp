#include <iostream>

using namespace std;

int main() {
	
	// definiciones de variables 
	
	float a,b,resultado = 0;
	
	// interfaz para digitar mostrar y ingrear datos
	
	cout<<"Digite el valor de a:";
	cin>> a;
	cout<<"\n Digite el valor de b:";
	cin>>b;
	
	// parte interna del codigo
	
	resultado = (a/b) + 1;
	
	cout.precision(2);
	cout<<"\n El resultado es:"<<resultado<<endl;
	
	
	return 0;
}
