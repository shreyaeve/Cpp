#include <bits/stdc++.h>
using namespace std;

//sum-pair closest to target
// int main(){
//     int arr[]={5,6};

//     int n=sizeof(arr)/sizeof(arr[0]);
    
    
//     int ans[2]={0};
    
//     if(n<=2){
//         cout<< "small arr";
//         return 0;
//     }
//     int target=10;
//     int test=INT_MAX;
//     int a,b;
    
//     for(int i =0;i< n-1;i++){
//         // a=arr[i];
//         for(int j=i+1;j<n;j++){
//             int sum=abs(target-(arr[i]+arr[j]));
//             cout<<sum<<" iteration start "<< i<<endl;
//             // b=arr[j];
//            if(sum<test){
//             cout<<" i entered sum is less condition"<<endl;
//                 test=sum;
//                 a=arr[i];
//                 b=arr[j];
//                 cout<< a <<" "<<b<<endl;
//             }
//             else if(test==sum){
//             cout<<" i entered same condition"<<endl;
//                 if(abs(a-b)>abs(arr[i]-arr[j])){
//                     continue;
//                 }
//                 else{
//                     a=arr[i];
//                     b=arr[j];
//                 }
//                 cout<< a <<" "<<b<<endl;
//             }
            
//             else
//             continue;
//         }

//     }
//     cout<< a <<" "<<b<<endl;
//     if(a>b){
//         ans[0]=b;
//         ans[1]=a;
//     }
//     else{
//         ans[0]=a;
//         ans[1]=b;
//     }

//     cout<< ans[0]<<" "<<ans[1];

// }

//OPTIMIZED APPROACH
//binary search

//sort karne ke baad binary seach ki advantage le sakte hai to search the solution 
// int main(){
//     int a[]={5,1,8,9,3};
//     int n=sizeof(a)/sizeof(a[0]);
//     int target = 11;
//     sort(a,a+n);
//     int pair_sum=0;
    
//     int res[2]={0,0};
//     int min_diff=INT_MAX;
    //target-sum should be min, sum maximum
    // sum=a+b; a fix; b ma

    // a+b should be close to target sum
    // a is fix, sum-a = b;
    
    //     int l=0;
    //     int r=n-1;
    //     while(l<r){
    //         pair_sum=a[l]+a[r];
    //         if(abs(pair_sum-target)<min_diff){
    //             min_diff=abs(pair_sum-target);
    //             res[0]=a[l];
    //             res[1]=a[r];
    //             cout<<"updated value"<<endl;
    //         }
    //         //equal case nhi aayega kyuki ham leke hei larget diff chal rhe hain
    //        if(pair_sum<target){
    //         l++;
    //        }
    //        else if(pair_sum>target){
    //         r--;
    //        }
    //        else{
    //         break;
    //        }


    //     }
    //     cout<<"answer"<<res[0]<<" "<<res[1];


    // }

   //sentence palindrome 

//    int main(){
//     string s="Too hot to HOOT";
//     string s1="";
    
//     for(char ch:s){
//         if(isalnum(ch)){
            
//             s1+=tolower(ch);
            
//         }

//     }
//     cout<<s1<<endl;
//     string s2="";

//     //reverse(s2.begin(),s2.end());

//     int n=s1.length();
//     for(int i=n-1;i>=0;i--){
//             s2+=s1[i] ;   
//     }
//     cout<<s2<<endl;
//     if(s2==s1){
//         cout<<"true";
//     }
//     else{
//         cout<<"false";
//     }
//    }

int main(){
    int a[]={8,16,12,16,4,0};
    int k=4;
    int n=sizeof(a)/sizeof(a[0]);
    // sort(a,a+n);
    // int l=0,r=n-1;
    int count=0;
    for(int i =0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(abs(a[i]-a[j])==k){
                count++;
            }
        }
    }
    cout<<count;
}