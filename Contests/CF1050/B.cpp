#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll n,m,x,y;
        cin>>n>>m>>x>>y;
        vector<ll>ho(n),ve(m);
        ll ans=0;
        for(int i=0;i<n;i++){
            cin>>ho[i];
            if(ho[i]<=y)ans++;
        }
        for(int i=0;i<m;i++){
            cin>>ve[i];
            if(ve[i]<=x)ans++;
        }
        cout<<ans<<endl;   
    }
}