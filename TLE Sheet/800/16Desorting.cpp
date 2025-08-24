#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        int ans=INT_MAX;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(i>0)ans=min(ans,arr[i]-arr[i-1]);
        }
        if(ans<0)cout<<0<<endl;
        else cout<<(ans/2) + 1<<endl;
    }
}