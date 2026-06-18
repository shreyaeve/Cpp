#include <bits/stdc++.h>
using namespace std;

//CODE 1: replace all occurence of substring 
/* s1  m with s2 k in s n */
//ihave done this with the array version of things 
// int main(){
//     string s="abababa",s1 ="aba", s2="a", result="";
//    int  n=s.size(), m= s1.size(), k=s2.size(),j=0;

//    for(int i=0;i<n;i++){
//     //accomodate out of bound
//     if(i+m<=n){
//     for(j=0;j<m;j++){

//         //s[i] never changes
//         if(s[i+j]!=s1[j]) break;    
//     }
//     if(j==m){
//          result+=s2;
//          //incrementing too much 
//          i+=m-1;
//          }
//          else
//          result+=s[i];}
//     }
//     cout<<result<<" answer";
//    }

// WE CAN ALSO USE THE STRING VERSION (SIMPLE USE SUBSTRINGS )

// int main(){
//      string s="abababa",s1 ="aba", s2="a", result="";
//      int  n=s.size(), m= s1.size(), k=s2.size(),i=0;

//      while(i<n)
//      {
//         if(s.substr(i,m)==s1)
//         {
//             result=result+s2;
//             i=i+m;
//         }
//         else{
//             result+=s[i];
//             i++;
//         }

//      }
     
// cout<<result;
// return 0;

// }

/*CODE 2: An array of positive numbers, calculate the number of possible contiguous subarr pdt lesser than given number k
*/

// int main()
// {
//     int arr[]={1,2,3,4},k=10;
//     int ans=0;
//     int n= sizeof(arr)/sizeof(arr[0]);
//     for(int i =0;i<n;i++){
//         int curmul=1;
//         for(int j=i;j<n;j++){
//             curmul*=arr[j];
//             if(curmul<k){
//                 ans++;
//             }
//             else
//             break;
//         }
//     } cout<<"ans: "<<ans;
// }

//optimized code :: SLIDING WINDOW
// int main()
// {
//     int arr[]={2,3,4},k=10;
//     int ans=0;
//     int n= sizeof(arr)/sizeof(arr[0]);
//     int currentpdt=1;
//     for(int i=0;i<n;i++)
//     {
//         //agar input mei 1 nhi hoga toh mera code nhi chalega 
//         if(arr[i]<k) ans++;
//         currentpdt*=arr[i];
//         cout<< currentpdt<<"   ";
//         //ending ke liye my arr only tracks [c] and [prev, c], considers only two cases, edge cases fail karta hai. if there is other there will be a gap in it {2 , 3, 4} 3,4 count nhi kar paayega
//         if(currentpdt<k) ans++;
//         //galat hai kyuki jahan 1 repeat hoga it wont see, pehle step pe 2 count kar rha hai 

//         /* 2 5 3 , k= 10
//          output: 2,5,3
//          mine: 2, 2, 5, 3
//         */
//         else currentpdt=arr[i];
//     }

//     cout<<endl<<"answer: "<<ans;
// }


// int main(){
//       int arr[]={1,2,3,4},k=10;
//     int ans=0;
//     int n= sizeof(arr)/sizeof(arr[0]);
//     int s=0,e=0, prod=1;
//     while(e<n){

//         prod=prod*arr[e];
//         while(prod>=k&& s<e){
//             //shrinking the window 
//             prod=prod/arr[s];
//             s++;
//         }
//         if(prod<k)
//         {   //subarray ending at a particular index 
//             //3|2,3|1,2,3| 
//             int win=(e-s)+1;
//             cout<<"window size:"<<win<<endl;
//             ans+=win;
//         }     
//         e++;   
//     }
//     cout<< ans <<endl;
// }

/*CODE 3: LONGEST MOUNTAIN SUBARRAY*/

// int main()
// {
//     //increasing decreasing sequence is accepted 
//     int arr[]={2,2,2};
//     // int ans=0;
//     // int count=0;
//     int n= sizeof(arr)/sizeof(arr[0]);
//     // int i=1;
//     // while(i<n-1){
//     //     if(arr[i]<arr[i+1]&& arr[i]<arr[i-1]){
//     //         cout<<" start of mountain"<<arr[i]<<endl;
//     //         while(!(arr[i]<arr[i+1])&& !(arr[i]>arr[i-1])){
//     //             count++;
//     //             i++;
//     //         }
//     //     }
//     //     else 
//     //     {
//     //         ans=max(ans,count);
//     //         count=0;
//     //         i++;
//     //     }

//     //  }
//     //  cout<<"amswer:"<< ans;

//      int ans = 0;
//     int i = 0;

//     while (i < n - 1)
//     {
//         // Find a left bottom (start of an increasing sequence)
//         if (arr[i] < arr[i + 1])
//         {
//             int left = i;

//             // Climb up
//             while (i < n - 1 && arr[i] < arr[i + 1])
//             {
//                 i++;
//             }

//             // Check if a descending part exists
//             if (i < n - 1 && arr[i] > arr[i + 1])
//             {
//                 // Descend
//                 while (i < n - 1 && arr[i] > arr[i + 1])
//                 {
//                     i++;
//                 }

//                 int right = i;

//                 int length = right - left + 1;

//                 if (length > ans)
//                 {
//                     ans = length;
//                 }
//             }
//         }
//         else
//         {
//             i++;
//         }
//     }

//     cout<<"Longest Mountain Length ="<< ans;

//     return 0;

// }


//HW AND BETTER CODE 
//FINDING THE PEAK ELEMENT

int main(){
    int a[]={4,3,5,7,9,6,3,2,8};
    int n= sizeof(a)/sizeof(a[0]);
    
    if(n<3){
        cout<< 0;
        return 0;
    }

    int c=0;
    for(int i = 1;i<n-1;){
        // finding the peak at i 
        if(a[i]>a[i-1]&& a[i]>a[i+1]){
            int j=i;
            int count =0;

            while(a[i]>a[i+1] && i<n-1){
                count++;
                i++;
            }
            while(a[j]>a[j-1]&&j>0){
                count++;
                j--;
            }
            c=max(c,count);
            
        }

        else{
            i++;
        }

    }
    if(c>0){
        cout<< c+1<<endl; //to include the peak also
        return 0;
    }
    return c;
}