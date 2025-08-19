#include<bits/stdc++.h>
using namespace std;
bool check(const string &a, const string &b){
    if(a.size()<b.size())return false;
    for(int i=0;i<a.size()-b.size()+1;i++){
        if(a.substr(i,b.size())==b)return true;
    }
    return false;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string a,b;
        cin>>a;
        cin>>b;
        int count=0;
        string s0=a;
        string s1=s0+s0;
        string s2=s1+s1;
        string s3=s2+s2;
        string s4=s3+s3;
        string s5=s4+s4;
        if(check(s0,b))cout<<0<<endl;
        else if(check(s1,b))cout<<1<<endl;
        else if(check(s2,b))cout<<2<<endl;
        else if(check(s3,b))cout<<3<<endl;
        else if(check(s4,b))cout<<4<<endl;
        else if(check(s5,b))cout<<5<<endl;
        else cout<<-1<<endl;
    }
}