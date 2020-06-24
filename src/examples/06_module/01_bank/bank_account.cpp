//bank_account.cpp
#include "bank_account.h"


using std::vector;

vector<BankAccount> accounts{BankAccount(100), BankAccount(200), BankAccount(300)};

void BankAccount::deposit(int amount)
{
    if(amount > 0)
    {
        balance += amount;
        bank_balance += amount;
    }
}


void BankAccount::withdraw(int amount)
{
    if(amount > 0 && balance >= amount)
    {
        balance -= amount;
    }
}

int BankAccount::bank_balance = 0;

BankAccount& get_account(int i);
{
    return account
}