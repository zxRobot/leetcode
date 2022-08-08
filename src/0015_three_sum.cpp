#include <algorithm>
#include <set>
#include "0015_three_sum.h"

namespace leetcode::three_sum
{
    std::vector<std::vector<int>> twoSum(std::vector<int> &nums, int begin, int target)
    {
        std::set<int> set;
        for (int i = begin; i < nums.size(); i++)
        {
            set.insert(nums[i]);
        }
        std::vector<std::vector<int>> res;
        for (int i = begin; i < nums.size(); i++)
        {
            if (set.find(target - nums[i]) != set.end())
            {
                std::vector<int> temp;
                temp.push_back(nums[i]);
                temp.push_back(target - nums[i]);
                res.push_back(temp);
            }
        }
    }

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
            if (nums[i] > 0)
            {
                break;
            }
            if (i != 0 && nums[i] == nums[i - 1])
            {
                continue;
            }
            int target = -nums[i];
            std::vector<std::vector<int>> s = twoSum(nums, i + 1, target);
            if (!s.empty())
            {
                for (int k = 0; k < s.size(); k++)
                {
                    s[k].push_back(nums[i]);
                    res.push_back(s[k]);
                }
            }
        }
        return res;
    }
}