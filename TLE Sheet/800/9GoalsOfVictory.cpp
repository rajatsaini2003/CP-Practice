#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        int cnt=0;
        cin>>n;
        for(int i=0;i<n-1;i++){
            int d;
            cin>>d;
            cnt+=d;
        }
        if(cnt<0)cout<<abs(cnt)<<endl;
        else cout<<(cnt*-1)<<endl;
    }
}