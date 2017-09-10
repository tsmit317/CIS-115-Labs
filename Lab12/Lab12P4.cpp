//  Lab12P4.cpp
//  Created by Taylor Smith on 4/18/13.

/*
 Input:
 gpa1
 gpa2
 gpa3
 gpa4
 
 Processing:
 Processing Items:
 Algorithm:
 1. Open "gpa.txt" file.
 2. if (file opened)
            while (t != N)
                enter gpa 1-4
                write gpa 1-4 to file
                ask if user wants to input another students GPA
                t = toupper(t)
            end while
            close file
        else
            display "file cant open"
    end if
 Output:
 gpa1
 gpa2
 gpa3
 gpa4
 
 */

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    double gpa1 = 0.0;
    double gpa2 = 0.0;
    double gpa3 = 0.0;
    double gpa4 = 0.0;
    char t = ' ';
    
    
    ofstream gpaData;
    gpaData.open ("gpa.txt", ios::out);
    
    if (gpaData.is_open())
    {
        while (t != 'N')
        {
            cout << "Enter GPA for students first semester: ";
            cin >> gpa1;
            
            cout << "Enter GPA for students second semester: ";
            cin >> gpa2;
            
            cout << "Enter GPA for students third semester: ";
            cin >> gpa3;
            
            cout << "Enter GPA for students fourth semester: ";
            cin >> gpa4;
            
            gpaData << gpa1 << " " << gpa2 << " " << gpa3 << " "  << gpa4 << endl;
            
            cout << "Would you like to enter another students GPA? (Y/N): ";
            cin >> t;
            t = toupper(t);
            
        }
        
    }
    else
    {
        cout << "File could not be opened" << endl;
    
    }

    cin.get();
    return 0;
}

