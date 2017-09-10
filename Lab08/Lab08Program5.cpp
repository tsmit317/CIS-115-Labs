//  Lab08Program5.cpp
//  Created by Taylor Smith on 3/8/13.



#include <iostream>
using namespace std;

int main()
{

    // Enter variables
    int sum = 0;
    int n = 0;
    int j = 0;
    
    
    // Enter imput
    cout << "Enter variable (0 to stop): ";
    cin >> n;
    
    
    //While statement
    while(n != 0)
    {
            if (n % 2 == 0)
            {
                while (j <= n)
                {
                sum = sum + j;
                    j = j + 2;
                cout << sum << endl;
                }
                
            }
            else if (n % 2 == 1)
            {
                n = n - 1;
                while (j <=n)
                {
                    sum = sum + j;
                    j = j + 2;
                    cout << sum << endl;
                }
            }
    }
        
    cin.get();
    return 0;
}

