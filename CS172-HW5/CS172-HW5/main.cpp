//
//  main.cpp
//  CS172-HW5
//
//  Created by Heidi Wiebers on 10/26/16.
//  Copyright © 2016 Heidi Wiebers. All rights reserved.
//

#include "LinearSearch.hpp"
#include "isSorted.hpp"
#include "Vector.hpp"
#include "SuffleVector.hpp"
#include "Account.hpp"
#include <iostream>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <cctype>
#include <iomanip>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

int main()
{
//EX05_01 – 12.2: Linear Search
    testSearch();
    cout <<" "<<endl;
    
    
//EX05_02 – 12.4: Is sorted?
    sortComplete();
    cout <<" "<<endl;
    
    
//EX05_03 – 12.8: Implement vector class
    
    Vector<int> vInt;
    for(int i=0; i<10; i++)
    {
        vInt.pushBack(i+1);
    }
    cout<<"Numbers in the vector: ";
    for(int i=0; i<vInt.size(); i++)
    {
        cout<<vInt.at(i)<<" ";
    }
    Vector<string> vString;
    vString.pushBack("Dallas");
    vString.pushBack("Houston");
    vString.pushBack("Austin");
    vString.pushBack("Norman");
    cout <<" " <<endl;
    cout<<"Strings in the string vector: "<<endl;
    for(int i=0; i< vString.size(); i++)
    {
        cout<<vString.at(i)<< " ";
    }
    cout <<" " <<endl;
    vString.popBack();
    Vector<string> v2;
    v2.swap(vString);
    v2.pushBack("Atlanta");
    cout<<"Strings in the vector v2: "<<endl;
    for(int i=0; i< v2.size(); i++)
    {
        cout<< v2.at(i)<< " ";
    }
    
    cout<<" "<<endl;
//EX05_04 – 12.20: Shuffle vector
    
//EX05_05 – 12.25: new Account class
    cout <<" "<<endl;
    Account A1;
    A1.setName("Heid");
    A1.setId(1234);
    A1.setBalance(1000);
    A1.setAnnualInterestRate(.5);
    A1.deposit(90);
    A1.deposit(45);
    A1.deposit(60);
    A1.withdraw(2);
    A1.withdraw(70);
    A1.withdraw(5);
  
    cout<<"Name: " << A1.getname()<<endl;
    cout<<"Balance $"<<A1.getbalance()<<endl;
    cout <<"Monthly Interest: $"<< A1.getMonthlyInterestRate()<<endl;
    cout <<"Total balance: $"<<A1.getbalance()+A1.getMonthlyInterestRate()<<endl;
    
    
    
    
    return 0;
}
