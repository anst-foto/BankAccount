#ifndef BANKACCOUNT_ABSTRACTACCOUNT_H
#define BANKACCOUNT_ABSTRACTACCOUNT_H

#include "Person.h"
#include "IAccount.h"

class AbstractAccount : public IAccount {
public:
    Person* owner;
    double balance;

    void deposit(double amount) override {
        balance += amount;
    }

    bool withdraw(double amount) override {
        if (balance >= amount) {
            balance -= amount;
            return true;
        }
        return false;
    }
};


#endif //BANKACCOUNT_ABSTRACTACCOUNT_H
