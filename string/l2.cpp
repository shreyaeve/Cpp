//check if two given string of lowercase letters   determine if they are anagrams i.e. same character with same freq

// eg: samr number of a and h and things 
//can maintain 2 array jinme i can store all

// isme usne sorting lgakar bhi kara hai 
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1 = "heelptal";
    string s2 = "hleqetal";
    int l1=s1.length();
    int l2=s2.length();
    
    int arr[26]={0}; 
    if(l1!=l2){
        cout<<"not anagrams length is different";
        return 0;
    }
    else{

    for(int i=0;i<l1;i++){
        arr[s1[i] - 97]++;
        arr[s2[i] - 97]--;
    }
    int flag=0;
    for(int i =0; i<26; i++){
        cout<<arr[i]<<endl;
    }
    for(int i =0; i<26; i++){
        if(arr[i]!=0){
            flag =1;
           break; 
        }
        
    }
if (flag==0)
    cout<<"yes it is anagram";
else
cout <<" not an anagram by case 2";

return 0;
    }
    // a=97
     // we can make one array which holds all the characters at spaces
     // ek baar increment, ek baar decrement

     return 0;

}


//--------------------------------------------------