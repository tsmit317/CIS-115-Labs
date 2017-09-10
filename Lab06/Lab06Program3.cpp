//  Lab06Program3.cpp - Wake Tech Healthcare
//  Created by Taylor Smith on 2/20/13.

/*
 Input:
 Number entered
 
 Processing:
 Processing items:None
 Algorithms:
 1. Enter number.
 2. Test value of number entered using switch
    1: display "Making a new appointment"
    2: display "Billing questions"
    3: display "Talking to a nurse"
    other: display "Talking to an operator"
 
 Output:
 Display what the system will do
 
 */
#include <iostream>
using namespace std;


int main()
{
    
    // Enter variables
    int number = 0;
    
    // Enter input items
    cout << "Press 1 for making an appointment, Press 2 for billing questions, Press 3 for talking to a nurse, Press any other key to talk to operator: ";
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


