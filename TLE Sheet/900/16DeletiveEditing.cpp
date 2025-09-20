#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        string s,t;
        cin>>s;
        cin>>t;
        int n=s.length();
        int m=t.length();
        vector<int>freq(26,0);
        for(auto i:t){
            freq[i-'A']++;
        }
        for(int i=n-1;i>=0;i--){
            if(freq[s[i]-'A']>0)freq[s[i]-'A']--;
            else s[i]='.';
        }
        string f="";
        for(auto i:s){
            if(i!='.')f+=i;
        }
        if(f==t)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}