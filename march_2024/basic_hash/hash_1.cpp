#include<bits/stdc++.h>
using namespace std;
int main(){
    int number;
    cin>>number;
    int arr[number];
    for(int i=0;i<number;i++){
        cin>>arr[i];
    }

    int hash[13] = {0};
    for(int i=0;i<number;i++){
        hash[arr[i]] += 1;
    }

    int q;
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        cout<<hash[num];

    }



    return 0;
}