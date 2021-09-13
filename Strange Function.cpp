#include<iostream>
using namespace std;

#define int long long

const int modulo = 1e9 + 7;

int gcd(int x, int y) {
	while(y){int r = x%y; x = y; y = r;}
  return x;
}

int lcm(int x, int y) {
	return (x / gcd(x, y)) * y;
}
 

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
    
    cout<<"ans = ";
    return res % modulo;
}


// Strange Function 2.0
int sFunction(){
        int n;
        cin >> n;
        
        int lcm = 1;
        int ans = 0;
 
        for (int i = 2; ; i++) {
            int bef = n / lcm;
            lcm = lcm * i / gcd(lcm, i);
            int aft = n / lcm;
 
            ans += (bef - aft) * i;
            ans %= modulo;
 
            if (lcm > n) break;
        }

     cout<<"ans = ";
     return ans;
}
  
signed main(){
	int tc = 1;
	cin >> tc;
	while (tc--) {
         
        cout<<strangeFunction()<<endl;
        //cout<<sFunction()<<endl;
	}

}
