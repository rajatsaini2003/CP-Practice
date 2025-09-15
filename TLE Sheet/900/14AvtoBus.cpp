#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        long long int n,mini=2e18,maxi=0;
        cin>>n;
        if(n%2!=0 || n<4) cout<<-1<<endl;
        else{
            if(n%6==0){
                mini=n/6;  
                if(n/6==1) maxi=1;
            } 
            if(n%4==0){
                maxi=n/4;
                if(n/4==1) mini=1;
            } 
            if(n%6==4 || n%6==2) mini=n/6+1;
            if(n%4==2) maxi=n/4;
            cout<<mini<<" "<<maxi<<endl;
        }

    }
}