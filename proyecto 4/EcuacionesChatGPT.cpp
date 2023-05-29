#include <iostream>
using namespace std;

int main() {
   float a, b;

   cout << "Por favor, ingrese dos variables: " << endl;
   cout << "a: ";
   cin >> a;
   cout << "b: ";
   cin >> b;

   cout << "Operaciones: " << endl;
   cout << "a/b + 1 = " << a/b + 1 << endl;
   cout << "a^2 - b^2 = " << a*a - b*b << endl;
   cout << "a/b - 1 = " << a/b - 1 << endl;
   cout << "a*b = " << a*b << endl;
   cout << "a%b = " << ((int)a) % ((int)b) << endl;
   cout << "a+b = " << a+b << endl;
   cout << "a-b = " << a-b << endl;

   return 0;
}

