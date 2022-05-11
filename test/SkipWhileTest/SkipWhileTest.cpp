#include "gtest.h"

#include "dmcpplinq.h"
#include "TestUtils.h"

TEST(SkipWhile, ManyToMore)
{
    int src[] = { 1, 2, 3, 4, 5, 6 };
    int ans[] = { 3, 4, 5, 6 };

    auto rng = CppLinq::From(src);
    auto dst = rng.SkipWhile([](int it) { return it < 3; });
    auto v = dst.ToVector();
    IsEqualArray(dst, ans);
}


//TEST(SkipWhileFailed, ManyToMoreFailed)
//{
//    int src[] = { 1, 2, 3, 4, 5, 6 };
//    std::initializer_list<int> l = { 1, 2, 6 };
//    auto ans = CppLinq::From(l).ToVector();
//
//    auto rng = CppLinq::From(src);
//    auto dst = rng.SkipWhile([](int it) { return it < 3 || it > 5; }).ToVector();
//
//
//    ASSERT_EQ(ans, dst);
//}
//
//
//TEST(SkipWhileFailed2, ManyToMoreFailed2)
//{
//    int src[] = { 1, 2, 3, 4, 5, 6 };
//
//    auto ans = CppLinq::From({ 1, 2, 6 }).ToVector();
//
//    auto rng = CppLinq::From(src);
//    auto dst = rng.SkipWhile([](int it) { return it < 3 || it > 5; }).ToVector();
//
//
//    ASSERT_EQ(ans, dst);
//}
