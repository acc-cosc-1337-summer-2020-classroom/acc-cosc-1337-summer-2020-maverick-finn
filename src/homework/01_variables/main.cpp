//write include statements
#include<iostream>
#include "variables.h"

//write namespace using statement for cout
using std::cout;
using std::cin;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	double meal_amount{0}, tip_rate{0}, tip_amount{0}, tax_amount{0}, total{0};

	cout<<"Enter meal amount: ";
	cin>>meal_amount;
	cout<<"\n";

	tax_amount = get_sales_tax(meal_amount);

	cout<<"Enter tip amount (in %): ";
	cin>>tip_rate;
	cout<<"\n";

	tip_amount = get_tip_amount(meal_amount, tip_rate);


	total = meal_amount + tax_amount + tip_amount;

	//printing receipt
	cout<<"Meal Amount: "<<meal_amount<<"\n";
	cout<<"Sales Tax: "<<tax_amount<<"\n";
	cout<<"Tip Amount: "<<tip_amount<<"\n";
	cout<<"Total: "<<total;

	return 0;
}
