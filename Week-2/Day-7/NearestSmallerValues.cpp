#include<bits/stdc++.h>
using namespace std;
int main(){

    int n; cin>>n;
    int a[n];

    for(int i=0;i<n;i++) cin>>a[i];
     cout<<0<<" ";
     int mn=a[0],mnIndx=0;
    for(int i=1;i<n;i++){
        if(mn<a[i]){
            for(int j=i-1;j>=mnIndx;j--){
                if(a[j]<a[i]){
                    cout<<j+1<<" ";
                    break;
                }
            }
        }
        else cout<<0<<" ";
        if(a[i]<=mn){
            mn=a[i];
            mnIndx=i;
        }
    }

    return 0;
}