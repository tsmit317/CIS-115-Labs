//  Lab08Program2.cpp
//  Created by Taylor Smith on 3/8/13.

/*
 Input:
 Amount pledged = pledge
 
 Processing:
 Processing Items:None
 Algorithm:
 1. lPledge = 0
 2. sPledge = 0
 3. tPledge = 0
 4. Enter pledge amount
 5. Repeat while (pledge != 0)
        if(pledge >= 100)
            tPledges = tPledges + 1
            lPledge = lPledge + 1
        else
            tPledges = tPledges + 1
            sPledges = sPledges + 1
        end if
        enter next pledge amount
    end repeat
6. Display tPledges, lPledges, and sPledges.
 
 Output:
 Total pledges = tPledges
 Number of pledges above $100 = lPledges
 Number of pledges below ^100 = sPledges
 */

#include <iostream>
using namespace std;

int main()
{

    // Enter variables
    int pledge = 0;
    int tPledges = 0;
    int lPledges = 0;
    int sPledges = 0;
    
    // Enter input items
    cout << "Enter amount pledged (-1 to stop): ";
    cin >> pledge;
    
    //Enter while statments
    while (pledge != -1)
    {
        if (pledge >= 100)
        {
            tPledges = tPledges + 1;
            lPledges = lPledges + 1;
        }
        else
        {
            tPledges = tPledges + 1;
            sPledges = sPledges + 1;
        }
        
        cout << "Enter next pledge amount (-1 to stop): ";
        cin >> pledge;
    }
    
    cout << "Number of pledges $100 or above: " << lPledges << endl;
    cout << "Number of pledges less than $100: " << sPledges << endl;
    cout << "Total pledges: " << tPledges << endl;
    
    cin.get();
    return 0;
}

