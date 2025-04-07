// https://atcoder.jp/contests/abc214/tasks/abc214_b?lang=en
#include <bits/stdc++.h>
using namespace std;
int main() {
  int s, t;
  cin >> s >> t;
  int ans = 0;
  /**
   * I honestly was baffled to try the bruteforce approach and see that that's the recommended
   * approach by the editorial... Thought there was a clever way to go about this
   */
  for (int a = 0; a <= s; a++) {
    for (int b = 0; a + b <= s; b++) {
      for (int c = 0; a + b + c <= s; c++) {
        if (a * b * c <= t) ans++;
      }
    }
  }
  cout << ans;
  return 0;
}