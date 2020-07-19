#include <iostream>

using namespace std;

int main() {
	
	int employeeNumber, workedHours;
	double hourlyRate, SALARY;
	
	cout.precision(2);
	cout.setf(ios::fixed);
		
	cin >> employeeNumber >> workedHours >> hourlyRate;
	
	SALARY = (workedHours * hourlyRate);
	
	cout << "NUMBER = " << employeeNumber << endl;
	cout << "SALARY = U$ " << SALARY << endl;
	
	return 0;
}

