// Lab04-Program4.cpp - calculating the amount of conditioner to use in both circular and rectangular fish tanks
// Created by Taylor Smith on 2/8/13.

/*
 Input:
 
 cTank = circular fish tank
 r = radius
 h = height
 w = width
 l = length
 
 Processing:
 
 Processing items: vol = volume
 Algorithm:
 
 1.	enter the shape of the containter
 2.	circular = toupper (circular)
 3.	if (circular == ‘Y’)
        enter the r and h
        vol = r * r * h * 3.1416
        tConditioner = vol / 100
        display tConditioner
    else
        enter the l, w, and h.
        vol = l * w * h
        tConditioner = vol / 100
        display tConditioner
    end if
 
 Output:
 
 tConditioner = total ml of conditioner
*/

#include <iostream>
using namespace std;


int main()
{

    // enter variables
    char cTank = ' ';
    double r = 0.0;
    double h = 0.0;
    double w = 0.0;
    double l = 0.0;
    double vol = 0.0;
    double tConditioner = 0.0;
    
    
    // enter input items
    cout << "Is the fish tank circular? (Y/N): ";
    cin >> cTank;
    cTank = toupper(cTank);
    
    // enter if statements
    if (cTank == 'Y')
    {
        cout << "Enter the radius of the tank: ";
        cin >> r;
        cout << "Enter the height of the tank: ";
        cin >> h;
        vol = r * r * h * 3.1416;
        tConditioner = vol / 100;
        cout << "Total ml of conditioner to add: " << tConditioner << endl;
    }
    
    else
        
    {
        cout << "Enter the width of the tank: ";
        cin >> w;
        cout << "Enter the height of the tank: ";
        cin >> h;
        cout << "Enter the length of the tank: ";
        cin >> l;
        vol = l * w * h;
        tConditioner = vol / 100;
        cout << "Total ml of conditioner to add: " << tConditioner << endl;
    }
    // end if
    
    cin.get();
    return 0;
}

