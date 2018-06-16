/// Generated by robomake
/// An example Google Test file

#include "subsystems/NumberSubsystem.hpp"

#include "gtest/gtest.h"

// An example of a really simple test using Google Test API.
TEST(ExampleTest, PythagoreanTheormTest) {
    auto manager = new NumberManager();
    auto result = manager->pythagoreanTheorm(3, 4);
    
    EXPECT_EQ(5, result); 
    // EXPECT_EQ checks to make sure the result variable is actually equal to the expected value: "5"
    // If it is then the test passes, if it doesn't, then the test will fail.
}