//A. Forked!
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int xk,yk;
        int xq,yq;
        cin>>xk>>yk;
        cin>>xq>>yq;
        vector<pair<int,int>>v= { 
                                {a,b},{-a,b},{a,-b},{-a,-b},
                                {b,a},{-b,a},{b,-a},{-b,-a}
                               };
        
        set<pair<int,int>>s1;
        set<pair<int,int>>s2;
        for(auto r:v){
            int x1 = xk+ r.first;
            int y1 = yk+ r.second;
            
            s1.insert(make_pair(x1,y1));
            
            
            int x2 = xq+ r.first;
            int y2 = yq+ r.second;
            
            s2.insert(make_pair(x2,y2));
        }
        int ans=0;
        for(auto old:s1){
            if(s2.find(old) != s2.end()){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
}
