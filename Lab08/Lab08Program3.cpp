//  Lab08Program3.cpp - Calculates winner of election
//  Created by Taylor Smith on 3/8/13.

/*
 Input:
 Vote casted = vote
 
 Processing:
 Processing Items:
 Algorithm:
 1. avote = 0
 2. bvote = 0
 3. Enter vote.
 4. vote = toupper(vote)
 5. Repeat while (vote !+ 'Q')
        if(vote == 'A')
            avote = avote + 1
        else if(vote == 'B')
            bvote = bvote + 1
        end if
 
    enter next vote
    end while 
 
 6. If(avote > bvote)
        display "Andy won the election", avote, and bvote.
    else if(bvote > avote)
        display "Beth won the election, avote, and bvote.
    else if (avote == bvote)
        display "Both candidates received the same number of votes", avotes, and bvotes.
    else
        display "Input error"
  end if  
 
 Output:
 Number of votes Andy received = avote
 Number of votes Beth received = bvote
 */

#include <iostream>
using namespace std;

int main()
{

    // Enter variables
    char vote = ' ';
    int avote = 0;
    int bvote = 0;
    
    // Enter input items
    cout << "Enter vote (A/B)(Q to stop): ";
    cin >> vote;
    vote = toupper(vote);
    
    // Enter while statement
    while (vote != 'Q')
    {
        if(vote == 'A')
        {
            avote = avote + 1;
        }
        else if(vote == 'B')
        {
            bvote = bvote + 1;
        }
        cout << "Enter next vote (A/B)(Q to stop): ";
        cin >> vote;
        vote = toupper(vote);
        
        
    }
    if (avote > bvote)
        {
            cout << "Number of votes Andy received: " << avote << endl;
            cout << "Number of votes Beth received: " << bvote << endl;
            cout << "Andy won the election" << endl;
        }
    else if (bvote > avote)
        {
            cout << "Number of votes Andy received: " << avote << endl;
            cout << "Number of votes Beth received: " << bvote << endl;
            cout << "Beth won the election" << endl;
        }
    else if (bvote == avote)
        {
            cout << "Number of votes Andy received: " << avote << endl;
            cout << "Number of votes Beth received: " << bvote << endl;
            cout << "Both candidates received the same number of votes" << endl;
        }
    else
        {
            cout << "Imput error" << endl;
        }
    
    cin.get();
    return 0;
}

