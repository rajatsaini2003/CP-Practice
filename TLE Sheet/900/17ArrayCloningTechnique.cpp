#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll maxiFreq=0;
        unordered_map<ll,ll>mp;
        for(int i=0;i<n;i++){
            ll d;
            cin>>d;
            mp[d]++;
            maxiFreq=(maxiFreq>mp[d])?maxiFreq:mp[d];
        }
        ll ans=0;
        while(maxiFreq<n){
            ans++;
            ans+=maxiFreq;
            maxiFreq=2*maxiFreq;
        }
        if(maxiFreq>n){
            ans-= maxiFreq-n;
        }
        cout<<ans<<endl;

    }
}