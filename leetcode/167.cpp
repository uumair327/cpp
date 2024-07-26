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

class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        int l = 0;
        int r = numbers.size() - 1;

        while (numbers[l] + numbers[r] != target)
            if (numbers[l] + numbers[r] < target)
                ++l;
            else
                --r;

        return {l + 1, r + 1};
    }
};