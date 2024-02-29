#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;

    cin>>n;
    for(int i=1;i<=n;i++){
        char letter = 'A';
        for(int j=0;j<n-i+1;j++){
            char let=letter+j;
            cout<<let;
        }
        cout<<"\n";
    }



    return 0;
}