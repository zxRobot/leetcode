#include <algorithm>
#include "0011_container_with_most_water.h"

namespace leetcode::most_water_container
{
    int Solution::maxArea(std::vector<int> &height)
    {
        int maxArea = 0;
        int left = 0;
        int right = height.size()-1;
        while (left < right)
        {
            int area = std::min(height[left], height[right]) * (right - left);
            if (area > maxArea)
            {
                maxArea = area;
            }
            if (height[left] <= height[right])
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        return maxArea;
    }
}