#include <vector>
#include <iostream>
#include <algorithm>
#define NOMINMAX
#include <windows.h>
#undef NOMINMAX
#include <string_view>
#include <string>
using std::vector;
using std::string;
class Solution
{
private:
    bool isSubsequence(string s, string t)
    {
        if (s.empty())
            return false;

        int i = 0;
        for (const char c : t)
            if (s[i] == c && ++i == s.length())
                return true;

        return false;
    }
};