//
// Created by 王青龙 on 09/02/2017.
//

#include "solution.h"

std::vector<std::vector<int>> Solution::permute(std::vector<int> &nums) {
    std::vector<std::vector<int>> result;
    permuteRecursive(nums, 0, result);
    return result;
}

void Solution::permuteRecursive(std::vector<int> &nums, int begin, std::vector<std::vector<int>> &result) {
    if (begin >= nums.size()) {
        result.push_back(nums);
    } else {
        for (int i = begin; i < nums.size(); ++i) {
            std::swap(nums[i], nums[begin]);
            permuteRecursive(nums, begin + 1, result);
            std::swap(nums[i], nums[begin]);
        }
    }
}
