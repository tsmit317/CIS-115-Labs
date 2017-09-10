//  Lab12P3.cpp
//  Created by Taylor Smith on 4/18/13.

/*
 Input:
 numCars1
 numCars2
 numCars3
 
 Processing:
 Processing Items: Counter
 Algorithm:
 1. Open "cars.txt" file.
 2.	if (file was opened)
            counter = 0
            repeat while ( counter < 3)
            enter number of cars for weeks 1, 2, and 3
            write number of cars for weeks 1-3 to file
            counter = counter + 1
        end repeat while
        close output file
    else
        display “File could not be opened”
 end if
 
 Output:
 numCars1
 numCars2
 numCars3
 
 
 */

#include <iostream>
#include <fstream>

using namespace std;


int main()
{
    int numCars1 = 0;
    int numCars2 = 0;
    int numCars3 = 0;
    
    ofstream carsData;
    carsData.open("cars.txt", ios::out);
    
    if (carsData.is_open())
    {
        for (int count = 0; count < 3; count = count +1)
        
        {
            cout << "Enter number of cars appraised in week 1: ";
            cin >> numCars1;
            
            cout << "Enter number of cars appraised in week 2: ";
            cin >> numCars2;
            
            cout << "Enter number of cars appraised in week 3: ";
            cin >> numCars3;
            
            carsData << numCars1 << " " << numCars2 << " " << numCars3 << " " << endl;
    
        }
        carsData.close();
    }
    else
    {
        cout << "File could not be opened." << endl;
    }

    
    cin.get();
    return 0;
}

