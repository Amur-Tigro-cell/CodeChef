#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        string s;
        cin >> s;

        int ans = 0;

        for (int i = 0; i + 1 < s.length(); i++) {
            if (s[i] == '<' && s[i + 1] == '>') {
                ans++;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
