Uri 1079 Weighted Averages problem.
Input three numbers and he code gives an average weighted from a to c.

Thi slooks very useful for statistical analysis

#include <iostream>

using namespace std;

int main(){
    int n;
    float a, b, c;
    
    cin >> n;
    
    for(int i = 0; i < n; i++){
            cin >> a;
            cin >> b;
            cin >> c;
            
            printf("%.1f\n", (a*2 + b*3 + c*5)/(2.0+3.0+5.0));
    }
    
    return 0;
}