
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int q;
    string a;
    
    cin >> q;
    while (q--) {
        cin >> a;
        for (int i=a.size()-1;i>= 0;i--) {
            char c = a[i];
            if (c == 'p') cout << 'q';
            else if (c == 'q') cout << 'p';
            else cout << c;
        }
        cout <<"\n";
    }
    return 0;
}