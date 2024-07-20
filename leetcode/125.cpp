#include <vector>
#include <iostream>
#include <algorithm>
using std::pair;
using std::string;
using std::vector;

class Solution
{
public:
    bool isPalindrome(std::string s)
    {
        std::string filtered;

        // Remove non-alphanumeric characters and convert to lowercase
        for (char c : s)
        {
            if (std::isalnum(c))
            {
                filtered += std::tolower(c);
            }
        }

        int left = 0;
        int right = filtered.size() - 1;

        // Check if the filtered string is a palindrome
        while (left < right)
        {
            if (filtered[left] != filtered[right])
            {
                return false;
            }
            left++;
            right--;
        }

        return true;
    }
};