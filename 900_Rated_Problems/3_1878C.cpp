//C. Vasilije in Cacak

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int long long n,k,x;
        cin>>n>>k>>x;
        long long minSum = k * (k + 1) / 2;
        long long maxSum = n * (n + 1) / 2 - (n - k) * (n - k + 1) / 2;

        if(maxSum>=x && minSum<=x){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
}
