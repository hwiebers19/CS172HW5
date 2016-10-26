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
    //tested for int
    int list1[]={3,2,4,1,5};
    
    if( linearSearch(list1, 1, 5) == -1)
    {
        cout<<"No match"<<endl;
    }
    else
    {
        cout<<"Match"<<endl;
    }
    
    //tested for double
    double list2[]={1.5,.4,9.8,3.2};
    if( linearSearch(list2, 1.5, 4) == -1)
    {
        cout<<"No match"<<endl;
    }
    else
    {
        cout<<"Match"<<endl;
    }
    
    //tested for string
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



