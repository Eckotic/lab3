#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "myStack.hpp"

TEST_CASE("A new stack is empty", "testTag1")
{
    MyStack tester;

    REQUIRE(tester.empty() == true);
    REQUIRE(tester.full() == false);
}

TEST_CASE("A full stack won't overflow")
{
    MyStack tester;

    REQUIRE(tester.push(1) == true);
    REQUIRE(tester.push(1) == true);
    REQUIRE(tester.push(1) == true);
    REQUIRE(tester.push(1) == true);
    REQUIRE(tester.push(1) == true);
    REQUIRE(tester.push(1) == true);
    REQUIRE(tester.push(1) == true);
    REQUIRE(tester.push(1) == true);
    REQUIRE(tester.push(1) == true);
    REQUIRE(tester.push(1) == true);
    REQUIRE(tester.push(0) == false);
}

TEST_CASE("A full stack is detected")
{
    MyStack tester;

    REQUIRE(tester.push(1) == true);
    REQUIRE(tester.push(1) == true);
    REQUIRE(tester.push(1) == true);
    REQUIRE(tester.push(1) == true);
    REQUIRE(tester.push(1) == true);
    REQUIRE(tester.push(1) == true);
    REQUIRE(tester.push(1) == true);
    REQUIRE(tester.push(1) == true);
    REQUIRE(tester.push(1) == true);
    REQUIRE(tester.push(1) == true);
    REQUIRE(tester.full() == true);
}

TEST_CASE("A full stack is printed without overflowing values")
{
    MyStack tester;

    REQUIRE(tester.push(1) == true);
    REQUIRE(tester.push(2) == true);
    REQUIRE(tester.push(3) == true);
    REQUIRE(tester.push(4) == true);
    REQUIRE(tester.push(5) == true);
    REQUIRE(tester.push(6) == true);
    REQUIRE(tester.push(7) == true);
    REQUIRE(tester.push(8) == true);
    REQUIRE(tester.push(9) == true);
    REQUIRE(tester.push(0) == true);
    tester.push(0);
    REQUIRE_THAT(tester.print(), Catch::Equals("1 2 3 4 5 6 7 8 9 0 "));
}

TEST_CASE("A popped value will cause the one below to return for 'top()'")
{
    MyStack tester;

    REQUIRE(tester.push(1) == true);
    REQUIRE(tester.push(2) == true);
    tester.pop();
    REQUIRE(tester.top() == 1);
}

TEST_CASE("An empty pop won't affect the index of new values")
{
    MyStack tester;

    tester.pop();
    REQUIRE(tester.push(1));
    REQUIRE(tester.top() == 1);
}