#ifndef _LONGEST_PALINDROMEIC_SUBSTRING_H_
#define _LONGEST_PALINDROMEIC_SUBSTRING_H_

#include <iostream>

namespace leetcode::longest_palindrome_substring
{
#define SOLOTION_CLASS_DECLARATION                    \
    class Solution                                    \
    {                                                 \
    public:                                           \
        std::string longestPalindrome(std::string s); \
    };
                                                    
    namespace dp                                      
    {
        SOLOTION_CLASS_DECLARATION
    }
}

#endif