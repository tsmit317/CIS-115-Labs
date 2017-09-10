//  Lab08Program4.cpp- calculates the value of a combo then the total amount due.
//  Created by Taylor Smith on 3/8/13.

/*
 Input:
 Combo choice = combo
 
 Processing:
 Processing Items:None
 Algorithm:
 1. tAmount = 0
 2. aCombo = 0
 3. bCombo = 0
 4. cCombo = 0
 5. Enter combo.
 6. combo = toupper(combo)
 7. Repeat while (combo != 'Q')
        if(combo == 'A')
            aCombo = aCombo + 1
            tAmount = tAmount + 6.00
        else if(combo == 'B')
            bCombo = bCombo + 1 
            tAmount = tAmount + 6.25
        else if(combo == 'C')
            cCombo = cCombo + 1
            tAmount = tAmount + 5.75
        end if
    enter next combo choice
    combo = toupper(combo)
 end while
 display tAmount, aCombo, bCombo, and cCombo.
 
 Output:
 Number of combo A ordered = aCombo
 Number of combo B ordered = bCombo
 Number of combo C ordered = cCombo
 Total amount due = tAmount
 */

#include <iostream>
using namespace std;


int main()
{

    // Enter variables
    char combo = ' ';
    int aCombo = 0;
    int bCombo = 0;
    int cCombo = 0;
    double tAmount = 0.0;
    
    //Enter imput items
    cout << "Enter combo choice (A/B/C)(Q to stop): ";
    cin >> combo;
    combo = toupper(combo);
    
    //Enter while statements
    while (combo != 'Q')
    {
        if(combo == 'A')
        {
            aCombo = aCombo + 1;
            tAmount = tAmount + 6.00;
        }
        else if (combo == 'B')
        {
            bCombo = bCombo + 1;
            tAmount = tAmount + 6.25;
        }
        else if (combo == 'C')
        {
            cCombo = cCombo + 1;
            tAmount = tAmount + 5.75;
        }
        
        cout << "Enter next combo choice (A/B/C)(Q to stop): ";
        cin >> combo;
        combo = toupper(combo);
    }
    cout << "Number of combo A ordered: " << aCombo << endl;
    cout << "Number of combo B ordered: " << bCombo << endl;
    cout << "Number of combo C ordered: " << cCombo << endl;
    cout << "Total amount due: " << tAmount << endl;
    
    cin.get();
    return 0;
}

