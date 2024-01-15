#include<bits/stdc++.h>
using namespace std;
map<int, int> mp;

int main(){

   int t; cin>>t;
   while (t--){
    vector<int> v1,v2;
    for(int i=0;i<4;i++){
        int val1,val2; cin>>val1>>val2;
        //cout<<val1<<" "<<val2<<'\n';
       v1.push_back(val1);
       v2.push_back(val2);
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    //for(auto vl:v1) cout<<vl<<" ";
    //for(auto vl:v2) cout<<vl<<" ";
    int x=abs(v1[0]-v1[3]);
    int y=abs(v2[0]-v2[3]);
    cout<<x*y<<'\n';
   }
   

    return 0;
}