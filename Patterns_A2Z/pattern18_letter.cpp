#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;

    cin>>n;
    for(int i=1;i<=n;i++){
        char letter = 'A';
        for(int j=0;j<i;j++){
            char let=letter+n+j-i;
            cout<<let<<" ";
        }
        cout<<"\n";
    }



    return 0;
}