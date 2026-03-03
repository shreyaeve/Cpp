


//reverse in groups of k
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int a[]={1,2,5,6,7,3,1,3,4,7,8,9};
    int n =sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++){
    cout<<a[i]<<" ";}
    int k=4;
    int r,l;
    
    
    for(int i=0;i< n/k;i++){
        l=k*i;
        r=k*(i+1)-1;
        while(l<r){
            int temp= a[r];
            a[r]=a[l];
            a[l]=temp;
            l++;
            r--;
        }
        }
         cout<<endl;
    for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
   
    }

    return 0;
}