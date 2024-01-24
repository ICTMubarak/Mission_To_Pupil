#include<bits/stdc++.h>
using namespace std;

int main(){

        ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    
    while(t--){
    int a,b, dif=INT_MAX;
       int x; cin>>x;
        int tmpB;

        int l=0,r=x,mid;
        while(l<r){
            mid=(l+r)/2;
             tmpB=mid^x;
          if(tmpB>=mid){
            int d=tmpB-mid;
            if(d<dif){
                a=mid;
                b=tmpB;
                dif=d;
            }

        }

        if(tmpB>mid){
            r=mid-1;
            mid=(l+r)/2;
        }
        else{
            
            l=mid+1;
            mid=(l+r)/2;
        }

        }
       cout<<a<<" "<<b<<'\n';
    }
    


    return 0;
}