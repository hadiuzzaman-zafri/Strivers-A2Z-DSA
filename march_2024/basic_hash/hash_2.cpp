#include<bits/stdc++.h>
using namespace std;
int main(){
    string zafri;
    cin>>zafri;

    int hash[26] = {0};
    for(int i = 0;i<zafri.size();i++){
        hash[zafri[i] - 'a'] += 1;
    }
    int q;
    cin>>q;
    while(q--){
        char z;
        cin>>z;
        cout<<hash[z-'a']<<endl;
    }
    
        


    return 0;
}