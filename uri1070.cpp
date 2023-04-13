Uri 1070 Six odd Numbers C++ Beecrowd
A second commit to distinguish file from 1071 12 april 2023

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i=0;
    cin>>n;
    while(i < 6){
        if(n%2!=0){
            cout<<n<<endl;
            i++;
        }   
        n++;
     }   
    return 0;
}