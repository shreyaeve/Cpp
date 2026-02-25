// // Online C++ compiler to run C++ program online
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[10];
//     int arrr[10];
//     int i;
    
//     for(i=0;i<10;i++)
//     cin>>arr[i];
    
//     for(i=0;i<10;i++){
//         arrr[i]=arr[9-i];
//     }
    
//      for(i=0;i<10;i++)
//    {  cout<<arrr[i]<<" ";
//    }
    

//     return 0;
// }


// reverse without additional array 

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int temp;
    int i;
    
    for(i=0;i<10;i++)
    cin>>arr[i];
    // without using an array...
    // sum store karlo array ka? fir minus karte ch... not gonna work 
    for(i=0 ;i<10/2;i++){
        temp= arr[i];
       arr[i]=arr[10-1-i];
       arr[10-1-i]=temp;
    }
    
     for(i=0;i<10;i++)
   {  cout<<arr[i]<<" ";
   }
    

    return 0;
}

//we can also use something like 2 pointer defining 
// l and r where l=0 and r =n-1 and then we can swap arr[l] and arr[r] and then l++ and r-- until l<r. This will also reverse the array without using an additional array.