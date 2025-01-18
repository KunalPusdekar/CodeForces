//B. Make It Increasing
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
         bool flag=true;
        vector<long long int>v(n);
        for(int i=0 ; i< n ; i++){
            cin>>v[i];
        }
       
        int count=0;
       
       
        for(int i=n- 1 ; i> 0 ; i--){
            if(v[i]<= 0){
                flag=false;
                break;
            }
                    while(v[i]<=v[i-1] && v[i-1] > 0){
                       v[i-1]= v[i-1]/2;
                        count++;
                    }
            
        }
        if(flag){
            cout<<count<<endl;
        }else{
            cout<<"-1"<<endl;
        }
    }
}
