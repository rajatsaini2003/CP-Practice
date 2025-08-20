#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
        int d;
        cin>>d;
        mini=min(mini,abs(d));
    }
    cout<<mini<<endl;
}