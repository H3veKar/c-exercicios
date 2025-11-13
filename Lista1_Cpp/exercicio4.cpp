#include <bits/stdc++.h>
using namespace std;
int main(){
    int e;
    cin>>e;
    if((e%4!=0)||(e%100==0 && e%400!=0))         
        cout<<"365";
    else if((e%4==0 && e%100!=0)||(e%400==0))    
        cout<<"366";
    
    return 0;
}
