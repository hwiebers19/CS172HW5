//
//  isSorted.cpp
//  CS172-HW5
//
//  Created by Heidi Wiebers on 10/26/16.
//  Copyright © 2016 Heidi Wiebers. All rights reserved.
//
#include <iostream>
using namespace std;
#include "isSorted.hpp"

template<typename B>
bool isSorted(const B list[], int size)
{
    if (size==1)
    {
        return true;
    }
    
    for ( int i=0; i<size-1; i++)
    {
        if ( list[i] > list[i+1])
        {
            return false;
        }
    }
    return true;
}

template<typename C>
void testArray(const C list[], int size)
{
    //array are sorted
    for (int i=0; i< size; i++)
    {
        cout<< list[i]<<" ";
    }
    cout<< endl;
}

void sortComplete()
{
    int list1[]={3,4,1,0,5,8,7};
    isSorted(list1, 7);
    testArray(list1, 7);
    if ( isSorted(list1, 7))
    {
        cout << "This list is sorted" << endl;
    }
    else
    {
        cout << "This list is not sorted" << endl;
    }
    
    double list2[]={.3, 1.4, 1.6, 2.3, 2.7, 4.7};
    isSorted(list2, 6);
    testArray(list2, 6);
    
    if ( isSorted(list2, 6))
    {
        cout << "This list is sorted" << endl;
    }
    else
    {
        cout << "This list is not sorted" << endl;
    }
    
    string list3[] = {"Heidi", "Megan", "Keaton", "Andrew"};
    isSorted(list3, 4);
    testArray(list3, 4);
    if ( isSorted(list3, 4))
    {
        cout << "This list is sorted" << endl;
    }
    else
    {
        cout << "This list is not sorted" << endl;
    }
}





