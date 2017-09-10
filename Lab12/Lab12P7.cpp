//  Lab12P7.cpp
//  Created by Taylor Smith on 4/18/13.

/*
 Input:
 ID
 Rate
 Hours
 
 Processing:
 Processing Items:Counter
 Algorithm:
 1. Open "workers.txt" file
 2. If (file opens)
            count = 0
            repeat while counter < 9
            read ID, Rate, and Hours
            gross pay = hours * rate
            display ID and Gross Pay
        end repeat
        close file
    else
        display "file couldn't be opened"
 end if

 Output:
 ID
 Gross Pay
 
 */

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int id = 0;
    double rate = 0.0;
    double hours = 0.0;
    double grosspay = 0.0;
    
    
    ifstream workerData;
    workerData.open("workers.txt", ios::in);
    
    if (workerData.is_open())
    {
        for (int count = 0; count < 9; count = count + 1) 
        {
            workerData >> id >> rate >> hours;
            
            grosspay = rate * hours;
            
            cout << "ID: " << id << "Gross Pay: " << grosspay << endl;
        }
        workerData.close();
    }
    else
    {
        cout << "File could not be opened" << endl;
    }

    cin.get();
    return 0;
}

