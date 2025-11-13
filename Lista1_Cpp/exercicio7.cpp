#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

    int count = 0;
    int n = S.length();

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int k = 2 * j - i;

            if (k < n) {
                if (S[i] == 'A' && S[j] == 'B' && S[k] == 'C') {
                    count++;
                }
            }
        }
    }

    cout << count << endl;

    return 0;
}