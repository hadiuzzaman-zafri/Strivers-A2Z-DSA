#include<bits/stdc++.h>
using namespace std;
int missing(int arr[], int n) {
    int hash[n+1] = {0};
    for(int i = 0 ; i < n; i++) {
        hash[arr[i]] = 1;
    }
    for( int i = 0; i < n - 1; i++) {
        if(hash[i] == 0) return i;
    }
}

int main() {
    int arr[5] = {1,2,3,4};
    cout<< missing(arr, 5);
    return 0;
}