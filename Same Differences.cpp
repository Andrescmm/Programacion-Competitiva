#include<iostream>
#include<map>
using namespace std;


int same(){
  int n;
  cin>>n;

  // the array but with an structures
  map <int,int > a;
  int total = 0;

  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    x -= i;
    total += a[x];
    a[x]++;
  }
 map<int, int>::iterator itr;
    cout << "\nThe map       ";
    cout << "\tKEY\tELEMENT\n";
    for (itr = a.begin(); itr != a.end(); ++itr) {
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }
    cout << endl;
  return total;
}





int main(){
  
	int tc = 1;
	cin >> tc;
	while (tc--) {
		cout<<same()<<endl;
	}
}