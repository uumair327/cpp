#include <vector>
#include <iostream>
#include <algorithm>
#define NOMINMAX
#include <windows.h>
#undef NOMINMAX
#include <string_view>
using std::vector;

class Solution
{
public:
    int minSubArrayLen(int s, vector<int> &nums)
    {
        int ans = INT_MAX;
        int sum = 0;

        for (int l = 0, r = 0; r < nums.size(); ++r)
        {
            sum += nums[r];
            while (sum >= s)
            {
                ans = std::min(ans, r - l + 1); // Use std::min here
                sum -= nums[l++];
            }
        }

        return ans < INT_MAX ? ans : 0;
    }
};
