#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        int a=0,b=0;
        for(auto i:s){
            if(i=='0')b++;
            else a++;
        }
        int d=abs(a-b);
        //cout<<a<<b<<endl;
        int r=n-m;
        if((a==b && r%2==0)||( d<=r && (d%2==r%2)))cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
        
    }
}