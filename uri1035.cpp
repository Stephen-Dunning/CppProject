#include <iostream>
//name of this problem is 'Selection Test 1'
using namespace std;

//the old trick of line introduction to get a github commit ---

int main() {
	
	cout.precision(2);
	
	int A, B, C, D;
	
	cin >> A >> B >> C >> D;
	
	if ((B > C) && (D > A) && ((C + D) > (A + B)) && (C > 0 && D > 0) && (A % 2 ==0)) {
		cout << "Valores aceitos" << endl;
	} 
	else {
		cout << "Valores nao aceitos" << endl;
	}
	/*
	if (D > A)
	cout << "Valores aceitos";
	else
	if ((C + D) > (A + B))
	cout << "Valores aceitos";
	else
	if (C > 0)
	cout << "Valores aceitos";
	else
	if (D > 0)
	cout << "Valores aceitos";
	else
	if (A % 2 == 0)
	cout << "Valores aceitos";
	else */
	
	return 0;	
}
