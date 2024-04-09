
#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class arr {
public:
    int maxSubArraySum(vector<int>& nums) {
        int max_sum = 0;
        int current_sum = 0;

        for (int num : nums) {
            current_sum = max(0, current_sum + num);
            max_sum = max(max_sum, current_sum);
        }

        return max_sum;
    }
};