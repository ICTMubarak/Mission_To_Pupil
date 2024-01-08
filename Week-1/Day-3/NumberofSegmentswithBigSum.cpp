#include<bits/stdc++.h>
using namespace std; 
 
int main() {
 
    long long int n,sum; cin>>n>>sum;
 
    long long int a[n];
 
    for(int i=0;i<n;i++) cin>>a[i];
 
    long long int i=0,j=0,tmpSum=0,ans=0,tmpL=0,cnt=0;
    while(i<n){
        
       tmpSum=tmpSum+a[i];
       //cout<<j<<" "<<i<<" "<<tmpSum<<'\n';
       if(tmpSum<=sum){
        ans=max(ans,i-j+1);
         cnt++;
        i++;
       }

       else{
        tmpSum=tmpSum-a[j];
        i++;
        j++;
        cnt++;
       }
       

    }
 
    cout<<cnt<<'\n';
 
    return 0;
}