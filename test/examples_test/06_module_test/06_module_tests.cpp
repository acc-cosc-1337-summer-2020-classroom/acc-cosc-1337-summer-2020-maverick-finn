#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "bank_account.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}


TEST_CASE("Verify bank account default constructor")
{
	REQUIRE(account.get_balance) == 500;
}





TEST_CASE("Verify bank account constructor")
{
	BankAccount account(1000);

	REQUIRE(account.get_balance) == 1000);
}
