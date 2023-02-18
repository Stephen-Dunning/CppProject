# include <iostream>

using namespace std;

int main(){

	double a,b,MEDIA;
	
	cout.precision(5);
	cout.setf(ios::fixed);
	
	cin >> a >> b;
	
	MEDIA = (a/11 * 3.5) + (b/11 * 7.5);
	
	cout << "MEDIA = "<< MEDIA << endl;

	return 0;
}
