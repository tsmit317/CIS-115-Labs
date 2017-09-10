// Lab04-Program5.cpp - determining if three numbers can be used to form the sides of a triangle
// Created by Taylor Smith on 2/8/13.

/*
 Input:
 
 s1 = side 1
 s2 = side 2
 s3 = side 3	
 
 Processing:
 
 Processing item:
 Algorithm:
 
 1.	enter s1, s2, and s3.
 2.	if (s1 + s2 > s3 && s1 + s3 > s2 && s3 + s2 > s1)
        display “Yes”
    else
        display “No”
    end if
 
 Output:
 
 "Yes"
 "No"
*/

#include <iostream>
using namespace std;

int main()
{

    // enter variables
    double s1 = 0.0;
    double s2 = 0.0;
    double s3 = 0.0;
    
    // enter input items
    cout << "Enter side 1: ";
    cin >> s1;
    cout << "Enter side 2: ";
    cin >> s2;
    cout << "Enter side 3: ";
    cin >> s3;
    
    // enter if statements
   if (s1 + s2 > s3 && s1 + s3 > s2 && s3 + s2 > s1)
   {
       cout << "Yes" << endl;
   }
    else
    {
        cout << "No" << endl;
    }
    
    cin.get();
    return 0;
}

