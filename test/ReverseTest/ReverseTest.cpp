#include "gtest.h"

#include "dmcpplinq.h"
#include "cpplinq_utils.h"

TEST(Reverse, IntVector)
{
    int src[] = { 1, 2, 3, 4 };
    int ans[] = { 4, 3, 2, 1 };

    auto rng = cpplinq::From(src);
    auto dst = rng.Reverse();

    IsEqualArray(dst, ans);
}
