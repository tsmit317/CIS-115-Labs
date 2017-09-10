//  Lab06Program4.cpp - Wake Tech Healthcare Phone System - Adding doctor choice. 3
//  Created by Taylor Smith on 2/20/13.

/*
 Input:
 Number
 Doctor number = dNumber
 
 Processing:
 Processing Items:None
 Algorithm:
 1. Enter number.
 2. Test value of number in switch
    1: Ask which doctor to make an appointment with. If dNumber is:
        1: display "Making an appointment with Dr. Green"
        2: display "Making an appointemnt with Dr. Fox"
        3: display "Making an appointemnt with Dr. Davis"
        other: display "Talking to operator"
    2: display "Billing questions"
    3: display "Talking to nurse"
    other: display : "Talking to operator"
 
 Output:
 Making an appointment with a chosen doctor
 Billing Questions
 Talking to nurse
 Talking to operator
 */

#include <iostream>
using namespace std;


int main()
{
    
    // Enter variables
    int number = 0;
    int dNumber = 0;
    
    // Enter input items
    cout << "Press 1 for making an appointment, Press 2 for billing questions, Press 3 for talking to a nurse, Press any other key to talk to operator: ";
    cin >> number;
    
    // Enter switch statments
    switch (number)
    {
        case 1: cout << "Press 1 for an appointment with Dr. Green. Press 2 for an appointment with Dr. Fox. Press 3 for an appointment with Dr. Davis. Press any other key to talk to operator: ";
            cin >> dNumber;
            switch (dNumber)
        {
            case 1: cout << "Making an appointment with Dr. Green" << endl;
                break;
            case 2: cout << "Making an appointment with Dr. Fox" << endl;
                break;
            case 3: cout << "Making an appointment with Dr. Davis" << endl;
                break;
            default: cout << "Talking to operator" << endl;
        }
            break;
        case 2: cout << "Billing questions" << endl;
            break;
        case 3: cout << "Talking to a nurse" << endl;
            break;
        default: cout << "Talking to an operator" << endl;
    }
    
    cin.get();
    return 0;
}



