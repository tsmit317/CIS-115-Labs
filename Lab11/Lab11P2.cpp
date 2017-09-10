//  Lab11P2.cpp
//  Created by Taylor Smith on 4/10/13.


#include <iostream>

using namespace std;

double getNcheckscore();


int main()
{
    double midterm = 0.0;
    double final = 0.0;
    double total = 0.0;
    
    
    cout << "MIDTERM EXAM" << endl;
    midterm = getNcheckscore();
    
    
    cout << "FINAL EXAM" << endl;
    final = getNcheckscore();
    
    total = midterm + final;
    
    cout << endl << "Total score: " << total<< endl;
    
    cin.get();
    return 0;
}

double getNcheckscore()
{
    double score = 0.0;
    
    cout << "Please enter your score: ";
    cin >> score;
    while (score < 0 || score > 100)
    {
        cout << "Score must be between 0 and 100.  Please enter again: ";
        cin >> score;
    }
    
    return score;
}
