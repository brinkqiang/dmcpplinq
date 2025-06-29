#include "gtest.h"

#include "dmcpplinq.h"
#include "cpplinq_utils.h"

TEST(ToList, List2List)
{
    std::list<int> src = { 100, 200, 300 };

    auto rng = cpplinq::From(src);
    auto dst = rng.ToList();

    EXPECT_EQ(dst, src);
}
