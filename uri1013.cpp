#include <iostream>
#include <cmath>

using namespace std;

int main() {

	int a, b, c, maior, MaiorABC;
	
	cin >> a >> b >> c;
	
	//MaiorAB = abs(a);
	//cout << MaiorAB << endl;
	//cout << abs(b) << endl;
	
	maior = ((a + b) + abs(a - b)) / 2;
	
	MaiorABC = ((maior + c) + abs(maior - c)) / 2;
	
	cout << MaiorABC << " eh o maior" << endl;
	// cout << MaiorAB << " eh o maior" << endl;
	
return 0;

}
