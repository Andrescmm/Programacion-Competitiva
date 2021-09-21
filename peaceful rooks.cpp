#include<iostream>

using namespace std;

const int N = 1e5 + 10;

int t, m, n;
int p[N];

int find(int x) {
    if (x != p[x]) p[x] = find(p[x]);
    return p[x];
}

int rook(){
    int res = 0;
    cin >> n >> m;
    
    for (int i = 1; i <= n; i++) p[i] = i;
    
    for (int i = 1; i <= m; i++) {
        int x, y;
        cin >> x >> y;
        if (x == y) continue;
        else {
            int px = find(x), py = find(y);
            if (px == py) {
                res += 2;
            } else {
                res += 1;
                p[x] = y;
            }
        }
    }
    
    return res;
}

int main() {
    int tc = 1;
    cin >> tc;
    while (tc--) {
        cout<<rook()<<endl;
    }
    
    
}



