//  Lab11P5.cpp
//  Created by Taylor Smith on 4/12/13.


#include <iostream>

using namespace std;

double convertToYen(double usDollar, double conversionRate);

int main()
{
    double usDollar = 0.0;
    double conversionRate = 0.0;
    
    cout << "Enter amount in US dollar: ";
    cin >> usDollar;
    cout << "Enter conversion rate: ";
    cin >> conversionRate;
    
    convertToYen(usDollar, conversionRate);
    
    
    cin.get();
    return 0;
}
double convertToYen(double usDollar, double conversionRate)
{
    double yen = 0.0;
    
    yen = usDollar * conversionRate;
    cout << "Equivalent amount in Japanese Yen: " << yen << endl;
}
