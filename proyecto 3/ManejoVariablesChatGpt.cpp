#include <iostream>
using namespace std;

int main() {

   char nombre[50], sexo[10];
   int edad;
   float altura;

   cout << "Bienvenido/a a nuestro negocio." << endl;
   cout << "Por favor, ingrese los siguientes datos: " << endl;

   cout << "Nombre: ";
   cin.getline(nombre, 50); // getline() permite leer una cadena con espacios
   cout << "Edad: ";
   cin >> edad;
   cout << "Altura (en metros): ";
   cin >> altura;
   cout << "Sexo: ";
   cin >> sexo;

   cout << endl << "Gracias por proporcionar sus datos. " << endl;
   cout << "Nombre: " << nombre << endl;
   cout << "Edad: " << edad << " años" << endl;
   cout << "Altura: " << altura << " metros" << endl;
   cout << "Sexo: " << sexo << endl;

   return 0;
}

