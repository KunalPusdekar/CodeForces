//B. NIT Destroys the Universe

#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t ;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0 ; i< n ; i++){
            cin>>v[i];
        }
        int count=0;
        if(v[0]!=0)
        count++;
        for(int i=1 ; i< n ; i++){
            if(v[i-1]==0 && v[i]!=0){
                count++;
                if(count>=2)
                    break;
            }
        }
        cout<<min(count,2)<<endl;
    }
}
