#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a;
    cin>>b;
    int maxi= max(a,b);
    int mini=min(a,b);
    int i=1;
    while(true)
    { 
        cout<<"hi from loop"<<endl;
        if(maxi*i%mini==0){
            cout<<"lcm is"<<maxi*i;
            break;
        }
        i++;
    }
}