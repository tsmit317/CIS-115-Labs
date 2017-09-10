//  Lab13P3.cpp
//  Created by Taylor Smith on 4/26/13.

/*
 Input:
 Student Height
 
 Processing:
 Processing Items: counter
 Algorithm:
 1. counter = 0 and shrt = 100
 2. repeat while (counter < 10)
        enter height
        counter = counter + 1
 3. repeat while (counter < 10)
        totalheight = totalheight + height[x]
 4. avg = totahheight / 10
 5. display avg
 6. repeat while (counter < 10)
        if (height > tall)
            tall = height
            counter = counter + 1
 7. repeat while (counter < 10)
        if (height < shrt)
            shrt = shrt + height
            counter = counter + 1
 4. display tallest and shortest
 
 Output:
 tallest, shortest, avg
 */

#include <iostream>
using namespace std;

int main()
{
    int tall = 0;
    int shrt = 100;
    double totalheight = 0.0;
    double avg = 0.0;
    
    int height[10]{0};
	
    
	
	for (int x = 0; x < 10; x = x + 1)
	{
		cout << "Enter height of the student: ";
		cin >> height[x];
	}
    for (int x = 0; x < 10; x = x + 1)
    {
        totalheight = totalheight + height[x];
    }
    
        avg = totalheight / 10;
        cout << "Average height: " << avg << endl;
                                           
    for (int x = 0; x < 10; x = x + 1)
    {
        if (height[x]> tall)
        {
            tall= height[x];
            
        }
    }
    for (int x = 0; x < 10; x = x + 1)
    {
        if (height[x] < shrt)
        {
            shrt = height[x];
        }
    }
    cout << "Tallest student: " << tall << endl;
    cout << "Shortest student: " << shrt << endl;
    
    
    
    cin.get();
    return 0;
}
