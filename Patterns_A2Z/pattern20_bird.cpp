#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int k=1;k<=(n*2)-(i*2);k++){
            cout<<" ";
        }
        for(int l=1;l<=i;l++){
            cout<<"*";
        }
        
        cout<<"\n";
    }
    for(int i=1;i<=n;i++){
        for(int m=1;m<=n-i;m++){
            cout<<"*";
        }
        for(int p=1;p<=i*2;p++){
            cout<<" ";

        }
        for(int q=1;q<=n-i;q++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}