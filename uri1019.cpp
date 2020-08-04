#include <iostream>
//problem is 1019 Time Conversion
using namespace std;

int main() {
	
	int N, hours, minutes, seconds; //declare variables
	
	cin >> N; //set out the input

	hours = N / 3600;
	N = N % 3600;
	//initial calculation
	minutes = N / 60;
	N = N % 60;
	//using modulus function to split down N into time components
	seconds = N;
	
	cout << hours << ":" << minutes << ":" << seconds << endl;
	//dictating mode of outpur required
	return 0;
}
