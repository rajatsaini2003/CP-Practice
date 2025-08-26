#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        if(n%2==0 || (k%2 == 1 && n>=k))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}