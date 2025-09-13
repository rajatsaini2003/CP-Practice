#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n; cin >> n;
        vector<ll> odds;
        ll sumEven = 0;
        for (int i = 0; i < n; ++i) {
            ll x; cin >> x;
            if (x % 2) odds.push_back(x);
            else sumEven += x;
        }

        if (odds.empty()) {
            cout << 0 << "\n";
            continue;
        }

        sort(odds.rbegin(), odds.rend());  
        int k = (int)((odds.size() + 1) / 2);     
        ll sto = 0;
        for (int i = 0; i < k; ++i) sto += odds[i];

        cout << (sumEven + sto) << "\n";
    }
    return 0;
}
