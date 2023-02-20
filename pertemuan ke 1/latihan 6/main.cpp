#include <iostream>

using namespace std;

int main()
{
    int x, y;
    x = 4;
    y = 8;
    bool hasil;
    
    hasil = (x == y);
    cout << " 4 == 8 adalah "<< hasil << " (False)"<< endl;
    
    hasil = (x != y);
    cout << " 4 != 8 adalah "<< hasil << " (True)"<< endl;
    
    hasil = (x > y);
    cout << " 4 > 8 adalah "<< hasil << " (False)"<< endl;
    
    hasil = (x < y);
    cout << " 4 < 8 adalah "<< hasil << " (True)"<< endl;
    
    hasil = (x >= y);
    cout << " 4 >= 8 adalah "<< hasil << " (False)"<< endl;
    
    hasil = (x <= y);
    cout << " 4 <= 8 adalah "<< hasil << " (True)" << endl;
    
    
}