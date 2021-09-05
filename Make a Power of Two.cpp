#include<iostream>

using namespace std;

 int powerOfTwo(){
     int n;
     cin>>n;

 if( !(n & (n-1)) ){
     cout<<"is power of two"<<endl;
   }

   return 0;
 }


int main(){
    
    cout<<powerOfTwo()<<endl;

    return 0;
}