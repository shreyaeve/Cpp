// //the maximun product of two different numbers in the array 
// #include <iostream>
// #include <climits>
// using namespace std;

// int main() {
//     // Write C++ code here
//     int a[]={5, 4, 6, 1, 3};
//     int n =sizeof(a)/sizeof(a[0]);
//     for(int i=0;i<n;i++){
//     cout<<a[i]<<" ";}
//     cout<<endl;
//     int max=0;
    
//     for(int i=0;i< n-1;i++){
//        for(int j=i+1;j<n;j++)
//        {    //just checking how many times the loop is running 
//            cout<<a[i]<<"*"<<a[j]<<"="<<endl;
//            if(a[i]*a[j]>max){
              
//                max=a[i]*a[j];
//                 cout<<a[i]<<"*"<<a[j]<<"="<<max;
//                  cout<<endl;  
//            }
//        }
           
//         }
   
//     cout<<max;

//     return 0;
// }
// //order of n^2 iski complexity hai 

// #include <iostream>
// #include <climits>
// using namespace std;

// int main() {
//     // Write C++ code here
//     int a[]={5,4,3,2,1};
//     int n =sizeof(a)/sizeof(a[0]);
//     for(int i=0;i<n;i++){
//     cout<<a[i]<<" ";}
//     cout<<endl;
//     int m=INT_MIN, x=INT_MIN,y=INT_MIN, u=INT_MAX,v=INT_MIN;
    
//     for(int i=0;i< n;i++){
//     if(a[i]>x){
//         y=x;
//         x=a[i];
//         cout<<"x ="<<x<<" :y= "<<y<<endl;
//     }
//     else if(a[i]>y){
//         y=a[i];
//         cout<<"x ="<<x<<" :y= "<<y<<endl;
//     }
//     else if(a[i]<u){
//         v=u;
//         u=a[i];
//         cout<<"u ="<<u<<" :v= "<<v<<endl;
//     }
// //all this elseif generates an error kyuki max hoga toh min tak voh check hei nhi karega and then error aane lagegi toh isiliye condition checking dono ki daalo 
// //alsi int_max*int_max gave me 1 in the case kyuki, truncation to 32 bits
//     else if (a[i]<v){
//         v=a[i];
//         cout<<"u ="<<u<<" :v= "<<v<<endl;
//     }
    
           
//         }
//     m=max(x*y,u*v); 
    
   
//     cout<<m;

//     return 0;
// }
// //sort karke bhi kar sakte hain, min max nikal liya maine toh and then kar liya

 
#include <iostream>
#include <climits>
using namespace std;

int main() {
    // Write C++ code here
    int a[]={-4,5};
    int n =sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++){
    cout<<a[i]<<" ";}
    cout<<endl;
    int m=INT_MIN, x=INT_MIN,y=INT_MIN, u=INT_MAX,v=INT_MAX;
    
    for(int i=0;i< n;i++){
    if(a[i]>x){
        y=x;
        x=a[i];
        cout<<"x ="<<x<<" :y= "<<y<<endl;
    }
    else if(a[i]>y){
        y=a[i];
        cout<<"x ="<<x<<" :y= "<<y<<endl;
    }
//yahan se else hta diya hamne so it run just fine now 

    if(a[i]<u){
        v=u;
        u=a[i];
        cout<<"u ="<<u<<" :v= "<<v<<endl;
    }
    else if (a[i]<v){
        v=a[i];
        cout<<"u ="<<u<<" :v= "<<v<<endl;
    }
    
           
        }
        cout<<"x*y="<<x*y<<"  u*v="<<u*v<<endl;
    m=max(x*y,u*v); 
    
   
    cout<<m;

    return 0;}