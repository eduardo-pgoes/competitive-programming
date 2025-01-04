// https://www.hackerrank.com/challenges/bitwise-operators-in-c/problem
#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pb(v, x) v.push_back(x)
int main() {
  int n, k;
  scanf("%d %d", &n, &k);
  vi vand, vor, vxor;

  for (int a = 1; a < n; a++) {
    for (int b = a+1; b <= n; b++) {
      int x;
      x=a&b;
      if (x<k) {
        pb(vand,x);
      }
      x=a|b;
      if (x<k) {
        pb(vor,x);
      }
      x=a^b;
      if (x<k) {
        pb(vxor, x);
      }
    }
  }

  if (vand.size()>0){
    cout << *max_element(vand.begin(), vand.end());
  } else {
    cout << 0;
  }
  cout << endl;
  if (vor.size()>0){
    cout << *max_element(vor.begin(), vor.end());
  } else {
    cout << 0;
  }
  cout << endl;
  if (vxor.size()>0){
    cout << *max_element(vxor.begin(), vxor.end());
  } else {
    cout << 0;
  }
  return 0;
}