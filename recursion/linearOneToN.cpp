#include<bits/stdc++.h>
using namespace std;
void fun(int i,int n){
    if(i>n) return;
    cout<<i<<" ";
    fun(i+1,n);
}

int main(){
    int number;
    cin>>number;
    fun(1,number);

    return 0;
}