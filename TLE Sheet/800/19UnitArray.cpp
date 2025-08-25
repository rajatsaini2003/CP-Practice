#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        int c1 = 0, cneg = 0;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            if (x == 1) c1++;
            else cneg++;
        }

        int ops = 0;

        if (c1 < cneg) {
            int diff = cneg - c1;
            ops += (diff + 1) / 2; 
            c1 += ops;
            cneg -= ops;
        }

        if (cneg % 2 == 1) {
            ops++;
        }

        cout << ops << endl;
    }
}
