
//worst case complexity of sorting algorithm is O(nlogn)

#include <iostream>
#include <climits>
using namespace std;

int main() {
    // Write C++ code here
    int a[]={2,3,4,2,3,4,4,3,2,4,2,2,3};
    int n =sizeof(a)/sizeof(a[0]);
    int x=0,b=0,c=0;
    int i;
    for(int i=0;i<n;i++){
    cout<<a[i]<<" ";}
    cout<<endl;
    
    for(i =0;i<n;i++){
        
        if (a[i]==2)
        x++;
        else if (a[i]==3)
        b++;
        else if(a[i]==4)
        c++;
        }
    for(i=0;i<x;i++){
        a[i]=2;
    }
    for(i;i<x+b;i++)
    {
        a[i]=3;
    }
    for(i;i<x+b+c;i++){
        a[i]=4;
    }
    
   for(int i=0;i<sizeof(a)/sizeof(a[1]);i++)
    cout<<a[i]<<" ";

    return 0;
}