# include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, i, j, a, b, f;
    cin >>n>>m;
    char s[55][55],t[55][55];

    for(i =0; i<n;i++){
        cin >> s[i];
    }
    
    for(i =0; i<m;i++){
        cin >> t[i];
    }
    
    for(a =0;a<=n-m;a++) {
        for(b =0;b<=n-m;b++) {
            f =1;
            for(i=0;i<m;i++) {
                for(j=0;j<m;j++) {
                    if(s[a+i][b+j]!= t[i][j]) {
                        f =0;
                        i =m;
                        break;
                    }
                }
            }
            if(f>=1) {
                cout<< a + 1 << " "<< b + 1 <<"\n";
                return 0;
            }
        }
    }

    return 0;
}