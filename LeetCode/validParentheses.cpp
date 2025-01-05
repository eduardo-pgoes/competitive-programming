using namespace std;

#include <string>
#include <unordered_map>
#include <iostream>
#include <algorithm>
#include <vector>

bool notClosed(vector<int> v) {
  return v.size() == 1;
}

class Solution {
public:
  bool isValid(string s) {
    vector<char> o = {'{', '[', '('};
    vector<char> c = {'}', ']', ')'};
    vector<vector<vector<int>>> v = {{}, {}, {}};

    int n = s.size();

    if (n % 2 != 0) {
      return false;
    }

    // Fill vector with indices
    for (int i = 0; i < s.size(); i++) {
      vector<char>::iterator itOpen;
      itOpen = find(o.begin(), o.end(), s[i]);
      int idxOpen = distance(o.begin(), itOpen);

      vector<char>::iterator itClose;
      int idxClose;

      if (idxOpen <= 2) {
        itClose = find(c.begin(), c.end(), s[i + 1]);
        idxClose = distance(c.begin(), itClose);
        if ((idxClose <= 2) && (idxClose != idxOpen)) {
          cout << i << endl;
          return false;
        }
        v[idxOpen].push_back({i});
        continue;
      }

      itClose = find(c.begin(), c.end(), s[i]);
      idxClose = distance(c.begin(), itClose);

      bool found = false;
      for (int j = 0; j < v[idxClose].size(); j++) {
        if (v[idxClose][j].size() == 1) {
          v[idxClose][j].push_back(i);
          found = true;
          break;
        }
      }

      return found;
    }
  
    for (int i = 0; i < 3; i++) {
      cout << o[i] << c[i] << endl;

      for (int j = 0; j < v[i].size(); j++) {
        cout << "[" << v[i][j][0] << ", " << v[i][j][1] << ']' << endl;
      }
    }


    /**
     * Checks for "opened more brackets than it should" or "closed more brackets than it should"
     */
    for (int i = 0; i < 3; i++) {
      vector<int> openIndexes;

      for (int j = 0; j < v[i].size(); j++) {
        openIndexes.push_back(v[i][j][0]);
        if (v[i][j][0] >= v[i][j][1]) {
          return false;
        }

        if (v[i][j][0] >= n) {
          return false;
        }

        if (v[i][j][1] >= n) {
          return false;
        }
      }
    }

    /**
     * Checks for "did brackets get closed in the wrong order?"
     */

    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < v[i].size(); j++) {
        if (v[i][j].size() == 1 || v[i][j].size() == 0) {
          return false;
        }

        if (v[i][j][0] >= v[i][j][1]) {
          return false;
        }

        if (v[i][j][0] >= n) {
          return false;
        }

        if (v[i][j][1] >= n) {
          return false;
        }
      }
    }
    return true;
  }
};


int main() {
  Solution s;
  // cout << s.isValid("()") << '\n';
  cout << s.isValid("(){}}{") << '\n';
};
