#include<bits/stdc++.h>
using namespace std;
// void recurIn ( int arr[], int low, int high) {

// for(int i= 0;i < high; i++) {
//     for(int j = i; j >= 0; j--) {
        
//         if(arr[j+1] < arr[j]){
//             int temp = arr[j+1];
//             arr[j+1] = arr[j];
//             arr[j] = temp;
//         }
//     }
// }   
// }
void rec(int arr[],int low , int high) {
    if(low == high) return;
    int j = low;
    while(j > 0 && arr[j-1] > arr[j]) {
        int temp = arr[j-1];
        arr[j-1] = arr[j];
        arr[j] = temp;
        j--;
    }
    rec(arr, low+1, high);

}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0;i < n; i++) {
        cin >> arr[i];
    }
    // recurIn(arr, 0, n - 1);
    // for (int i = 0;i < n; i++) {
    //     cout << arr[i] << " ";
    // }
    rec(arr,0, n);
    for (int i = 0;i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}