#include <iostream>
using namespace std;

int main() {
	double precio, pagado, centimos;
	cout << "Escriba precio y dinero entregado: ";
	cin >> precio >> pagado;
	centimos= 100*(pagado-precio);
	cout << "Hay que devolver: " << centimos << "céntimos" << endl;
}
