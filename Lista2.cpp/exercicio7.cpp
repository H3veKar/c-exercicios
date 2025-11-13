
#include <bits/stdc++.h>
using namespace std;

int main()
{
   int s[8],i;
   
   for( i=0;i<8;i++){
       cin>>s[i];
       if(i>0){
            if(s[i]>=s[i-1]){
                
            }
            else{
                cout<<"No";
                return 0;
            }
       }
       if(s[i]>=100 && s[i]<=675 && s[i]%25==0){
   }
      else{
          cout<<"No";
                return 0;
      }
   
 }   
  cout<<("Yes");
 return 0;
}

    