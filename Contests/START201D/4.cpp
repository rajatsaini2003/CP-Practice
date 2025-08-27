#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    
    while (t--) {
        int n; string a;
        cin >> n >> a;
        long long S = 0;
        for (char c : a) if (c == '1') ++S;
        int first = (a.front() == '1');
        int last  = (a.back()  == '1');
        long long ans = 3LL * S - first - last;
        cout << ans << '\n';
    }
    return 0;
}