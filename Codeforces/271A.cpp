// https://codeforces.com/problemset/problem/271/A
#include <bits/stdc++.h>
using namespace std;
bool allDigitsDistinct(int n) {
  vector<int> seen;
  while (n > 0) {
    int digit=n%10;
    n/=10;
    if (find(seen.begin(), seen.end(), digit)!=seen.end()) {
      return false;
    }
    seen.push_back(digit);
  }
  return true;
}
int solve(int y) {
  int i=y+1;
  while (i<INT_MAX) {
    if (!allDigitsDistinct(i)) {
      i++;
    } else {
      return i;
    }
  }
  // Should never happen - the answer is guaranteed to exist
  return i;
}
int main() {
  int y;
  cin >> y;
  int k = solve(y);
  cout << k;
  return 0;
}