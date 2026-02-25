#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={2,3,4,8,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int max1=arr[0];
    int max_=arr[0];
    //find max
    for(int i=1;i<n;i++){
        if(max1<arr[i]){
            max1=arr[i];
        }}
    //find second max
    for(int i=0;i<n;i++){
        if(max_!=max1 && max_<arr[i]){
            max_=arr[i];
        }

        }

    cout<<"max is:"<<max1<<endl<<"second max is:"<<max_<<endl;}

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[]={2,3,4,8,1};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int maximum=arr[0];
//     int secondMax=INT_MIN;
//     //find max
//     for(int i=1;i<n;i++){
//         if(maximum<arr[i]){
//             maximum=arr[i];
//         }}
//     //find second max
//     for(int i=0;i<n;i++){
//         if(arr[i]!=maximum && arr[i]>secondMax){
//             secondMax=arr[i];
//         }
//     }
//     cout<<"max is:"<<maximum<<endl<<"second max is:"<<secondMax<<endl;
// }

// if(arr[i]!=maximum && arr[i]>secondMax) which correctly identifies any value that isn't the maximum and exceeds the current second maximum. This ensures we properly track the second largest element in the array.