#include<bits/stdc++.h>
using namespace std;

void check_prime(int n){
    int count=0;
    for(int i = 1;i*i<=n;i++){
        if(n%i == 0){
            count++;
        }
        if(n/i != i){
            count++;
        }
    }
    if(count<=2){
        cout<<"IS a Prime Number"<<"\n";
    }else{
        cout<<"IS not a Prime Number"<<"\n";
    }
}


int main(){
    int number;
    cout<<"Enter the Number: ";
    cin>>number;
    check_prime(number);
    return 0;
}