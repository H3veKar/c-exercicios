#include <bits/stdc++.h>
using namespace std;
int main(){
   int k,horas,minutos;
   cin>> k;
   horas = k/60;
   minutos =  k -(horas*60);
   horas = 21+horas;
   if(minutos<=9){
    cout<<horas<<":0"<<minutos;
   }
   else{
    cout<<horas<<":"<<minutos;
   }
   
    return 0;
}

