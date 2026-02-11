// armstrong numbers between start to end 
#include <bits/stdc++.h>
using namespace std;
int main(){
    int start, end, temp,n;
    //armstrong no between start and end
    //armstrong: if n digits then sum of each digit to power n is the number
    cin>>start;
    cin>>end;
    for(int i=start; i<=end;i++){
    n=0; 
    temp= i;
      while(temp!=0){
          n++;
          temp/=10;
      }
      temp=i;
      int armstrong=0;
      while(temp!=0){
          armstrong+= pow(temp%10,n);
          temp/=10;
      }
      if(armstrong==i)
      cout<<i<<endl;
      }
    return 0;
}
