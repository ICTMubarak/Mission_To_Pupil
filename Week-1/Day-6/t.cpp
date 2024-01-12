#include<bits/stdc++.h>
using namespace std;
int main(){

    long long int n, sum; cin>>n>>sum;
    n++;

    long long int i=0,j=0,tmpSum=0,sl=0, ans=0;
    long long int a[n];
    a[0]=0;

    for(int i=1;i<n;i++){
        cin>>a[i];
        a[i]=a[i]+a[i-1];
    }
     
    //for(int i=0;i<=n;i++) cout<<a[i]<<" ";

    int x=1,y=0;
   for(int i=0,j=0;i<n;i++){
    if(a[i]-a[j]>=sum){
        //ans=ans+n-i;
       // cout<<a[j]<<" "<<a[i]<<'\n';
        int t=-1;
        while (a[i]-a[j]>=sum){
           // cout<<a[j]<<" "<<a[i]<<" "<<n-i<<'\n';
            j++;
            t++;
            ans=ans+n-i;
        }
    }
   }
    
 cout<<ans;
   
    return 0;
}