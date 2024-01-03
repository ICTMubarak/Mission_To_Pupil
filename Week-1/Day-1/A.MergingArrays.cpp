#include<bits/stdc++.h>
using namespace std;

int main(){


    long long int n,m; cin>>n>>m;
    vector<int> v(n+m);

    for(long long int i=0;i<n+m;i++) cin>>v[i];

    sort(v.begin(),v.end());

    for(long long int i=0;i<n+m;i++) cout<<v[i]<<" ";

    return 0;
}