//  Lab05Program3.cpp - Calculates the total fee for training class. Groups receive discounts. 2
//  Created by Taylor Smith on 2/14/13.

/*
 Input:
 Number of registrants = r
 
 Processing:
 Processing Items: None
 Algorithm:
 1. Enter r
 2. if (r >= 1 AND r <=5)
        tFee = r * 100
        display tFee
    else if (r >= 6 AND r <=10)
        tFee = r * 80
        display tFee
    else if (r >= 11)
        tFee = r * 60
        display tFee
    end if
 
 Output:
 Total fee = tFee
 
 */

#include <iostream>
using namespace std;

int main()
{

    // enter variables
    int r = 0;
    int tFee = 0;
    
    // enter input items
    cout << "Number of registrants in the group: ";
    cin >> r;
    
    // enter if statements
    if (r >= 1 && r <= 5)
    {
        tFee = r * 100;
        cout << "Total fee: $" << tFee << endl;
    }
    else if (r >= 6 && r <= 10)
    {
        tFee = r * 80;
        cout << "Total fee: $" << tFee << endl;
    }
    else if (r >= 11)
    {
        tFee = r * 60;
        cout << "Total fee: $" << tFee << endl;
    }
    
    cin.get();
    return 0;
}

