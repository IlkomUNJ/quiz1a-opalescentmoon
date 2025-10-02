#include "bankCust.h"
#include <iostream>
#include <vector>

class Bank{
private:
    string name;
    vector<bankCustomer> Accounts{};
    int customerCount;

public:
    Bank(const string& name){
        this->name = name;
        this->customerCount = 0;
    }
};