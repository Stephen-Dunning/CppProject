#include <iostream>

using namespace std;

int main() {
	
	int sellerName;
	double sellerSalary, sellertotalSalary, totalSales, commission;
	
	cout.precision(2);
	cout.setf(ios::fixed);
	
	cin >> sellerName >> sellerSalary >> totalSales;
	
	commission = (totalSales * 0.15);
	sellertotalSalary = (sellerSalary + commission);
	
	cout << "TOTAL = R$ " << sellertotalSalary << endl;
	
	return 0;
}
