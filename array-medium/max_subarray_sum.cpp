#include<bits/stdc++.h>
using namespace std;

int sum(int arr[], int n) {
    
    int maxi = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int sum = 0;
            for( int k = i; k <= j; k++) {
                sum+=arr[k];
            }
            maxi = max(sum, maxi);
        }
    }
    return maxi;
}
long long sum2(int arr[], int n) {
    long long maxi = 0;
    long long sum = 0;
    for ( int i = 0; i < n; i++) {
        sum+=arr[i];
        if(sum < 0) sum=0;
        maxi = max(maxi,sum);
    
        
        
    }
    
    return maxi;
}

int main() {
    int n = 5;
    int arr[5] = {1,3,-4,-5,2};
    int res = sum2(arr,n);
    cout<<res<<endl;
    




    return 0;
}