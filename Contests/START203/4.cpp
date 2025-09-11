#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        int n;
        cin >> n;
        int m = n*(n-1)/2;
        vector<ll> w(m);
        for (int i = 0; i < m; ++i) cin >> w[i];
        sort(w.begin(), w.end()); 

        priority_queue<ll> pq;
        for (int i = 0; i < n; ++i) pq.push(1); 
        ll avail = 0;
        ll ans = 0;
        int used = 0;

        for (int i = 0; i < m && used < n-1; ++i) {
            if (avail > 0) {
                --avail;
            } else {
                ll a = pq.top(); pq.pop();
                ll b = pq.top(); pq.pop();
                ans += w[i];
                ++used;
                avail += a * b - 1;
                pq.push(a + b);
            }
        }

        cout << ans << '\n';
    }
    return 0;
}
