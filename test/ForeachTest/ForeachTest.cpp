#include "gtest.h"

#include "dmcpplinq.h"
#include "cpplinq_utils.h"

TEST(Foreach, ThreeCharsSum)
{
    std::vector<char> src = { 'a', 'b', 'c' };

    std::string str = "";
    cpplinq::From(src).Foreach([&](char a) { str += a; });

    EXPECT_EQ("abc", str);
}
