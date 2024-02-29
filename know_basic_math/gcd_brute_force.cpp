#include<bits/stdc++.h>
using namespace std;

int gcd(int n, int m){
    while(n>0 && m>0){
        if(n>m)n=n%m;
        else m=m%n;
    }
    if(n==0) return m;
    return n;

}


int main(){
    int number1;
    int number2;
    cout<<"Enter the number: ";
    cin>>number1, number2;
    int ans = gcd(number1, number2);
    cout<< ans;
    return 0;
}

