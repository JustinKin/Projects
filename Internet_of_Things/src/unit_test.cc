#include <vector>
#include <limits.h>
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

    TEST(quick_sort_V1, Correct)
    {
        auto v = GetRandData(MAX_N);
        quick_sort_V1(v,0,MAX_N-1);
        EXPECT_TRUE (IsOrdered(v,MAX_N));
    }

    TEST(quick_sort_V2, Correct)
    {
        auto v = GetRandData(MAX_N);
        quick_sort_V2(v,0,MAX_N-1);
        EXPECT_TRUE (IsOrdered(v,MAX_N));
    }

    TEST(quick_sort_V3, Correct)
    {
        auto v = GetRandData(MAX_N);
        quick_sort_V3(v,0,MAX_N-1);
        EXPECT_TRUE (IsOrdered(v,MAX_N));
    }

/*     TEST(inser_sort_V1, Correct)
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
 */}  //  namespace