#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>arr(n);
        bool isSorted=true;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(i>0 && arr[i]<arr[i-1])isSorted=false;
        }
        if(k>1 || isSorted)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}