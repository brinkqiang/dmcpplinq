#include "gtest.h"

#include "dmcpplinq.h"
#include "cpplinq_utils.h"

TEST(ToSet, Vector2Set)
{
    std::vector<int> src = { 1, 1, 2, 3, 2 };

    auto rng = cpplinq::From(src);
    auto dst = rng.ToSet();

    EXPECT_EQ(3U, dst.size());
    EXPECT_NE(dst.end(), dst.find(1));
    EXPECT_NE(dst.end(), dst.find(2));
    EXPECT_NE(dst.end(), dst.find(3));
}
