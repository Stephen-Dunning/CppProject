#include <iostream>

using namespace std;
// never again will I have to do this
int main() {
	
	int product1Code, product2Code;
	int product1Quantity, product2Quantity;
	double product1Price, product2Price, TotaltoPay;
	
	cout.precision(2);
	cout.setf(ios::fixed);
	
	cin >> product1Code >> product1Quantity >> product1Price;
	cin >> product2Code >> product2Quantity >> product2Price;

//	product1Code = 1, product2Code = 2;
	
	TotaltoPay = (product1Quantity * product1Price) + (product2Quantity * product2Price);
	
	cout << "VALOR A PAGAR: R$ " << TotaltoPay << endl;
		
	return 0;
}

