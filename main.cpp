#include <iostream>
#include "solution.h"
#include "solution2.h"
int main() {

    Solution2 s;
    std::vector<std::vector<int>> res;
    std::vector<int> arr = {1, 2, 3, 4};

    res = s.permute(arr);

    for (auto i = res.begin(); i != res.end(); ++i) {
        for (auto j = i->begin(); j != i->end(); ++j) {
            std::cout << *j << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}