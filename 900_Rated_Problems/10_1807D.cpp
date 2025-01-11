// D. Odd Queries
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        
        vector<int>v(n+1);
        vector<int>psum(n+1);
        for(int i=1 ; i<= n ; i++){
            cin>> v[i];  
        }
        int temp=0;
        for(int i=1 ; i<= n ; i++){
            temp+=v[i];
            psum[i]=temp;
        }
        int l,r,k;
        for(int i=0 ; i< q ; i++){
            int sum=0;
            cin>>l>>r>>k;
            sum = psum[l-1] + (psum[n]-psum[r]) + (((r-l)+ 1)*k);
            if(sum%2 != 0)
            cout<<("YES")<<"\n";
            else
            cout<<("NO")<<"\n";
        }
    }
}
