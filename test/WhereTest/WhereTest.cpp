#include "gtest.h"

#include "dmcpplinq.h"
#include "cpplinq_utils.h"

TEST(Where, IntOdd)
{
    int src[] = { 1, 2, 3, 4, 5, 6 };
    int ans[] = { 1, 3, 5 };

    auto rng = cpplinq::From(src);
    auto dst = rng.Where([](int a) { return a % 2 == 1; });

    IsEqualArray(dst, ans);
}
