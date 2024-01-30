#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        if(k>n){
            cout<<"NO"<<'\n';
            continue;
        }
        if(k==1){
            cout<<"YES"<<'\n';
            cout<<n<<'\n';
            continue;
        }
        if(n%2==0){
            if(k*2<=n){
                cout<<"YES"<<'\n';
                for(int i=0;i<k-1;i++) cout<<2<<" ";
                cout<<n-(k-1)*2<<'\n';
                continue;
            }
            if(k%2==0){
                cout<<"YES"<<'\n';
                for(int i=0;i<k-1;i++) cout<<1<<" ";
                cout<<n-(k-1)<<'\n';
                continue;
            }
            cout<<"NO"<<'\n';
        }
        else{
            if(k%2==1){
                cout<<"YES"<<'\n';
                for(int i=0;i<k-1;i++) cout<<1<<" ";
                cout<<n-(k-1)<<'\n';
                continue;
            }
            cout<<"NO"<<'\n';
        }
    }
    return 0;
}