//
// Created by 王青龙 on 13/02/2017.
//

#ifndef LEETCODE46_SOLUTION2_H
#define LEETCODE46_SOLUTION2_H

#include <vector>

class Solution2{
public:
    std::vector<std::vector<int>> permute(std::vector<int>& nums);
    void permuteRecursive(std::vector<std::vector<int>> & res, int begin, std::vector<int>& num);
};

#endif //LEETCODE46_SOLUTION2_H
