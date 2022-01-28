#include "gtest/gtest.h"
#include "../header/rectangle.hpp"

TEST(Constructors, positiveVal){
    Rectangle obj1(6,8);
    EXPECT_TRUE(obj1.width == 6);
    EXPECT_TRUE(obj1.height == 8);
}

TEST(Constructors, oneNegativeVal){
    Rectangle obj2(-6, 8);
    EXPECT_TRUE(obj2.width == -6);
    EXPECT_TRUE(obj2.height == 8);
}

TEST(Constructors, twoNegativeVals){
    Rectangle obj3(-6, -8);
    EXPECT_TRUE(obj3.width == -6);
    EXPECT_TRUE(obj3.height == -8);
}

TEST(Area, positiveVal){
   Rectangle obj4(4,5);
   int obj4Area = obj4.area();
   EXPECT_TRUE(obj4Area == 20);
}

TEST(Area, oneNegativeVal){
   Rectangle obj5(-4, 5);
   int obj5Area = obj5.area();
   EXPECT_TRUE(obj5Area == -20);
}

TEST(Area, twoNegativeVals){
   Rectangle obj6(-4, -5);
   int obj6Area = obj6.area();
   EXPECT_TRUE(obj6Area == 20);
}

TEST(Perimeter, positiveVal){
   Rectangle obj7(2,3);
   int obj7Perimeter = obj7.perimeter();
   EXPECT_TRUE(obj7Perimeter == 10);
}

TEST(Perimeter, oneNegativeVal){
   Rectangle obj8(-2,3);
   int obj8Perimeter = obj8.perimeter();
   EXPECT_TRUE(obj8Perimeter == 10);
}

TEST(Perimeter, twoNegativeVals){
   Rectangle obj9(-2, -3);
   int obj9Perimeter = obj9.perimeter();
   EXPECT_TRUE(obj9Perimeter == 10);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

