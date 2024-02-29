#include<bits/stdc++.h>
using namespace std;
int sumofNfun(int n){
    int sum=n;
    return sum+sumofNfun(n-1);
}

int main(){
    int number;
    cin>>number;
    cout<<sumofNfun(number);
}