#include <iostream>

using namespace std;

int main() {
	
	string sellerName;
	double sellerSalary, sellerTotalSalary, totalSales, commission;
	
	cout.precision(2);
	cout.setf(ios::fixed);
	
	cin >> sellerName;
	cin >> sellerSalary;
	cin >> totalSales;
	
	commission = (totalSales * 0.15);
	sellerTotalSalary = (sellerSalary + commission);
	
	cout << "TOTAL = R$ " << sellerTotalSalary << endl;
	
	return 0;
}
