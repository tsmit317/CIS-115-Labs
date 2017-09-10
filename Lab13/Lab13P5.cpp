//  Lab13P5.cpp
//  Created by Taylor Smith on 4/26/13.

/**/

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
        expheight = (height * .05) + height
        counter + 1
 4. repeat while (counter < 10)
        display height
        counter = counter + 1
 5. repeat while (counter < 10)
        display expheight
        counter = counter + 1
 6. display number of students tall and short
 
 Output:
 height
 expected height
 */

#include <iostream>
using namespace std;

int main()
{
    int tall = 0;
    int shrt = 0;
    
    int height[10]{0};
	double expheight[10]{0.0};
    
	
	for (int x = 0; x < 10; x = x + 1)
	{
		cout << "Enter height of the student: ";
		cin >> height[x];
	}
    for (int x = 0; x < 10; x = x + 1)
    {
        expheight[x]=(height[x]*.05)+height[x];
    }
    
    cout << "Heights: "<< endl;
	for (int x = 0; x < 10; x = x + 1)
	{
		cout << " " << height[x] << endl;
	}
    cout << "Expected heights: "<< endl;
	for (int x = 0; x < 10; x = x + 1)
	{
		cout << " " << expheight[x] << endl;
	}
    
    
    
    cin.get();
    return 0;
}



