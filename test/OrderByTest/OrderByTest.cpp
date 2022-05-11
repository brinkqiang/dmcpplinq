#include "gtest.h"

#include "dmcpplinq.h"
#include "cpplinq_utils.h"

TEST(OrderBy, RandomIntsWithDuplicates)
{
    int src[] = { 4, 5, 3, 1, 4, 2, 1, 4, 6 };
    int ans[] = { 1, 1, 2, 3, 4, 4, 4, 5, 6 };

    auto rng = cpplinq::From(src);
    auto dst = rng.OrderBy();

    IsEqualArray(dst, ans);
}
