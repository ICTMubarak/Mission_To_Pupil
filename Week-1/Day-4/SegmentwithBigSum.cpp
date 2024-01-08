#include<bits/stdc++.h>
using namespace std;
 
int main() {
 
    long long int n,sum; cin>>n>>sum;
 
    long long int a[n];
 
    for(int i=0;i<n;i++) cin>>a[i];
    
    long long int i=0,j=0,tmpSum=0, an=INT_MAX;
   

    while(i<n){
        
        if(tmpSum<sum){
            tmpSum=tmpSum+a[i];
            i++;
            if(i==n){
                while(tmpSum>=sum){
                an=min(an,i-j);
                 //cout<<j<<" "<<i<<" "<<an<<" "<<tmpSum<<'\n';
                tmpSum=tmpSum-a[j];
                j++;
            }
            }
        }
        else{
           
            while(tmpSum>=sum){
                an=min(an,i-j);
                 //cout<<j<<" "<<i<<" "<<an<<" "<<tmpSum<<'\n';
                tmpSum=tmpSum-a[j];
                j++;
            }
            
           // j--;
        }
    }
    if(an==INT_MAX) cout<<-1;
    else cout<<an;
    return 0;
}