#include <algorithm>
#include "0015_three_sum.h"

namespace leetcode::three_sum
{
    std::vector<std::vector<int>> Solution::threeSum(std::vector<int> &nums)
    {
        std::vector<std::vector<int>> res;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 2; i++)
        {
            for (int j = i + 1; j < nums.size() - 1; j++)
            {
                int target = -nums[i] - nums[j];
                int k = j + 1;
                while (target >= nums[k])
                {
                    for (int k = j + 1; k < nums.size(); k++)
                    {
                        if (nums[k] == target)
                        {
                            res.push_back({nums[i], nums[j], nums[k]});
                            break;
                        }
                    }
                }
            }
        }
        return res;
    }
}