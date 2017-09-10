//  Lab11P3.cpp
//  Created by Taylor Smith on 4/12/13.


#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    int numStudents = 0;
    double numBuses = 0;
    
    cout << "How many students going to the fieldtrip: ";
    cin >> numStudents;
    numBuses = numStudents / 24.0;  // ecach bus can sit 24 students
    numBuses = ceil (numBuses);
    
    cout << "Number of activity buses needed: " << numBuses << endl;
    
    cin.get();
    return 0;
}

