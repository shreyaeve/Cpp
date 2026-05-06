#include <bits/stdc++.h>
using namespace std;

// int main(){
//     //product of array except self 
//     int arr[]={2,4,6,3,5};
//     int s= sizeof(arr)/ sizeof(arr[0]);
//     int res[s];
//     for(int i=0;i<s;i++){
//         res[i]=1;
//         //res ka har ek ke liye
//         for(int j=0; j<i;j++){
//             res[i]*=arr[j];
//             }
//             //isme if i==j lga ke 0 bhi kar sakte hain 
//             //iterate i=0 se j =0 tak karlo 
//         for(int k =i+1;k<s;k++){
//             res[i]*=arr[k];
            
//             }           
//          }

//          for(int i =0;i<s;i++){
//             cout<<res[i]<< " ";
//          }

//          return 0;
// }

//--------------------------------------to do better than order of n squares, we calculate two arrays where we calculate: 

//  int main(){
//     //product of array except self 
//     int arr[]={2,4,6,3,5};
//     int s= sizeof(arr)/ sizeof(arr[0]);

//     //store left product 
//     int l[s];
//     l[0]=1;
//     for(int i=1;i<s;i++){
//         l[i]=l[i-1]*arr[i-1];
//     }
//      //store right product 
//     int r[s];
//     r[s-1]=1;
//     for(int i=s-2;i>=0;i--){
//         r[i]=r[i+1]*arr[i+1];
        
//     }

    
//     for (int i=0;i<s;i++){
//         //output array 
        
//         cout<<r[i]*l[i]<<" ";
//     }

//     return 0;
// }

//----------------------------

//  int main(){
//     //product of array except self 
//     int arr[]={2,4,6,3,5};
//     int s= sizeof(arr)/ sizeof(arr[0]);
//     int res[s];
//     //count the number of zeros
//     int zero=0;
//     for(int i=0;i<s;i++){
//         if(arr[i]==0){
//             zero++;
//         }
//         res[i]==0;
//     }
//     cout<<"no. of zero"<<zero<<endl;

//     if(zero>1){
//         cout<<"more than one zero"<<endl;
//          for(int i=0;i<s;i++){
//             res[i]==0;
//         }        
//     }

//     else if(zero==1){
//         cout<<"one zero"<<endl;
//       //product of all
//       int pdt =1;
//       for(int i =0;i<s;i++) {
//         if(arr[i]==0){
//             continue;
//         }
//         pdt = pdt* arr[i];
//       }
//       //calculate res using pdt

//       for(int i =0;i<s;i++){
//        if(arr[i]==0){
//         res[i]=pdt;
//        }
//         res[i]=0;
//       }
//       }

//       else {
//         cout<<"no zero"<<endl;
//         int pdt=1;
//         for(int i =0;i<s;i++){
//             pdt=pdt*arr[i];
//         }
//         for(int i =0;i<s;i++){
//             res[i]=pdt/arr[i];
//         }
//       }

//      for(int i =0;i<s;i++){
//            cout<<res[i]<<" ";
//         } 
// return 0;
// }

//--------------------------------------
//slit array into 3 equal sum segements
 int main(){
    //we can keep three pointer 
    int i,j;
    int arr[]={1,2,3,4,5,6,7};
    int s=sizeof(arr)/sizeof(arr[0]);
    //divide arr into 0-i, i+1-j, j+1-s
    i=0;j=1;
    //ensure sum is equal
    
}