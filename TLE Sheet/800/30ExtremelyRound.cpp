#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool check(int i){
    int cnt=0;
    while(i){
        int d=i%10;
        if(d)cnt++;
        if(cnt>1)return false;
        i/=10;
    }
    return true;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t;
    cin>>t;
    vector<int>arr;
    for(int i=1;i<=999999;i++){
        if(check(i))arr.push_back(i);
    }
    while(t--){
        int n;
        cin>>n;
        int ans=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<=n)ans++;
            else break;
        }
        cout<<ans<<endl;
    }
}