
#include"1.h"
using namespace std;

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    arr a;
    cout << "请输入数字序列，以非数字字符结束输入：" << endl;

    vector<int> nums;
    int num;
    while (cin >> num) {
        nums.push_back(num);
    }

    int result = a.maxSubArraySum(nums);
    cout << "最大子段和为: " << result << endl;

    return 0;
}
