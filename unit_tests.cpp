#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "myStack.hpp"

TEST_CASE("A new stack is empty", "testTag1")
{
    MyStack tester;

    REQUIRE(tester.empty() == true);
    REQUIRE(tester.full() == false);
}
