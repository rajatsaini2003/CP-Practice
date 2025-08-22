#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int>b,c;
        int mx=*max_element(a.begin(),a.end());
        for(auto i:a){
            if(i==mx)c.push_back(i);
            else b.push_back(i);
        }
        if(b.size()==0)cout<<-1<<endl;
        else{

            cout<<b.size()<<" "<<c.size()<<endl;
            for(auto i:b)cout<<i<<" ";
            cout<<endl;
            for(auto i:c)cout<<i<<" ";
            cout<<endl;
        }
    }
}