#include<bits/stdc++.h>
using namespace std;

int main(){

    long long int n, k; cin>>n>>k;
    long long int a[n];
    for(int i=0;i<n;i++) cin>>a[i];

   long long int ans=0, l=0,r=0;
    map<int, int> mp;
    while(r<n){
        mp[a[r]]++;
        cout<<mp.size()<<'\n';
        if(mp.size()<=k) {
             ans=ans+(r-l+1);
             r++;
        }
        else{
            while(mp.size()>k&&l<=r){
                mp[a[l]]--;
                if(mp[a[l]]==0){
                    mp.erase(a[l]);
                }
                l++;
            }
            if(mp.size()<=k) ans=ans+(r-l+1);
            r++;
        }
       
    }
    cout<<ans;
    return 0;
}