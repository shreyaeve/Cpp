 // Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>
using namespace std;



int main() {
    int n=5;
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
    // Write C++ code here
    cout<<sum<<endl;
    
    

    return 0;
}