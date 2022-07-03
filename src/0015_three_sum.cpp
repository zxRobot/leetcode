#include <algorithm>
#include "0015_three_sum.h"

namespace leetcode::three_sum
{
    std::vector<std::vector<int>> Solution::threeSum(std::vector<int> &nums)
    {
        std::vector<std::vector<int>> res;
        if (nums.size() < 3)
        {
            return res;
        }
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 2; i++)
        {
            if (i != 0 && nums[i] == nums[i - 1])
            {
                continue;
            }
            for (int j = i + 1; j < nums.size() - 1; j++)
            {
                if (j != 0 && nums[j] == nums[j - 1] && j - i > 1)
                {
                    continue;
                }

                int target = -nums[i] - nums[j];
                if (nums[j + 1] > target)
                {
                    continue;
                }
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
        return res;
    }
}