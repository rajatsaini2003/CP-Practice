#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans=0;
        int prev=0;
        for(int i=0;i<n;i++){
            if(s[i]=='#'){
                prev=0;
                continue;
            }
            ans++;
            prev++;
            if(prev==3){
                ans=2;
                break;
            }
        }
        cout<<ans<<endl;
    }
}