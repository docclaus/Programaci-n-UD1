/* programa para calcular la media total de un alumno en base a la teoria, prácticas y problemas */

#include <iostream>
using namespace std;

int main() 
{
	double a, b, c, teoria, practicas, problemas, suma;

	cout << "Bienvenido a tu programa para obtener tu media de clase!" << endl;
	cout << "introduce el valor a: " << endl;
	cin >> a;
	cout << "introduce el valor b: " << endl;
	cin >> b;
	cout << "introduce el valor c: " << endl;
	cin >> c;
	teoria=0.70*a;
	practicas=0.20*b;
	problemas=0.10*c;
	suma=teoria+practicas+problemas;
	cout << "Tu nota media final es: " << suma << endl;
}
