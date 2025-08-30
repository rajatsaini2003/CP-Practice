#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int dx[4]={-1,1,-1,1},dy[4]={-1,-1,1,1};
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int xk,yk;
        cin>>xk>>yk;
        int xq,yq;
        cin>>xq>>yq;
        set<pair<int,int>>kin,que;
        for(int i=0;i<4;i++){
            kin.insert({xk+dx[i]*a,yk+dy[i]*b});
            kin.insert({xk+dx[i]*b,yk+dy[i]*a});
            que.insert({xq+dx[i]*a,yq+dy[i]*b});
            que.insert({xq+dx[i]*b,yq+dy[i]*a});
        }
        int ans=0;
        for(auto pos:kin){
            if(que.find(pos)!=que.end())ans++;
        }
        cout<<ans<<endl;
    }
}