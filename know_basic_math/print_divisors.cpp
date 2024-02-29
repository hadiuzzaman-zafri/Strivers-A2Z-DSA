#include<bits/stdc++.h>
using namespace std;

// void divisor(int n){

//     for(int i=1;i<=n;i++){
//         if(n%i==0){
//             cout<<i<<", ";
//         }
//     }
// }

void divisor_in(int n){
    vector<int> li;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){ li.push_back(i);
            if((n/i) != i){ 
                li.push_back(n/i);
            }
        }
    
    }
    sort(li.begin(), li.end());
    for(auto it: li) cout<<it<<" ";

}
int main(){
    int number;
    cout<<"Enter the number: ";
    cin>>number;
    cout<<"The divisors of "<<number<<" are: ";
    divisor_in(number);
    cout<<"\n";

    return 0;
}