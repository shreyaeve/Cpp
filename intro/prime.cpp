#include <iostream>
#include <cmath>
using namespace std;

//our code is not modular, but we can make it modular
int main() {
    // Write C++ code here
    cout<<"prime numbers are"<<endl;
    
    for(int i=2;i<=1000;i++){
        int n=0;
        //yes no check ke liye we can also use boolean
        for(int j =2;j<=sqrt(i);j++){
           if(i%j==0){ //if div then we add it to n
           n++;
           break;}
           
                   }
        if(n==0)
        cout<<i<<endl;
    }

    return 0;