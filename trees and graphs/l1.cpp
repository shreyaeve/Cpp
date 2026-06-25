#include <bits/stdc++.h>
using namespace std;

// class Node{
//     public :
//     int data;
//     vector <Node *> children; 
//     Node(int x){
//         data=x;
//     }
// }; 

//flipping bits with k window
//objective change all 0 to 1

// int main(){
// int k =2;
// int arr[]={1,1,0,0,0,1,1,0,1,1,1};
// int n=sizeof(arr)/sizeof(arr[0]);
// int count=0;
// for(int i =0;i<n-k;i++){
//     if(arr[i]==0){
//         cout<<"if accepted, enter the loop "<<k<< "times"<<endl;
//         for(int j=i;j<i+k;j++){
//             cout<<"changing ";
//             arr[j]^=1;
//             // cout<<arr[i]<<" position :"<<j<<endl;
//         }
//         cout<<endl<<"after using change"<<endl;
//           for(int i1=0;i1<n;i1++){
//                 cout<<arr[i1]<<" ";
//             }
//         count++;
//     }
//     else
//     continue;
// }


// for(int i=n-k;i<n;i++){
//     if (arr[i]==0){
//         cout <<endl<<"impossible"<<endl;
//         for(int i1=0;i1<n;i1++){
//     cout<<arr[i1]<<" ";
// }
//         return 1;
//     }
// }

// cout<<endl<<count;
// }



//flipping all bits, 
// if(n%k!=0){
//     cout<<"impossible";
//     return -1;
// }
// else{
//     for(int i =0;i<n;i=i+k){
//         for(int j=0;j<k;j++){
//             if(arr[j+i]==0){
//                 arr[j+i]=1;
//             }
//             else{
//                 arr[j+i]=0;
//             }
//         }
//         count++;
//     }

