//i love writing a code which is self explanatory and tells me exactly what all is happening in the code 
//array as a number and we add 1 to it
#include <iostream>
#include <climits>
using namespace std;

int main() {
    // Write C++ code here
    int a[]={2,3,5};
    int n =sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++){
    cout<<a[i]<<" ";}
    cout<<endl;
    int c=1;
    for(int i =n-1;i>=0;i--){
        cout<<"array number:"<<a[i]<<endl;
        if(a[i]==9){
            a[i]=0;
            c=1;
            }
            
        else{
        a[i]=a[i]+c;
        //mai array ki uss location pe 1 hei toh add karna chah rhi hun, ye 7 kyu ho ja raha hai
        c=0;    
	break;
        }
//one break can reduce the length of the code so much kyuki we only need to check the last bits, and also we would not need to worry about the carry here in this case 
        cout<<"array update:"<<a[i]<<endl;
        }
   for(int i=0;i<sizeof(a)/sizeof(a[1]);i++)
    cout<<a[i]<<" ";

    return 0;
}

// we can also simply sort it, par uski complexity nlogn hogi so we have to write a code which is better than that 
//i think meri wale ki complexity n hai
