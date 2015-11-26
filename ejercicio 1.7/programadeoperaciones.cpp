/* Programa para poder sumar, restar, multiplicar y dividir */

#include <iostream>
using namespace std;

int main() 
{
	double a, b;
	double suma, resta, division, multiplicar;

	cout << "Introduzca el valor a: ";
	cin >> a;
	cout << "Introduzca el valor b: ";
	cin >> b;
	suma=a+b;
	resta=a-b;
	division=a/b;
	multiplicar=a*b;
	cout << "La suma es: " << suma;
	cout << "La resta es: " << resta;
	cout << "La división es: " << division;
	cout << "La multiplicación es: " << multiplicar;
}

