//  Lab09Program1.cpp
//  Created by Taylor Smith on 3/19/13.
/*
 Input: None
 
 Processing:
 Processing Items:None
 Algorithm:
 1. number = 9
 2. using for repeat while number >= 0, subtract 1 from number each loop
        display number
    end for
    
 Output:
 Number
 
 */

#include <iostream>
using namespace std;

int main()
{
    
    
    //Enter Input Items
    
    for (int number = 9; number >= 0; number = number - 1)
    
    {
        cout << number << endl;
        
    }
    
    cin.get();
    return 0;
}

