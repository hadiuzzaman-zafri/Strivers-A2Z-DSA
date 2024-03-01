#include<bits/stdc++.h>
using namespace std;

bool palindrom(int i, string n){
    if(i>n.size()/2) return true;
    if(n[i] != n[n.size()-i-1]) return false;
    return palindrom(i+1,n);
}

int main(){

    string zaf;

    cout<<"Enter the string : ";
    cin>>zaf;
    cout<<palindrom(0, zaf);
    

    
    return 0;
}