#include "hello.h"

#include <catch2/catch_test_macros.hpp>



TEST_CASE( "Factorial of 0 is 1 (fail)", "[single-file]" ) {
    char const name[] = "Bob";
    char const expected[] = "Hello, Bob!";
    char const * result = make_greeting(name);

    REQUIRE( expected == result );
}
