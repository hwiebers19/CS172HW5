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
//12.20
//shuffle the inputted values
template <typename T>
void shuffleVector(vector<T>& v)
{
    srand((unsigned int)time(NULL));
    for(int i=0; i<v.size(); i++)
    {
        int index = rand() % v.size();
        T temp = v[index];
        v[index]=v[i];
        v[i]=temp;
    }
}
int main()
{
//EX05_01 – 12.2: Linear Search
    //calls the function to see if it is a match to the number in question
    testSearch();
    cout <<" "<<endl;
    
    
//EX05_02 – 12.4: Is sorted?
    //calls the function to see if the list is sorted
    sortComplete();
    cout <<" "<<endl;
    
    
//EX05_03 – 12.8: Implement vector class
    //outputs what is in the vector
    Vector<int> vInt;
    for(int i=0; i<10; i++)
    {
        vInt.pushBack(i+1);
    }
    //outputs int
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
    //outputs strings
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
    //outputs strings in v2
    cout<<"Strings in the vector v2: "<<endl;
    for(int i=0; i< v2.size(); i++)
    {
        cout<< v2.at(i)<< " ";
    }
    
    cout<<" "<<endl;
    cout<<" "<<endl;
//EX05_04 – 12.20: Shuffle vector
    
    vector<int> nums(10);
    //outputs numbers
    for(int i=0; i < nums.size(); i++)
    {
        nums[i] = i;
    }
    for(int i=0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    //shuffles the numbers from the input
    cout << endl;
    shuffleVector(nums);
    for(int i=0; i < nums.size(); i++)
        cout<< nums[i] << " ";
        cout << " " <<endl;
    
//EX05_05 – 12.25: new Account class
    //calls the class to do the following comands
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
    //outputs the name, balance, interest, and the total balance 
    cout<<"Name: " << A1.getname()<<endl;
    cout<<"Balance $"<<A1.getbalance()<<endl;
    cout <<"Monthly Interest: $"<< A1.getMonthlyInterestRate()<<endl;
    cout <<"Total balance: $"<<A1.getbalance()+A1.getMonthlyInterestRate()<<endl;
    
    
    
    
    return 0;
}
