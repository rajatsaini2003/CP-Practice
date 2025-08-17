#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        arr.insert(arr.begin(),0);
        arr.push_back(x);
        n=arr.size();
        int ans=0;
        for(int i=1;i<n;i++){
            if(i==n-1)ans=max(2 * (arr[i]-arr[i-1]), ans);
            else ans=max(arr[i]-arr[i-1], ans);
        }
        cout<<ans<<endl;
    }
    return 0;
}