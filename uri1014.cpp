#include <iostream>

using namespace std;

int main() {

	cout.precision(3);
	cout.setf(ios::fixed);
		
	int X;
	double Y, Z; 
	
	cin >> X >> Y;
	
	Z = (X / Y);
	
	cout << Z << " km/l" << endl;

return 0;
}
