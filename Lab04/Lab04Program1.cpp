//  Lab04-Program1.cpp - total amount of child tax credit a houshold can claim
//  Created by Taylor Smith on 2/8/13.

/*
 Input:
 
 nChildren = number of children	
 
 Processing:
 
 Processing Items: None
 Algorithm:
 
 1.	enter nChildren
 2.	If (nChildren <= 4)
        tCredit = nChildren * 1000
        display tCredit
    else
        tCredit = 4000
        display tCredit
    end if
 
 Output:
 
 tCredit = total child tax credit household can claim
 
*/

#include <iostream>
using namespace std;


int main()
{

    // enter variables
    int nChildren = 0;
    int tCredit = 0;
    
    // enter input items
    cout << "Enter number of children: ";
    cin >> nChildren;
    
    //enter if statements
    if (nChildren <= 4)
        
    {
        tCredit = nChildren * 1000;
        cout << "Total child tax credit: " << tCredit << endl;
    }
    
    else
        
    {
        tCredit = 4000;
        cout << "Total child tax credit: " << tCredit << endl;
    }
    // end if
    cin.get();
    return 0;
}

