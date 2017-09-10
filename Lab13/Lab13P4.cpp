//  Lab13P4.cpp
//  Created by Taylor Smith on 4/26/13.

/*
 Input:
 Student Height
 
 Processing:
 Processing Items: counter
 Algorithm:
 open "heights.txt
 1. if file opens
        counter = 0
        repeat while (counter < 10)
            enter height
            counter = counter + 1
        repeat while (counter < 10)
            if (height > 60)
                tall = tall + 1
                counter = counter + 1
            else if (height < 55)
                shrt = shrt + 1
                counter = counter + 1
    display number of students tall and short
 2. else display "file couldnt open"
 Output:
 students > 60
 students < 55
 */

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int tall = 0;
    int shrt = 0;
    
    int height[10]{0};
	
    ofstream studentData;
    studentData.open("heights.txt",ios::out);
    
    if (studentData.is_open())
    {
	
        for (int x = 0; x < 10; x = x + 1)
        {
            cout << "Enter height of the student: ";
            cin >> height[x];
        }
        for (int x = 0; x < 10; x = x + 1)
        {
            if (height[x]> 60)
            {
                tall= tall + 1;
            }
            else if (height [x] < 55)
            {
                shrt = shrt + 1;
            }
        }
        cout << "Number of students taller than 60 inches: " << tall << endl;
        cout << "Number of students shorter than 55: " << shrt << endl;
    }
    else
    {
            cout << "File couldn't open." << endl;
    }
   
    
    cin.get();
    return 0;
}


