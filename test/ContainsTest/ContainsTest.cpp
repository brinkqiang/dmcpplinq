#include "gtest.h"

#include "dmcpplinq.h"
#include "cpplinq_utils.h"

TEST(Contains, ThreeInts)
{
    std::vector<int> src = { 1, 2, 3 };

    auto rng = cpplinq::From(src);

    EXPECT_TRUE(rng.Contains(1));
    EXPECT_TRUE(rng.Contains(2));
    EXPECT_TRUE(rng.Contains(3));

    EXPECT_FALSE(rng.Contains(0));
    EXPECT_FALSE(rng.Contains(4));
}
