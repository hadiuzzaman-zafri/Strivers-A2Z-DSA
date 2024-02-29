#include<iostream>
using namespace std;

void pattern12(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int j=1;j<=(n-i)*2;j++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<i-k+1;
        }
        cout<<"\n";
    }
}

int main(){
    int n;
    cout<<"Enter the Number of row: ";
    cin>>n;
    pattern12(n);

    return 0;
}