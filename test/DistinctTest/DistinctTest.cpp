#include "gtest.h"

#include "dmcpplinq.h"
#include "cpplinq_utils.h"

TEST(Distinct, Ints1to6)
{
    int src[] = { 4, 5, 3, 1, 4, 2, 1, 4, 6 };
    int ans[] = { 4, 5, 3, 1, 2, 6 };

    auto rng = cpplinq::From(src);
    auto dst = rng.Distinct();

    IsEqualArray(dst, ans);
}
