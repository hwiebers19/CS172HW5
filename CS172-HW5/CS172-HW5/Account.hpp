//
//  Account.hpp
//  CS172-HW5
//
//  Created by Heidi Wiebers on 10/26/16.
//  Copyright © 2016 Heidi Wiebers. All rights reserved.
//

#ifndef Account_hpp
#define Account_hpp

#include <stdio.h>
#include <string>
//promeses the Account class
using namespace std;
class Account
{
public:
    int id;
    double balance;
    double annualInterestRate;
    string name;
    
    
    Account(int, double, double);
    Account();
    
    string getname();
    double getbalance();
    double getannualInterestRate();
    int getid();
    
    void setName(string);
    void setBalance(double);
    void setAnnualInterestRate(double);
    void setId(int);
    
    int getMonthlyInterestRate();
    void withdraw(int);
    void deposit(int);
    
};

#endif /* Account_hpp */
