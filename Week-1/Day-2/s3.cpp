#include<bits/stdc++.h>
using namespace std; 
 
int main() {
 
    long long int n,sum; cin>>n>>sum;
 
    long long int a[n];
 
    for(int i=0;i<n;i++) cin>>a[i];
 
    long long int i=0,j=0,tmpSum=0,ans=0,tmpL=0;
    while(i<n){
        
       tmpSum=tmpSum+a[i];
       if(tmpSum<=sum){
        ans=max(ans,i-j+1);
        i++;
       }

       else{
        tmpSum=tmpSum-a[j];
        i++;
        j++;
       }
       

    }
 
    cout<<ans<<'\n';
 
    return 0;
}