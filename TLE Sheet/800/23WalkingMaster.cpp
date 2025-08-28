#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int x,y,nx,ny,dx,dy;
        cin>>x>>y>>nx>>ny;
        dx=nx-x;
        dy=ny-y;
        if(dy<0||dx>dy){
            cout<<-1<<endl;
        }else{
            x+=dy;
            cout<<dy+abs(nx-x)<<endl;
        }
    }
}