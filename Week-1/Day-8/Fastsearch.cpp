#include<bits/stdc++.h>
using namespace std;
map<int, int> mp;

int main(){

    int n; cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    } 

    sort(v.begin(),v.end());


    int t; cin>>t;
    while(t--){
        int x,y; cin>>x>>y;
        int l = (lower_bound(v.begin(),v.end(),x))-v.begin();
        int r = (upper_bound(v.begin(),v.end(),y))-v.begin();
        cout<<r-l<<" ";
    }

    return 0;
}