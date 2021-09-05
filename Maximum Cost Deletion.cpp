#include<iostream>

using namespace std;


int maxCostDele(){

  int n,a,b;
  cin>>n>>a>>b;

  string s;
  cin>>s;

  if (b>=0){
     return(a*n+b*n);
  }
  



}


int main(){
  
	int tc = 1;
	cin >> tc;
	while (tc--) {
		cout<<maxCostDele()<<endl;
	}
   
}