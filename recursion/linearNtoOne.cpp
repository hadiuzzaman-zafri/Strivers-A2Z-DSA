#include<bits/stdc++.h>
using namespace std;

void fun(int i, int n){
    if(n<i) return;
    cout<<n<<" ";
    fun(1,n-1);

}


int main(){
    int num;
    cin>>num;
    fun(1,num);



    return 0;
}