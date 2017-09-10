//  Lab09Program5.cpp - Calculates every fifth number
//  Created by Taylor Smith on 3/20/13.

/*
 Input:
 Number = n
 
 Processing:
 Processing Item: None
 Algorithm:
 1. Enter number
 2. If (n > 0)
        for (counter = 0; counter <= n; counter = counter + 5)
            display every fifth number
    else if (n < 0)
        for (counter = 0; counter >= n; counter = counter - 5)
            display every fifth number
 3. Output:
    Counter (Every fifth number)
 
 */

#include <iostream>
using namespace std;

int main()
{
    
    // Enter variables
    int n = 0;

    // Enter imput
    cout << "Enter number: ";
    cin >> n;
    
    
    //If statement and for statements
   if (n > 0)
   {
       for (int counter = 0; counter <= n; counter = counter + 5)
       {
           cout << counter << "..."  << endl;
       }
       
   }
   else if (n < 0)
   {
       for (int counter = 0; counter >= n; counter = counter - 5)
       {
           cout << counter << "..." << endl;
       }
   }
    
    cin.get();
    return 0;
}

