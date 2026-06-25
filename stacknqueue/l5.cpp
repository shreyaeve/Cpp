#include <bits/stdc++.h>
using namespace std;


// void reverse(queue <int> q){
//  stack <int> s;
//  while( q.empty()==0){
//     s.push(q.front());
//     q.pop();
//  }
//  while( s.empty()==0){
//     q.push(s.top());
//     s.pop();
//  } 
// }

void display( queue <int> q){
    while(q.empty()==0){
        cout<< q.front() ;
        q.pop();
    }
}
// int main(){
//     queue <int> q;
//     stack <int> s;
//     q.push(1);
//     q.push(2);
//     q.push(3);
//     display(q);
//     cout<<endl;
//     // reverse(q);
//     while( q.empty()==0){
//     s.push(q.front());
//     q.pop();
//  }
//  while( s.empty()==0){
//     q.push(s.top());
//     s.pop();
//  }
//     display(q);
// }

// without using stack

void reversequeue(queue <int> &q){
    //base condition
if (q.size() ==0){
    return;
}
int f= q.front();
q.pop();

reversequeue(q);
q.push(f);
}



// int main(){
//     queue <int> q;
    
//     q.push(1);
//     q.push(2);
//     q.push(3);
//     display(q);
//     cout<<endl;
// // recursion uses stack without explicitly
//     reversequeue(q); //pass by address 
    
//     display(q);


// }

//QUESTION 2: greversing the first k elements of a queue
// int main(){
//       queue <int> q;
//       int k =3;
    
//     q.push(1);
//     q.push(2);
//     q.push(3);
//     q.push(4);
//     q.push(5);
//     display(q);
//     cout<<endl;  
//     stack <int> s;
//     //k on stack
//     for(int i =0;i<k;i++){
//         s.push(q.front());
//         q.pop();
//     }
//     //add k elements to queue
//     while(!s.empty()){
//         q.push(s.top());
//         s.pop();
//     }
//     //n-k front front of queue to end of queue
//     int j = q.size()-k;
//     for(int i=0;i<j;i++){
//         q.push(q.front());
//         q.pop();
//     }

//     display(q);

// }


//  code 3: maximum depth of nested parentesis in a string

// int main(){
//     stack <char> st;
//     string s = "(x)) (((Y))";
//     int n= s.length();
//     int maximum=-1;


//     for(int i=0;i<n;i++){
//         for (char ch : s) {
//         if (ch == '(') {
//             st.push(ch);
//             maximum = max(maximum, (int)st.size());
//         }
//         else if (ch == ')') {
//             if (!st.empty()) {
//                 st.pop();
//             } else {
//                 cout << -1;
//                 return 0;
//             }
//         }}}

    

//     if(!st.empty()){
//         cout<<-1;
//     }
//     else{
//         cout<<maximum;
//     }
// }

//code 3: check redundant brackets 

// int main(){
//     stack <char> st;
//     string s ="(a+(b)/c)";
//     int n= s.length();
//     //bracket reduandant when  st ke top aur jo aa rha hai usme issue hai
//     for(char ch: s){
//         if(ch==')'){
//             bool flag= true;
//             while (!st.empty() && st.top()!='('){
//                 char top= st.top();
//                 if(top == '+' || top=='-'||top=='*'||top=='/'){
//                     flag= false;
//                 }
               
//                 st.pop();
//             }

//             if(flag ==true){
//                 cout<<"true";
//                 return true;
//             }
//         }
//         else 
//         st.push(ch);

        
//     }
// cout<<"false";
// return false;
// }

//code 4: check stack using stack
//given a stack of integers, sort it in ascending order using another stack 

int main(){
    stack <int> st;
    st.push(4);
    st.push(2);
    st.push(5);
    st.push(3);
    st.push(7);
    st.push(8);
    st.push(5);
    st.push(1);

    

}