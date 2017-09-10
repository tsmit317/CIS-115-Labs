//  Lab10P3.cpp
//  Created by Taylor Smith on 4/5/13.


#include <iostream>
using namespace std;

double bmiCalculator ();


int main()
{
    
    double bmi =0.0;
    // invoke bmi
    bmi = bmiCalculator();
    
    
        
    
        if (bmi < 18.5)
        {
            cout << "Fitness Category: Underweight" << endl;
        }
        else if (bmi >= 18.5 && bmi < 25)
        {
            cout <<  "Fitness Category: Normal" << endl;
        }
        else if (bmi >= 25 && bmi < 30)
        {
            cout << "Fitness Category: Overweight" << endl;
        }
        else if (bmi >= 30)
        {
            cout << "Fitness Category: Obese" << endl;
        }
    
        cin.get();
    
        return 0;
    }
    
    double bmiCalculator()
    {
        double height = 0.0;
        double weight = 0.0;
        double bmi = 0.0;
        
        cout << "Enter height in inches: ";
        cin >> height;
        cout << "Enter weight in pounds: ";
        cin >> weight;
        
        bmi = 703 * weight / (height * height);
        cout << "BMI: " << bmi << endl;
        return bmi;
    }


