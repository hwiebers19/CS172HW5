//
//  Vector.hpp
//  CS172-HW5
//
//  Created by Heidi Wiebers on 10/26/16.
//  Copyright © 2016 Heidi Wiebers. All rights reserved.
//

#ifndef Vector_hpp
#define Vector_hpp

#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <cctype>
#include <iomanip>
#include <string>
#include <vector>
//the template for the vector class
 template <typename T>
 class Vector
 {
 private:
     T* mElements;
     int mSize;
     int mCapacity;
     void doubleCapacity()
     {
         T *old = mElements;
         mCapacity = 2 * mCapacity;
         mElements = new T[ mCapacity ];
         for ( int i=0; i<mSize; i++ )
         {
             mElements[i] = old[i];
         }
         delete [] old;
     }
 public:
     //initilizes
     Vector()
     {
         mCapacity = 8;
         mSize = 0;
         mElements = new T[mCapacity];
     }
     //changes what they are sent to
     Vector(int size)
     {
         mCapacity = size;
         mSize = size;
         mElements = new T[mCapacity];
     }
     //checks element in the array and sets them at defaltvalue
     Vector(int size, T defaultValue)
     {
         mCapacity = size;
         mSize = size;
         mElements = new T[mCapacity];
         for (int i = 0; i < mSize; i++)
         {
             mElements[i] = defaultValue;
         }
     }
     //appends the elemet in the vector
     void pushBack(T element)
     {
         if (mSize >= mCapacity)
         {
             doubleCapacity();
         }
         mElements[mSize] = element;
         mSize++;
     }
     
     //deletes last element from vector
     void popBack()
     {
        mSize--;
     }
     
     //returns number of elements in the vector
     unsigned int size() const
     {
         return mSize;
     }
     
     //returns the element at the location being asked
     T at(int index) const
     {
         return mElements[index];
     }
     
     //checks if vector is empty
     bool empty() const
     {
         return mSize == 0;
     }
 
     //deletes everything from vector
     void clear()
     {
         mSize = 0;
     }
     
     //swaps the content
     void swap(Vector<T> v2)
     {
         clear();
         for (int i = 0; i < v2.size(); i ++)
         {
             pushBack(v2.at(i));
         }
     }
 
 };


#endif /* Vector_hpp */
