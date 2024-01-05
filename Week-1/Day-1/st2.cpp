#include<bits/stdc++.h>
using namespace std; 
 
int main() {
 
    long long int n,sum; cin>>n>>sum;
 
    long long int a[n];
 
    for(int i=0;i<n;i++) cin>>a[i];
 
    long long int i=0,j=0,tmpSum=0,ans=INT_MIN,tmpL=0;
    while(i<n){
        
       
        //cout<<j<<" "<<i<<" "<<tmpSum<<'\n';
        if(tmpSum<=sum){
            tmpSum=tmpSum+a[i];
            ans=max(ans,i-j);
            i++;
        }
        else if(tmpSum>sum){
             tmpSum=tmpSum-a[j];  
            // i++;
             j++;    
             if(tmpSum<=sum){
                ans=max(ans,i-j);
             }    
        }

        if(i==n){
           // cout<<'\n';
            while(tmpSum>=sum&&j<n){
                 //cout<<j<<" "<<i<<" "<<tmpSum<<'\n';
                tmpSum=tmpSum-a[j];
                j++;
                ans=max(ans,i-j);
            }
        }

    }
 
    cout<<ans<<'\n';
 
    return 0;
}