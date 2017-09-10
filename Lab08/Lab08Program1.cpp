//  Lab08Program1.cpp - Calculates the average score and total number of test scores.
//  Created by Taylor Smith on 3/8/13.
/*
 Input:
 Student score = score
 
 Processing:
 Processing Items:
 Total scores = tScore
 
 Algorithm:
 1. nScore = 0
 2. tScore = 0
 3. Enter student score.
 4. Repeat while (score != -1)
        nScore = nScore +1
        tScore = tScore + score
        enter next score
    end while
 5. if(nScore > 0)
        average = tScore / nScore
        display nScore and average
    else
        display "No scores entered"
    end if
 
 Output:
 Number of scores entered = nScore
 Average score of class = average
 
        
        
 */

#include <iostream>
using namespace std;

int main()
{

    // Enter variables
    double score = 0.0;
    int nScore = 0;
    double tScore = 0.0;
    double average = 0.0;
    
    //Enter input items
    cout << "Enter student score (-1 to stop): ";
    cin >> score;
    
    // Enter while statments
    while (score != -1)
    {
        nScore = nScore + 1;
        tScore = tScore + score;
        
        cout << "Enter next student score (-1 to stop): ";
        cin >> score;
    }
    // end while
    if (nScore > 0)
    {
        average = tScore / nScore;
        
        cout << "Average score: " << average << endl;
        cout << "Number of scores entered: " << nScore << endl;
    }
    else
        cout << "No scored entered" << endl;
    
    cin.get();
    return 0;
}

