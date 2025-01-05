using namespace std;
#include <iostream>
#include <climits> 

int reverse(int x) {
  int n = x;
  int d = x % 10;
  int r = 0;

  while (n > 0) {
    r = r * 10 + n % 10;
    n /= 10;
  }

  return r;
}

class Solution {
public:
  bool isPalindrome(int x) {
    if (x < 0) {
      return false;
    }

    return reverse(x) == x;
  }
};

int main() {
  Solution s;
  cout << s.isPalindrome(1234567899);
}