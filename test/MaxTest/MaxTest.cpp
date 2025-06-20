#include "gtest.h"

#include "dmcpplinq.h"
#include "cpplinq_utils.h"

TEST(Max, ThreeInts)
{
    std::vector<int> src = { 1, 2, 3 };

    auto rng = cpplinq::From(src);

    EXPECT_EQ(3, rng.Max());
    EXPECT_EQ(1, rng.Max([](int a) { return -a; }));
}
