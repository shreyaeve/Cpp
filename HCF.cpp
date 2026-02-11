#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,hcf;
    cin>>a;
    cin>>b;
    int minimum=min(a,b);
    for(int i=minimum;i>=1;i--)
    {
        cout<<i<<endl;
        if(a%i==0 && b%i==0){
        hcf=i;
        break;}
    }
    cout<<"the hcf is= " << hcf<<endl;
    return 0;
}