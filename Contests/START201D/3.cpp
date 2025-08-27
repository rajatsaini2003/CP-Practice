#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    bool flag=true;
	    int cnt=0;
	    for(int i=0;i<n;i++){
	        if(s[i]=='1')cnt++;
	        else {
	            if(cnt==1||cnt==2){
	                flag=false;
	            }
	            cnt=0;
	        }
	    }
	    if(cnt==1||cnt==2){
	       flag=false;
	     }
	    if(flag){
	        cout<<"YES"<<endl;
	    }else cout<<"NO"<<endl;
	}
}
