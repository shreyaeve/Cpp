#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int arr[]={0,1,0,0};
    int l=1;
    int seq=1;
    int n= sizeof(arr)/sizeof(arr[1]);
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1]){
        l++;
        cout<<l<<endl;}
        else{
        
        seq=max(l,seq);
        l=1;  
        cout<<seq<<endl;
        }
       
    }
     
    
    return 0;
}