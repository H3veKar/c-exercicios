#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    for(int j = 0; j < n; j++) {  
        string a;
        cin >> a;
        int t = a.length();
        if(a == "us") {
            cout << "i\n";
            continue;  
        }
        
        for(int i = 0; i < t - 2; i++) {
            cout << a[i];
        }
        
        cout << "i\n";
    }
    
    return 0;
}