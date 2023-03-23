Cpp beecrowd problem 1065 Even between 5 numbers.
The prgram gets 5 integer numbers as input,
then searches through looking for the even numbers
then outputs a count of the even numbers.

22nd March 2023


#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int i,num,count=0;
    for(i=1;i<=5;i++){
        cin >> num;
        if(num%2==0){
          count++;
        }
    }
    cout<<count<<" valores pares"<<endl;
    return 0;
}