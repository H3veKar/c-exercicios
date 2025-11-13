#include <iostream>
using namespace std;

int main()
{
    int digitos, digito_atual;
    int t, i, j, k, m;
    int produto = 1, pm = 0;
    cin >> t;
    
    for (i = 0; i < t; i++) { // quantidade de casos de testes
        cin >> digitos;
        int d[digitos];
        
        for (j = 0; j < digitos; j++) {
            cin >> digito_atual;
            d[j] = digito_atual;
            pm = 0;
        }
        
        for (m = 0; m < digitos; m++) {
            d[m] = d[m] + 1;
            produto = 1;
            
            for (k = 0; k < digitos; k++) {
                produto = produto * d[k];
            }
            
            d[m] -= 1;
            if (produto > pm) pm = produto;
        }
        
        cout << pm << endl;
    }
    
    return 0;
}