#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] ={2,3,4,8,1};
    int min=arr[0];
    int n= sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    cout <<"minimum is:"<<min;

}