#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x,y; cin>>n>>x>>y;
    int nn,ans=0, sml, bg;
    if(n<1){
        cout<<ans;
        return 0;
    }
    if(x<y){
        sml=x;
        bg=y;
    }
    else{
        sml=x;
        bg=y;
    }

    ans=ans+sml;
    n--;

    if(n<1){
        cout<<ans;
    }
    else{
        int i=0;
        while(true){
            i++;
            if(i%sml==0&&i%bg==0){
                ans=ans+bg;
                n--;
                n--;
                if(n<1) break;
            } 
            else if(i%sml==0){
                ans=ans+sml;
                n--;
                if(n<1) break;
            } 
            else if(i%bg==0){
                ans=ans+bg;
                n--;
                if(n<1) break;
            } 
            else ;

        }
    }

    cout<<ans;

    return 0;
}