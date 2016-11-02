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
     Vector()
     {
         mCapacity = 8;
         mSize = 0;
         mElements = new T[mCapacity];
     }
     Vector(int size)
     {
         mCapacity = size;
         mSize = size;
         mElements = new T[mCapacity];
     }
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
     void pushBack(T element)
     {
         if (mSize >= mCapacity)
         {
             doubleCapacity();
         }
         mElements[mSize] = element;
         mSize++;
     }
     void popBack()
     {
        mSize--;
     }
 
     unsigned int size() const
     {
         return mSize;
     }
 
     T at(int index) const
     {
         return mElements[index];
     }
     bool empty() const
     {
         return mSize == 0;
     }
 
     void clear()
     {
         mSize = 0;
     }

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
