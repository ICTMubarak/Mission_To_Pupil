#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;

    while(t--){
        string str; cin>>str;
        stack<char> stk;
        int f,s;
        for(int i=0;i<str.length();i++){
            if(str[i]=='(') f=i;
            if(str[i]==')') s=i;
        }
        
        if(str.length()%2==1||f<s&&str[str.length()-1]=='('||str[0]==')') cout<<"NO"<<'\n';
        else {
            if(f<s){
                if((f-s)%2==0||f%2==1||(str.length()-s-1)%2==1) cout<<"NO"<<'\n';
                else cout<<"YES"<<'\n';
            }
            else{
                int t=f;
                f=s;
                s=t;
                if((f-s)%2==0||f%2==1||(str.length()-s-1)%2==1) cout<<"NO"<<'\n';
                else cout<<"YES"<<'\n';
            }
        }
        

    }


    return 0;
}