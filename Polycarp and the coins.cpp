#include<iostream>

using namespace std;

void polyCoins(){
  int n;
  cin>>n;

  int c1 = n/3;
  int c2 = n/3;
  
  if(n%3 == 1){
      c1++;
  }

  if(n%3 == 2){
      c2++;
  }

   cout<<c1<<" "<<c2<<endl;
   //cout<<"1 burle = "<<c1<<" , "<<"2 burles = "<<c2<<endl;
}



int main(){

	int tc = 1;
	cin >> tc;
	while (tc--) {
		polyCoins();
	}

}