#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        int cnt=1;
        int lar=1;
        for(int i=1;i<n;i++){
            if(arr[i]-arr[i-1]>k){
                cnt=1;
            }
            else{
                cnt++;
                lar=max(cnt,lar);
            }
        }
        cout<<n-lar<<endl;
    }
}