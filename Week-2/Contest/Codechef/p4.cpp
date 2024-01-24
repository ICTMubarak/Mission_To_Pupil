#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        int d=n/k;
        int p=k*d;
        while (k--){
            cout<<p<<" ";
            p=p-d;
        }
        
        cout<<'\n';
    }
    


    return 0;
}