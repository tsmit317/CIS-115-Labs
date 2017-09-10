//  Lab11P1.cpp
//  Created by Taylor Smith on 4/10/13.


#include <iostream>
using namespace std;

void boosterSeat(double, double);

int main()
{
    double age = 0.0;
    double weight = 0.0;
    
    cout << "Please enter child's age: ";
    cin >> age;
    cout << "Please enter child's weight: ";
    cin >> weight;
    
    // invoke 
     boosterSeat(age, weight);
    
   
    
    cin.get();
    return 0;
}

void boosterSeat(double age, double weight)
{
    if (age >= 8 || weight >= 80)
    {
        cout << "This child does not need booster seat." << endl;
    }
    else
    {
        cout << "This child needs booster seat." << endl;
    }
}
