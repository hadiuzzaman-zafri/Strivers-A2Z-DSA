// #include<bits/stdc++.h>
// using namespace std;

// void number_of_digit(int n){
//     int count=1;
//     for(int i=0;i<=n;i++){
//         if(n>0){
//             n = n / 10;
//             count++;
//         }else{
//             break;
//         }
//     }
//     cout<<count;
// }

// int main(){
//     int number;
//     cout<<"Enter the number: ";
//     cin >> number;
//     number_of_digit(number);
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// void number_of_digit(int n){
//     int count = 0;

//     while(n !=0){
//         n = n/10;
//         count++;
//     }
//     cout<<"Number of Digits in the number is: "<<count;
// }

// int main(){
//     int number;
//     cout<<"Enter the number: ";
    
//     cin>>number;
//     number_of_digit(number);

//     return 0;

// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int number;
//     cout<<"Enter the number: ";
//     cin>> number;
//     string zafri = to_string(number);
//     int length = zafri.length();
//     cout<<"The length of the number is: "<<length;
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int digits(int n){
    return floor(log10(n)+1);
}

int main(){
    int number;
    cout<<"Enter the number: ";
    cin>>number;
    cout<<digits(number);
    cout<<"\n";
    return 0;
}