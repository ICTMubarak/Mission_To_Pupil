#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;

    while(t--){
        int n, l; cin>>n>>l;
        vector<string> v(n);

        for(int i=0;i<n;i++){
            string str; cin>>str;
            v[i]=str;
        }
        string stor="vika";
        int flg[] = {0,0,0,0};
        int k=0;
        for(int i=0;i<l;i++){
            bool f=false;
            for(int j=0;j<n;j++){
                if(stor[k]==v[j][i]) f=f|true;
            }
            if(f){
                flg[k]=1;
                k++;
            } 

        }
        bool fnl=true;
        for(int i=0;i<4;i++){
            if(flg[i]==0){
                fnl=false;
                break;
            }
        }

       if(fnl) cout<<"YES"<<'\n';
       else cout<<"NO"<<'\n';

    }


    return 0;
}