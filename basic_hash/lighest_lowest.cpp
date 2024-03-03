#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    map<int, int> mpp;
    for(int i=0;i<n;i++){
        cin>>arr[i];    
    }

    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    int curr_max=0;
    int arg_max=0;
    for(auto it: mpp){
        cout<<it.first << " "<<it.second<<endl;

        if(curr_max < it.second){
            arg_max = it.first;
            curr_max = it.second;
        }
        
    }
    cout<< arg_max <<" hapend max tiems which is "<<curr_max;
    return 0;
}