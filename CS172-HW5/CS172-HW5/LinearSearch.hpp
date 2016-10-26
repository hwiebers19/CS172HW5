//
//  LinearSearch.hpp
//  CS172-HW5
//
//  Created by Heidi Wiebers on 10/26/16.
//  Copyright © 2016 Heidi Wiebers. All rights reserved.
//

#ifndef LinearSearch_hpp
#define LinearSearch_hpp

#include <stdio.h>
template <typename A>
int linearSearch(const A list[], A key, int arraySize);
void testSearch();

#endif /* LinearSearch_hpp */
/*
Vector()
{
    Vector<int> intVector;
    
    for(int i=0; i<10; i++)
    {
        intVector.pushBack(i+1);
    }
    
    cout<<"Numbers in the vector: "<<endl;
    for(int i=0; i<intVector.size(); i++)
    {
        cout<<intVector[i]<<" ";
    }
    
    Vector <string> stringVector;
    
    stringVector.pushBack("Heidi");
    stringVector.pushBack("Megan");
    stringVector.pushBack("Keaton");
    stringVector.pushBack("Andrew");
    
    cout<<"Strings in the string vector: "<<endl;
    for(int i=0; i< stringVector.size(); i++)
    {
        cout<<stringVector[i]<< " ";
    }
    
    stringVector.popBack();
    
    Vector <string> v2;
    v2.swap(stringVector);
    v2[0]="Heidi";
    
    cout<<"Strings in the vector v2: "<<endl;
    for(int i=0; i< v2.size(); i++)
    {
        cout<< v2.at(i)<< " ";
    }
};

*/

