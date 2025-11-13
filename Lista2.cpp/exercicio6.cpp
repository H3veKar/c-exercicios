
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,res=1;
    int i=0, ia=1;
     cin>> n;
     while(1){
         i = i+1;
        res = res*i;
        if(res == n){
            cout<<i;
            return 0;
        }
     }

    
}