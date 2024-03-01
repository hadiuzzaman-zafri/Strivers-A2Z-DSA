#include<bits/stdc++.h>
using namespace std;

int nthfib(int n){
    if(n<=1) return n;
    int last = nthfib(n-1);
    int slast = nthfib(n-2);
    return last+slast;
}

int main(){
    int number;
    cout<<"Enter the number: ";
    cin>>number;
    cout<<nthfib(number)<<"\n";
    return 0;
}