#ifndef SELLER_H
#define SELLER_H

#include <string>
#include "bankCust.h"
#include "item.h"
#include <vector>

using namespace std;

class Seller {
    private:
        int id;
        string name;
        int bankCustId;
        bankCustomer &account; // Reference to a bankCustomer object
        vector<Item> stock;

    public:

    Seller(int sellerId, const string &sellerName, bankCustomer &account) : id(sellerId), name(sellerName), account(account), bankCustId(account.getId()){};

    int getId() const { return id; }
    string getName() const { return name; }
    int getBankCustId() const { return bankCustId; }

    string getAccInfo() const {
        return account.getName() + " (" + to_string(account.getId()) + ")";
    }

    void addItem(const Item &item) {
        stock.push_back(item);
    }

    const vector<Item>& getStock() const {
        return stock;
    }
};

#endif // SELLER_H