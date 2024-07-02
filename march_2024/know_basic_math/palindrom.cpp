#include<bits/stdc++.h>
using namespace std;

int check_palindrom(int n){
    int rev = 0;
    while(n != 0){
        int lastDigit = n % 10;
        n = n / 10;
        rev = (rev * 10) + lastDigit;
    }
    return rev;

}

int main(){
    int number;
    cout<<"Enter the number: ";
    cin>>number;
    
    if(check_palindrom(number)==number){
        cout<<"The Number is a Palindrom Number";
    }else{
        cout<<"The Number is not a Palindrom Number";
    }
    return 0;
}