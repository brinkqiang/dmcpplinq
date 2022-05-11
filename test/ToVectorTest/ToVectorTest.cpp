#include "gtest.h"

#include "dmcpplinq.h"
#include "cpplinq_utils.h"

TEST(ToVector, Vector2Vector)
{
    std::vector<int> src = { 100, 200, 300 };

    auto rng = cpplinq::From(src);
    auto dst = rng.ToVector();

    EXPECT_EQ(dst, src);
}
