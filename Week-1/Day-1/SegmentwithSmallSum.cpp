#include<bits/stdc++.h>
using namespace std; 

int main() {

    int n,sum; cin>>n>>sum;

    int a[n];

    for(int i=0;i<n;i++) cin>>a[i];

    int i=-1,j=0,tmpSum=a[0],ans=0,tmpL=0;
    while(i<n&&j<n){
        if(tmpSum<=sum){
            i++;
            tmpSum=tmpSum+a[i];
            tmpL=i-j+1;
            ans=max(ans,tmpL);
        }
        else{
             tmpSum=tmpSum-a[j];  
             j++;
             tmpL=i-j+1;
             ans=max(ans,tmpL);
        }
    }





    cout<<ans<<'\n';

    return 0;
}