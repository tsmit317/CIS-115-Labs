//  Lab05Program1.cpp - Calulate in-state/out-of-state tuition
//  Created by Taylor Smith on 2/14/13.

/*
 Input:
 In-State = iState
 Number of credit hours = hrs
 
 Processing:
 Processing Items: None
 Algorithm:
 1. Enter hrs and iState.
 2. iState = toupper(iState).
 3. if (iState == 'Y')
        if (hrs > 10)
            tuition = 500
            display tuition
        else
            tuition = hrs * 50
            display tuition
    else
        if (hrs > 15)
            tuition = 6000
            display tuition
        else    
            tuition = hrs * 400
            display tuition
    end if
 
 Output:
 Tuition = tuition
 */

#include <iostream>
using namespace std;

int main()
{
    // enter variables
    int hrs = 0;
    char iState = ' ';
    int tuition = 0;
    
    // enter input items
    cout << "Enter the number of credit hours being taken: ";
    cin >> hrs;
    cout << "Are you an in-state student? (Y/N): ";
    cin >> iState;
    iState = toupper(iState);
    
    // enter if statements
    if (iState == 'Y')
        if (hrs > 10)
        {
            tuition = 500;
            cout << "Tuition: $" << tuition << endl;
        }
        else
        {
            tuition = hrs * 50;
            cout << "Tuition: $" << tuition << endl;
        }
    else
        if (hrs > 15)
        {
            tuition = 6000;
            cout << "Tuition: $" << tuition << endl;
        }
        else
        {
            tuition = hrs * 400;
            cout << "Tuition: $" << tuition << endl;
        }
    
    cin.get();
    return 0;
}

