#ifndef BANKACCOUNT_IACCOUNT_H
#define BANKACCOUNT_IACCOUNT_H


class IAccount {
public:
    virtual void deposit(double amount) = 0;
    virtual bool withdraw(double amount) = 0;
};


#endif //BANKACCOUNT_IACCOUNT_H
