#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        vector<ll>a(n),b(n);
        int pos=0;
        int t=0;
        ll ans=0;
        for(int i=0;i<n;i++){
            cin>>a[i]>>b[i];
            int r=a[i]-t;
            t=a[i];
            if(r%2!=0){
                pos=!pos;
            }
            if(pos!=b[i]){
                r--;
                pos=!pos;
            }
            ans+=r;
            //cout<<ans<<r<<endl;
        }
        if(t<m)ans+=m-t;
        cout<<ans<<endl;
    }
}