
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int pos1 = -1, posN = -1;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;

            if (x == 1) {
                pos1 = i;
            }

            if (x == n) {
                posN = i;
            }
        }

        int ans = pos1 + (n - 1 - posN);

        if (pos1 > posN) {
            ans--;
        }

        cout << ans << '\n';
    }

    return 0;
}
