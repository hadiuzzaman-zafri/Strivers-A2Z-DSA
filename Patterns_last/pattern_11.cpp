#include <bits/stdc++.h>

using namespace std;

void pattern_11(int n){
    int stars = 1;
    for(int i = 0;i < n; i++){
        
        if(i%2==0) stars=1;
        else stars=0;
        for(int j = 0; j<= i; j++){
            cout<<stars;
            stars = 1 - stars ;
        }
        cout<<endl;
    }
}
void pattern_12(int n){
    int first=2*(n-1);
    for(int i=1; i<=n;i++){
        for(int j = 1;j<=i;j++){
            cout<<j;
        }
        
        for(int k =1;k<=first;k++){
            cout<<" ";

        }

        for(int l = i;l>=1;l--){
            cout<<l;
        }
        cout<<endl;
        first-=2;
    }
}

void pattern_13(int n){
    int number = 1;
    for(int i = 1;i<=n;i++){
        for(int j = 1; j<=i;j++){
            cout<<number<<" ";
            number++;
        }cout<<endl;




    }
}

void pattern_14(int n){
    int number = 'A';
    for(int i = 1;i<=n;i++){
        for(int j = 65; j<=65+i;j++){
            cout<<char(j)<<" ";
            //number++;
        }cout<<endl;




    }
}

void pattern_15(int n){
   
    for(int i = 1;i<=n;i++){
        int hello = i;
        for(int j = 65; j<=65+n-i;j++){
            cout<<char(j)<<" ";
            
        }
        
        cout<<endl;




    }
}

void pattern_16(int n){
    int num=65;
    for(int i = 1;i<=n;i++){
        
        for(int j = 1; j<=i;j++){
            cout<<char(num)<<" ";

            
        }
        num+=1;
        cout<<endl;




    }
}

void pattern_17(int n){
    for(int i =1;i<=n ;i++){
        //for space
        int number=65;
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        //for number
        for(int k = 65;k<=65+i-1;k++){
            cout<<char(k);
        }
        for(int j= 1;j<i;j++){
            cout<<char(number+i-j-1);
        }
        number-=1;
        cout<<endl;

        
    }
}

void pattern_18(int n){
    int number = 65+n-1;
    for(int i=1;i<=n;i++){
        for( int j=1;j<=i;j++){
            cout<<char(number+j-1)<<" ";
        }
        number-=1;
        cout<<endl;
    }
}

void pattern_19(int n){
    int space=0;
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }

        for(int k=0;k<space;k++){
            cout<<" ";
        }
        

       for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        space+=2;
        cout<<endl;
        
    }

    space = 8;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }

        for(int k=0;k<space;k++){
            cout<<" ";
        }
        

       for(int j=1;j<=i;j++){
            cout<<"*";
        }
        space-=2;
        cout<<endl;
        
    }



}
void pattern_20(int n){
    int space=8;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }       
        space-=2;
        cout<<endl;
        
    }
    space=2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }       
        space+=2;
        cout<<endl;
        
    }

}

void pattern_21(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 | j==0| i== (n-1) | j==(n-1)){
                cout<<"*";
            }else{
                cout<<" ";
            }
            
        }cout<<endl;
    }
}

void pattern_22(int n){
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            int top = i;
            int left= j;
            int right = (2*n-2)-j;
            int bottom = (2*n-2)-i;
            cout<<(n - min(min(top,bottom),min(left,right)));
        }
        cout<<endl;
    }
}
int main() {
    int t;
    cin>>t;

    for(int i = 0; i<t;i++){
        int k;
        cin>>k;
        pattern_22(k);
    }

    return 0;
}
