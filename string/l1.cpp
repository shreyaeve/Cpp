// #include <iostream>
// using namespace std;
// int main() {
//     //print characters at even indices 
//     string s= "hi my name is shreya gupta";
//     int n = s.size();
//     for(int i =0;i<n;i=i+2){
//         cout<<i<<"-";
//         cout<<s[i]<<" ";
//     }

// ------------------------------------------------------------------
// #include <iostream>
// using namespace std;
// int main() {
    
//     //print yes if string is palindrome no if not
//     string s ="astsa";
//     int n = s.size();
//     cout<<n<<endl;
//     int i =0, j=n-1;
//     int f=0;
//     while(i<j){
//         if( s[i]==s[j]){
//             i++;
//             j--;
//         }
//         else
//         {   cout<<i<<"-"<<s[i]<<" "<<j<<"-"<<s[j]<<endl;
//             f=1;
//             break;
//         }
//     }
    
//     if( f==1)
//     cout<<"not a palindrome";
//     else
//     cout<<"yes a palindrome";

// --------------------------------------------------------------

// #include <iostream>
// using namespace std;
// int main() {
//     //reversing the string 
//     //part1 you can use extra space 
//      string s="love you more";
//      for(char c:s){
//          cout<<c<<" ";
//      }
//      int n= s.size();
//      cout<<endl;
//      char c;
//      int i=0;
//      int j=n-1;
//      //varna i can also store whole string 
//      string rev="";
//      for(int i=0;i<n ;i++){
//          rev+=s[n-1-i];
//      }
    
//         cout<<rev<<endl;
     
//      while(i<j){
//          c=s[i];
//          s[i]=s[j];
//          s[j]= c;
//          i++;
//          j--;
//          }
         
//    cout<<s;


// --------------------------------------------------------------------

// #include <iostream>
// using namespace std;
// int main() {
//     //find the first non repeating char in the given string, string of lower case character. If all char repeating then print invalid onto the screen
    
//     string s="racecars";
//     int n=s.size();
//     int flag=0;
//     //non nrepeating maang raha hai
    
//     for(int i =0;i<n;i++){
//         flag=0;
//         //ek char fix kiya 
//         for(int j =i+1;j<n;j++){
//             //uske aage wale se check kara liya 
//             //agar match hoga toh break kardo
//            if(s[i]==s[j]){
//            flag = 1;
//             break;
//             }
//             // nhi hoga toh theek hai
//             }
//             if(flag ==1){
//                 // cout<<"repeating character "<<s[i]<<endl;
//             }
//             else{
//             cout<< "first non repeating char is " <<s[i]<<endl;
//             break;
//         }
        
//         //loophole thT when it will check the character in second half, and uske aage non repeating nhi honge then the code will break 
//     }
// ----------
// //fixed
// #include <iostream>
// using namespace std;
// int main() {
//     //find the first non repeating char in the given string, string of lower case character. If all char repeating then print invalid onto the screen
    
//     string s="breadboard";
//     int n=s.size();
//     int flag=0;
//     //non nrepeating maang raha hai
    
//     for(int i =0;i<n;i++){
//         flag=0;
//         //ek char fix kiya 
//         for(int j =0;j<n;j++){
//             //uske aage wale se check kara liya 
//             //agar match hoga toh break kardo
//            if( i!=j && s[i]==s[j]){
//            flag = 1;
//             break;
//             }
//             // nhi hoga toh theek hai
//             }
//             if(flag ==1){
//                 cout<<"repeating character "<<s[i]<<endl;
//             }
//             else{
//             cout<< "first non repeating char is " <<s[i]<<endl;
//             return 0;
//             break;
//         }
//     }
        
//     cout<<"invalid";
//     return 0;
// }

// ---------------

// // Online C++ compiler to run C++ program online
// #include <iostream>
// using namespace std;
// int main() {
//     string s="aditya likes to code";
//     cout<<s<<endl;
//     string r="";
//     int n= s.length();
//     int l= s.length();
//     for(int i=l-1;i>=0;i--){
//         if( s[i]== ' '){
//             for(int j=i+1;j<n;j++){
//                 r+= s[j];
//             }
//             r+= " ";
//             n=i;
//         }
//         }
//         for(int i=0;i<n;i++){  
//           r+= s[i];}
//     cout<<r;

//     return 0;
// }
    