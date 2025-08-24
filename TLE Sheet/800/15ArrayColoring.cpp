#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int total = 0;
        for(int i=0;i<n;i++){
            int d;
            cin>>d;
            total+=d;
        }
        if(total&1)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;      
    }
}