Uri problem 1073 Even Square
Printing integers even between one opoint and the other.
 


#include <iostream>

using namespace std;

int main(){
    int x;
    
    cin >> x;
    
    for(int i = 1; i <= x; i++){
            if(i%2 == 0){
                   cout << i << "^2 = " << i*i << "\n";
                 }
    }
    
    return 0;
}