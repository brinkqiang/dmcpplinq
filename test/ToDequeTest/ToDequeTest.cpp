#include "gtest.h"

#include "dmcpplinq.h"
#include "cpplinq_utils.h"

TEST(ToDeque, Deque2Deque)
{
    std::deque<int> src = { 100, 200, 300 };

    auto rng = cpplinq::From(src);
    auto dst = rng.ToDeque();

    EXPECT_EQ(dst, src);
}
