#include <iostream>
#include <cmath>

using namespace std;

int main() {

	//cout.setf(ios::fixed);

	double x1, x2, y1, y2;
	
	cout.precision(4);
	cout.setf(ios::fixed);
	
	cin >> x1 >> y1;
	cin >> x2 >> y2;
	
	cout << sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1))) << endl;
	
return 0;
}
