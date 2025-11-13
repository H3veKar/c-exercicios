# include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int cont=0;
    cin>>s;
    int tamanho = s.size();
    if(tamanho%2!=0){
             cout<<"No";
             return 0; 
    }
    for(int i=0;i<s.size();i=i+2){
        if(s[i]=='h' && s[i+1]=='i'){
            
        }
        else{
             cout<<"No";
             return 0;
        }
    }
    
        cout<<"Yes";
    
   return 0;
}