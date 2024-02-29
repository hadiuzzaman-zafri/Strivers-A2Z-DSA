#include<bits/stdc++.h>
using namespace std;
void sumOfN(int i,int sum){
    
    if(i<1){
        cout<<sum<<" ";
        return;
    }
    sumOfN(i-1,sum+i);
}


int main(){
    int number;
    cout<<"Enter the number: ";
    cin>>number;
    cout<<"Sum of the first "<<number<<" is: ";
    sumOfN(number,0);
    
}