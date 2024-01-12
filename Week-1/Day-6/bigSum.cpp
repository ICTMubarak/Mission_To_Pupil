#include<bits/stdc++.h>
using namespace std;
int main(){

    long long int n, sum; cin>>n>>sum;

    long long int i=0,j=0,tmpSum=0,sl=0, ans=0;
    long long int a[n+1];
    a[0]=0;

    for(int i=0;i<=n;i++){
        cin>>a[i];
        a[i]=a[i]+a[i-1];
    }
     
     int i=1,j=0;
    while(i<n){
        cout<<i<<'\n';
    
         if(a[i]-a[j]<sum) i++;
        // else{
        //     ans=ans+n-i;
        //     while(a[i]-a[j]>=sum&&j<i) j++;
        // }

    }
    
    cout<<ans;
   
    return 0;
}