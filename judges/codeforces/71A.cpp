#include <iostream>
#include <string>
using namespace std;
#define ci(n) cin>>n;
#define l(s) s.size();
#define ff(i,a,b) for(int i=a;i<b;i++)

// https://codeforces.com/problemset/problem/71/A://codeforces.com/problemset/problem/4/A
int main() {
  int n;

  ci(n);
  int i;
  ff(i, 0, n) {
    string w;

    ci(w);

    int x = l(w);
    if (x > 10) {
      cout << w[0] << w.size() - 2 << w[w.size() - 1] << endl;
      continue;
    }

    cout << w << endl;
  }

  return 0;
}
