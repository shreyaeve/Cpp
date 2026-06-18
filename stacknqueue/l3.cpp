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
int main(){
    string s="{[([({{[]}})])]}";
    int n= sizeof(s)/sizeof(s[0]);
    stack <char> bracket;
    int i;
    bracket.push('&');
    for(i=0;i<n;i++){
        if(s[i] == '{' || s[i]=='[' || s[i]=='('){
            bracket.push(s[i]);
        }
        else if( bracket.top() == '{' && s[i] =='}')
        bracket.pop();
        else if( bracket.top() == '[' && s[i] ==']')
        bracket.pop();
        else if( bracket.top() == '(' && s[i] ==')')
        bracket.pop();
        else 
        break;

    }
    if(bracket.top()=='&'){
        cout<<" balanced";
    }
    else
    cout<<"not balanced";

}