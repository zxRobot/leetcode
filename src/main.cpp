#include <iostream>
#include <vector>
#include <string>
#include "0011_container_with_most_water.h"

int main()
{
    leetcode::most_water_container::Solution s;
    std::vector<int> input = {1,8,6,2,5,4,8,3,7};
    int res = s.maxArea(input);
    std::cout<<res<<std::endl;
    return 0;
}