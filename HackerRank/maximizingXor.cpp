// https://www.hackerrank.com/challenges/maximizing-xor/problem
#include <bits/stdc++.h>
using namespace std;
int main() {
  int l,r;
  scanf("%d %d", &l, &r);
  int ans = 0;
  for (int a = l; a <= r; ++a) {
    for (int b = a; b <= r; ++b) {
      int x=a^b;
      if (x>ans) {
        ans=x;
      }
    }
  }
  printf("%d",ans);
  return 0;
}