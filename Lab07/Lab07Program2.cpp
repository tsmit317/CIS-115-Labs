//  Lab07Program2.cpp - Compares the number of votes each contestant received then determines who the winner/winners are. 
//  Created by Taylor Smith on 2/27/13.

/*
 
 Input:
 Amanda's votes = a
 Ben's votes = b
 Chris's votes = c
 
 Processing:
 Processing Items: None
 Algorithm:
 1. Enter aVote, bVote, and cVote
 2. if ((a > b) && (a > c))
        Display "Amanda wins"
    else if ((a > c) && (a == b))
        Display "Amanda and Ben tie for first place"
    else if ((a > b) && (a == b))
        Display "Amanda and Chris tie for first place"
    else if ((b > a) && (b > c))
        Display "Ben wins"
    else if ((b > a) && (b == c))
        Display "Ben and Chris tie for first place"
    else if ((c > a) && (c > b))
        Display "Chris wins"
    else 
        Display "Amanda, Ben, and Chris all tie for first place"
 Ouput:
 Display the winner/winners
 
 */

#include <iostream>
using namespace std;


int main ()
{
    // Variables
    int a = 0;
    int b = 0;
    int c = 0;
    
    
    // Input
    cout << "Enter the number of votes Amanda received: ";
    cin >> a;
    cout << "Enter the number of votes Ben received: ";
    cin >> b;
    cout << "Enter the number of votes Chris received: ";
    cin >> c;
    
    
    // Switch Statements
    if ((a > b) && (a > c))
        {
            cout << "Amanda wins" << endl;
        }
    else if ((a > c) && (a == b))
        {
            cout << "Amanda and Ben tie for first place" << endl;
        }
    else if ((a > b) && (a == c))
        {
            cout << "Amanda and Chris tie for first place" << endl;
        }
    else if ((b > a) && (b > c))
        {
            cout << "Ben wins" << endl;
        }
    else if ((c > a) && (c > b))
        {
            cout << "Chris wins" << endl;
        }
    else if ((c > a) && (c == b))
        {
            cout << "Ben and Chris tie for first place" << endl;
        }
    else
        {
            cout << "Amanda, Ben, and Chris all tie for first place" << endl;
        }
    
    cin.get();
    return 0;
}

