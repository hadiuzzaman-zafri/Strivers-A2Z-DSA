#include <bits/stdc++.h>

using namespace std;

void pattern_1(int n){
    for(int i = 0;i < n; i++){

        for(int k = 0; k < n-i-1; k++){
            cout<<" ";
        }

        for(int j = 0; j < (i*2)+1; j++){
            cout<<"*";
        }
        
        for(int l = 0; l < n-i; l++){
            cout<<" ";
        }        

        cout<<endl;
        }
    for(int x = 0;x < n; x++){

        for(int y = 0; y < x; y++){
            cout<<" ";
        }

        for(int z = 0; z < (n*2)-x*2-1; z++){
            cout<<"*";
        }
        
        for(int h = 0; h < x; h++){
            cout<<" ";
        }        

        cout<<endl;
        }
}

int main() {
    int t;
    cin>>t;

    for(int i = 0; i<t;i++){
        int k;
        cin>>k;
        pattern_1(k);
    }

    return 0;
}
