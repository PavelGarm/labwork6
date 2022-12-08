#include <lib/number.h>
#include <gtest/gtest.h>

TEST(CalcTest, SumTest) {
    Calculator calc;
    calc.SetFirst(2);
    calc.SetSecond(2);
    calc.Add();
    EXPECT_EQ(calc.GetResult(), 4);
}

TEST(CalcTest, SubsTest) {
    Calculator calc;
    calc.SetFirst(2);
    calc.SetSecond(2);
    calc.Subs();
    EXPECT_EQ(calc.GetResult(), 0);
}

TEST(CalcTest, MultTest) {
    Calculator calc;
    calc.SetFirst(4);
    calc.SetSecond(2);
    calc.Mult();
    EXPECT_EQ(calc.GetResult(), 8);
}

TEST(CalcTest, DivTest) {
    Calculator calc;
    calc.SetFirst(2);
    calc.SetSecond(2);
    calc.Div();
    EXPECT_EQ(calc.GetResult(), 1);
}

