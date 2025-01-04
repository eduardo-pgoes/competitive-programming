// https://atcoder.jp/contests/abc124/tasks/abc124_a
#include <bits/stdc++.h>
using namespace std;
#define c(x) cout << x
#define vi vector<int>
#define pb(v, x) v.push_back(x)
int main() {
  vi v;
  int a,b;
  cin >> a >> b;
  pb(v, a);
  pb(v, b);
  if (v[0]==v[1]) {
    c(v[0]+v[1]);
    return 0;
  }
  int x = (a>b) ? v[0]-v[1] : v[1]-v[0];
  int i = (a>b) ? 0 : 1;
  if (x > 1) {
    c((2 * v[i]) - 1);
    return 0; 
  }
  c(a+b);
  return 0;
}