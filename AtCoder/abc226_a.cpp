// https://atcoder.jp/contests/abc226/tasks/abc226_a?lang=en
#include <bits/stdc++.h>
using namespace std;
#define c(x) cout << x
int main() {
  string s;
  cin >> s;
  c(string(4 - s.size(), '0') + s);
  return 0;
}