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
        vector<int>arr(n);
        for(int i=0;i<n;i++)cin>>arr[i];
        int cnt=0;
        int ans=0;
        for(int i=0;i<n;i++){
            if(arr[i]){
                cnt++;
            }
            else {
                if(cnt)ans++;
                cnt=0;
            }
        }
        if(cnt)ans++;
        cout<<ans<<endl;
    }
}