#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    
   while(t--){
    int n,m; cin>>n>>m;
    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    } 

   int i=0,tmpSum=0, ans=0;
   while(i<n){
    tmpSum=tmpSum+a[i];
    if(tmpSum>=m){
        ans++;
        tmpSum=0;
    }
    i++;
   }

   cout<<ans<<'\n';
    
   } 


    return 0;
}