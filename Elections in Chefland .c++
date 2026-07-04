#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int XA, XB, XC;
        cin >> XA >> XB >> XC;

        if (XA > 50)
            cout << "A\n";
        else if (XB > 50)
            cout << "B\n";
        else if (XC > 50)
            cout << "C\n";
        else
            cout << "NOTA\n";
    }

    return 0;
}
