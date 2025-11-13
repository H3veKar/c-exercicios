# include <bits/stdc++.h>
using namespace std;
int main(){
   int a,b,c;
   cin >>a;
   
   if(a<=400 && a>=1 && 400%a==0){
    c = 400/a; 
   }
   else{
     c=-1;
   }
   cout <<c;
   return 0;
}
