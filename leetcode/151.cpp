#include <vector>
#include <string>
using std::vector;
using std::string;
class Solution
{
public:
    std::string reverseWords(std::string s)
    {
        // Trim leading and trailing spaces
        auto left = s.find_first_not_of(' ');
        auto right = s.find_last_not_of(' ');
        if (left == std::string::npos || right == std::string::npos)
            return "";
        s = s.substr(left, right - left + 1);

        // Reverse the entire string
        std::reverse(s.begin(), s.end());

        // Reverse each word in the reversed string
        int start = 0, end = 0, n = s.size();
        while (start < n)
        {
            while (end < n && s[end] != ' ')
                end++;                                        // find the end of the word
            std::reverse(s.begin() + start, s.begin() + end); // reverse the word
            start = end + 1;
            end++;
        }

        // Remove extra spaces between words
        int i = 0;
        for (int j = 0; j < n; j++)
        {
            if (s[j] == ' ' && (j == 0 || s[j - 1] == ' '))
                continue; // skip multiple spaces
            s[i++] = s[j];
        }
        if (i > 0 && s[i - 1] == ' ')
            i--; // remove trailing space
        s.resize(i);

        return s;
    }
};
