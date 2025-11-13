
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int n, m;
    int n1;
    int contador = 0, cont2 = 0;
    int i, j;
    int b[1000];  
    
    cin >> n >> m;
    int a[m];
    
    for(i = 0; i < m; i++) {
        cin >> n1;
        a[i] = n1;
    }
    
   
    for(i = 1; i <= n; i++) {
        contador = 0;
        
        for(j = 0; j < m; j++) {
            if(a[j] != i) {
                contador++;
            }
        }
        
        if(contador == m) {
            b[cont2] = i;  
            cont2++;
        }
    }
    if(cont2==0){
        cout <<0;
        return 0;
    }
    
    
    cout << cont2 << "\n";
    
    
    for(i = 0; i < cont2; i++) {
        cout << b[i] << " ";
    }
    cout << "\n";
    
    return 0;
}