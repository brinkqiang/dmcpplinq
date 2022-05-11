#include "gtest.h"

#include "dmcpplinq.h"
#include "cpplinq_utils.h"

TEST(SkipWhile, ManyToMore)
{
    try
    {
        int src[] = { 1, 2, 3, 4, 5, 6 };
        int ans[] = { 3, 4, 5, 6 };

        auto rng = cpplinq::From(src);
        auto dst = rng.SkipWhile([](int it) { return it < 3; });
        auto v = dst.ToVector();
        IsEqualArray(dst, ans);

    }
    catch (...)
    {
        printf("hello");
    }
}


//TEST(SkipWhileFailed, ManyToMoreFailed)
//{
//    int src[] = { 1, 2, 3, 4, 5, 6 };
//    std::initializer_list<int> l = { 1, 2, 6 };
//    auto ans = cpplinq::From(l).ToVector();
//
//    auto rng = cpplinq::From(src);
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
//    auto ans = cpplinq::From({ 1, 2, 6 }).ToVector();
//
//    auto rng = cpplinq::From(src);
//    auto dst = rng.SkipWhile([](int it) { return it < 3 || it > 5; }).ToVector();
//
//
//    ASSERT_EQ(ans, dst);
//}
