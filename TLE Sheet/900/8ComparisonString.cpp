 #include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n;
        cin>>s;
        int cnt=1;
        int ans=1;
        for(int i=1;i<n;i++){
            if(s[i]==s[i-1])cnt++;
            else cnt=1;
            ans=max(ans,cnt);
        }
        cout<<ans+1<<endl;
    }
}