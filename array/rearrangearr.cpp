// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int arr[]={1,2,2,3,4,4,4,5,5};
    int n=sizeof(arr)/sizeof(arr[1]);
    int i=0,j=1;
    while(j<n){
        //i sorted array mark karega
        //j unsorted
        //agar i!=j then i aur j ko ++ kardo
        if(arr[i]!=arr[j]){
            i++;
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j++;
        }
        //if i==j then j ko ++ kar denge
        if(arr[i]==arr[j]){
            j++;
        }
    }
    
    for( int k=0;k<n;k++){
        cout<<arr[k]<<" ";
    }

    return 0;
}