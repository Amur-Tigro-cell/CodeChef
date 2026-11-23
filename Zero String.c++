#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        string S;
        cin >> S;

        int zero = 0, one = 0;

        for (char c : S) {
            if (c == '0') {
                zero++;
            } else {
                one++;
            }
        }

        cout << min(one, zero + 1) << '\n';
    }

    return 0;
}
