#include <unordered_set>
#include <algorithm>
#include "0003_longest_substring.h"

namespace leetcode::longest_substring
{
    int Solution::lengthOfLongestSubstring(std::string s)
    {
        std::unordered_set<char> occ;
        int max_res = 0;
        int left = 0;
        for (int i = 0; i < s.size(); i++)
        {
            while (occ.find(s[i]) != occ.end())
            {
                occ.erase(s[left]);
                left += 1;
            }
            occ.insert(s[i]);
            max_res = std::max((i - left + 1), max_res);
        }
        return max_res;
    }
}