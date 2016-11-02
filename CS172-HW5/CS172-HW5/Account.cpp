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
//sets values
Account::Account(int Id, double Balance, double annualInterestRate0)
{
    id=Id;
    balance=Balance;
    annualInterestRate=annualInterestRate0;
}
//initalizes values
Account::Account()
{
    id=1234;
    balance=2000;
    annualInterestRate=5;
}

//sets the name of person
void Account::setName(string theName)
{
    name=theName;
}

//sets the balance
void Account::setBalance(double theBalance)
{
    balance=theBalance;
}

//sets the interest rate
void Account::setAnnualInterestRate(double theAnnualInterestRate)
{
    annualInterestRate=theAnnualInterestRate;
}

//sets the id for the person
void Account::setId(int theId)
{
    id=theId;
}

//gets the name
string Account:: getname()
{
    return name;
}

//gets the balance in the account
double Account:: getbalance()
{
    return balance;
}

//gets the intest rate for the month
int Account::getMonthlyInterestRate()
{
    return (annualInterestRate*balance)/12;
}

//allows the person to withdraw money
void Account::withdraw(int amount)
{
    balance -= amount;
}

//allows person to deposit money
void Account::deposit(int amount)
{
    balance += amount;
}