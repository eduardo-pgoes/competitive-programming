// https://www.hackerrank.com/contests/smart-interviews-basic/challenges/si-basic-check-bit/problem
#include <bits/stdc++.h>
using namespace std;
int main() {
  int a,b;
  scanf("%d %d", &a, &b);
  if (a & (1 << b)) {
    printf("true");
    return 0;
  }
  printf("false");
  return 0;
}