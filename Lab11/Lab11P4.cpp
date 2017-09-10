//  Lab11P4.cpp
//  Created by Taylor Smith on 4/12/13.


#include <iostream>
using namespace std;

double convertToYen(double usDollar);

int main()
{
    double usDollar = 0.0;
    
    cout << "Enter amount in US dollar: ";
    cin >> usDollar;
    convertToYen(usDollar);
    
    
    cin.get();
    return 0;
}
double convertToYen(double usDollar)
    {
        double yen = 0.0;
    
        yen = usDollar * 86.07;
        cout << "Equivalent amount in Japanese Yen: " << yen << endl;
    }