//  Lab09Program4.cpp - Calculates the winner of a basketball game using four quarters.
//  Created by Taylor Smith on 3/19/13.

/*
 Input:
 Team A and B scores
 
 Processing:
 Processing Items: None
 Algorithm:
 1. quarter = 1
 2. repeat for (q = 1; q <= 4; q = q + 1)
        Enter team a score
        total team a score = tAscore + aScore
        
        Enter team b score
        total team b score = tBscore + bScore
    end for
 3. if (tAscore > tBscore)
        display " team a won "
        display both teams scores
    elese if (tBscore > tAscore)
        display "team b won"
        display both teams scores
    else if (tAscore = tBscore)
        display "tie"
        display both teams scores
    end if
 
 Output:
 Team A and B scores
 Which team won
 */

#include <iostream>
using namespace std;


int main()
{


    // Enter Variables
    int aScore = 0;
    int bScore = 0;
    int tAscore = 0;
    int tBscore = 0;
    
    // Enter For statement
    for (int quarter = 1; quarter <= 4; quarter = quarter + 1)
    {
        cout << "Enter Team A score: ";
        cin >> aScore;
        tAscore = tAscore + aScore;
        
        cout << "Enter Team B score: ";
        cin >> bScore;
        tBscore = tBscore + bScore;
    }
    // Enter If statment
    if (tAscore > tBscore)
    {
        cout << "Team A score: " << tAscore << endl;
        cout << "Team B score: " << tBscore << endl;
        cout << "Team A won" << endl;
    }
    else if (tBscore > tAscore)
    {
        cout << "Team A score: " << tAscore << endl;
        cout << "Team B score: " << tBscore << endl;
        cout << "Team B won" << endl;
    }
    else if (tAscore = tBscore)
    {
        cout << "Team A score: " << tAscore << endl;
        cout << "Team B score: " << tBscore << endl;
        cout << "Team A and B tied" << endl;
    }
    
    
    cin.get();
    return 0;
}

