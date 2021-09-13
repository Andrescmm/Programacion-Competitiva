#include<iostream>
#include<math.h>

using namespace std;

// f(i)
int f(int i){  
  int ans = 0;
  int j = 1;

  while(i%j == 0){
      j++;
      ans++;     
  }
    ans++;
  return ans;
}

//Strange Function
int strangeFunction(){
    int n;
    cin>>n;
   
    int res = 0;

    for(int i = 1; i<=n; i++){
          res += f(i);
    }

    return res;
}

int main(){
	int tc = 1;
	cin >> tc;
	while (tc--) {
        cout<<strangeFunction()<<endl;
	}
}