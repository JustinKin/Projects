#include <vector>
#include "gtest/gtest.h"

namespace
{
    const int MAX_N = 5000000;
    int doDebug()
    {
        testing::InitGoogleTest();
        return RUN_ALL_TESTS();
    }


}  //  namespace

void quick_sort_V1(std::vector<int>& nums_, int l_, int r_);

void quick_sort_V2(std::vector<int>& nums_, int l_, int r_);

void quick_sort_V3(std::vector<int>& nums_, int l_, int r_);

void inser_sort_V1(std::vector<int>& nums_, int l_, int r_);

void inser_sort_V2(std::vector<int>& nums_, int l_, int r_);

std::vector<int> GetData(int n_);

std::vector<int> GetRandData(int n_);

bool IsOrdered(std::vector<int>& nums_, int n_);

inline void swap(int&a, int&b)
{
    int tmp = a;
    a = b;
    b = tmp;
}