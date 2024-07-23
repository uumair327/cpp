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
    int maxProfit(vector<int> &prices)
    {
        int sell = 0;
        int hold = INT_MIN;

        for (const int price : prices)
        {
            sell = std::max(sell, hold + price); // Use std::max here
            hold = std::max(hold, sell - price); // Use std::max here
        }

        return sell;
    }
};
