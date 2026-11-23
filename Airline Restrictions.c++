#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int A, B, C, D, E;
        cin >> A >> B >> C >> D >> E;

        if ((A <= E && B + C <= D) ||
            (B <= E && A + C <= D) ||
            (C <= E && A + B <= D)) {

            cout << "YES" << '\n';
        }
        else {
            cout << "NO" << '\n';
        }
    }

    return 0;
}
