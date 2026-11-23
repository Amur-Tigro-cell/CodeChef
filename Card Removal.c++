#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int freq[11] = {0};
        int maxFreq = 0;

        for (int i = 0; i < N; i++) {
            int x;
            cin >> x;

            freq[x]++;
            maxFreq = max(maxFreq, freq[x]);
        }

        cout << N - maxFreq << '\n';
    }

    return 0;
}
