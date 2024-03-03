#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    int arr[num];
    for(int i = 0;i < num; i++){
        cin>>arr[i];
    }
    int temp = arr[0];

    for(int i = 0;i < num-1; i++){
        for(int j = i;j < num; j++){
            if(arr[i]>arr[j]){
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }

    }
    for(int i = 0;i < num; i++){
        cout<<arr[i]<<" ";
    }




    return 0;
}