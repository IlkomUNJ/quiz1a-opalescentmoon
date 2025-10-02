#include "bankCust.h"
#include <iostream>


string bankCustomer::getName() const {
    return this->name;
}

int bankCustomer::getId() const {
    return this->id ;
}

void bankCustomer::setName(const string& name) {
    this->name = name;
}

double bankCustomer::getBalance() const {
    return this->balance;
}

void bankCustomer::setBalance(double amount) {
    this->balance = amount;
}

void bankCustomer::addBalance(double amount) {
    this->balance += amount;
}

bool bankCustomer::withdrawBalance(double amount){
    if (amount > this->balance) {
        std::cout << "Rejected: Insufficient funds!" << std::endl;
        return false;
    }
    this->balance -= amount;
    return true;
}

void bankCustomer::printInfo() const {
    std::cout << "Customer Name: " << this->name << std::endl;
    std::cout << "Customer ID: " << this->id << std::endl;
    std::cout << "Balance: $" << this->balance << std::endl;
}