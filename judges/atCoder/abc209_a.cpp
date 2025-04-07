// https://atcoder.jp/contests/abc209/tasks/abc209_a
#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  int x = b - a + 1;
  if (x <= 0) {
    cout << 0;
    return 0;
  }
  cout << x;
  return 0;
}