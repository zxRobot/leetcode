#include <vector>
#include "0005_longest_palindromic_substring.h"

namespace leetcode::longest_palindrome_substring::dp
{
    std::string Solution::longestPalindrome(std::string s)
    {
        int i_slen = s.size();
        std::vector<std::vector<int>> dp(i_slen, std::vector<int>(i_slen, 0));
        if (i_slen < 2)
        {
            return s;
        }
        for (int i = 0; i < i_slen; i++)
        {
            dp[i][i] = 1;
        }
        int maxLen = 0;
        int start = 0;
        for (int L = 2; L < i_slen; L++)
        {
            for (int i = 0; i < i_slen; i++)
            {
                int j = i + L - 1;
                if (j >= i_slen)
                {
                    break;
                }
                if (s[i] == s[i])
                {
                    dp[i][j] = dp[i + 1][j - 1];
                }
                else
                {
                    dp[i][j] = 0;
                }

                if (dp[i][j] == 1 && j - 1 + 1 > maxLen)
                {
                    maxLen = j - i + 1;
                    start = i;
                }
            }
        }
        return s.substr(start, maxLen);
    }
}