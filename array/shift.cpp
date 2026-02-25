
#include <iostream>
using namespace std;

int main() {
   //left rotate array by 1 space
   int a[]={5 , 8, 3 , 0, 14 };
   int n= sizeof(a)/sizeof(a[0]);
   int i;
    
    int temp;
    
    temp=a[0];
    for(i=0;i<n;i++){
    a[i]=a[i+1];    
    }
    a[i]=temp;
    
    for(i=0;i<n;i++)
    cout<<a[i]<<" ";
    
    return 0;
}

//we can also write a code to shift to d spaces 
//we run a loop to first dstore the d values of the array in a temp array
//we then shift the values of the array to the left by d spaces and then we copy the values from the temp array to the end of the original array.

//one more way is to repeat the shift spaces code one by one for d till it becomes zero
// so we would have the whole array shifted n times 


//  int a[]={4,6,2,1,8};
//    int d =3;
//    int n= sizeof(a)/sizeof(a[0]);
//    int i;
//    int temp[d];//
   
//    for(i=0;i<d;i++){
//        temp[i]=a[i];
//    }
    
//     for(i=0;i<n-d;i++){
//     a[i]=a[i+d];   
//      }
//      int j=0;
//      for(i;i<n;i++){
//          a[i]=temp[j];
//          j++;
//      }
    

// or you can simple take an additional array and copy the values of the original array to the new array in the shifted order.
