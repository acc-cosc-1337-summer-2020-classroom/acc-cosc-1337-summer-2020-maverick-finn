//bank_account.h
#include<vector>

class BankAccount
{
    public:
        BankAccount() {balance = 500;}
        BankAccount(int b) : balance{b} {bank_balance += balance;}
        int get_balance() const {return balance;}
        void deposit(int amount);
        static get_bank_balance(){return bank_balance;}
    private:
        int balance{0}; // semicolon here is important to remember
        static int bant_balance;

};

BankAccount& get_account(int i);