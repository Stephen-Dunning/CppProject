#include <iostream>
#include <cmath>

using namespace std;

int main() {

	double pi = 3.14159;

	cout.precision(3);
	cout.setf(ios::fixed);
	
	double A, B, C;
	
	cin >> A >> B >> C;
	
	cout << "TRIANGULO: " << (A * C) /2 << endl;
	cout << "CIRCULO: " << (pi * (C * C)) << endl;
	cout << "TRAPEZIO: " << (((A + B) / 2) * C) << endl;
	cout << "QUADRADO: " << (B * B) << endl;
	cout << "RETANGULO: " << (A * B) << endl;

	return 0;
}
