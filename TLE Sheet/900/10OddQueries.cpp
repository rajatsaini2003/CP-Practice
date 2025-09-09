#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
        ll n,q;
        cin>>n>>q;
        vector<ll>arr(n);
        for(int i=0;i<n;i++)cin>>arr[i];
        vector<ll>ps(n+1,0);
        for(int i=1;i<=n;i++)ps[i]+=ps[i-1]+arr[i-1];
        for(int i=0;i<q;i++){
            ll l,r,k;
            cin>>l>>r>>k;
            ll addSum=k*(r-l+1);
            ll remSum=ps[r]-ps[l-1];
            if((ps[n]+addSum-remSum)%2==1)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}