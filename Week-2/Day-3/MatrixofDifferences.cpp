#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> v;
        int s=1, b=n*n;
        for(int i=0;i<n*n;i++){
           if(i%2==0){
                v.push_back(b);
                b--;
           }
           else{
            v.push_back(s);
            s++;
           }
        }

int x=0;

        for(int i=1;i<=n;i++){
            if(i%2==1){
                for(int j=x;j<x+n;j++) cout<<v[j]<<" ";
                cout<<'\n';
                x=x+n;
            }
            else{
                for(int j=x+n-1;j>=x;j--) cout<<v[j]<<" ";
                cout<<'\n';
                x=x+n;
            }
        }
    }

    return 0;
}