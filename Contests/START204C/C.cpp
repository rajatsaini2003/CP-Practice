#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N, M;
        cin >> N >> M;
        vector<int> A(N);
        unordered_map<int,int> mp;
        ll sum = 0;
        for (int i = 0; i < N; i++) {
            cin >> A[i];
            sum += A[i];
            int k = (M - A[i]) % M;
            mp[k]++;
        }
        ll ans = sum;
        for (int k = 1; k < M; k++) {
            sum += N;
            if (mp.count(k)) sum -=  mp[k] * M;
            ans = min(ans, sum);
        }
        cout << ans << endl;
    }
}
