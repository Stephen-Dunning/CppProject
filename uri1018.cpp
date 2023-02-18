#include <iostream>
//problem is 1018 banknotes
using namespace std;

int main() {
	
	cout.precision(2);
	cout.setf(ios::fixed);	//this dictates decimals in the input + output
	
	int N, N100, N50, N20, N10, N5, N2, N1;
	
	cin >> N; //set out the input
	cout << N << endl;//repeat N as first line of output.
	
	N100 = N / 100;
	N = N % 100;
	
	N50 = N / 50;
	N = N % 50;
	//splitting financial amount into component bank notes
	N20 = N / 20;
	N = N % 20;
	
	N10 = N / 10;
	N = N % 10;
	
	N5 = N / 5;
	N = N % 5;
	
	N2 = N / 2;
	N = N % 2;
	
	N1 = N / 1;
	N = N % 1;
	
	cout << N100 << " nota(s) de R$ 100,00" << endl;
	cout << N5 << " nota(s) de R$ 50,00" << endl;
	cout << N20 << " nota(s) de R$ 20,00" << endl;
	cout << N10 << " nota(s) de R$ 10,00" << endl;
	cout << N5 << " nota(s) de R$ 5,00" << endl;
	cout << N2 << " nota(s) de R$ 2,00" << endl;
	cout << N1 << " nota(s) de R$ 1,00" << endl;
	//stipulating required output
	
	return 0;
}



