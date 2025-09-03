#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll a,b,n;
        cin>>a>>b>>n;
        vector<int>arr(n);
        ll ans = b;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            ans+= (arr[i]<a-1)?arr[i]:a-1;
        }
        cout<<ans<<endl;
    }
}