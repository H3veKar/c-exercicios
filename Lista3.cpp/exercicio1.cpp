# include <bits/stdc++.h>
using namespace std;
int main(){
    pair<int,int> a,b,c,d;
  
   cin >>a.first>>a.second>>b.first>>b.second>>c.first>>c.second;
   
   if(a.first==b.first ) 
       d.first = c.first;
   
   else if(a.first==c.first)
       d.first = b.first;
   
   else 
        d.first = a.first;
   
   if(a.second==b.second) 
        d.second = c.second;
        
    else if(a.second==c.second)
        d.second = b.second;
    else 
        d.second = a.second;
    
   cout << d.first<<" "<< d.second;
   return 0;
}