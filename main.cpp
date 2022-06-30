#include <iostream>
#include <vector>
#include <string>
#include "0005_longest_palindromic_substring.h"

int main()
{
    leetcode::longest_palindrome_substring::dp::Solution s;
    std::string res = s.longestPalindrome("abab");
    return 0;
}