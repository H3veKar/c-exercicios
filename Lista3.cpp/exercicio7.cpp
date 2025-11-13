#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,md =0;
    cin >>n;
    int a[n], b[n];
    pair<int,int>p[n];

    for (int i =0;i<n;i++) {
        cin >> a[i];
    }
        
    for (int i =0;i<n;i++){
        cin >> b[i];
    }
    for(int i=0;i<n;i++) {
        p[i].first=a[i]-b[i];
        p[i].second =i;
    }
    sort(p, p+n);
    int s =0;
    for (int i=n-1;i>=0;i--) {
        if (p[i].first > 0) {
            s = s+ p[i].first;
        }
    }
    cout <<s<<"\n";
    return 0;
}