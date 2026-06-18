#include <bits/stdc++.h>
using namespace std;
/*CODE 1: sliding window? current sum and previous sum
maximum subarray sum  */
// int main(){
// int arr[]={2,6,4,-13,0,4,-5};
// int n= sizeof(arr)/sizeof(arr[0]);
// //max sum subarray
// int maxsum=INT_MIN;

// for (int i=0;i<n;i++){
// int currentsum=0;
//     for(int j=i;j<n;j++){
//         currentsum+=arr[j];
//         // int currentsum=0;
//         // for(int k=i;k<=j;k++){
//         //     currentsum+= arr[k];
            
//         // }
//         if(currentsum>maxsum)
//         maxsum=currentsum;
//         cout<<" maxsum:  "<<maxsum<<endl;
//     }
//     cout<<"final answer:"<<maxsum<<endl;

// }}

// CODE 2:MKADANE'S ALGO!!!!!!!!!!!!

// int main(){
// int arr[]={-2,10,-1,20,-5,-10};
// int n= sizeof(arr)/sizeof(arr[0]);
// //max sum subarray
// int maxsum=INT_MIN;
// int currentsum=0;

// for(int i =0;i<n;i++){
//     currentsum=max(arr[i],(currentsum+arr[i]));
//     cout<< "for  "<<i<<" current sum and arr[i] :"<<arr[i]<<"  :: " << currentsum<<endl;
//     maxsum=max(maxsum, currentsum);
// }




// cout<< maxsum;
// return 0;

// }


//CODE 3: equal odd even sum after removal

// int main(){
//     int arr[]={2,2,2};
//     int n =sizeof(arr)/sizeof(arr[0]);
//     //ans should be 1 
//     int  count =0;
//  // har baar odd aur even ka count change hoga, so you need to calculate it different for each   
// //     for(int i=0;i<n;i+=2){  

// //        sume+=arr[i];
// //     }
// //     cout<<"sum even"<<sume;
// //     for(int i=1;i<n;i+=2){
// //         sumo+=arr[i];
// //     }
// //     cout<<"sum odd"<<sumo<< endl;
// // //flaw 1:sum ko hei edit kar rhe ho jo main value hai
// //     for(int i=0;i<n;i++){

// //         if(i/2==0){
// //             sume-=arr[i];
// //         }
// //         else{
// //             sumo-=arr[i];
// //         }

// //         if(sume==sumo){
// //             count++;
// //         }
// //     }

//     for(int i=0;i<n;i++){
//         int sume=0, sumo=0, ind=0;
//         for(int j=0;j<n;j++){
//             //indices would change so we need to take care of that 
//             if(i==j){
//                 continue;
//             }
//             if(ind%2==0){
//                 sume+=arr[i];
//             }
//             else{
//             sumo+=arr[i];
//             }
//         ind++;
//         }

//         if(sume==sumo){
//                 count++;
//         }

//     }

//     cout<<count<< "  ans";


// }