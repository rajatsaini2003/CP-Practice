#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        unordered_map<int,int>mp;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            mp[arr[i]]++;
        }
        if(mp.size()>2)cout<<"No"<<endl;
        else if(mp.size()==1)cout<<"Yes"<<endl;
        else {
            auto it=mp.begin();
            int f1=it->second;
            it++;
            int f2=it->second;
            if(abs(f1-f2)>1)cout<<"No"<<endl;
            else cout<<"Yes"<<endl;
        }
        
    }
    return 0;
}