//  Lab10P2.cpp
//  Created by Taylor Smith on 4/5/13.


#include <iostream>
using namespace std;

char initialFirstName = ' ';
char initialLastName = ' ';


// Function Prototypes
void showYourLove();

int main()
{
    
    showYourLove();
    
    cin.get();
    return 0;
}

void showYourLove()
{
    cout <<"Enter initial of first name: ";
    cin >> initialFirstName;
    cout <<"Enter initial of last name: ";
    cin >> initialLastName;
    
    
    cout << "I love you," << initialFirstName << initialLastName << "!!!" << endl;
    
}
