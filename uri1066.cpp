C++ Solution to 1066 beecrowd
Positive, Negative, odd and even


#include<bits/stdc++.h>
using namespace std;

int main(){
    int even=0,odd=0,num,i,positive=0,negative=0;
    for(i=0;i<5;i++){
        cin>>num;
        if(num%2==0){
                even++;
            }
            if(num%2!=0){
                odd++;
            }
            if(0<num){
                positive++;
            }
            if(0>num){
                negative++;
            }

    }
    cout<<even<<" valor(es) par(es)"<<endl;
    cout<<odd<<" valor(es) impar(es)"<<endl;
    cout<<positive<<" valor(es) positivo(s)"<<endl;
    cout<<negative<<" valor(es) negativo(s)"<<endl;

    return 0;
}