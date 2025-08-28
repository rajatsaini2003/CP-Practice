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
        int xr=0;
        for(int i=0;i<n;i++){
            int d;
            cin>>d;
            xr^=d;
        }
        if(n%2==0){
            if(xr==0)cout<<0<<endl;
            else cout<<-1<<endl;
        }
        else{
            cout<<xr<<endl;
        }
    }
}