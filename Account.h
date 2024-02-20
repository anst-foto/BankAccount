#ifndef BANKACCOUNT_ACCOUNT_H
#define BANKACCOUNT_ACCOUNT_H

#include <fstream>

#include "IAccount.h"
#include "AbstractAccount.h"

class Account : public IAccount {
private:
    AbstractAccount *account;

public:
    Account() {
        account = new AbstractAccount();
    }

    void deposit(double amount) override {
        ofstream file;
        file.open("account.txt", ios::app);
        file << amount << endl;
        file.close();

        account->deposit(amount);
    }

    bool withdraw(double amount) override {
        ofstream file;
        file.open("account.txt", ios::app);

        auto result = account->withdraw(amount);
        if (result) {
            file << -amount << endl;
        } else {
            file << "ERROR" << endl;
        }

        file.close();
        return result;
    }

};


#endif //BANKACCOUNT_ACCOUNT_H
