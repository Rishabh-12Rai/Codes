#include <bits/stdc++.h>

using namespace std;

int main()
{   int n,i,count=0,temp=0,x=1;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    while(x!=0){
    for(i=0;i<n;i++){
        if(a[i]%2!=0){
            count++;
        }
    }
    if(count==0){
        temp++;
        for(i=0;i<n;i++){
            a[i]=a[i]/2;
            
        }
    }
    else if(count!=0){
        x=0;
    }
    }
    cout<<temp;
    return 0;
}