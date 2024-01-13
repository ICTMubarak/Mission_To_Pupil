#include<bits/stdc++.h>
using namespace std;
map<int, int> mp;

int main(){

    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
    } 

    int t; cin>>t;
    while(t--){
        int x,y; cin>>x>>y;
        int ans=0;
        for(int i=x;i<=y;i++) ans=ans+mp[i];
        cout<<ans<<" ";
    }

    return 0;
}