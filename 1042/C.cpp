#include <bits/stdc++.h>
using namespace std;

int getEquivalenceClass(int x, int k) {
    int r = x % k;
    if (r == 0) {
        return 0;
    } else if (k % 2 == 0 && r == k / 2) {
        return k / 2;
    } else {
        return min(r, k - r);
    }
}

bool solve() {
    int n, k;
    cin >> n >> k;
    
    vector<int> S(n), T(n);
    for (int i = 0; i < n; i++) {
        cin >> S[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> T[i];
    }
    
    map<int, int> S_count, T_count;
    
    for (int x : S) {
        S_count[getEquivalenceClass(x, k)]++;
    }
    
    for (int x : T) {
        T_count[getEquivalenceClass(x, k)]++;
    }
    
    return S_count == T_count;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        if (solve()) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}
