#include "gtest.h"

#include "dmcpplinq.h"
#include "cpplinq_utils.h"

TEST(Take, ManyToMore)
{
    int src[] = { 1, 2, 3, 4, 5, 6 };
    int ans[] = { 1, 2, 3, 4, 5, 6 };

    auto rng = cpplinq::From(src);
    auto dst = rng.Take(10);

    IsEqualArray(dst, ans);
}
