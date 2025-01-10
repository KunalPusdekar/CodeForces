//D. Balanced Round
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0 ; i< n; i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int count=0;
        int ans=0;
        for(int i =1 ; i< n ; i++){
            if(v[i]-v[i-1] <= k){
                count++;
                 ans=max(ans,count);
            }
            else{
               
                count=0;
            }
        }
        cout << n -(ans+1)<<endl;
    }
}
