# include <bits/stdc++.h>
using namespace std;
int main(){
   
   int n,n_anterior;
   int i;
   cin>> n;
   int v[n];
   cin>>v[0];
    n_anterior= v[0];
   for(i=1;i<n;i++){
       cin>>v[i];
       if(v[i]>n_anterior){
           
       }
       else{
           cout<<"No";
           return 0;
       }
       n_anterior = v[i];
   }
   cout<<"Yes";
    
   return 0;
}