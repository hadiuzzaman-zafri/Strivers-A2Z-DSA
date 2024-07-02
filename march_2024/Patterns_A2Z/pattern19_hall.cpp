#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;

    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<"*";
        }
        for(int k=1;k<i*2-1;k++){
            cout<<" ";
        }
        for(int l=1;l<=n-i+1;l++){
            cout<<"*";
        }
        
        cout<<"\n";
    }
    for(int i=1;i<=n;i++){
        for(int m=1;m<=i;m++){
            cout<<"*";
        }
        for(int p=1;p<=(n*2)-i*2;p++){
            cout<<" ";
        }
        for(int q=1;q<=i;q++){
            cout<<"*";
        }
        cout<<"\n";
    }



    return 0;
}