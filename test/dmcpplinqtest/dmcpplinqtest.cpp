
#include "dmcpplinq.h"

#include "gtest.h"

TEST(Sum, ThreeInts)
{
    std::vector<int> src = { 1, 2, 3 };

    auto rng = cpplinq::From(src);

    EXPECT_EQ(6, rng.Sum());

    EXPECT_TRUE(rng.Any());

    EXPECT_TRUE(rng.Any([](int a) { return a == 1; }));
    EXPECT_TRUE(rng.Any([](int a) { return a == 2; }));
    EXPECT_TRUE(rng.Any([](int a) { return a == 3; }));
    EXPECT_TRUE(rng.Any([](int a) { return a > 1; }));
    EXPECT_TRUE(rng.Any([](int a) { return a < 3; }));
    EXPECT_TRUE(rng.Any([](int a) { return a != 2; }));

    EXPECT_FALSE(rng.Any([](int a) { return a == 0; }));
    EXPECT_FALSE(rng.Any([](int a) { return a == 4; }));
    EXPECT_FALSE(rng.Any([](int a) { return a < 1; }));
    EXPECT_FALSE(rng.Any([](int a) { return a > 3; }));
}
