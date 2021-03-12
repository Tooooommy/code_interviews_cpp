//
// Created by yons on 2021/3/13.
//

#include "solution.h"
#include "unordered_set"
#include "iostream"

using namespace std;


int Solution::findRepeatNumber(vector<int> &nums) {
    unordered_set<int> set;
    set.reserve(nums.size() * 2);
    for (int & num : nums) {
        auto iter = set.insert(num);
        if (!iter.second)
        {
            return num;
        }
    }
    return -1;
}

void Solution::testFindRepeatNumber() {
    vector<int> nums = {2, 3, 1, 0, 2, 5, 3};
    int result = this->findRepeatNumber(nums);
    cout << "test find repeat number result: " << result << endl;
}

