#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while (t--){
        int n,k; cin>>n>>k;
        string str; cin>>str;
        int r=1,fr=INT_MIN;
        for(int i=1;i<n;i++){
            if(str[i]==str[i-1]) r++;
            else {
                fr=max(r,fr);
                r=1;
            }
        }
        cout<<fr<<" ";

        string str1="";
        str1+=str[n-1];
        int p=n-2;
        while(str[n-1]==str[p]){
            str1+=str[p];
            p--;
        }
        
        while(k--){
            string ad; cin>>ad;
            str1+=ad;
            cout<<str1<<'\n';
            
         r=1;
         int mxfr=fr;
         for(int i=1;i<str1.length();i++){
            if(str1[i]==str1[i-1]) r++;
            else {
                fr=max(r,fr);
                r=1;
            }
        }
        mxfr=max(mxfr,fr);
        cout<<mxfr<<" ";
        mxfr=fr;

        }

        cout<<'\n';
        

    }
    

    return 0;
}