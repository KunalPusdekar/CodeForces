//B. Array Cloning Technique

#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0 ;i< n ; i++){
            cin>>v[i];
        }
        map<int,int>mp;
        for(auto x:v){
            mp[x]++;
        }
        int freq=INT_MIN;
        for(auto x:mp){
            freq=max(freq,x.second);
        }
        int op=0;
        while(freq<n){
            op++;
            if(n- freq >= freq){
                op+=freq;
                freq=freq*2;
            }else{
                op+= n-freq;
                freq=n;
            }
        }
        cout<<op<<endl;
    }
}
