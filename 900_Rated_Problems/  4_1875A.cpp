//A. Jellyfish and Undertale

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int a,b,n;
        cin>>a>>b>>n;
        vector<long long int>v(n);
        for(int i=0 ; i<n ; i++){
            cin>>v[i];
        }
        long long int sum=b;
        for(int i=0 ; i<n ; i++){
           sum+=min(v[i]+1,a)- 1;
           //OR min(v[i],a-1)
        }
        cout<< sum <<endl;
    }
}
