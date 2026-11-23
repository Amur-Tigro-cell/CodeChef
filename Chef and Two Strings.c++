#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        string s1, s2;
        cin >> s1 >> s2;

        int minimum = 0;
        int maximum = 0;

        for (int i = 0; i < s1.length(); i++) {
            if (s1[i] == '?' || s2[i] == '?') {
                maximum++;
            }
            else if (s1[i] != s2[i]) {
                minimum++;
                maximum++;
            }
        }

        cout << minimum << " " << maximum << '\n';
    }

    return 0;
}
