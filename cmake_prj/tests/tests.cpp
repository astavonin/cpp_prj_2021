#define CATCH_CONFIG_MAIN

#include <calc/calc.h>
#include <catch2/catch.hpp>

TEST_CASE( "PlusTest" )
{
    Calculator calc;
    CHECK( calc.plus( 1, 2 ) == 3 );
}

TEST_CASE( "MinusTest" )
{
    Calculator calc;
    CHECK( calc.minus( 2, 1 ) == 1 );
}
