// A. AvtoBus

#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        long long int min=0;
        long long int max=0;
        bool flag=false;
        cin>>n;
        if(n % 2 !=0 || n<4){
            cout<<"-1"<<endl;
        }else{
            flag=true;
            min=n/6;
            if(n % 6 != 0){
                min++;
            }
            max=n / 4;
        }
        if(flag)
        cout<<min<<" "<<max<<endl;
    }
}
