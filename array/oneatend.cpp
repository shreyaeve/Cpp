#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int a[]={1,2,5,6,7,3,1,3,4,7};
    int pos;
    int n=sizeof(a)/sizeof(a[0]);
    
    for(int i=0;i<n;i++){
        if(a[i]!=1){
            a[pos]=a[i];
            pos++;
        }
    }
    while (pos<n){
        a[pos]=1;
        pos++;
    }
    for(int i=0;i<n;i++)
   cout<<a[i]<<endl;

    return 0;
}

//code to print all the one's at the end of the array 