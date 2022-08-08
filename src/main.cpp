#include <iostream>
#include <vector>
#include <string>
#include "0015_three_sum.h"

int main()
{
    leetcode::three_sum::Solution s;
    std::vector<int> input = {-2,0,0,2,2};
    std::vector<std::vector<int>> res = s.threeSum(input);
    //std::cout<<res<<std::endl;
    return 0;
}