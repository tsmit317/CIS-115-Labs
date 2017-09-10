//  Lab07Proram3.cpp - calculates the amount of income tax an individual owes bases on filling status, income, and number of dependents. 
//  Created by Taylor Smith on 2/27/13.

/*
 Input:
 Filling status = status
 Income = income
 Number of dependents = ndep
 
 Processing:
 Processing Items: Adjusted income = aIncome
 Algorithm:
 1. Enter status, income, and ndep.
 2. status = toupper(status)
 3. income - (ndep(1000))
 4. Test value of letter in status usiing switch
        'M': aIncome = if(aIncome < 25,000)
                Display "No Income Tax"
            else
                tax = aIncome * .35
                Display tax
        'S': aIncome = if(aIncome < 15,000)
                Display "No Income Tax"
            else
                tax = aIncome * .25
                Display tax
        'O': aIncome = if(aIncome < 15,000)
                Display "No Income Tax"
            else
                tax = aIncome * .2
 Output:
 Income tax owed = tax
 */

#include <iostream>
using namespace std;

int main()
{

    // Enter variables
    char status = ' ';
    int income = 0;
    int ndep = 0;
    int aIncome = 0;
    double tax = 0.0;
    
    // Enter input items
    cout << "Enter filling status [M/S/O]:";
    cin >> status;
    status = toupper(status);
    cout << "Enter income: ";
    cin >> income;
    cout << "Enter number of dependents: ";
    cin >> ndep;
    
    // Enter if and switch statements
    aIncome = income - (ndep * 1000);
    switch (status)
    {
        case 'M': if(aIncome < 25000)
                    {
                        cout << "No Income Tax Owed" << endl;
                    }
                else
                    {
                        tax = aIncome * .35;
                        cout << "Total Income Tax owed: " << tax << endl;
                    }
            break;
            
        case 'S': if(aIncome < 15000)
                    {
                        cout << "No Income Tax Owed" << endl;
                    }
                else
                    {
                        tax = aIncome * 2.5;
                        cout << "Total Income Tax Owed: " << tax << endl;
                    }
            break;
            
        case 'O': if(aIncome < 15000)
                    {
                        cout << "No Income Tax Owed" << endl;
                    }
                else
                    {
                        tax = aIncome * .2;
                        cout << "Total Income Tax Owed: " << tax << endl;
                    }
            break;
        default: cout << "Filling status input error" << endl;
        
    }
    
    cin.get();
    return 0;
}

