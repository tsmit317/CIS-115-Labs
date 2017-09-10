// Lab04-Program3.cpp - High blood pressure or low blood pressure
// Created by Taylor Smith on 2/8/13.

/*
 Input:
 
 sPressure = systolic pressure
 dPressure = diastolic pressure	
 
 Processing:
 
 Processing items: None
 Algorithm:
 
 1.	enter sPressure and dPressure.
 2.	if (sPressure > 140 || dPressure > 90)
        display “You have high blood pressure”.
    else
        display “You have normal blood pressure”.
    end if	
 
 Output:
 
 you have high blood pressure
 you have normal blood pressure
*/

#include <iostream>
using namespace std;

int main()
{

    // enter variables
    int sPressure = 0;
    int dPressure = 0;
    
    // enter input items
    cout << "Enter systolic pressure: ";
    cin >> sPressure;
    cout << "Enter diastolic pressure: ";
    cin >> dPressure;
    
    // enter if statements
    if (sPressure > 140 || dPressure > 90)
        
    {
        cout << "You have high blood pressure" << endl;
    }
    
    else
        
    {
        cout << "You have normal blood pressure" << endl;
    }
    
    cin.get();
    return 0;
}

