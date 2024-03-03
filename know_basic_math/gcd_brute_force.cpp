#include<bits/stdc++.h>
using namespace std;

void gcdd(int n, int m){
    int count=1;
    for(int i=1;i <=min(n,m);i++){
        
        if(n%i==0 && m%i==0){
            count = i; 
        }        
    }
    cout<< count<<endl;
}

int main(){
    int number1;
    int number2;
    cout<<"Enter the number: ";
    cin>>number1>>number2;
    gcdd(number1, number2);
    return 0;
}

