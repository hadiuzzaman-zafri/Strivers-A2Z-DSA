#include<bits/stdc++.h>
using namespace std;

//------------------------ Start of Pattern 22 --------------------


void pattern( int n ) {
    
    for (int i = 0; i < 2*n - 1; i++) {  
        for(int j = 0; j < 2*n - 1; j++) { 
            int top = i;
            int left = j;
            int right = ( (n * 2) - 2 ) - j;
            int bottom = ( (n * 2) - 2 ) - i;
            int number = (n - min(min(top, left), min(bottom, right))) ;
            cout << number << " ";
        } 
        cout << endl;
    }
}

//----------------------- End of Pattern 22 ---------------------





int main(){
    int n;
    cout << "Your asked pattern: " << endl;
    cin >> n;
    pattern(n);
    return 0;
}

