//  Lab05Program5.cpp - Calculates the cost of parking in a parking deck, while providing discounts for specific parking levels.
//  Created by Taylor Smith on 2/14/13.

/*
 Input:
 Number of hours parked = hrs
 Parking level = pLevel
 
 Processing:
 
 Processing Items: 
 Discount = d
 Hours rounded up = rHrs
 Adjustment fee = aFee
 
 Algorithm:
 1. Enter hrs and pLevel
 2. pLevel = toupper (pLevel)
 3. rHrs = hrs + 1
 4. if (pLevel == 'C')
        if (rHrs > 2)
            aFee = (7.50 + (3 * (rHrs - 2)))
            d = aFee * .1
            tFee = aFee - d
            display tFee
        else
            d = 7.50 * .1
            tFee = 7.50 - d
            display tFee
    else if (pLevel == 'B')
        if (rHrs > 2)
            aFee = (7.50 + (3 * (rHrs - 2)))
            d = aFee * .05
            tFee = aFee - d
            display tFee
        else
            d = 7.50 * .05
            tFee = 7.50 - d
            display tFee
    else 
        if (rHrs > 2)
            tFee = 7.50 + (3 * (rHrs - 2))
            display tFee
        else 
            tFee = 7.50
    end if
 
 Output:
 Total Fee = tFee
 */

#include <iostream>
// included setprecision stream manipulator because I was getting three decimals in my test cases. 
#include <iomanip>
using namespace std;

int main()
{

    // enter variables
    double hrs = 0.0;
    char pLevel = ' ';
    double tFee = 0.0;
    double d = 0.0;
    double aFee = 0.0;
    int rHrs = int (hrs);
    
    // enter input items
    cout << "Please enter number of hours parked: ";
    cin >> hrs;
    rHrs = hrs + 1;
    cout << "Please enter the parking level (A/B/C): ";
    cin >> pLevel;
    pLevel = toupper(pLevel);
    
    // enter if statements
    //Level C
    if (pLevel == 'C')
        if (rHrs > 2)
        {
            aFee = 7.50 + (3 * (rHrs - 2));
            d = aFee * .1;
            tFee = aFee - d;
            cout << fixed;
            cout << "Total fee: $" << setprecision (2) << tFee << endl;
        }
        else
        {
            d = 7.50 * .1;
            tFee = 7.50 - d;
            cout << fixed;
            cout << "Total fee: $" << setprecision (2) << tFee << endl;
        }
    // Level B
    else if (pLevel == 'B')
        if (rHrs > 2)
        {
            aFee = 7.50 + (3 * (rHrs - 2));
            d = aFee * .05;
            tFee = aFee - d;
            cout << fixed;
            cout << "Total fee: $" << setprecision (2) << tFee << endl;
        }
        else
        {
            d = 7.50 * .05;
            tFee = 7.50 - d;
            cout << fixed;
            cout << "Total fee: $" << setprecision (2) << tFee << endl;
        }
    //Level A
    else
        if (rHrs > 2)
        {
            tFee = 7.50 + (3 * (rHrs -2));
            cout << fixed;
            cout << "Total fee: $" << setprecision (2) << tFee << endl;
        }
        else
        {
            tFee = 7.50;
            cout << fixed;
            cout << "Total fee: $" << setprecision (2) << tFee << endl;
        }
    
    cin.get();
    return 0;
}

