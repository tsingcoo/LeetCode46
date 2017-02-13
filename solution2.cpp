//
// Created by 王青龙 on 13/02/2017.
//

#include "solution2.h"

std::vector<std::vector<int>> Solution2::permute(std::vector<int> &nums) {
    std::vector<std::vector<int>> res;
    permuteRecursive(res, 0, nums);
    return res;

}

void Solution2::permuteRecursive(std::vector<std::vector<int>> &res, int begin, std::vector<int> &nums) {
    if (begin >= nums.size()) {
        res.push_back(nums);
    } else {
        for (int i = begin; i < nums.size(); ++i) {//这里i要从begin开始
            std::swap(nums[i], nums[begin]);
            permuteRecursive(res, begin + 1, nums);
            std::swap(nums[i], nums[begin]);
        }
    }

}
