#include "hello.h"

#include <catch2/catch_test_macros.hpp>

TEST_CASE("My name is Bob", "[hello]")
{
    char const  name[]     = "Bob";
    char const  expected[] = "Hello, Bob!";
    char const *result     = make_greeting(name);

    REQUIRE(0 == strcmp(expected, result));
}
