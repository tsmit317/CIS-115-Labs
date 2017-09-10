//  Lab05Program4.cpp - Calculates users premium rate based on their health plan code.
//  Created by Taylor Smith on 2/14/13.

/*
 Input:
 Health plan code = hpc
 
 Processing:
 Processing Items: None
 Algorithm:
 1. Enter hpc
 2. hpc = toupper(hpc)
 3. if (hpc == 'E')
        p = 40
        display p
    else if (hpc == 'S')
        p = 160
        display p
    else if (hps == 'F')
        p = 200
        display p 
    else
        display "Input Error"
    end if
 
 Output:
 Premium = p
 */

#include <iostream>
using namespace std;

int main()
{

    // enter variables
    char hpc = ' ';
    int p = 0;
    
    // enter input items
    cout << "Enter heath plan code (E/S/F): ";
    cin >> hpc;
    hpc = toupper(hpc);
    
    // enter if statements
    if (hpc == 'E')
    {
        p = 40;
        cout << "Premium: $" << p << endl;
    }
    else if (hpc == 'S')
    {
        p = 160;
        cout << "Premium: $" << p << endl;
    }
    else if (hpc == 'F')
    {
        p = 200;
        cout << "Premium: $" << p << endl;
    }
    else
    {
        cout << "Input Error" << endl;
    }
      
    cin.get();
    return 0;
}

