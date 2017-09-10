//  Lab04-Program2.cpp - state employee's and teachers salary raise
//  Created by Taylor Smith on 2/8/13.

/*
 Input:
 
 cSalary = current salary
 sTeacher = state teacher
 
 Processing:
 
 Processing items: None
 Algorithm:
 
 1. enter cSalary and sTeacher
 2. teach = toupper(teach)
 3. if(teach == ‘Y’)
        nSalary = cSalary + (cSalary * .07)
        otBonus = 200
        display nSalary
        display otBonus
    else
        nSalary = cSalary + (cSalary * .04)
        otBonus = 500
        display nSalary
        display otBonus
    end if	
 
 Output:
 
 nSalary = new salary
 otBonus = one time bonus
*/

#include <iostream>
using namespace std;

int main()
{

    // enter input items
    double cSalary = 0.0;
    char sTeacher = ' ';
    double nSalary = 0.0;
    int otBonus = 0;
    
    //enter input items
    cout << "Enter current salary: ";
    cin >> cSalary;
    cout << "Are you a teacher? (Y/N): ";
    cin >> sTeacher;
    sTeacher = toupper(sTeacher);
    
    //enter if statements
    if (sTeacher == 'Y')
        
    {
        nSalary = cSalary + (cSalary * .07);
        otBonus = 200;
        cout << "Employee's new salary: " << nSalary << endl;
        cout << "One time bonus: " << otBonus << endl;
    }
    
    else
        
    {
        nSalary = cSalary + (cSalary * .04);
        otBonus = 500;
        cout << "Employee's new salary: " << nSalary << endl;
        cout << "One time bonus: " << otBonus << endl;
    }
    //end if
    
    cin.get();
    return 0;
}

