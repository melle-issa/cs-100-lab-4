CMAKE_MINIMUM_REQUIRED(VERSION 3.0)

project(projectName)

ADD_SUBDIRECTORY(googletest)

SET(CMAKE_CXX_STANDARD 11)

ADD_EXECUTABLE(area_calculator
    src/main.cpp
    src/rectangle.cpp
)

ADD_EXECUTABLE(test
    src/rectangle.cpp
    tests/test.cpp
)

TARGET_LINK_LIBRARIES(test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)
