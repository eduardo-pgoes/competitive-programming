using namespace std;
#include <iostream>
#include <string>

#define ff(i,a,b) for (int i = a; i <= b; i++)
#define sc(c) c == '+'
#define ci(x) cin>>x;

// https://codeforces.com/problemset/problem/282/A
int main() {
  int n;
  ci(n);
  int x = 0, i;
  ff(i,0,n) {
    string str;
    cin >> str;
    if (sc(str[0]) || sc(str[1])) {
      x++;
      continue;
    }
    x--;
  }

  cout << x;

  return 0;
}
