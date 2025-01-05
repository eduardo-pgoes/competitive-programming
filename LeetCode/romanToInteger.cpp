using namespace std;
#include <string>
#include <unordered_map>
#include <iostream>

unordered_map<char, int> roman = {
  {'I', 1},
  {'V', 5},
  {'X', 10},
  {'L', 50},
  {'C', 100},
  {'D', 500},
  {'M', 1000}
};

class Solution {
  public:
    int romanToInt(string s) {
      int r = 0;
      int i = 0;

      while (i <= s.size() - 1) {
        int r1 = roman[s[i]];
        int r2 = 0;

        if (i <= s.size() - 2) {
          r2 = roman[s[i + 1]];
        }

        if (r2 <= r1) {
          r += r1;
          i++;
          continue;
        }

        r += (r2 - r1);
        i += 2;
      }

      return r;
    }
};

int main() {
  string str = "MCMXCIV";
  Solution s;
  cout << s.romanToInt(str) << '\n';
};
