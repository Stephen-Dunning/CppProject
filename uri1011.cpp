#include <iostream>
#include <cmath>

using namespace std;

int main() {
	
	int Radius;
	double pi, VOLUME;
	pi = 3.14159;
	
	cout.precision(3);
	cout.setf(ios::fixed);
	
	cin >> Radius;
	
	VOLUME = (4*pi*Radius*Radius*Radius)/3;
	
	cout << "VOLUME = " << VOLUME << endl;
	
	return 0;	
}
