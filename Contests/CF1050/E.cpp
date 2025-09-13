#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if(!(cin >> t)) return 0;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i = 0; i < n; ++i) cin >> a[i];

        vector<int> total(n+1, 0);
        for(int x : a) ++total[x];

        bool possible = true;
        for(int v = 1; v <= n; ++v){
            if(total[v] % k != 0){
                possible = false;
                break;
            }
        }
        if(!possible){
            cout << 0 << "\n";
            continue;
        }

        vector<int> cap(n+1, 0);
        for(int v = 1; v <= n; ++v) if(total[v] > 0) cap[v] = total[v] / k;

        vector<int> cur(n+1, 0);
        ll ans = 0;
        int r = 0;
        for(int l = 0; l < n; ++l){
            while(r < n && cur[a[r]] + 1 <= cap[a[r]]){
                ++cur[a[r]];
                ++r;
            }
            ans += (r - l);
            --cur[a[l]];
        }

        cout << ans << "\n";
    }
    return 0;
}
