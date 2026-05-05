//check if two given string of lowercase letters   determine if they are anagrams i.e. same character with same freq

// eg: samr number of a and h and things 
//can maintain 2 array jinme i can store all

// isme usne sorting lgakar bhi kara hai 
#include <bits/stdc++.h>
using namespace std;

// int main(){
//     string s1 = "heelptal";
//     string s2 = "hleqetal";
//     int l1=s1.length();
//     int l2=s2.length();
    
//     int arr[26]={0}; 
//     if(l1!=l2){
//         cout<<"not anagrams length is different";
//         return 0;
//     }
//     else{

//     for(int i=0;i<l1;i++){
//         arr[s1[i] - 97]++;
//         arr[s2[i] - 97]--;
//     }
//     int flag=0;
//     for(int i =0; i<26; i++){
//         cout<<arr[i]<<endl;
//     }
//     for(int i =0; i<26; i++){
//         if(arr[i]!=0){
//             flag =1;
//            break; 
//         }
        
//     }
// if (flag==0)
//     cout<<"yes it is anagram";
// else
// cout <<" not an anagram by case 2";

// return 0;
//     }
//     // a=97
//      // we can make one array which holds all the characters at spaces
//      // ek baar increment, ek baar decrement

//      return 0;

// }


//--------------------------------------------------panagram, contain all lowercase letter of english alphabet
 
// int main(){
//     string s ="abcdefghijklmnopqrstuvxwyz";
//     int l= s.length();
//     //all letters of alphabets
//     int arr[26]={0};
// int f=0;
//     for(int i =0; i<l;i++ ){
//         arr[s[i]-'a']++;
//          }
    
//          for(int i=0; i<26;i++){
//             if (arr[i]==0){
//                 f=1;
//                 break;
//             }
//          }
//          cout<<f<<endl;
//          if (f==1){
//             cout<<"not a panagram";
//          }
//          else
//          cout<<"yes a panagram";

//          return 0;
//         }
    

// ----------------------------------------- fizzbuzz, given integer n, for every psotive integer i<=n print fizzbuzz if i div by 3 and 5, fizz if i div by 3, buzz if i div by 5, i as a string if none of condition is true 

int main(){
    int n=15;
    for(int i =0;i<=n;i++){
        if( i%3==0 && i%5==0){
            cout<<"FIzzBUss"<<endl;
        }
        else if (i%3==0){
            cout<<"Fizz"<<endl;
        }
        else if (i%5==0){
            cout<<"Buzz"<<endl;
        }
        else
        cout<<to_string(i)<<endl;
        

        // if(i%3==0){
        //     cout<<"Fizz";
        //     }
        // if(i%5==0){
        //     cout<<"Buzz";
        // }

    }
}