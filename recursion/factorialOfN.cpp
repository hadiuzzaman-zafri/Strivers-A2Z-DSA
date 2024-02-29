#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    if(n<1){
        return 1;
    }
    return n*fact(n-1);
}

int main(){
    int number;
    cout<<"Enter the Number: ";
    cin>>number;
    cout<<fact(number);


    return 0;
}