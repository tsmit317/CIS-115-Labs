//  Lab10P4.cpp
//  Created by Taylor Smith on 4/5/13.

#include <iostream>
using namespace std;


int getIQ();

int main()
{
    int iq = 0;
    
    iq = getIQ();
    
    if (iq > 120)
    {
        cout << "You are a genius" << endl;
    }
    else
    {
        cout << "You don't need a high IQ to be a successful person" << endl;
    }
    
    cin.get();
    
    return 0;
}



int getIQ()
{
    int iq = 0;
    cout << "Enter IQ score: ";
    cin >> iq;
    return iq;
    
}
