#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string str; cin>>str;
        int ans=0; 
        set<char> st;
        for(int i=0;i<n;i++){
            st.insert(str[i]);
            ans=ans+st.size();
        }
        cout<<ans<<'\n';
    }
    return 0;
}