// Lab13P2.cpp
// Created by Taylor Smith on 4/26/13.
/*
 Input:
 Student Height
 
 Processing:
 Processing Items: counter
 Algorithm:
 1. counter = 0
 2. repeat while (counter < 10)
        enter height
        counter = counter + 1
 3. repeat while (counter < 10)
        if (height > 60)
            tall = tall + 1
            counter = counter + 1
        else if (height < 55)
            shrt = shrt + 1
            counter = counter + 1
 4. display number of students tall and short
 5. repeat while (counter < 10)
        if (height > 60)
        display height
        counter = counter + 1
 6. repeat while (counter < 10)
        if (height < 55)
        display height
        counter = counter + 1

 Output:
 # of students > 60 and their heights
 # of students < 55 and their heights
 */

#include <iostream>
using namespace std;

int main()
{
    int tall = 0;
    int shrt = 0;
    
    int height[10]{0};
	
    
	
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
    
    for (int x = 0; x < 10; x = x + 1)
    {
        if (height[x]> 60)
        {
            cout << height[x] << " ";
        }
        
    }
    
    cout << "Number of students shorter than 55: " << shrt << endl;
    
    for (int x = 0; x < 10; x = x + 1)
    {
        if (height [x] < 55)
        {
            cout << height[x] << " ";
        }
    }
    
    cin.get();
    return 0;
}



