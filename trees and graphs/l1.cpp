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
// for(int i =0;i<=n-k;i++){
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

// int main(){
//     queue <int> q;
//     queue <int> q1;
//     queue <int> q2;

//     q.push(5);
//     q.push(10);
//     q.push(2);
//     q.push(4);
//     // q.push(7);
//     // q.push(5);

// int n= q.size();

// for(int i =0;i<n/2;i++){
//     q1.push(q.front());
//     q.pop();
// }
// //spliited half elements to new queue

// for(int i =0;i<n/2;i++){
//     q2.push(q1.front());
//     q2.push(q.front());
//     q1.pop();
//     q.pop();
// }

// while(q2.size()!=0){
//     cout<<q2.front();
//     q2.pop();
// }

// }

int main(){
    int arr[]= {-8,2,3,-6,1};
    int k =2;
    int n = sizeof(arr)/sizeof(arr[0]);
    int result[n-k+1]={0};
    cout<<"size"<<n<<endl;


    for(int i=0;i<=n-k;i++){
        cout<<"outer loop run "<< i<<endl;
        for(int j=i;j<i+k;j++){
            cout<<" inner loop "<<i<<endl;
            if(arr[j]<0){
                result[i]=arr[j];
                break;
            }
        }
    }

    for(int i=0;i<n-k+1;i++){
        cout<<result[i]<<" ";
    }
}