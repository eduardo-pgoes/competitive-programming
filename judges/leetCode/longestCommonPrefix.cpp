using namespace std;
#include <string>
#include <vector>
#include <iostream>

class Solution {
public:
  string longestCommonPrefix(vector<string>& strs) {
    int s = 200;

    for (int i = 0; i < strs.size(); i++) {
      int j = strs[i].size();
      if (j < s) {
        s = j;
      }
    }

    string prefix = "";
    for (int i = 0; i < s; i++) {
      char currentChar = strs[0][i];

      for (int j = 1; j < strs.size(); j++) {
        if (strs[j][i] != currentChar) {
          return prefix;
        }
      }

      prefix += currentChar;
    }

    return prefix;
  }
};

int main() {
  Solution sol;

  vector<string> v = {"dog","racecar","car"};

  string r = sol.longestCommonPrefix(v);

  cout << r << '\n';
}