#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        string S;
        cin >> S;

        
        for (int i = 0; i + 1 < N; i += 2) {
            swap(S[i], S[i + 1]);
        }

       
        for (int i = 0; i < N; i++) {
            S[i] = 'z' - (S[i] - 'a');
        }

        cout << S << "\n";
    }

    return 0;
}
