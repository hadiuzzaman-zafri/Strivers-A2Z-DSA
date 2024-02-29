#include<bits/stdc++.h>
using namespace std;
int sumofNfun(int n){
    if(n<1){
        return n;
    }
        return n+sumofNfun(n-1);
    
}

int main(){
    int number;
    cin>>number;
    cout<<sumofNfun(number);

}