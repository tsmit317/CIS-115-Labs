//  Lab06Program1.cpp - Asks team code and displays team name.
//  Created by Taylor Smith on 2/20/13.

/*
 Input:
 Team code = tCode
 
 Processing:
 Processing items: None
 Algorithm:
 1. Enter tCode
 2. tCode = toupper(tCode)
 3. Test value with switch
    'G': Display "Gators"
    'P': Display "Pirtates"
    'I': Display "Indians"
    'B': Display "Bears"
    other: Display "Invalid team code"
 
 Output:
 Team name
 */

#include <iostream>
using namespace std;


int main()
{
    
    // Enter variables
    int number = 0;
    
    // Enter input items
    cout << "Press 1 for making an appointment: ";
    cout << "Press 2 for billing questions: ";
    cout << "Press 3 for talking to a nurse: ";
    cout << "Press any other key to talk to operator: ";
    cin >> number;
    
    // Enter switch statments
    switch (number)
    {
        case 1: cout << "Making a new apointment" << endl;
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

