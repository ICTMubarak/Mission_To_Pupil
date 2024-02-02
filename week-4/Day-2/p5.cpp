#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while (t--){
        int n,k; cin>>n>>k;
       if(n%2==0){

            if(k%2==0){

                int i=1;
                for(;i<=k;i++) cout<<i<<" ";
                for(int p=i+1;i<=n;i++,p=p+2) cout<<p<<" ";

            }

            else{

            }
        
       }
       else{

       }
    }
    

    return 0;
}