#include "pch.h"
#include"../zuoye2/1.h "

// 测试用例
TEST(maxSubArraySum, EmptyArray) {
    arr a;
    std::vector<int> nums;
    EXPECT_EQ(a.maxSubArraySum(nums),0);

}

TEST(maxSubArraySum, AllPositiveNumbers) {
    arr a;
    std::vector<int> nums = { 1, 2, 3, 4, 5 };
    EXPECT_EQ(a.maxSubArraySum(nums), 15);
}

TEST(maxSubArraySum, AllNegativeNumbers) {
    arr a;
    std::vector<int> nums = { -1, -2, -3, -4, -5 };
    EXPECT_EQ(a.maxSubArraySum(nums), 0);
}

TEST(maxSubArraySum, MixedNumbers) {
    arr a;
    std::vector<int> nums = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };
    EXPECT_EQ(a.maxSubArraySum(nums), 6);
}

TEST(maxSubArraySum, ArrayWithZeros) {
    arr a;
    std::vector<int> nums = { 1, 0, -2, 3, 0, 5, -9 };
    EXPECT_EQ(a.maxSubArraySum(nums), 8);
}

TEST(maxSubArraySum, LargeArray) {
    arr a;
    std::vector<int> nums(100000, 1); // Array with 100000 elements, all equal to 1
    EXPECT_EQ(a.maxSubArraySum(nums), 100000);
}

// 此宏用于运行所有测试用例
int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}