#include <iostream>
#include <string>
using namespace std;
#define ff(i,a,b) for(int i=a;i<b;++i)
#define ci(n) cin>>n;

// https://codeforces.com/problemset/problem/231/A
int main() {
  int n;

  ci(n);
  int res = 0, i;
  ff(i,0,n) {
    int x, y, z;
    ci(x); ci(y); ci(z);
    if (x + y + z >= 2) {
      ++res;
    }
  }

  cout << res;
  return 0;
}
