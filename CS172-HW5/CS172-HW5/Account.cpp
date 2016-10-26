//
//  Account.cpp
//  CS172-HW5
//
//  Created by Heidi Wiebers on 10/26/16.
//  Copyright © 2016 Heidi Wiebers. All rights reserved.
//
#include <iostream>
#include<string>
using namespace std;
#include "Account.hpp"

Account::Account(int Id, double Balance, double annualInterestRate0)
{
    id=Id;
    balance=Balance;
    annualInterestRate=annualInterestRate0;
}

Account::Account()
{
    id=1234;
    balance=2000;
    annualInterestRate=5;
}

void Account::setName(string theName)
{
    name=theName;
}

void Account::setBalance(double theBalance)
{
    balance=theBalance;
}

void Account::setAnnualInterestRate(double theAnnualInterestRate)
{
    annualInterestRate=theAnnualInterestRate;
}

void Account::setId(int theId)
{
    id=theId;
}

string Account:: getname()
{
    return name;
}
double Account:: getbalance()
{
    return balance;
}
int Account::getMonthlyInterestRate()
{
    return (annualInterestRate*balance)/12;
}
void Account::withdraw(int amount)
{
    balance -= amount;
}
void Account::deposit(int amount)
{
    balance += amount;
}