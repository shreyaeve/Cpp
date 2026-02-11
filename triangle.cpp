#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for (int k=1;k<i;k++)
        {
            cout<<"  ";
            //we have 2 spaces to preserve symmetry
        }
        
        for(int j=1;j<=2*(n-i+1)-1;j++){
            cout<< "* ";
        }
        
        cout<<endl;
    }
    return 0;
}