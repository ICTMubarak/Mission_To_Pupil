#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n,q; cin>>n>>q;
    int a[n],b[q];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<q;i++) cin>>b[i];
    for(int i=0;i<q;i++){
        int v=pow(2,b[i]);
        for(int k=0;k<n;k++){
            if(a[k]%v==0) a[k]=pow(2,b[i])+pow(2,b[i]-1);
        }
    } 

   for(int i=0;i<n;i++) cout<<a[i]<<" ";
   cout<<'\n';
    }

    return 0;
}