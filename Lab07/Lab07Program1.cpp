//  Lab07Program1.cpp - Voting system for "America's next superstar". Tells user to enter input items then displays who they voted for.
//  Created by Taylor Smith on 2/27/13.

/*
 Input:
 Vote = vote
 
 Processing:
 Processing Items: None
 Algorithm:
 1. Enter vote [A/B/C]
 2. vote = toupper(vote)
 3. Test value of letter with switch
        'A': Display "You voted for Amanda"
        'B': Display "You voted for Ben"
        'C': Display "You voted for Chris"
      other: Display "Input error"
 
 Output:
 Display who the person voted for
 If incorrect character was entered display "error message"
 
 */

#include <iostream>
using namespace std;


int main(int argc, const char * argv[])
{
    // Variables
    char vote = ' ';
    
    // Input - used "endl;" after several displays to separate the sentences and clean up the appearance.
    cout << "Plese choose a winner for America's nest superstar." << endl;
    cout << "Enter A for Amanda."<< endl;
    cout << "Enter B for Ben." << endl;
    cout << "Enter C for Chirs."<< endl;
    cout << "Your choice [A/B/C]: ";
    cin>> vote;
    vote = toupper(vote);
    
    // Switch Statements
    switch (vote)
    {
        case 'A': cout << "You voted for Amanda" << endl;
            break;
        case 'B': cout << "You voted for Ben" << endl;
            break;
        case 'C': cout << "You voted for Chris" << endl;
            break;
        default: cout << "Input error" << endl;
            
    }
    
    cin.get();
    return 0;
}

