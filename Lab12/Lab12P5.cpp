//  Lab12P5.cpp
//  Created by Taylor Smith on 4/18/13.

/*
 Input:
 Worker ID
 Hourly Rate
 Hours Worked
 
 Processing:
 Processing Items:
 Algorithm:
 1. Open "workers.txt" file.
 2.	if (file was opened)
                counter = 0
                repeat while ( counter < 6)
                enter ID #, Rate, and Hours
                write ID #, Rate, and Hours to file
                counter = counter + 1
            end repeat while
            close output file
    else
        display “File could not be opened”
 end if

 
 Output:
 Worker ID
 Hourly Rate
 Hours Worked
 */

#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    int id = 0;
    double rate = 0.0;
    double hours = 0.0;
    
    ofstream workerData;
    workerData.open("workers.txt", ios::out);
    
    if (workerData.is_open())
    {
        for (int count = 0; count < 6; count = count + 1)
        {
            cout << "Enter worker ID number: ";
            cin >> id;
            
            cout << "Enter workers hourly rate: ";
            cin >> rate;
            
            cout << "Enter number of hours worked: ";
            cin >> hours;
            
            workerData << id << " " << rate << " " << hours << " " << endl;
            
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



