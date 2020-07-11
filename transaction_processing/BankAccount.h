#pragma once
#include <string>

class BankAccount {
    public:
        BankAccount();
        ~BankAccount();
    private:
        int Balance;
    public:
        std::string GetHolderName() {return "NotImplemented";}
};
