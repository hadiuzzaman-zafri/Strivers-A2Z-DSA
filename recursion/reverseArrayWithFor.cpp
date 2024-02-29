#include<bits/stdc++.h>
using namespace std;
// int main(){
//     int arr[]={1,2,3,4};
//     for(int i=3;i>=0;i--){
//         cout<<arr[i]<<" ";
//     }


//     return 0;
// }

void reverse(int i,int arr[],int n){
    if(i>=n/2) return;
    swap(arr[i],arr[n-i-1]);
    reverse(i+1,arr,n);
    
}

int main(){
    int number;
    cout<<"Enter the length of the array: ";
    cin>>number;
    int arr[number];
    for(int i=0;i<number;i++){ cout<<"Enter the ";cout <<i;cout<<"th element:"; cin>>arr[i];}
    reverse(0,arr,number);
    for(int i = 0;i<number;i++) cout<<arr[i]<<" ";
}