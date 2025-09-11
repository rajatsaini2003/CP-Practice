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
        int cutoff=arr[0];
        int cnt=1;
        for(int i=1;i<n;i++){
            if(arr[i]>=cutoff)cnt++;
        }
        cout<<cnt<<endl;
    }
}