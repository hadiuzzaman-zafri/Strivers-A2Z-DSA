#include<bits/stdc++.h>
using namespace std;

int reverse(int n){
    int rev=0;
    while(n>0){
        int lastdigit = n % 10;
        n = n / 10;
        rev = (rev*10) + lastdigit;
    }
    return rev;
}

int main(){
    int number;
    cout<< "Enter the number you want to reverse: ";
    cin>> number;
    cout<<"Reverse for of the given number: "<<reverse(number)<<"\n";
    return 0;
}