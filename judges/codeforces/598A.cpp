// https://codeforces.com/problemset/problem/598/A
#include <bits/stdc++.h>
using namespace std;
#define ff(i,a,b) for(i=a;i<b;i++)
#define ll long long

void solve() {
  ll k;
  cin >> k;
  ll s = k*(k + 1)/2;
  // We could map i0 instead of calculating it, idk if that'd be more efficient tho
  for (ll i = 1; i <= k; i *= 2) {
    s-=2*i;
  }
  cout << s;
  return;
}

int main() {
  int n;
  cin >> n;
  int i;
  ff(i, 0, n) {
    solve();
    if (i!=n-1) {
      cout << '\n';
    }
  }
  return 0;
}