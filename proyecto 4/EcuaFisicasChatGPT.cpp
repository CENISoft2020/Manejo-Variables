#include <iostream>// libreria iostream
#include <cmath>//libreria que nos pertime utilizar funciones matematicas 

using namespace std;

int main() {
	
   float a, b;

   cout << "Por favor, ingrese dos variables: " << endl;
   cout << "a: ";
   cin >> a;
   cout << "b: ";
   cin >> b;

// ----------------------ecuaciones fisicas ------------------

   cout << "Operaciones: " << endl;
   cout << "Energia cinetica = " << 0.5 * a * pow(b, 2) << endl;
   cout << "Energia potencial = " << a * 9.8 * b << endl;
   cout << "Fuerza de gravedad = " << (a * b * 6.67e-11) / pow(6371e3 + b, 2) << endl;
   cout << "Velocidad final = " << sqrt(2 * a * b) << endl;
   cout << "Ley de Ohm = " << a / b << endl;
   cout << "Ecuacion de Bernoulli = " << a + 0.5 * pow(b, 2) + 1000 * 9.81 * b << endl;
   cout << "Segunda Ley de Newton = " << a * b << endl;

   return 0;
}

