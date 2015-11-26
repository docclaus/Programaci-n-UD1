/* programa para calcular la media total de un alumno en base a la teoria, prácticas y problemas */

#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
	double m, x1, x2, x3, d;
	int n=2;
	cout << "Bienvenido a tu programa para obtener tu media de clase!" << endl;
	cout << "introduce el valor x1: " << endl;
	cin >> x1;
	cout << "introduce el valor x2: " << endl;
	cin >> x2;
	cout << "introduce el valor x3: " << endl;
	cin >> x3;
	m=(x1+x2+x3)/3;
	d=sqrt(((x1-pow(m,2))+(x2-pow(m,2))+(x3-pow(m,2)))/3); /* la formula */
	cout << "Tu nota media final es: " << d << endl;
}
