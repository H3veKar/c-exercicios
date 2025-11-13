# include <bits/stdc++.h>
using namespace std;
int main(){
   string a;
   int m,n1=0,n2=0,n,i;
   cin >>a;
   n = 48;
   for(i=0;i<=9;i++){
      if(a[0]==n){
        n1 =i;
      }
      if(a[2]==n){
        n2=i;
      }
      n =n+1;
   }
      m = n1*n2;
      cout <<m;
   return 0;
}
