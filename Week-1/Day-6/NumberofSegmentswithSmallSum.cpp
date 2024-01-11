#include<bits/stdc++.h>
using namespace std;
int main(){

    long long int n, sum; cin>>n>>sum;

    long long int i=0,j=0,tmpSum=0,sl=0, ans=0;
    long long int a[n];
    for(int i=0;i<n;i++) cin>>a[i];

    while(i<n){
        
         tmpSum=tmpSum+a[i];
         if(tmpSum<=sum){
             ans=ans+(i-j+1);
             i++;
         }
         else{
             while (true){
                 if(tmpSum<=sum||j>i) break;
                 tmpSum=tmpSum-a[j];
                 j++;
             }

             if(tmpSum<=sum && i>=j)
             ans = ans + (i-j+1);
             i++;  
         }
    }

    cout<<ans;
    

    return 0;
}