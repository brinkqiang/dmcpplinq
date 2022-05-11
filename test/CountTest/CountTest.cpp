#include "gtest.h"

#include "dmcpplinq.h"
#include "TestUtils.h"

TEST(Count, ThreeIntsVector)
{
	std::vector<int> src = { 1, 2, 3 };

	auto rng = CppLinq::From(src);

	EXPECT_EQ(3, rng.Count());
}