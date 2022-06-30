#ifndef _TWO_SUM_H_
#define _TWO_SUM_H_
#include <vector>

namespace leetcode::two_sum
{

#define SOLOTION_CLASS_DECLARATION                                    \
    class Solution                                                    \
    {                                                                 \
    public:                                                           \
        std::vector<int> two_sum(std::vector<int> &nums, int target); \
    }

    namespace hashset
    {
        SOLOTION_CLASS_DECLARATION;
    }

    namespace hashmap
    {
        SOLOTION_CLASS_DECLARATION;
    }
}

#endif