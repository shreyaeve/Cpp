// /third smallest element in array
// #include <iostream>
// using namespace std;

// int main() {
//     // Write C++ code here
//     int a[]={4,5,7,2,3,9,-10};
//     int n =sizeof(a)/sizeof(a[0]);
//     for(int i=0;i<n;i++){
//     cout<<a[i]<<" ";}
//     int small=a[0], smaller=a[0], smallest=a[0];
// // problem here with the assigning of the initial values
    
    
//     for(int i=0;i< n;i++){
//        if(a[i]<smallest){
//            small=smaller;
//            smaller=smallest;
//            smallest=a[i];
//        }
//        else if(a[i]<smaller && a[i]>smallest ){
//            small=smaller;
//            smaller=a[i];
//        }
//        else if(a[i]<small && a[i]>smaller){ 
//            small=a[i];
//        }
//         }
     
//      cout<<endl;  
   
//     cout<<small<< " "<<smaller<<" "<< smallest<<" ";

//     return 0;
// }

#include <iostream>
#include <climits>
using namespace std;

int main() {
    // Write C++ code here
    int a[]={-1, 0, -2};
    int n =sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++){
    cout<<a[i]<<" ";}
    int small=INT_MAX, smaller=INT_MAX, smallest=INT_MAX;
    
    
    for(int i=0;i< n;i++){
       if(a[i]<smallest){
           small=smaller;
           smaller=smallest;
           smallest=a[i];
       }

// we donot exactly need to write && wali conditions 
       else if(a[i]<smaller && a[i]>smallest ){
           small=smaller;
           smaller=a[i];
       }
       else if(a[i]<small && a[i]>smaller){ 
           small=a[i];
       }
        }
     
     cout<<endl;  
   
    cout<<small<< " "<<smaller<<" "<< smallest<<" ";

    return 0;
}