#include <iostream>

using namespace std;

int main()
{
    int x, y;
    x = 10;
    y = 5;
    
    cout << " x = "<< x << endl;
    cout << " y = "<< y << endl;
    
    cout << "\n 1. x += y; " << endl;
    x += y; 
    cout << "  x = " << x << endl;
    
    cout << "\n 2. x -= y; " << endl;
    x -= y; 
    cout << "  x = " << x << endl;
    
    cout << "\n 3. x *= y; " << endl;
    x *= y; 
    cout << "  x = " << x << endl;
    
    cout << "\n 4. x /= y; " << endl;
    x /= y; 
    cout << "  x = " << x << endl;
    
    cout << "\n 5. x /= y; " << endl;
    x %= y; 
    cout << "  x = " << x << endl;
    
}