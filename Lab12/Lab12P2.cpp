//  Lab12P2.cpp
//  Created by Taylor Smith on 4/18/13.

/*
 Input:
 certsYr1
 certsYr2
 certsYr3
 
 Processing:
 Processing Items: Counter
 Algorithm:
 1. Open "certificates.txt"file for read
 2. if (file was opened)
            counter = 0
            repeat while counter < 5
            read certsYr1, certsYr2, and certsYr3
            counter = counter + 1
        end repeat
        end file
    else display "File could not be opened"
end if
 
 Output:
 certsYr1
 certsYr2
 certsYr3
 */

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int certsYr1 = 0;
    int certsYr2 = 0;
    int certsYr3 = 0;
    
    ifstream certData;
    certData.open("certificates.txt", ios::in);
    
    if (certData.is_open())
    {
        for (int count = 0; count < 4; count = count + 1)
        {
            certData >> certsYr1 >> certsYr2 >> certsYr3;
            
            cout << "Year 1: " << certsYr1 << "Year 2: " << certsYr2 << "Year 3: " << certsYr3 << endl;
        }
        certData.close();
    }
    else
    {
        cout << "The file could not be opened." << endl;
    }

    cin.get();
    return 0;
}

