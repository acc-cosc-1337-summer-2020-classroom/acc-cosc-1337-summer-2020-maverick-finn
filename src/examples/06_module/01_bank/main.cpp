#include "bank_account.h"
#include<iostream>

using std::cout;
using std::cin;


int main()
{
	BankAccount account = get_account(1);
	cout<<account.get_bank_balance()<<"\n";
	
	return 0;
}







/*
BankAccount account(1000); //creates an instance of class in stack memory

	int balance = account.get_balance();
	cout<<"Balance: "<<balance;
*/
