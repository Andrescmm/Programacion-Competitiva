#include <iostream>
using namespace std;

int operations(){

  int a = 0; int b = 0;

  int c, d;
	cin >> c >> d;

   if (c==0 and d==0){
      return 0;
  }
  if (c == d){
      return 1;
  }
  // If the sum is odd the problem have no solution
  if((c+d)&1){
      return -1;
  }
  return 2;
}

int main(){

  cout<<"Hello World!"<<endl;
	int tc = 1;
	cin >> tc;
	while (tc--) {
		cout<<operations()<<endl;
	}
   
 return 0;
}