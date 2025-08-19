#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        bool found=false;
        for(int i=0;i<n;i++){
            int z;
            cin>>z;
            if(z==k)found=true;
        }
        if(found)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}