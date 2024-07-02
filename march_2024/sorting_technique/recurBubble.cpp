#include<bits/stdc++.h>
using namespace std;


void bubble(int arr[], int low, int high) {
    int i = low;
    int j = high;
    if(i == j) return;
    while(i < j){
        if(arr[i] > arr[i+1]){
            int temp = arr[i + 1];
            arr[i + 1] = arr[i];
            arr[i] = temp;
            i++;
        }else{
            i++;
        }    
    }
    j--;
    bubble(arr, low, j);
    

}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    bubble( arr, 0, n - 1);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}