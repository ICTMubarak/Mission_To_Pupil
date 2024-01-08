#include<bits/stdc++.h>
using namespace std;
int main(){
 
    long long int n,sum, cnt=0; cin>>n>>sum;
    long long int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<=sum) cnt++;
    }
    for(int i=0;i<n-1;i++){
       long long int tmpSum=a[i];
        for(int j=i+1;tmpSum<=sum&&j<n;j++){
            tmpSum=tmpSum+a[j];
            if(tmpSum<=sum) cnt++;
            else break;
        }
    }
    cout<<cnt;
    return 0; 
}