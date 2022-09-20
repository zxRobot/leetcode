#include <algorithm>
#include <set>
#include <algorithm>
#include "0015_three_sum.h"

namespace leetcode::three_sum
{
    std::vector<std::vector<int>> Solution::threeSum(std::vector<int> &nums)
    {
        int len = nums.size();
        std::vector<std::vector<int>> res;
        if (len < 3)
        {
            return res;
        }
        sort(nums.begin(), nums.end());
        for (int i = 0; i < len; i++)
        {
            if (nums[i] > 0)
            {
                return res;
            }
            if (i != 0 && nums[i] == nums[i - 1])
            {
                continue;
            }
            int left = i + 1;
            int right = len - 1;
            while (left < right)
            {
                if (nums[i] + nums[left] + nums[right] == 0)
                {
                    res.push_back(std::vector<int>{nums[i], nums[left], nums[right]});
                    while (left < right && nums[left] == nums[left + 1])
                    {
                        left++;
                    }
                    while (left < right && nums[right] == nums[right - 1])
                    {
                        right--;
                    }
                    left += 1;
                    right -= 1;
                }
                else if (nums[i] + nums[left] + nums[right] < 0)
                {
                    left++;
                }
                else
                {
                    right--;
                }
            }
        }

        return res;
    }

}