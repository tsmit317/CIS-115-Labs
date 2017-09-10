//  Lab12P1.cpp
//  Created by Taylor Smith on 4/18/13.

/*
 Input:
 numStudents
 numDropouts
 
 Processing:
 Processing Items:Counter
 Algorithm:
 1. Open "dropout115.txt"file for read
 2. if (file was opened)
        counter = 0
        repeat while counter < 5
        read numStudents and numDropouts
        dropoutRate = numDropouts/numStudents
        display dropoutRate
        counter = counter + 1
    end repeat
    end file
 else display "File could not be opened"
 end if
 
 Output:
 dropoutRate
 
 */

#include <iostream>
#include <fstream>

using namespace std;

int main( )
{
	double numStudents = 0.0;
    double numDropouts = 0.0;
    double dropoutRate = 0.0;
    
	ifstream dropoutData;
	dropoutData.open("dropout115.txt", ios::in);
    
	if (dropoutData.is_open())
	{
		for (int count = 0; count < 5; count = count + 1)
		{
			dropoutData >> numStudents >> numDropouts;
			dropoutRate = numDropouts/numStudents;
			cout << "Drop out rate: " << dropoutRate << endl;
		}
		dropoutData.close();
	}
	else
	{
		cout << "The file could not be opened." << endl;
	}
	cin.get();
	return 0;
}
