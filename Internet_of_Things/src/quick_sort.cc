#include <iostream>
#include <random>
#include <vector>
#include "quick_sort.h"

void quick_sort_V1(std::vector<int> &nums, int l, int r)
{
    if (l >= r)
        return;
    int x = l;
    int y = r;
    int z = nums[l];
    // 基准值z取左边,就要从右边开始
    // If you take z to the left, you start from the right
    while (x < y)
    {
        while (x < y && z <= nums[y])
            --y;
        if (x < y)
            nums[x++] = nums[y];

        while (x < y && nums[x] <= z)
            ++x;
        if (x < y)
            nums[y--] = nums[x];
    }
    nums[x] = z;
    quick_sort_V1(nums, l, x - 1);
    quick_sort_V1(nums, x + 1, r);
}

// 单边递归
// Unilateral recursive
void quick_sort_V2(std::vector<int> &nums, int l, int r)
{
    while (l < r)
    {
        int x = l;
        int y = r;
        int z = nums[l];
        while (x < y)
        {
            while (x < y && z <= nums[y])
                --y;
            if (x < y)
                nums[x++] = nums[y];

            while (x < y && nums[x] <= z)
                ++x;
            if (x < y)
                nums[y--] = nums[x];
        }
        nums[x] = z;
        quick_sort_V2(nums, l, x - 1);
        l = x + 1;
    }
}

// 无监督优化,单边递归
// Unsupervised optimization,Unilateral recursive
void quick_sort_V3(std::vector<int> &nums, int l, int r)
{
    while(l < r)
    {
        int x = l;
        int y = r;
        int z = nums[l];
        while(x <= y)
        {
            while(nums[x] < z)
                ++x;
            while(nums[y] > z)
                --y;
            if(x <= y)
            {
                swap(nums[x],nums[y]);
                ++x;
                --y;
            }
        }
        quick_sort_V3(nums, l, y);
        l = x ;
    }
}


// 普通插入排序
// ordinary insertion sorting
void inser_sort_V1(std::vector<int> &nums, int l, int r)
{
    for (int i = l+1; i<=r; ++i)
    {
        int j  = i;
        // 存在监督项 j > l
        // supervision j > l
        while( j > l && nums[j] < nums[j-1])
        {
            swap(nums[j], nums[j-1]);
            --j;
        }
    }
}

// 无监督优化,插入排序
// Unsupervised optimization,insertion sorting
void inser_sort_V2(std::vector<int> &nums, int l, int r)
{
    // 定位全局最小值位置
    // Locate the global minimum position
    int ind = l;
    for(int i = l+1; i<=r; ++i)
    {
        if(nums[i] < nums[ind])
            ind = i;
    }

    // 最小值移动到最左边
    // move the minimum to the left
    while(ind > l )
    {
        swap(nums[ind], nums[ind-1]);
        --ind;
    }

    // 去掉监督项
    // Remove the supervision
    for(int i = l+ 2; i<=r; ++i)
    {
        int j  = i;
        while(nums[j] < nums[j-1])
        {
            swap(nums[j], nums[j-1]);
            --j;
        }
    }
}


std::vector<int> GetRandData(int n)
{
    static std::default_random_engine e;
    static std::uniform_int_distribution<unsigned> u(0, n);
    std::vector<int> nums(n);
    for (int i = 0; i < n; ++i)
        nums[i] = u(e);
    return nums;
}

std::vector<int> GetData(int n)
{
    std::vector<int> nums(n);
    for (int i = 0; i < n; ++i)
        nums[i] = i;
    return nums;
}

bool IsOrdered(std::vector<int> &nums, int n)
{
    for (int i = 1; i < n; ++i)
    {
        if (nums[i] < nums[i - 1])
            return false;
    }
    return true;
}
