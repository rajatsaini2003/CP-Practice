#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>ans;
        for(int i=0;i<n;i++){
            int d;
            cin>>d;
            ans.push_back(n+1-d);
        }
        for(auto i:ans)cout<<i<<" ";
        cout<<endl;
    }
}