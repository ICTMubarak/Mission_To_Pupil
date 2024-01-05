#include<bits/stdc++.h>
using namespace std; 
 
int main() {
 
    long long int n,sum; cin>>n>>sum;
 
    long long int a[n];
 
    for(int i=0;i<n;i++) cin>>a[i];
 
    long long int i=0,j=0,tmpSum=0,ans=INT_MAX,tmpL=0;
    while(i<n){
        
        cout<<j<<" "<<i<<" "<<tmpSum<<'\n';
        
        if(tmpSum>=sum){
            tmpL=i-j;
            ans=min(ans,tmpL);
            tmpSum=tmpSum-a[j];
            j++;
        }
        else if(tmpSum<sum){
            
            tmpSum=tmpSum+a[i];
            i++;
        }

        if(i==n){
            while(tmpSum>=sum&&j<n){
                tmpL=i-j;
            ans=min(ans,tmpL);
            tmpSum=tmpSum-a[j];
            j++;
            }
        }

     }
 
    cout<<ans<<'\n';
 
    return 0;
}