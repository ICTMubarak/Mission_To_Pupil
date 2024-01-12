#include<bits/stdc++.h>
using namespace std;


bool cmp(const pair<int, int> &p1, const pair<int, int> &p2){
if(p1.second<p2.second) return 1;
else return 0;
}

int main(){
    int n,k; cin>>n>>k;
    vector<int> v(n);
    vector<pair<int,int>> vp,vr;
    for(int i=0;i<n;i++) cin>>v[i];
    for(int i=0;i<k;i++){
        int x; cin>>x;
        vp.push_back({i,x});
    } 

    sort(vp.begin(),vp.end(),cmp);

    int ans=0;
    for(int i=0;i<k;i++){
        while(ans<n&&v[ans]<=vp[i].second){
            ans++;
        }
       vr.push_back({vp[i].first,ans});
    } 
    sort(vr.begin(),vr.end());
        for(int i=0;i<k;i++){
        cout<<vr[i].second<<'\n';
    }
    
    return 0;
}