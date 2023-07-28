uri Solution Beginner 1098 ´Sequence IJ 4'

#include <iostream>

using namespace std;

int main(){
    float i = 0;
    float j = 1;
    while(i <= 2.1){
            cout << "I=" << i << " " << "J=" << j+i << "\n";
            cout << "I=" << i << " " << "J=" << j+1+i << "\n";
            cout << "I=" << i << " " << "J=" << j+2+i << "\n";
            i+= 0.2;
    }
    return 0;
}

The solution is far more brief than I had thought it would be.
