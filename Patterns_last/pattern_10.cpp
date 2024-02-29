#include <bits/stdc++.h>

using namespace std;

void pattern_1(int n){
    for(int i = 1;i <= n*2-1; i++){
        int star = i;
        if(i>n) star=2*n-i;
        for(int k = 1; k <= star; k++){
            cout<<"*";
        }
        cout<<endl;
    }

        cout<<endl;

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
