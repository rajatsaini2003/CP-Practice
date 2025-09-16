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
        vector<ll>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        ll ans=0;
        bool flag=true;
        for(int i=n-2; i>=0 && flag; i-- ){
            while(arr[i]>=arr[i+1]){
                if(arr[i+1]==0){
                    ans=-1;
                    flag=false;
                    break;
                }
                if(arr[i]==0)break;
                arr[i]/=2;
                ans++;
            }
        }
        cout<<ans<<endl;
    }
}