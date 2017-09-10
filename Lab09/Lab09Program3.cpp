//  Lab09Program3.cpp - Calculates the total amount due for a group of customers
//  Created by Taylor Smith on 3/19/13.
/*
Input:
 Number of customers
 Combo type
 
Processing:
Processing Items: None
Algorithm:
1. tAmount = 0
2. aCombo = 0
3. bCombo = 0
4. cCombo = 0
5. Enter number of customers
6. For (tCombo = 1; tCombo <= customers; tCombo = tCombo + 1)
        Enter combo.
        combo = toupper(combo)

            if(combo == 'A')
                aCombo = aCombo + 1
                tAmount = tAmount + 6.00

            else if(combo == 'B')
                bCombo = bCombo + 1
                tAmount = tAmount + 6.25
    
            else if(combo == 'C')
                cCombo = cCombo + 1
                tAmount = tAmount + 5.75

            else if (combo == 'X')
                do nothing
 
end for
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
    int tCombos = 0;
    double tAmount = 0.0;
    int customers = 0;
    
    
    //Enter imput items
    cout << "Enter number of customers in group: ";
    cin >> customers;
    
    //Enter for statement
    for (tCombos = 1; tCombos <= customers; tCombos = tCombos + 1)
    {
        cout << "Enter combo choice (A/B/C/X): ";
        cin >> combo;
        combo = toupper(combo);
        
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
        else if (combo == 'X')
        {
            tAmount = tAmount + 0;
        }
        
    }
    
    cout << "Number of combo A ordered: " << aCombo << endl;
    cout << "Number of combo B ordered: " << bCombo << endl;
    cout << "Number of combo C ordered: " << cCombo << endl;
    cout << "Total amount due: " << tAmount << endl;
    
    cin.get();
    return 0;
}


