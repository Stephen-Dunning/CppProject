#include <iostream>
#define PI 3.14159
 
 using namespace std;
 
int main(){
    
    double A, R;
	
	cout.precision(4);
	cout.setf(ios::fixed);
	
	cin >> R;
	
    A = PI*(R*R);
   	
	cout << "A=" << A << endl;
     
    return 0;
}
