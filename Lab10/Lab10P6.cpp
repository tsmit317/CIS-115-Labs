//  Lab10P6.cpp
//  Created by Taylor Smith on 4/5/13.


#include <iostream>
using namespace std;

int max (int a, int b);
int max2 (int m, int c);


int main()
{
        
    int a = 0;
    int b = 0;
    int c = 0;
    int m = 0;
    int t = 0;
    
        
    
    cout << "Enter two integers: ";
    cin >> a;
    cin >> b;
    
    m = max (a,b);
    
    cout << "The max of " << a << " and " << b << " is " << m << endl;
    
    cout << "Enter three integers: ";
    cin >> a;
    cin >> b;
    cin >> c;
    
    m = max (a,b);
    t = max2 (m,c);
    
    cout << "The max of " << a << " , " << b << " and "<< c << " is " << t << endl;
    
    
        
    
    cin.get();
    return 0;
    
    
}

int max (int a, int b)
{
    int m = 0;
    if (a > b)
    {
        m = a;
        return m;
        
    }
    else if (b > a)
    {
        m = b;
        return m;
        
    }
}

int max2 (int m, int c)
{
    int t = 0;
    if (m > c)
    {
        t = m;
        return t;
        
    }
    else if (c > m)
    {
        t = c;
        return t;
    }
    
}


