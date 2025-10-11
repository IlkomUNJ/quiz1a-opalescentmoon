#ifndef BUYER_H
#define BUYER_H

#include <cstddef>
#include <string>
#include "bankCust.h"

using namespace std;

class Buyer {
private:
    int id;
    string name;
    bankCustomer &account; // Association with BankCustomer

public:
    Buyer(int id, const string& name, bankCustomer &account0)
        : id(id), name(name), account(account0) {}

    int getId() const { return id; }
    string getName() const { return name; }
    bankCustomer& getAccount() { return account; }

    void setId(int newId) { id = newId; }
    void setName(const std::string& newName) { name = newName; }
};

#endif // BUYER_H