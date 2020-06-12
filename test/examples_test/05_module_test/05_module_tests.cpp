#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify get fica tax rate")
{
	REQUIRE(get_fica_tax_total() == 62);
}


TEST_CASE("Test regular pay function")
{
	REQUIRE(get_regular_pay(-5, 10) == 0);
	REQUIRE(get_regular_pay(30, 10) == 0);
	REQUIRE(get_regular_pay(50, 10) == 0);

}


TEST_CASE("Test overtime pay function")
{
	REQUIRE(get_ot_pay(30, 10) == 0);
	REQUIRE(get_ot_pay(50, 10) == 150);
}