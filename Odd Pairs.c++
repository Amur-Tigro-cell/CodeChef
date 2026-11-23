#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        long long N;
        cin >> N;

        long long odd = (N + 1) / 2;
        long long even = N / 2;

        long long ans = 2 * odd * even;

        cout << ans << '\n';
    }

    return 0;
}
