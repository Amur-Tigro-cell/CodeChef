#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;

        long long stored = 0;
        bool ok = true;

        for (int i = 1; i <= N; i++) {
            int x;
            cin >> x;

            stored += x;

            if (ok) {
                if (stored < K) {
                    cout << "NO " << i << "\n";
                    ok = false;
                } else {
                    stored -= K;
                }
            }
        }

        if (ok)
            cout << "YES\n";
    }

    return 0;
}
