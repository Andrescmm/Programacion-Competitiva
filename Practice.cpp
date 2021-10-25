#include<iostream>
#include<vector>

using namespace std;


long long strangeTable(long long n, long long  m,long long  x){

   vector<long long> table1;
  
   int num = 1;
   for(int i =0;i <= m; i++){
     int temp = num;
    for(int j =0; j<n;j++){
       table1.push_back(temp);
        temp+=m;
     }
     num++;
   }

   //cout<<table1[x-1]<<endl;
   return table1[x-1];
}


int main(){
    int times =0; 
    cin>>times;

    while(times){

      long long n, m,x;
      cin>>n>>m>>x;

      cout<<strangeTable(n, m, x)<<endl;

      times--;
    }
}