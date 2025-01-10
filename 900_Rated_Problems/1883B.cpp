// B. Chemistry

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n,k;
        cin>>n>>k;
        unordered_map<char,int>mp;
        char temp;
        for(int i=0 ; i< n ; i++){
            cin>>temp;
            mp[temp]++;
        }
        int count=0;
        for(auto x: mp){
            if(x.second % 2 != 0){
                count++;
            }
        }
        if(k==0){
            if(count>1){
                cout<<"NO\n";
            }
            else{
                cout<<"YES\n";
            }
        }
        else if((count)<=k+1){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}
