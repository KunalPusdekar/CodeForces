// B. Array Cloning Technique

#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long  a,b,c;
        cin>>a>>b>>c;
        bool flag=false;
        if((2*b - c) %a ==0){
            if((2*b-c) / a >0){
                flag=true;
            }
        }
        if((a+c) % (2*b) == 0){
            flag=true;
        }
         if((2*b - a )%c ==0){
            if((2*b-a) / c >0){
                flag=true;
            }
        }
        if(a==b && b==c){
            flag=true;
        }
        
        if(flag)cout<<"YES\n";
        else cout<<"NO\n";
    }
}
