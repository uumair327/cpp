#include <vector>
#include <iostream>
#include <algorithm>
#define NOMINMAX
#include <windows.h>
#undef NOMINMAX
#include <string_view>
#include <string>
using std::string;
using std::vector;

class Solution {
 public:
  int maxArea(vector<int>& height) {
    int ans = 0;
    int l = 0;
    int r = height.size() - 1;

    while (l < r) {
      const int minHeight = min(height[l], height[r]);
      ans = max(ans, minHeight * (r - l));
      if (height[l] < height[r])
        ++l;
      else
        --r;
    }

    return ans;
  }
};