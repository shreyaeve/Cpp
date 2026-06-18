#include <bits/stdc++.h>
using namespace std;

//sum of subarray : optimized 
//tc: O(n)
// int main(){
//     int a[]= {1,4,5};
//     int n= sizeof(a)/sizeof(a[0]);
    
//    int sum=0;
//    //we add the number of times an element will occur in the subarrays 
   
//    for(int i =0;i<n;i++){
//     sum = sum + a[i]*(i+1)*(n-i);
//     cout<<a[i]<<(i+1)<<(n-i)<<endl;
//    }
//    cout<<" total subarray sum :"<< sum;
// }

//CODE 3: valid parentheses
// int main(){
//     string s="{{{}}}";
//     int n= s.length();

//     stack <char> bracket;
//     int i;
//     cout<<"length of string : "<< n<<endl;
//     bracket.push('&');
//     for(i=0;i<n;i++){
//         if(s[i] == '{' || s[i]=='[' || s[i]=='('){
//             bracket.push(s[i]);
//         }
//         else if( bracket.top() == '{' && s[i] =='}') //i added an initial character, else stack.empty() condition is also used to endure we donot check the top element, it gives an error
//         bracket.pop();
//         else if( bracket.top() == '[' && s[i] ==']')
//         bracket.pop();
//         else if( bracket.top() == '(' && s[i] ==')')
//         bracket.pop();
//         else {
//             cout<<"i am breaking at: " << i<<endl<<"stack stop: "<< bracket.top()<<endl;

//         break;
//         }

//     }
//     if(bracket.top()=='&' && i==n){
//         cout<<" balanced";
//     }
//     else
//     cout<<"not balanced";

// }