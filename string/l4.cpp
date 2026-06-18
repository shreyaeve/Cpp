//string has only 0s and 1s 2s, substring with equal no of 0 and 1 and 2 

#include <bits/stdc++.h>
using namespace std;
// int main(){
// string str="01020210";
// int ans=0;
// int lcount=0;
// int jcount=0;
// int s = str.length();
// for (int i=0;i<s;i++){
//     // cout<<"iloop"<<endl;
//  //string min length will be 3
//  for(int j=i;j<s;j++){
//     jcount++;
//     // cout<<"j loop"<<endl;
//     int c0=0, c1=0, c2=0;

//For every new value of j, you start counting from scratch. 

//     for(int k=i;k<=j;k++){
//         lcount++;
//         if(str[k]=='0') c0++;
//         else if (str[k]=='1') c1++;
//         else if (str[k]=='2') c2++;

//     }

//     if(c0==c1&&c1==c2 &&c0>0){
//         ans++;
//         cout<< str.substr(i,j-i+1)<<endl;
//     }


//  } 
//  }
//  cout<<"loop runs: "<<lcount<<endl;
//  cout<<"loop runs: "<<jcount<<endl;

// }


/***************************** */

// int main(){
//     string str="01020210";
//     int s= str.size();

//     for(int i=0;i<s;i++){
//         int c0=0,c1=0,c2=0;
//         for(int j=i;j<s;j++){
//             if (str[j]=='0') c0++;
//             if (str[j]=='1') c1++;
//             if (str[j]=='2') c2++;

//             if( c0==c1 && c0==c2 &&c0>0){
//                 for(int k=i;k<=j;k++){
//                     cout<< str[k]<< " ";
//                 }
//                 cout<< endl;
//             }
//         }
//     }
// }


/*reaarange array elements by size, alternate negative positive 
start with positive
zero is positive */

 //do pinter, plus=positive, minus=negative

//  int main(){
//     int arr[]={ 1,2,3,-4,-1,4};
    
//     //op: 1,-4,2,-1,3,4
//     int n =sizeof(arr)/sizeof(arr[0]);
//     //relative order change nhi karna 
//    int p=0,q=0;

// int positive[n];
// int negative[n];

// for(int i=0;i<n;i++)
// {
//     if(arr[i]>=0)
//         positive[p++] = arr[i];
//     else
//         negative[q++] = arr[i];
// }

// int i=0,j=0,k=0;

// while(i<p && j<q)
// {
//     arr[k++] = positive[i++];
//     arr[k++] = negative[j++];
// }

// while(i<p)
// {
//     arr[k++] = positive[i++];
// }

// while(j<q)
// {
//     arr[k++] = negative[j++];
// }

// for(int x=0;x<n;x++){
//    cout<< arr[x]<<"   ";
// }
// }

int main(){
    int lower= 10, upper= 50;
    int arr[]={14,15,20,30,31,45};
    int n=sizeof(arr)/sizeof(arr[1]);
    int p=0;
    for(int i =0;i<n;i++){
     cout<< lower <<" "<<arr[i]-1<<" ";
     while(arr[i+1]-arr[i]==1){
        i++;
     }
     lower=arr[i]+1;
     
    
    }
    cout<<arr[n-1]+1<<" "<<upper;

}
