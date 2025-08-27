#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    if(b%2)b--;
	    
	        int wtr=min(b,2*a);
	        cout<<wtr+wtr/2<<endl;
	    
	}
}
