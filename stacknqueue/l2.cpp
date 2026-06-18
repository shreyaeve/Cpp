#include <bits/stdc++.h>
using namespace std;
/*
create a realistic example of stack of strings
use the push, pop, top, size and empty functions in this example 
*/
// int main(){
    //way to create stack
    
//     stack<int> st;
//     st.push(2);
//     st.push(1);
//     st.push(4);
//     st.push(5); 
//     cout<< st.top()<<endl ;
//     st.pop(); //does not return, but only removes the top element
//     cout<< st.top()<<endl;
//     st.push(10);
//     int t =st.top();
//     cout<< t<<endl;
//     cout<<st.empty()<<endl; //return 0 if stack not empty
//     cout<<"size of stack : "<<st.size()<<endl;

// }

// int main(){
//     stack<string> hotel;
//     hotel.push("shiv");
//     hotel.push("ansh");
//     hotel.push("puja");
//     cout<<"last person to join: "<<hotel.top()<<endl;
//     cout<<"total people in hotel : "<<hotel.size()<<endl;
//     hotel.pop();
//     cout<<" remaining person: "<<hotel.top()<<endl;
//     cout<<" is hotel empty: "<<hotel.empty()<<endl;

// }

//queue
// void display(queue <int> q){
//     cout<<"starting queue "<<q.front()<<endl;
//     cout<<"ending of queue "<<q.back()<<endl;
//     cout<<"size of queue is "<<q.size()<<endl;
//     while(q.empty() ==0){
//         cout<<q.front()<<"  "<<endl;
//         q.pop();
//     }
    
// }

// int  main(){
//     queue <int> num;
//     num.push(5);
//     num.push(3);
//     num.push(6);
//     num.push(7);
//     num.front()=10;
//     num.back()=88;
//     display(num);

// }

//CODE 3: compute sum of all the subarrays

int main(){
    int arr[]={1,4,5};
    int n= sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    // for(int i =0;i<n;i++){
    //     for(int j=i;j<n;j++){
    //         for(int k=i;k<=j;k++){
    //             cout<<arr[k]<<" ";
    //             sum=sum+arr[k];
    //         }
    //         //we can also solve this is 2 loops only
    //     }
    // }


    for(int i=0;i<n;i++){
        int current=0;
        for(int j=i;j<n;j++){
            current+=arr[j];
            sum+=current;

        }
    }
    cout<<"sum of all the subarryas is "<< sum<<endl;
}