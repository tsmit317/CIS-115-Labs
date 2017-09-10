//  Lab05Program2.cpp - Calculate BMI and body weight category.
//  Created by Taylor Smith on 2/14/13.

/*
 Input:
 Weight = w
 Height = h
 
 Processing:
 Processing Items: None
 Algorithm:
 1. Enter h and w.
 2. BMI = 703 * w / (h * h)
 3. if (BMI < 18.5)
        display BMI
        display "underweight"
    else if (BMI >= 18.5 AND <25)
        display BMI
        display "normal"
    else if (BMI >= 25 AND <30)
        display BMI
        display "overweight"
    else if (BMI > 30)
        display BMI
        display "obese"
    end if
 
 Output:
 BMI
 Body weight category
 
 */

#include <iostream>
using namespace std;

int main()
{

    // enter variables
    double w = 0.0;
    double h = 0.0;
    double BMI = 0.0;
    

    // enter input items
    cout << "Enter height: ";
    cin >> h;
    cout << "Enter weight: ";
    cin >> w;
    
    
    //enter calculations
    BMI = 703 * w / (h * h);
    
    // enter if statements
    if (BMI < 18.5)
    {
        cout << "BMI: " << BMI << endl;
        cout << "Body weight category: Underweight" << endl;
    }
    else if (BMI >= 18.5 && BMI < 25)
    {
        cout << "BMI: " << BMI << endl;
        cout << "Body weight category: Normal" << endl;
    }
    else if (BMI >= 25 && BMI < 30)
    {
        cout << "BMI: " << BMI << endl;
        cout << "Body weight category: Overweight" << endl;
    }
    else if (BMI >= 30)
    {
        cout << "BMI: " << BMI << endl;
        cout << "Body weight category: Obese" << endl;
    }
    
    cin.get();
    return 0;
}

