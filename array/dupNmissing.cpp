#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    // Write C++ code here
    int arr[]={4,3,6,2,1,1};
    int n=size(arr);
    //we can use the frequency array;
    int freq[n+1];
    for(int i=0;i<n+1;i++){
        freq[i]=0;
    }
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    
    for(int i=1;i<n+1;i++){
        if(freq[i]==0){
            cout<<"missing number "<<i<<endl;
        }
        if(freq[i]==2){
            cout<<"duplicate number "<<i<<endl;
        }
    }
    
}