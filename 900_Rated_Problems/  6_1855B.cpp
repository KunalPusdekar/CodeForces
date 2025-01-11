// B. Longest Divisors Interval
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        int ans=0;
        for(int i=1; ; i++){
            if(n % i !=0){
                ans=i-1;
                break;
            }
        }
        cout<<ans<<endl;
    }
}
