// https://codeforces.com/problemset/problem/633/A
#include <bits/stdc++.h>
using namespace std;
#define ff(i,a,b) for (i=a;i<b;i++)
#define y cout << "Yes"
#define n cout << "No"
int main() {
  int a, b, c;
  cin >> a >> b >> c;
  int maxk1 = c/a + 1;
  int maxk2 = c/b + 1;
  int i,j;
  ff(i,0,maxk1) {
    ff(j,0,maxk2) {
      if (a*i + b*j == c) {
        y;
        return 0;
      }
    }
  }
  n;
  return 0;
}