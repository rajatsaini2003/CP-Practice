#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        string s;
        cin>>n>>k;
        cin>>s;
        vector<int>freq(26,0);
        for(auto i:s){
            freq[i-'a']++;
        }
        if(n-k==1){
            cout<<"YES"<<endl;
            continue;
        }
        int cnt=0;
        for(auto i:freq){
            if(i%2==1)cnt++;
        }
        if(cnt>k){
            if(cnt-k==1){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }else{
            cout<<"YES"<<endl;
        }
    }
}