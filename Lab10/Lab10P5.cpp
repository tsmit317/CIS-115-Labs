//  Lab10P5.cpp
//  Created by Taylor Smith on 4/5/13.


#include <iostream>
using namespace std;

int pickNumber();
int randDraw();

int main()
{
    int n = 0;
    int randNum= 0;
    
    n = pickNumber();
    randNum = randDraw();
    
    if (n != randNum)
    {
        cout<< "Number picked: " << n << endl;
        cout << "Lottery number: " << randNum << endl;
        cout << "You lost" << endl;
    }
    else if (n = randNum)
    {
        cout<< "Number picked: " << n << endl;
        cout << "Lottery number: " << randNum << endl;
        cout << "You won" << endl;
    }
    
    cin.get();
    return 0;
}
int pickNumber()
{
    int n = 0;
    cout << "Pick a number between 1 and 4: ";
    cin >> n;
    return n;
}
int randDraw()
{
    int randNum =0;
	srand(time(NULL));
	randNum = rand()% 4 + 1;
    return randNum;
    
}