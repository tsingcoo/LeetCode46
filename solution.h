//
// Created by 王青龙 on 09/02/2017.
//

#ifndef LEETCODE46_SOLUTION_H
#define LEETCODE46_SOLUTION_H

#include <vector>

class Solution {
public:
    std::vector<std::vector<int>> permute(std::vector<int> &nums);

    void permuteRecursive(std::vector<int> &nums, int begin, std::vector<std::vector<int>> &result);
};

#endif //LEETCODE46_SOLUTION_H
