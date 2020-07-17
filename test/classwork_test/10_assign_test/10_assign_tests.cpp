#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include "employee.h"
#include "engineer.h"
#include "sales_employee.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}



TEST_CASE("Test Engineer class function get_pay")
{
	Employee *engineer = new Engineer(1500, 400);

	double test_result = engineer -> get_pay();

	REQUIRE(test_result == 1900);
}


TEST_CASE("Test SalesEmployee class function get_pay")
{
	Employee *sales_employee = new SalesEmployee(40, 10, 500);

	double test_result = sales_employee -> get_pay();

	REQUIRE(test_result == 900);
}