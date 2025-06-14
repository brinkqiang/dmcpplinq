#include "gtest.h"

#include "dmcpplinq.h"
#include "cpplinq_utils.h"

TEST(TakeWhile, ManyToMore)
{
    int src[] = { 1, 2, 3, 4, 5, 6 };
    int ans[] = { 1, 2 , 3, 4, 5 };

    auto rng = cpplinq::From(src);
    auto dst = rng.TakeWhile([](int it) {return it >= 1 && it <= 5; });

    IsEqualArray(dst, ans);
}
