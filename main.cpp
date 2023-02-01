#include<iostream>

using namespace std;

int main(){
    int a,b,n,i;
    cin>>a>>b;
    n=a+b+1;
    char s[n];
    int temp=0;
    for(i=1;i<=n;i++){
            cin>>s[i];
    }
    
    for(i=1;i<=n;i++){
        if(s[i]=='-' && i!=a+1 )
         {
             cout<<"No";
             temp++;
             break;
         }
         else if(s[i]<=48 && s[i]>=57){
             cout<<"No";
             temp++;
             break;
         }
         else if(s[a+1]!='-')
         {
             cout<<"No";
             temp++;
             break;
         }
    }
    if(temp==0){
        cout<<"Yes";
    }
    return 0;
}