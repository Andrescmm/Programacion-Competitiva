#include<iostream>

using namespace std;

//a*l+b
int maxCostDele(){

  int n,a,b;
  cin>>n>>a>>b;

  string s;
  cin>>s;

  if (b>=0){
     return(a*n+b*n);
  }
  else{
    int t = 0;
     for(int i = 1; i<n; i++){
       if(s[i] != s[i-1]){
         t++;
       }
     }
     t++;

    return a*n+((t/2)+1)*b;
  }
  return 0;
}


int main(){
  
	int tc = 1;
	cin >> tc;
	while (tc--) {
		cout<<maxCostDele()<<endl;
	}
   
}