
#include"1.h"
using namespace std;

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    arr a;
    cout << "�������������У��Է������ַ��������룺" << endl;

    vector<int> nums;
    int num;
    while (cin >> num) {
        nums.push_back(num);
    }

    int result = a.maxSubArraySum(nums);
    cout << "����Ӷκ�Ϊ: " << result << endl;

    return 0;
}
