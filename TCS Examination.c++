#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T; // Number of test cases

    while (T--) {
        int dsaD, tocD, dmD;
        int dsaS, tocS, dmS;

        // Scores of Dragon
        cin >> dsaD >> tocD >> dmD;
        // Scores of Sloth
        cin >> dsaS >> tocS >> dmS;

        int totalD = dsaD + tocD + dmD;
        int totalS = dsaS + tocS + dmS;

        if (totalD > totalS) {
            cout << "Dragon\n";
        } else if (totalS > totalD) {
            cout << "Sloth\n";
        } else { // Totals are equal
            if (dsaD > dsaS) {
                cout << "Dragon\n";
            } else if (dsaS > dsaD) {
                cout << "Sloth\n";
            } else { // DSA scores equal
                if (tocD > tocS) {
                    cout << "Dragon\n";
                } else if (tocS > tocD) {
                    cout << "Sloth\n";
                } else {
                    cout << "Tie\n"; // Everything equal
                }
            }
        }
    }

    return 0;
}
