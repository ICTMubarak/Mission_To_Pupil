#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while (t--){
        int n,k; cin>>n>>k;
        int r=INT_MAX,x;
        bool f = false;
        for(int i=0;i<n;i++){
            cin>>x;
            if(x>=k){
                r=min(r,x%k);
                f=true;
            }
        }
        if(f) cout<<r<<'\n';
        else cout<<-1<<'\n';
    }
    

    return 0;
}