//  Lab11P6.cpp
//  Created by Taylor Smith on 4/12/13.


#include <iostream>
using namespace std;

double pensionCalculator (int years, double salary);


int main()
{
    int years = 0;
    double salary = 0.0;
    
    cout << "Enter years of service: ";
    cin >> years;
    cout << "Enter highest yearly salary during your service: ";
    cin >> salary;
    
    pensionCalculator(years, salary);
    
    

    cin.get();
    return 0;
}

double pensionCalculator(int years, double salary)
{
    double pension = 0.0;
    
    pension = (years * salary)/500;
    cout << "Your monthly pension: " << pension << endl;
}