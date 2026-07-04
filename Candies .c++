#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        unordered_map<int, int> freq;
        bool ok = true;

        for (int i = 0; i < 2 * N; i++) {
            int x;
            cin >> x;
            freq[x]++;
            if (freq[x] > 2)
                ok = false;
        }

        cout << (ok ? "Yes" : "No") << "\n";
    }

    return 0;
}
