#include "gtest/gtest.h"
#include "../header/rectangle.hpp"

TEST(Constructors, positiveVal){
    Rectangle obj1(6,8);
    EXPECT_EQ(width == 6);
    EXPECT_EQ(height == 8);
}

TEST(Constructors, oneNegativeVal){
    Rectangle obj2(-6, 8);
    EXPECT_EQ(width == -6);
    EXPECT_EQ(length == 8);
}

TEST(Constructors, twoNegativeVals){
    Rectangle obj3(-6, -8);
    EXPECT_EQ(width == -6);
    EXPECT_EQ(length == -8);
}

TEST(Area, positiveVal){
   Rectangle obj4(4,5);
   int obj4Area = obj4.area();
   EXPECT_EQ(obj4Area == 20);
}

TEST(Area, oneNegativeVal){
   Rectangle obj5(-4, 5);
   int obj5Area = obj5.area();
   EXPECT_EQ(obj5Area == -20);
}

TEST(Area, twoNegativeVals){
   Rectangle obj6(-4, -5);
   int obj6Area = obj6.area();
   EXPECT_EQ(obj6Area == 20);
}

TEST(Perimeter, positiveVal){
   Rectangle obj7(2,3);
   int obj7Perimeter = obj7.perimter();
   EXPECT_EQ(obj7Perimeter == 10);
}

TEST(Perimeter, oneNegativeVal){
   Rectangle obj8(-2,3);
   int obj8Perimeter = obj8.perimeter();
   EXPECT_EQ(obj8Perimeter == 10);
}

TEST(Perimter, twoNegativeVals){
   Rectangle obj9(-2, -3);
   int obj8Perimeter = obj9.perimeter();
   EXPECT_EQ(obj9Perimter == 10);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

