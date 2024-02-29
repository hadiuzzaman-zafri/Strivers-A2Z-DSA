#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;

    cin>>n;
    for(int i=1;i<=n;i++){
        char letter = 'A';
        for(int k=1;k<=n-i;k++){
            cout<<" ";
        }
        for(int j=0;j<i;j++){
            char let=letter+j;
            cout<<let;
        }
        for(int l=0;l<i-1;l++){
            char let=letter+i-l-2;
            cout<<let;
        }
        cout<<"\n";
    }



    return 0;
}