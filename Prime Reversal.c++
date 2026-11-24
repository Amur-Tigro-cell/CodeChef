
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string a, b;
        cin >> a >> b;

        int countA = 0;
        int countB = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] == '1') countA++;
            if (b[i] == '1') countB++;
        }

        if (countA == countB) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }

    return 0;
}
