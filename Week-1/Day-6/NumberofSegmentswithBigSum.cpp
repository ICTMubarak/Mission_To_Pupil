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
    if(n%2==0){
        long long int s = n/2;
        s=s*(n+1);
        s=s-ans;
        cout<<s;
    } 
    else{
        long long int s = (n+1)/2;
        s=s*n;
        s=s-ans;
        cout<<s;
    }
    

    return 0;
}