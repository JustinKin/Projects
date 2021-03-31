#include <vector>
#include "gtest/gtest.h"

void quick_sort_V1(std::vector<int> &nums_, int l_, int r_);

void quick_sort_V2(std::vector<int> &nums_, int l_, int r_);

void quick_sort_V3(std::vector<int> &nums_, int l_, int r_);

void quick_sort_V4(std::vector<int> &nums_, int l_, int r_);

void quick_sort_V5(std::vector<int> &nums_, int l_, int r_);

void quick_sort_V6(std::vector<int> &nums_, int l_, int r_);

void inser_sort_V1(std::vector<int> &nums_, int l_, int r_);

void inser_sort_V2(std::vector<int> &nums_, int l_, int r_);

void GetData();

void GetRandData();

inline void swap(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

inline int median(std::vector<int> &nums_, int l_, int r_)
{
    int a = nums_[l_], b = nums_[r_], c = nums_[(l_ + r_) >> 1];
    if (a > b)
        swap(a, b);
    if (a > c)
        swap(a, c);
    if (b > c)
        swap(b, c);
    return b;
}

bool IsOrdered(std::vector<int> &nums_, int n_);

namespace
{
    const int MAX_N = 50000;
    std::vector<int> nums_r(MAX_N);
    std::vector<int> nums_o(MAX_N);
    int doDebug()
    {
        GetRandData();
        GetData();
        testing::InitGoogleTest();
        return RUN_ALL_TESTS();
    }

} //  namespace
