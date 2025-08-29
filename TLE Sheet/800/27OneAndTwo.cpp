#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        int cnt=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==2)cnt++;
        }
        if(cnt&1)cout<<-1<<endl;
        else{
            int cnt2=0;
            for(int i=0;i<n;i++){
                if(arr[i]==2)cnt2++;
                if(cnt2==cnt/2){
                    cout<<i+1<<endl;
                    break;
                }
            }
        }

    }
}