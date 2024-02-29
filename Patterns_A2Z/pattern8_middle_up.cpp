#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    for(int i=1;i<=n;i++){

        for(int k=1;k<=i+1;k++){
            cout<<" ";
        }
        for(int j=1;j<=n*2-i*2+1;j++){
            cout<<"*";
        }
        cout<<"\n";
    }

    return 0;
}