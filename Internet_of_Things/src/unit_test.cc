#include <vector>
#include <limits.h>
#include <fmt/color.h>
#include "gtest/gtest.h"
#include "quick_sort.h"
#include "Internet_of_Things.H"

namespace
{
    // TEST(IsOrdered, Correct)
    // {
    //     auto v = GetData(MAX_N);
    //     EXPECT_TRUE (IsOrdered(v,MAX_N));
    // }
    /*
    TEST(quick_sort_V1, Correct)
    {
        GetRandData();
        auto v = nums_r;
        quick_sort_V1(v,0,MAX_N-1);
        EXPECT_TRUE (IsOrdered(v,MAX_N));
    }
 */

    TEST(quick_sort_V2, Correct)
    {
        fmt::print(fg(fmt::color::spring_green), "[ quick_sort_V2 : Unilateral recursive ]\n");
        std::vector<int> v2(nums_r);
        quick_sort_V2(v2, 0, MAX_N - 1);
        EXPECT_TRUE(IsOrdered(v2, MAX_N));
    }

    TEST(quick_sort_V3, Correct)
    {
        fmt::print(fg(fmt::color::spring_green), "[ quick_sort_V3 : Unsupervised optimization ]\n");
        std::vector<int> v3(nums_r);
        quick_sort_V3(v3, 0, MAX_N - 1);
        EXPECT_TRUE(IsOrdered(v3, MAX_N));
    }

    TEST(quick_sort_V4, Correct)
    {
        fmt::print(fg(fmt::color::spring_green), "[ quick_sort_V4 : Random base value ]\n");
        std::vector<int> v4(nums_r);
        quick_sort_V4(v4, 0, MAX_N - 1);
        EXPECT_TRUE(IsOrdered(v4, MAX_N));
    }

    TEST(quick_sort_V5, Correct)
    {
        fmt::print(fg(fmt::color::spring_green), "[ quick_sort_V5 : take median in three ]\n");
        std::vector<int> v5(nums_r);
        quick_sort_V5(v5, 0, MAX_N - 1);
        EXPECT_TRUE(IsOrdered(v5, MAX_N));
    }

    TEST(quick_sort_V6, Correct)
    {
        fmt::print(fg(fmt::color::spring_green), "[ quick_sort_V6 : Combinatorial sorting ]\n");
        std::vector<int> v6(nums_r);
        quick_sort_V6(v6, 0, MAX_N - 1);
        EXPECT_TRUE(IsOrdered(v6, MAX_N));
    }

    TEST(quick_sort_V4, order)
    {
        std::vector<int> v4(nums_o);
        quick_sort_V4(v4, 0, MAX_N - 1);
        EXPECT_TRUE(IsOrdered(v4, MAX_N));
    }

    TEST(quick_sort_V5, order)
    {
        std::vector<int> v5(nums_o);
        quick_sort_V5(v5, 0, MAX_N - 1);
        EXPECT_TRUE(IsOrdered(v5, MAX_N));
    }

    /*
    TEST(inser_sort_V1, Correct)
    {
        auto v = GetRandData(MAX_N);
        inser_sort_V1(v,0,MAX_N-1);
        EXPECT_TRUE (IsOrdered(v,MAX_N));
    }

    TEST(inser_sort_V2, Correct)
    {
        auto v = GetRandData(MAX_N);
        inser_sort_V2(v,0,MAX_N-1);
        EXPECT_TRUE (IsOrdered(v,MAX_N));
    }
 */
} //  namespace