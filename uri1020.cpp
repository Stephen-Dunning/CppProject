#include <iostream>
//problem is 1020 Age in Days
using namespace std;

int main() {
	
	int ageindays;
	int year, month, days;
	
	cin >> ageindays;
	
	year = ageindays / 365;
	ageindays = ageindays % 365;
	
	month = ageindays / 30;
	ageindays = ageindays % 30;
	
	days = ageindays;
	
	cout << year << " ano(s)" << endl;
	cout << month << " mes(es)" << endl;
	cout << days << " dia(s)" << endl;
	
	return 0;
}
