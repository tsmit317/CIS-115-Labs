//  Lab06Program2.cpp
//  Created by Taylor Smith on 2/20/13.

/*
 Input:
 Room number = rNumber
 
 Processing:
 Processing items: None
 Algorithm:
 1. Enter rNumber
 2. Test value using switch statement.
    '101': display "1 king size bed"
    '102':
    '103':
    '104': display "2 double beds"
    '201':
    '202': display "2 queen size beds"
    '203': display "1 double bed and 1 sofa bed"
    other: display "Invalid room number"
 Output:
 Amenities
 
 */

#include <iostream>
using namespace std;

int main()
{

    // Enter variables
    int rNumber = 0;
    
    //Enter input items
    cout << "Enter room number: ";
    cin >> rNumber;
    
    //Enter switch statements
    switch (rNumber)
    {
        case 101: cout << "1 King Size Bed" << endl;
            break;
        case 102:
        case 103:
        case 104: cout << "2 Double Beds" << endl;
            break;
        case 201:
        case 202: cout << "2 Queen Size Beds" << endl;
            break;
        case 203: cout << "1 Double Bed and 1 Sofa Bed" << endl;
            break;
        default: cout << "Invalid room number" << endl;
    }
    
    
    cin.get();
    return 0;
}

