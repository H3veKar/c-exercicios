#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string palavras[50];
    int tamanhos[50];

    for (int i = 0; i < n; i++) {
        cin >> palavras[i];

        tamanhos[i] = 0;
        while (palavras[i][tamanhos[i]] != '\0') {
            tamanhos[i]++;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (tamanhos[i] > tamanhos[j]) {
                int aux = tamanhos[i];
                tamanhos[i] = tamanhos[j];
                tamanhos[j] = aux;

                string temp = palavras[i];
                palavras[i] = palavras[j];
                palavras[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        int j = 0;
        while (palavras[i][j] != '\0') {
            cout << palavras[i][j];
            j++;
        }
    }

    cout <<"\n";
    return 0;
}