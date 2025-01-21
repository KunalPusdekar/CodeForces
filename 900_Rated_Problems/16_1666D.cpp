//D. Deletive Editing

#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s,t;
        cin>>s>>t;
        map<char,int>mp1;
        map<char,int>mp2;

        for(auto x:s){
            mp1[x]++;
        }
        for(auto x:t){
            mp2[x]++;
        }
        int i=0;
        int j=0;
    
        while(i<s.length() && j<t.length()){
            
            if(s[i]== t[j]){
                
                if(mp1[s[i]]<mp2[t[j]]){
                break;
                }
                
                if(mp1[s[i]] == mp2[t[j]]){
                mp2[t[j]]--;
                j++;
                 }
            }
            mp1[s[i]]--;
            i++;
            
        }
        if(j== t.size())cout<<"YES\n";
        else cout<<"NO\n";
        
    }
}
