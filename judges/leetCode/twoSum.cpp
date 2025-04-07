using namespace std;
#include <vector>
#include <unordered_map>
#include <iostream>

class Solution {
public:
  vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> m;
    
    vector<int> r = {-1, -1};
  
    for (int i = 0; i < nums.size(); i++) {
      unordered_map<int, int>::const_iterator p = m.find(target - nums[i]);
  
      if (p != m.end()) {
        r = {i, p->second};

        return r;
      }
      m.insert(make_pair(nums[i], i));
    }

    // Should never happen with correct input
    return r;
  }
};

int main() {
  Solution sol;

  vector<int> v = {2, 7, 11, 15};

  vector<int> r = sol.twoSum(v, 9);

  cout << r[0] << ' ' << r[1] << '\n';
}
