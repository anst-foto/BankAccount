#include <iostream>

#include "IAccount.h"
#include "Account.h"

using namespace std;

int main() {
    IAccount *account = new Account();

    account->deposit(100);
    account->withdraw(50);

    return 0;
}
