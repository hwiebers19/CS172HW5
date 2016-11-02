//
//  SuffleVector.hpp
//  CS172-HW5
//
//  Created by Heidi Wiebers on 10/26/16.
//  Copyright © 2016 Heidi Wiebers. All rights reserved.
//

#ifndef SuffleVector_hpp
#define SuffleVector_hpp
#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <cctype>
#include <iomanip>
#include <string>
#include <vector>
#include <stdio.h>


//this is at the top of main



/*
template <typename T>
void shuffle(vector<T>& v)
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
 */
/*
template <typename T>
void TestShuffle(Vector<T>& v)
{
    vector<int> nums(10);
    //cout << "Enter 10 integers: ";
    for(int i=0; i < nums.size(); i++)
    {
        nums[i] = i;
    }
    for(int i=0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
        cout << endl;
    }
    shuffle(nums);
    for(int i=0; i < nums.size(); i++)
        cout<< nums[i] << " ";
    cout << " " <<endl;
}
*/
#endif /* SuffleVector_hpp */
