#include "../header/rectangle.hpp"
#include "gtest/gtest.h"

TEST(Constructors, withChar){
  Rectangle object1('a', 5);
   EXPECT_TRUE(this->width == 4);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
