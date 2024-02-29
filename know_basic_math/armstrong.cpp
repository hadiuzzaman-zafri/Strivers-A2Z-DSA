#include<bits/stdc++.h>
using namespace std;

int check_armstrong(int n){
    int sum = 0;
    while(n != 0){
        int lastDigit = n % 10;
        n = n / 10;
        sum = sum + (lastDigit*lastDigit*lastDigit);
    }
    return sum;
}

int main(){
    int number;
    cout<<"Enter the Number: ";
    cin>>number;
    if(check_armstrong(number)==number){
        cout<<"The number is a armstrong number";
    }else{
        cout<<"The number is not a armstrong number";
    }
    return 0;
}