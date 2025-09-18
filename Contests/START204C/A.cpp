#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        ll total=n*k;
        ll hr=total/60;
        ll min=total%60;
        cout<<hr<<" "<<min<<endl;
        
    }
}