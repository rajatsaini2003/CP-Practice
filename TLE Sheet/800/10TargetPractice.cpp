#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int ans=0;
        for(int r=0;r<10;r++){
            for(int c=0;c<10;c++){
                char ch;
                cin>>ch;
                if(ch=='X'){
                    if(r==0||c==0||r==9||c==9)ans+=1;
                    else if(r==1||c==1||r==8||c==8)ans+=2;
                    else if(r==2||c==2||r==7||c==7)ans+=3;
                    else if(r==3||c==3||r==6||c==6)ans+=4;
                    else ans+=5;
                }
            }
        }
        cout<<ans<<endl;
    }
}