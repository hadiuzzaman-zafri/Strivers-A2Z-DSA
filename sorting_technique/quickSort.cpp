#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int low, int high) {
    int pivot = low;
    int i = low;
    int j = high;
    while(i<j) {
        while(arr[low] <= arr[pivot] && i < high - 1) {
            i++;
        }
        while(arr[j] > arr[pivot] && j >= low + 1) {
            j--;
        }
        if(i < j) {
            swap(arr[i],arr[j]);
        }
        
        
    }
    swap(arr[low],arr[j]);
    return j;
}   

void qs(int arr[], int low, int high) {
    if(low < high) {
        int pIndex = partition(arr,low, high);
        qs(arr,low,pIndex-1);
        qs(arr,pIndex+1,high);
    }
    for(int j = 0;j<=high;j++){
        cout<<arr[j]<<" ";
    }
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++) {
        cin>>arr[i];
    }
    qs(arr,0,n);


    return 0;
}