//
//  LinearSearch.cpp
//  CS172-HW5
//
//  Created by Heidi Wiebers on 10/26/16.
//  Copyright © 2016 Heidi Wiebers. All rights reserved.
//
#include <iostream>
#include "LinearSearch.hpp"
using namespace std;
//creates a template for the linearsearch
template <typename A>
int linearSearch(const A list[], A key, int arraySize)
{
    for(int i=0; i<arraySize; i++)
    {
        if(key==list[i])
            return i;
    }
    return -1;
}

void testSearch()
{
    //tests for int to see if it is a match to 1
    int list1[]={3,2,4,1,5};
    
    if( linearSearch(list1, 1, 5) == -1)
    {
        cout<<"No match"<<endl;
    }
    else
    {
        cout<<"Match"<<endl;
    }
    
    //tests for double to see if it is a match to 1.5
    double list2[]={1.5,.4,9.8,3.2};
    if( linearSearch(list2, 1.5, 4) == -1)
    {
        cout<<"No match"<<endl;
    }
    else
    {
        cout<<"Match"<<endl;
    }
    
    //tests for string to see if it is a match to Jim
    string list3[]={"Megan","Heidi","Keaton","Andrew"};
    if( linearSearch(list3, string("Jim"), 4) == -1)
    {
        cout<<"No match"<<endl;
    }
    else
    {
        cout<<"Match"<<endl;
    }
    
}



