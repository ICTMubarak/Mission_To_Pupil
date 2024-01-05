#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
 
    long long int n, sum; cin>>n>>sum;
 
    long long int arr[n];
 
    for(int i=0;i<n;i++) cin>>arr[i];
    long long int tmpSum=0,tmpL=0,ans=0;
    for(int i=0,j=0;i<n||(i==n&&tmpSum>sum);){
        
        while(i==n&&tmpSum>=sum){
            if(tmpSum==sum) break;
            j++;
            tmpL=i-j;
            tmpSum=tmpSum-arr[j];
            ans=max(ans,tmpL);
            if(tmpSum<sum) break;
        }
 
        if(tmpSum==sum){
            tmpL=i-j;
            ans=max(ans,tmpL);
            if(i<n) i++;
        }
 
         else if(tmpSum<=sum){
            tmpL=i-j;
            ans=max(ans,tmpL);
            if(i<n) i++;
            tmpSum=tmpSum+arr[i];
        }
        else {
            j++;
            tmpSum=tmpSum-arr[j];
        }
        
    }
 
    cout<<ans;
 
    return 0;
}