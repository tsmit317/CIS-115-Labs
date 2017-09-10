//  Lab09Program2.cpp - Calculates avg class grade.
//  Created by Taylor Smith on 3/19/13.

/*
 Input:
 Grade
 
 Processing:
 Processing Items: Total grade
 
 Algorithm:
 1. numStudents = 0
 2. repeat while (numStudents < 10)
        enter grade
        tgrade = tgrade + grade
        numStudents = numStudents + 1
        avg = tgrade/numStudents
 3. display average
 
 Output:
 */

#include <iostream>
using namespace std;

int main()
{

    // Enter Variables
    int grade = 0;
    int tgrade = 0;
    double avg = 0.0;
    
    // Enter Input Items
    for (int numStudents = 0; numStudents < 10;)
    
    {
        cout << "Enter grade: ";
        cin >> grade;
        
        tgrade = tgrade + grade;
        numStudents = numStudents + 1;
        
        avg = tgrade / numStudents;
        
    }
    //End For
    
    
    //Display output
    cout << "Average grade: " << avg << endl;
    
    cin.get();
    return 0;
}

