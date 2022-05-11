#include "gtest.h"

#include "cpplinq.h"
#include "cpplinq_utils.h"

TEST(Skip, ManyToMany)
{
    int src[] = { 1, 2, 3, 4, 5, 6 };
    int ans[] = { 1, 2, 3, 4, 5, 6 };

    auto rng = cpplinq::From(src);
    auto dst = rng.Skip(0);

    IsEqualArray(dst, ans);
}
