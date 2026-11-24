
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, a;
        cin >> n >> a;

        int uninfected = n - a;

        cout << min(a, uninfected) << endl;
    }

    return 0;
}
