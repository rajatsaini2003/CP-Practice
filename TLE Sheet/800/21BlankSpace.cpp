#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cnt=0,ans=0;
        for(int i=0;i<n;i++){
            int d;
            cin>>d;
            if(d==0)cnt++;
            else cnt=0;
            ans=max(cnt,ans);
        }
        cout<<ans<<endl;
    }
}