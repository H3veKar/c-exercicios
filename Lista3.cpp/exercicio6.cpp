#include <bits/stdc++.h>
using namespace std;

int main() {
    int tamanho;
    cin >> tamanho;

    char letras[tamanho];
    for (int i = 0; i < tamanho; i++) {
        cin >> letras[i];
    }

    int diferentes = tamanho;

    for (int i = 0; i < tamanho - 1; i++) {
        if (letras[i] == letras[i + 1]) {
            diferentes--;
        }
    }

    cout << diferentes << "\n";

    return 0;
}