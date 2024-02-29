#include<bits/stdc++.h>
using namespace std;

void fun(int i, int n){

    if(i > n) return;
    fun(i+1,n);
    cout<<i<<" ";
}


int main(){
    int num;
    cin>>num;
    fun(1, num);
    return 0;

}