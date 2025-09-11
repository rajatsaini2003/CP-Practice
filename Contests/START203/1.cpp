#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    
        int a,b;
        cin>>a>>b;
        if(a<b){
            cout<<a*5+(b-a)*2<<endl;
        }else{
            cout<<b*5+(a-b)<<endl;
        }
        
    
}