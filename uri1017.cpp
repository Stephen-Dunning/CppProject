#include <iostream>

using namespace std;
	
int main() {

	cout.precision(3);
	cout.setf(ios::fixed);
	
	double time, avspeed;
	
	cin >> time;
	cin >> avspeed;
	
	cout << (time * avspeed) / 12 << endl;
	
return 0;
}
