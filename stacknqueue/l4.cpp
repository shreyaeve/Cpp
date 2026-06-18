#include <bits/stdc++.h>
using namespace std;

//reverse a string using stack, can use extra space 
// int main(){
//     stack <char> stk;
//     string str ="goodmorning",ans="";
//     int n= str.length();
//     for(int i =0; i<n;i++){
//         stk.push(str[i]);
//     }
//     for(int i =0;i<n;i++){
//         ans+=stk.top();
//         stk.pop();
//     }

//     cout<<ans<<endl;

// }

//CODE 2: delete middle element of a stack 
void display(stack <char> s){
    int n = s.size();
    for(int i =0;i<n;i++){
        cout<<s.top();
        s.pop();
    }

}


// int main(){
//     stack <int> stk;
//     stack <int> stk2;
//     stk.push(10);
//     stk.push(20);
//     stk.push(30);
//     stk.push(40);
//     stk.push(50);
//     int n = stk.size();
//     for(int i = 0; i<n/2;i++){
//         stk2.push(stk.top());
//         stk.pop();
//     }
//     stk.pop();
//     for(int i=0;i<n/2;i++){
//         stk.push(stk2.top());
//         stk2.pop();
//     }

//     display(stk);
// }

//printing the reverse of individual words 

// int main(){
//     string s ="hello world";
//     int n= s.length();
//     //olleh dlrowd

//     stack <char> stk;
    

//     for(int i=0;i<n;i++){
//         if(s[i]==' '){
//             while(!stk.empty())
//             {
//                 cout<< stk.top();
//                 stk.pop();
//             }
//             cout<<' ';
//         }
//         else 
//             stk.push(s[i]) ;
//         }

//         while(!stk.empty()){
//             cout<<stk.top();
//             stk.pop();
//         }
    

// }

//code 3:remove all duplicate adjacent elements

// int main(){
//     string str="azxxzy";
//     int n=str.length();
//     stack <char> stk;
    
//     for(int i=0;i<n;i++){
//         if(stk.size()>0 && stk.top()==str[i]){
//             stk.pop();
//         }
//         else{
//             stk.push(str[i]);
//         }
//     }
//     string res="";
//     while(stk.size()>0){
//         res= stk.top()+res;
//         stk.pop();
//     }

//     cout<<res;

// }

int main(){
    string s1="equ#al";
    string s2="e#qu#ual";
    int n1= s1.length();
    int n2=s2.length();

    stack <char> stk;
    int i=n1-1;
    while(i>=0){
        if(s1[i]=='#'){
            i--;
            continue;
        }
        stk.push(s1[i]);
        i--;
    }
    display(stk);
    cout<<endl;

    i=0;
    while(i<n2){
        cout<<i<<endl;
        if(s2[i]=='#'){
            i++;
            continue;
        }
        else 
        {

            if(stk.top()==s2[i]){
                stk.pop();
                i++;
            }
            else
            {
                cout<<" no "<< stk.top()<< i;
                return 0;
            }
        }
    }

    if( stk.empty()){
        cout<<"yes";
    }

}