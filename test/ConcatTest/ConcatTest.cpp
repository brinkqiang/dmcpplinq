#include "gtest.h"

#include "dmcpplinq.h"
#include "cpplinq_utils.h"

TEST(Concat, ArrayArray)
{
    int src1[] = { 1, 2, 3, 4, 5 };
    int src2[] = { 6, 7, 8, 9 };

    int ans[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    auto rng1 = cpplinq::From(src1);
    auto rng2 = cpplinq::From(src2);
    auto dst = rng1.Concat(rng2);

    IsEqualArray(dst, ans);
}
