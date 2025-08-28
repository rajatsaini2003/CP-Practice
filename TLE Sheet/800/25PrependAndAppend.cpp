#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n;
        cin>>s;
        int i=0,j=n-1;
        while(i<j && s[i]!=s[j]){
            i++;
            j--;
        }
        cout<<j-i+1<<endl;
    }
}